#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0047[4076] = {
    1, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8,
    0, 0, 0, 9, 0, 10, 0, 0, 11, 12, 13, 0, 0, 0, 0, 14, 0, 0, 15, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0,
    19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 27,
    0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0,
    0, 36, 0, 37, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0,
    46, 0, 47, 0, 48, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 55, 0, 56, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 64, 0,
    65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 69, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73,
    0, 74, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0,
    0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0,
    0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0,
    0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0,
    101, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 105, 0, 106, 0, 107, 0, 0, 0, 108, 0, 0, 0, 109,
    0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 113, 0, 114, 0, 0, 115, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 0,
    122, 123, 124, 0, 125, 0, 0, 126, 127, 0, 128, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 0, 133, 0, 0, 134, 0, 135, 136, 0, 0, 137,
    0, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0,
    0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0,
    162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0,
    169, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 184,
    0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 191, 0, 192,
    0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0,
    198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 201, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0,
    207, 208, 0, 0, 0, 209, 0, 0, 0, 210, 211, 212, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 219, 220, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 224,
    0, 0, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 236, 0, 237, 0,
    238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 242, 0, 243, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 0, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258, 0,
    259, 0, 260, 0, 261, 0, 0, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 0, 268, 269, 0, 270, 0, 271, 0, 0, 272, 0, 0,
    0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0,
    280, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 289, 0, 0,
    290, 0, 0, 0, 291, 0, 292, 0, 293, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0,
    0, 298, 0, 0, 0, 299, 0, 300, 0, 0, 301, 0, 302, 0, 303, 0, 0, 304, 0, 305, 0, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 0,
    311, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324,
    0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 328, 0, 329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 332,
    0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 338, 0, 339, 0, 0, 340, 0,
    341, 0, 342, 0, 343, 0, 344, 0, 345, 0, 0, 0, 346, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350,
    0, 351, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0,
    358, 0, 359, 360, 0, 0, 0, 0, 361, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0,
    367, 0, 368, 0, 369, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 372, 0, 373, 0, 0, 374, 375, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0,
    377, 0, 0, 0, 378, 0, 379, 0, 0, 380, 0, 381, 0, 382, 0, 383, 0, 384, 0, 385, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391,
    0, 392, 0, 393, 0, 394, 0, 0, 395, 0, 396, 0, 397, 398, 399, 0, 400, 0, 401, 0, 402, 0, 403, 0, 404, 0, 405, 0, 406, 407, 0, 0,
    0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 411, 0, 412, 0, 0, 413, 0, 414, 415, 0, 416, 0, 0, 417,
    0, 418, 0, 419, 420, 0, 421, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 425, 0, 426, 0, 427, 0, 428, 0, 429, 430, 0,
    431, 0, 0, 0, 432, 0, 433, 0, 434, 0, 435, 0, 436, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 0, 442, 0, 443, 0, 444, 0, 445, 0,
    446, 447, 0, 0, 448, 0, 449, 0, 450, 0, 451, 0, 452, 0, 0, 453, 0, 454, 0, 455, 0, 456, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0,
    459, 0, 460, 0, 461, 0, 462, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 467,
    0, 468, 0, 469, 0, 470, 0, 0, 471, 0, 472, 0, 0, 473, 0, 0, 474, 0, 0, 475, 0, 0, 476, 0, 0, 477, 478, 0, 0, 0, 0, 0,
    0, 479, 0, 480, 0, 481, 0, 482, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0,
    488, 0, 0, 0, 0, 0, 489, 0, 0, 490, 0, 0, 491, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 0, 498, 0, 0, 0, 0, 0,
    499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 505, 0, 506, 0, 0, 0,
    0, 0, 507, 0, 0, 508, 0, 0, 509, 0, 510, 0, 511, 0, 512, 0, 513, 0, 514, 0, 515, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 518,
    0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 525, 0, 526, 0,
    527, 0, 528, 0, 529, 0, 530, 0, 531, 0, 0, 0, 0, 532, 0, 533, 0, 534, 0, 535, 0, 536, 0, 537, 0, 538, 0, 539, 0, 0, 0, 0,
    540, 0, 541, 0, 542, 0, 543, 0, 544, 0, 545, 0, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 0, 0, 552, 0, 0, 0, 0, 553, 0,
    554, 0, 555, 0, 556, 0, 557, 0, 558, 0, 559, 0, 560, 0, 561, 0, 562, 0, 0, 563, 0, 564, 0, 565, 0, 566, 0, 567, 0, 568, 0, 0,
    569, 0, 0, 570, 0, 0, 571, 0, 0, 572, 0, 0, 573, 574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 0, 582, 0, 583, 0, 0, 584, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 587, 0, 588, 0, 589,
    0, 0, 590, 0, 591, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0,
    0, 0, 0, 595, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 602,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 606, 0, 0, 607, 0, 0, 0, 0, 0, 0,
    0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 612, 0,
    0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 614, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0,
    0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 620, 0, 0, 0, 621, 0, 0, 622, 0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0, 625, 0, 626,
    0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 631, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0,
    634, 0, 635, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 639, 0, 640, 0, 0, 0, 641, 0, 0, 0, 0, 642, 0, 0, 643,
    0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 649, 0, 0, 650, 0, 0, 0,
    651, 0, 652, 0, 653, 0, 654, 0, 655, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 661, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 666,
    0, 0, 0, 0, 667, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 0, 673, 0, 0, 674,
    0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 0, 679, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0,
    682, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 685, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 0, 688, 0, 0, 689, 0, 0, 0, 690,
    0, 0, 0, 0, 691, 0, 0, 692, 0, 0, 0, 693, 0, 0, 0, 0, 694, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 698,
    0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 701, 0, 0, 0, 702, 0, 0, 0, 0, 703, 0, 0, 704, 0, 0, 0, 705, 0, 0, 0, 0,
    706, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0, 0, 710, 0, 0, 0, 711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 715, 0, 0, 0, 716, 0, 0, 717, 0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 720, 0, 0, 0, 721, 0, 0, 722, 0, 0, 723, 0, 0,
    0, 0, 724, 0, 0, 725, 0, 0, 0, 0, 0, 726, 0, 0, 727, 0, 0, 728, 0, 729, 0, 0, 0, 730, 0, 0, 731, 0, 0, 0, 732, 0,
    0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 735,
    0, 0, 736, 0, 737, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 739, 0, 740, 0, 0, 0, 741, 0, 742, 0, 743, 0, 744, 745, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0, 748, 749, 0, 0, 0, 750, 0, 0, 0, 0, 0, 751, 0, 0, 0,
    0, 0, 0, 752, 0, 0, 753, 0, 0, 754, 0, 755, 0, 0, 756, 0, 757, 0, 758, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    760, 0, 761, 0, 762, 0, 763, 0, 764, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 767, 0, 0, 0, 0, 0, 768, 0,
    0, 0, 0, 769, 0, 770, 0, 0, 0, 771, 0, 772, 0, 773, 0, 774, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 777,
    0, 778, 779, 0, 780, 781, 0, 0, 782, 0, 0, 783, 0, 784, 0, 785, 0, 786, 0, 787, 0, 788, 0, 789, 790, 0, 791, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 792, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 795, 0, 0, 0, 0, 0, 796, 0, 0, 0,
    0, 797, 0, 798, 0, 0, 0, 799, 0, 800, 0, 801, 0, 802, 803, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0,
    0, 0, 807, 0, 808, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 812, 0, 813,
    0, 0, 0, 814, 0, 815, 0, 816, 0, 817, 818, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 820, 0, 0, 0,
    821, 822, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 824, 0, 0, 825, 0, 826, 0, 827, 0, 828, 0, 829, 0, 830, 0, 831, 832, 0,
    833, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 836, 0, 837, 0, 0, 0,
    0, 0, 838, 0, 0, 0, 0, 839, 0, 840, 0, 0, 0, 841, 0, 842, 0, 843, 0, 844, 845, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 846,
    0, 0, 0, 0, 0, 847, 0, 0, 848, 0, 0, 849, 0, 0, 850, 0, 851, 852, 0, 853, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 854,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 856, 0, 857, 0, 858, 0, 859, 0, 0, 0, 0, 0, 860, 0, 0, 0, 0, 0, 861,
    0, 0, 0, 0, 0, 862, 0, 0, 863, 0, 0, 0, 0, 864, 0, 865, 0, 0, 866, 0, 0, 867, 0, 868, 0, 869, 0, 870, 0, 0, 0, 871,
    0, 872, 0, 873, 0, 0, 874, 0, 0, 875, 0, 0, 876, 0, 0, 0, 0, 877, 0, 0, 0, 0, 0, 878, 0, 0, 0, 0, 879, 0, 0, 0,
    880, 0, 0, 0, 0, 0, 0, 0, 881, 0, 0, 0, 882, 0, 0, 0, 0, 883, 0, 0, 884, 0, 885, 0, 0, 0, 886, 0, 0, 887, 0, 888,
    0, 0, 889, 0, 890, 0, 0, 891, 0, 892, 0, 893, 0, 894, 0, 0, 895, 0, 896, 0, 0, 897, 0, 0, 898, 0, 899, 0, 900, 0, 901, 0,
    902, 0, 903, 0, 904, 0, 905, 0, 906, 0, 907, 0, 908, 0, 909, 0, 910, 0, 911, 0, 912, 0, 0, 913, 0, 914, 0, 915, 0, 0, 0, 916,
    0, 917, 0, 918, 0, 919, 0, 920, 0, 921, 0, 922, 0, 0, 0, 0, 923, 0, 0, 0, 924, 0, 0, 0, 925, 0, 0, 0, 926, 0, 927, 0,
    928, 0, 0, 929, 0, 930, 0, 931, 0, 0, 0, 0, 0, 932, 0, 933, 0, 0, 934, 0, 935, 936, 0, 937, 0, 938, 939, 0, 940, 0, 941, 0,
    0, 942, 0, 943, 0, 0, 944, 0, 945, 0, 946, 0, 0, 0, 0, 0, 947, 0, 948, 0, 949, 0, 950, 0, 951, 0, 952, 0, 953, 0, 954, 0,
    0, 0, 0, 955, 0, 956, 0, 957, 0, 0, 0, 958, 0, 0, 959, 0, 0, 0, 0, 0, 960, 0, 961, 0, 962, 0, 0, 963, 0, 964, 0, 965,
    0, 966, 0, 967, 0, 0, 0, 0, 968, 0, 969, 0, 970, 0, 971, 0, 972, 0, 973, 0, 974, 0, 975, 0, 976, 0, 977, 0, 978, 0, 979, 0,
    980, 0, 981, 0, 982, 0, 983, 0, 984, 0, 985, 0, 986, 0, 987, 0, 988, 0, 989, 0, 990, 0, 991, 0, 992, 0, 993, 0, 994, 0, 995, 0,
    996, 0, 997, 0, 998, 0, 999, 0, 1000, 0, 1001, 0, 1002, 0, 1003, 0, 1004, 0, 1005, 0, 1006, 0, 1007, 0, 1008, 0, 1009, 0, 1010, 0, 1011, 0,
    0, 1012, 0, 1013, 0, 1014, 0, 1015, 0, 1016, 0, 1017, 0, 1018, 0, 1019, 0, 1020, 0, 0, 1021, 0, 1022, 0, 1023, 0, 1024, 0, 1025, 0, 1026, 0,
    1027, 0, 1028, 0, 1029, 0, 1030, 0, 1031, 0, 0, 1032, 0, 1033, 0, 1034, 0, 1035, 0, 1036, 0, 1037, 0, 1038, 0, 1039, 0, 1040, 0, 1041, 0, 1042,
    0, 0, 1043, 0, 1044, 0, 1045, 0, 1046, 0, 1047, 0, 1048, 0, 1049, 0, 1050, 0, 1051, 0, 1052, 0, 1053, 0, 0, 1054, 0, 1055, 0, 1056, 0, 1057,
    0, 1058, 0, 1059, 0, 1060, 0, 0, 1061, 0, 1062, 0, 1063, 0, 1064, 0, 1065, 0, 1066, 0, 1067, 0, 1068, 0, 1069, 0, 1070, 0, 1071, 0, 1072, 0,
    1073, 0, 1074, 0, 1075, 0, 1076, 0, 1077, 0, 1078, 0, 1079, 0, 1080, 0, 1081, 0, 1082, 0, 1083, 0, 1084, 0, 1085, 0, 1086, 0, 1087, 0, 1088, 0,
    1089, 0, 1090, 0, 1091, 0, 1092, 0, 1093, 0, 1094, 0, 1095, 0, 1096, 0, 1097, 0, 1098, 0, 1099, 0, 1100, 0, 1101, 0, 1102, 0, 1103, 0, 1104, 0,
    1105, 0, 1106, 0, 1107, 0, 1108, 0, 1109, 0, 1110, 0, 1111, 0, 1112, 0, 1113, 0, 1114, 0, 1115, 0, 1116, 0, 1117, 0, 1118, 0, 1119, 0, 0, 1120,
    0, 1121, 0, 1122, 0, 1123, 0, 1124, 0, 0, 1125, 0, 1126, 0, 1127, 0, 1128, 0, 1129, 0, 1130, 0, 1131, 0, 1132, 0, 0, 1133, 0, 1134, 0, 0,
    0, 0, 0, 0, 1135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1136, 0, 1137, 0, 0, 0, 0, 0, 0, 1138, 0, 1139, 0, 0, 0, 0, 0,
    0, 1140, 0, 0, 0, 0, 1141, 0, 0, 0, 0, 1142, 0, 0, 0, 0, 1143, 0, 0, 1144, 0, 0, 0, 0, 0, 0, 1145, 1146, 0, 0, 1147, 0,
    1148, 0, 1149, 0, 0, 1150, 0, 0, 0, 0, 0, 0, 1151, 0, 0, 0, 1152, 0, 0, 1153, 0, 0, 0, 0, 0, 1154, 0, 0, 0, 0, 1155, 1156,
    0, 1157, 0, 0, 1158, 0, 0, 0, 1159, 0, 1160, 1161,
};
void recomp_unit_0047_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088C0000u;
        entry_id = (entry_delta < 16304u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0047[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C0000;
    case 2u: goto L_088C0008;
    case 3u: goto L_088C0020;
    case 4u: goto L_088C002C;
    case 5u: goto L_088C0040;
    case 6u: goto L_088C0048;
    case 7u: goto L_088C0068;
    case 8u: goto L_088C007C;
    case 9u: goto L_088C008C;
    case 10u: goto L_088C0094;
    case 11u: goto L_088C00A0;
    case 12u: goto L_088C00A4;
    case 13u: goto L_088C00A8;
    case 14u: goto L_088C00BC;
    case 15u: goto L_088C00C8;
    case 16u: goto L_088C00D0;
    case 17u: goto L_088C00E4;
    case 18u: goto L_088C00F4;
    case 19u: goto L_088C0100;
    case 20u: goto L_088C0110;
    case 21u: goto L_088C0120;
    case 22u: goto L_088C0140;
    case 23u: goto L_088C0148;
    case 24u: goto L_088C0150;
    case 25u: goto L_088C015C;
    case 26u: goto L_088C0170;
    case 27u: goto L_088C017C;
    case 28u: goto L_088C018C;
    case 29u: goto L_088C0194;
    case 30u: goto L_088C01A8;
    case 31u: goto L_088C01B0;
    case 32u: goto L_088C01C0;
    case 33u: goto L_088C01C8;
    case 34u: goto L_088C01D8;
    case 35u: goto L_088C01F8;
    case 36u: goto L_088C0204;
    case 37u: goto L_088C020C;
    case 38u: goto L_088C0210;
    case 39u: goto L_088C0220;
    case 40u: goto L_088C0230;
    case 41u: goto L_088C023C;
    case 42u: goto L_088C0244;
    case 43u: goto L_088C024C;
    case 44u: goto L_088C025C;
    case 45u: goto L_088C0278;
    case 46u: goto L_088C0280;
    case 47u: goto L_088C0288;
    case 48u: goto L_088C0290;
    case 49u: goto L_088C029C;
    case 50u: goto L_088C02AC;
    case 51u: goto L_088C02C4;
    case 52u: goto L_088C02CC;
    case 53u: goto L_088C02D8;
    case 54u: goto L_088C02E8;
    case 55u: goto L_088C0308;
    case 56u: goto L_088C0310;
    case 57u: goto L_088C0318;
    case 58u: goto L_088C0320;
    case 59u: goto L_088C032C;
    case 60u: goto L_088C033C;
    case 61u: goto L_088C0360;
    case 62u: goto L_088C0368;
    case 63u: goto L_088C0370;
    case 64u: goto L_088C0378;
    case 65u: goto L_088C0380;
    case 66u: goto L_088C0390;
    case 67u: goto L_088C03B0;
    case 68u: goto L_088C03B8;
    case 69u: goto L_088C03C0;
    case 70u: goto L_088C03C8;
    case 71u: goto L_088C03D4;
    case 72u: goto L_088C03F4;
    case 73u: goto L_088C03FC;
    case 74u: goto L_088C0404;
    case 75u: goto L_088C040C;
    case 76u: goto L_088C0418;
    case 77u: goto L_088C0438;
    case 78u: goto L_088C0450;
    case 79u: goto L_088C0464;
    case 80u: goto L_088C0478;
    case 81u: goto L_088C048C;
    case 82u: goto L_088C049C;
    case 83u: goto L_088C04AC;
    case 84u: goto L_088C04C0;
    case 85u: goto L_088C04D4;
    case 86u: goto L_088C04E4;
    case 87u: goto L_088C04F4;
    case 88u: goto L_088C0504;
    case 89u: goto L_088C0514;
    case 90u: goto L_088C0528;
    case 91u: goto L_088C053C;
    case 92u: goto L_088C0550;
    case 93u: goto L_088C0564;
    case 94u: goto L_088C0578;
    case 95u: goto L_088C0594;
    case 96u: goto L_088C05B8;
    case 97u: goto L_088C05EC;
    case 98u: goto L_088C0608;
    case 99u: goto L_088C061C;
    case 100u: goto L_088C0660;
    case 101u: goto L_088C0680;
    case 102u: goto L_088C0694;
    case 103u: goto L_088C06B0;
    case 104u: goto L_088C06B8;
    case 105u: goto L_088C06CC;
    case 106u: goto L_088C06D4;
    case 107u: goto L_088C06DC;
    case 108u: goto L_088C06EC;
    case 109u: goto L_088C06FC;
    case 110u: goto L_088C0708;
    case 111u: goto L_088C0720;
    case 112u: goto L_088C0728;
    case 113u: goto L_088C0734;
    case 114u: goto L_088C073C;
    case 115u: goto L_088C0748;
    case 116u: goto L_088C074C;
    case 117u: goto L_088C0754;
    case 118u: goto L_088C075C;
    case 119u: goto L_088C0764;
    case 120u: goto L_088C076C;
    case 121u: goto L_088C0774;
    case 122u: goto L_088C0780;
    case 123u: goto L_088C0784;
    case 124u: goto L_088C0788;
    case 125u: goto L_088C0790;
    case 126u: goto L_088C079C;
    case 127u: goto L_088C07A0;
    case 128u: goto L_088C07A8;
    case 129u: goto L_088C07B4;
    case 130u: goto L_088C07BC;
    case 131u: goto L_088C07C4;
    case 132u: goto L_088C07CC;
    case 133u: goto L_088C07D8;
    case 134u: goto L_088C07E4;
    case 135u: goto L_088C07EC;
    case 136u: goto L_088C07F0;
    case 137u: goto L_088C07FC;
    case 138u: goto L_088C0804;
    case 139u: goto L_088C0810;
    case 140u: goto L_088C0820;
    case 141u: goto L_088C0830;
    case 142u: goto L_088C0838;
    case 143u: goto L_088C0840;
    case 144u: goto L_088C0850;
    case 145u: goto L_088C0868;
    case 146u: goto L_088C088C;
    case 147u: goto L_088C08AC;
    case 148u: goto L_088C0984;
    case 149u: goto L_088C0994;
    case 150u: goto L_088C09B0;
    case 151u: goto L_088C09C8;
    case 152u: goto L_088C09E0;
    case 153u: goto L_088C0A28;
    case 154u: goto L_088C0A48;
    case 155u: goto L_088C0A64;
    case 156u: goto L_088C0A80;
    case 157u: goto L_088C0A90;
    case 158u: goto L_088C0A98;
    case 159u: goto L_088C0AC0;
    case 160u: goto L_088C0AD8;
    case 161u: goto L_088C0AEC;
    case 162u: goto L_088C0B00;
    case 163u: goto L_088C0B14;
    case 164u: goto L_088C0B28;
    case 165u: goto L_088C0B3C;
    case 166u: goto L_088C0B44;
    case 167u: goto L_088C0B5C;
    case 168u: goto L_088C0B6C;
    case 169u: goto L_088C0B80;
    case 170u: goto L_088C0B88;
    case 171u: goto L_088C0BA0;
    case 172u: goto L_088C0BB0;
    case 173u: goto L_088C0BD4;
    case 174u: goto L_088C0C18;
    case 175u: goto L_088C0C20;
    case 176u: goto L_088C0C2C;
    case 177u: goto L_088C0C3C;
    case 178u: goto L_088C0C60;
    case 179u: goto L_088C0C78;
    case 180u: goto L_088C0C90;
    case 181u: goto L_088C0CA4;
    case 182u: goto L_088C0CD8;
    case 183u: goto L_088C0CF0;
    case 184u: goto L_088C0CFC;
    case 185u: goto L_088C0D0C;
    case 186u: goto L_088C0D14;
    case 187u: goto L_088C0D28;
    case 188u: goto L_088C0D44;
    case 189u: goto L_088C0D5C;
    case 190u: goto L_088C0D64;
    case 191u: goto L_088C0D74;
    case 192u: goto L_088C0D7C;
    case 193u: goto L_088C0D88;
    case 194u: goto L_088C0D90;
    case 195u: goto L_088C0DA8;
    case 196u: goto L_088C0DD8;
    case 197u: goto L_088C0DF8;
    case 198u: goto L_088C0E00;
    case 199u: goto L_088C0E10;
    case 200u: goto L_088C0E20;
    case 201u: goto L_088C0E28;
    case 202u: goto L_088C0E30;
    case 203u: goto L_088C0E3C;
    case 204u: goto L_088C0E48;
    case 205u: goto L_088C0E5C;
    case 206u: goto L_088C0E70;
    case 207u: goto L_088C0E80;
    case 208u: goto L_088C0E84;
    case 209u: goto L_088C0E94;
    case 210u: goto L_088C0EA4;
    case 211u: goto L_088C0EA8;
    case 212u: goto L_088C0EAC;
    case 213u: goto L_088C0EBC;
    case 214u: goto L_088C0ECC;
    case 215u: goto L_088C0EE8;
    case 216u: goto L_088C0F14;
    case 217u: goto L_088C0F28;
    case 218u: goto L_088C0F38;
    case 219u: goto L_088C0F40;
    case 220u: goto L_088C0F44;
    case 221u: goto L_088C0F4C;
    case 222u: goto L_088C0F58;
    case 223u: goto L_088C0F68;
    case 224u: goto L_088C0F7C;
    case 225u: goto L_088C0F8C;
    case 226u: goto L_088C0F94;
    case 227u: goto L_088C0F9C;
    case 228u: goto L_088C0FB4;
    case 229u: goto L_088C0FE8;
    case 230u: goto L_088C0FFC;
    case 231u: goto L_088C1028;
    case 232u: goto L_088C1030;
    case 233u: goto L_088C103C;
    case 234u: goto L_088C104C;
    case 235u: goto L_088C1060;
    case 236u: goto L_088C1070;
    case 237u: goto L_088C1078;
    case 238u: goto L_088C1080;
    case 239u: goto L_088C109C;
    case 240u: goto L_088C10B0;
    case 241u: goto L_088C10B8;
    case 242u: goto L_088C10C8;
    case 243u: goto L_088C10D0;
    case 244u: goto L_088C10D8;
    case 245u: goto L_088C10E4;
    case 246u: goto L_088C10EC;
    case 247u: goto L_088C1118;
    case 248u: goto L_088C1120;
    case 249u: goto L_088C1128;
    case 250u: goto L_088C1130;
    case 251u: goto L_088C1138;
    case 252u: goto L_088C1140;
    case 253u: goto L_088C1150;
    case 254u: goto L_088C1158;
    case 255u: goto L_088C1160;
    case 256u: goto L_088C1168;
    case 257u: goto L_088C1170;
    case 258u: goto L_088C1178;
    case 259u: goto L_088C1180;
    case 260u: goto L_088C1188;
    case 261u: goto L_088C1190;
    case 262u: goto L_088C11A0;
    case 263u: goto L_088C11A8;
    case 264u: goto L_088C11B0;
    case 265u: goto L_088C11B8;
    case 266u: goto L_088C11C0;
    case 267u: goto L_088C11C8;
    case 268u: goto L_088C11D4;
    case 269u: goto L_088C11D8;
    case 270u: goto L_088C11E0;
    case 271u: goto L_088C11E8;
    case 272u: goto L_088C11F4;
    case 273u: goto L_088C1204;
    case 274u: goto L_088C1220;
    case 275u: goto L_088C1234;
    case 276u: goto L_088C123C;
    case 277u: goto L_088C124C;
    case 278u: goto L_088C1260;
    case 279u: goto L_088C1274;
    case 280u: goto L_088C1280;
    case 281u: goto L_088C1294;
    case 282u: goto L_088C12A0;
    case 283u: goto L_088C12B0;
    case 284u: goto L_088C12B8;
    case 285u: goto L_088C12C0;
    case 286u: goto L_088C12CC;
    case 287u: goto L_088C12DC;
    case 288u: goto L_088C12EC;
    case 289u: goto L_088C12F4;
    case 290u: goto L_088C1300;
    case 291u: goto L_088C1310;
    case 292u: goto L_088C1318;
    case 293u: goto L_088C1320;
    case 294u: goto L_088C1334;
    case 295u: goto L_088C1344;
    case 296u: goto L_088C1354;
    case 297u: goto L_088C136C;
    case 298u: goto L_088C1384;
    case 299u: goto L_088C1394;
    case 300u: goto L_088C139C;
    case 301u: goto L_088C13A8;
    case 302u: goto L_088C13B0;
    case 303u: goto L_088C13B8;
    case 304u: goto L_088C13C4;
    case 305u: goto L_088C13CC;
    case 306u: goto L_088C13D8;
    case 307u: goto L_088C13E0;
    case 308u: goto L_088C13E8;
    case 309u: goto L_088C13F0;
    case 310u: goto L_088C13F8;
    case 311u: goto L_088C1400;
    case 312u: goto L_088C1408;
    case 313u: goto L_088C1414;
    case 314u: goto L_088C142C;
    case 315u: goto L_088C1434;
    case 316u: goto L_088C1444;
    case 317u: goto L_088C1450;
    case 318u: goto L_088C1510;
    case 319u: goto L_088C152C;
    case 320u: goto L_088C1534;
    case 321u: goto L_088C1544;
    case 322u: goto L_088C154C;
    case 323u: goto L_088C1568;
    case 324u: goto L_088C157C;
    case 325u: goto L_088C1590;
    case 326u: goto L_088C15AC;
    case 327u: goto L_088C15B4;
    case 328u: goto L_088C15C4;
    case 329u: goto L_088C15CC;
    case 330u: goto L_088C15DC;
    case 331u: goto L_088C15EC;
    case 332u: goto L_088C15FC;
    case 333u: goto L_088C160C;
    case 334u: goto L_088C1624;
    case 335u: goto L_088C1630;
    case 336u: goto L_088C164C;
    case 337u: goto L_088C165C;
    case 338u: goto L_088C1664;
    case 339u: goto L_088C166C;
    case 340u: goto L_088C1678;
    case 341u: goto L_088C1680;
    case 342u: goto L_088C1688;
    case 343u: goto L_088C1690;
    case 344u: goto L_088C1698;
    case 345u: goto L_088C16A0;
    case 346u: goto L_088C16B0;
    case 347u: goto L_088C16C8;
    case 348u: goto L_088C16D0;
    case 349u: goto L_088C16EC;
    case 350u: goto L_088C16FC;
    case 351u: goto L_088C1704;
    case 352u: goto L_088C1708;
    case 353u: goto L_088C171C;
    case 354u: goto L_088C1730;
    case 355u: goto L_088C1738;
    case 356u: goto L_088C1744;
    case 357u: goto L_088C1778;
    case 358u: goto L_088C1780;
    case 359u: goto L_088C1788;
    case 360u: goto L_088C178C;
    case 361u: goto L_088C17A0;
    case 362u: goto L_088C17A4;
    case 363u: goto L_088C17C0;
    case 364u: goto L_088C17D4;
    case 365u: goto L_088C17DC;
    case 366u: goto L_088C17F4;
    case 367u: goto L_088C1800;
    case 368u: goto L_088C1808;
    case 369u: goto L_088C1810;
    case 370u: goto L_088C1824;
    case 371u: goto L_088C1834;
    case 372u: goto L_088C183C;
    case 373u: goto L_088C1844;
    case 374u: goto L_088C1850;
    case 375u: goto L_088C1854;
    case 376u: goto L_088C1868;
    case 377u: goto L_088C1880;
    case 378u: goto L_088C1890;
    case 379u: goto L_088C1898;
    case 380u: goto L_088C18A4;
    case 381u: goto L_088C18AC;
    case 382u: goto L_088C18B4;
    case 383u: goto L_088C18BC;
    case 384u: goto L_088C18C4;
    case 385u: goto L_088C18CC;
    case 386u: goto L_088C18D4;
    case 387u: goto L_088C18DC;
    case 388u: goto L_088C18E4;
    case 389u: goto L_088C18EC;
    case 390u: goto L_088C18F4;
    case 391u: goto L_088C18FC;
    case 392u: goto L_088C1904;
    case 393u: goto L_088C190C;
    case 394u: goto L_088C1914;
    case 395u: goto L_088C1920;
    case 396u: goto L_088C1928;
    case 397u: goto L_088C1930;
    case 398u: goto L_088C1934;
    case 399u: goto L_088C1938;
    case 400u: goto L_088C1940;
    case 401u: goto L_088C1948;
    case 402u: goto L_088C1950;
    case 403u: goto L_088C1958;
    case 404u: goto L_088C1960;
    case 405u: goto L_088C1968;
    case 406u: goto L_088C1970;
    case 407u: goto L_088C1974;
    case 408u: goto L_088C198C;
    case 409u: goto L_088C19A8;
    case 410u: goto L_088C19B8;
    case 411u: goto L_088C19C8;
    case 412u: goto L_088C19D0;
    case 413u: goto L_088C19DC;
    case 414u: goto L_088C19E4;
    case 415u: goto L_088C19E8;
    case 416u: goto L_088C19F0;
    case 417u: goto L_088C19FC;
    case 418u: goto L_088C1A04;
    case 419u: goto L_088C1A0C;
    case 420u: goto L_088C1A10;
    case 421u: goto L_088C1A18;
    case 422u: goto L_088C1A28;
    case 423u: goto L_088C1A38;
    case 424u: goto L_088C1A44;
    case 425u: goto L_088C1A54;
    case 426u: goto L_088C1A5C;
    case 427u: goto L_088C1A64;
    case 428u: goto L_088C1A6C;
    case 429u: goto L_088C1A74;
    case 430u: goto L_088C1A78;
    case 431u: goto L_088C1A80;
    case 432u: goto L_088C1A90;
    case 433u: goto L_088C1A98;
    case 434u: goto L_088C1AA0;
    case 435u: goto L_088C1AA8;
    case 436u: goto L_088C1AB0;
    case 437u: goto L_088C1AB4;
    case 438u: goto L_088C1ABC;
    case 439u: goto L_088C1AC4;
    case 440u: goto L_088C1ACC;
    case 441u: goto L_088C1AD4;
    case 442u: goto L_088C1AE0;
    case 443u: goto L_088C1AE8;
    case 444u: goto L_088C1AF0;
    case 445u: goto L_088C1AF8;
    case 446u: goto L_088C1B00;
    case 447u: goto L_088C1B04;
    case 448u: goto L_088C1B10;
    case 449u: goto L_088C1B18;
    case 450u: goto L_088C1B20;
    case 451u: goto L_088C1B28;
    case 452u: goto L_088C1B30;
    case 453u: goto L_088C1B3C;
    case 454u: goto L_088C1B44;
    case 455u: goto L_088C1B4C;
    case 456u: goto L_088C1B54;
    case 457u: goto L_088C1B5C;
    case 458u: goto L_088C1B64;
    case 459u: goto L_088C1B80;
    case 460u: goto L_088C1B88;
    case 461u: goto L_088C1B90;
    case 462u: goto L_088C1B98;
    case 463u: goto L_088C1B9C;
    case 464u: goto L_088C1BBC;
    case 465u: goto L_088C1BCC;
    case 466u: goto L_088C1BDC;
    case 467u: goto L_088C1BFC;
    case 468u: goto L_088C1C04;
    case 469u: goto L_088C1C0C;
    case 470u: goto L_088C1C14;
    case 471u: goto L_088C1C20;
    case 472u: goto L_088C1C28;
    case 473u: goto L_088C1C34;
    case 474u: goto L_088C1C40;
    case 475u: goto L_088C1C4C;
    case 476u: goto L_088C1C58;
    case 477u: goto L_088C1C64;
    case 478u: goto L_088C1C68;
    case 479u: goto L_088C1C84;
    case 480u: goto L_088C1C8C;
    case 481u: goto L_088C1C94;
    case 482u: goto L_088C1C9C;
    case 483u: goto L_088C1CA8;
    case 484u: goto L_088C1CB8;
    case 485u: goto L_088C1CC8;
    case 486u: goto L_088C1CD0;
    case 487u: goto L_088C1CE8;
    case 488u: goto L_088C1D00;
    case 489u: goto L_088C1D18;
    case 490u: goto L_088C1D24;
    case 491u: goto L_088C1D30;
    case 492u: goto L_088C1D38;
    case 493u: goto L_088C1D40;
    case 494u: goto L_088C1D48;
    case 495u: goto L_088C1D50;
    case 496u: goto L_088C1D58;
    case 497u: goto L_088C1D60;
    case 498u: goto L_088C1D68;
    case 499u: goto L_088C1D80;
    case 500u: goto L_088C1D98;
    case 501u: goto L_088C1DB0;
    case 502u: goto L_088C1DBC;
    case 503u: goto L_088C1DC8;
    case 504u: goto L_088C1DD8;
    case 505u: goto L_088C1DE8;
    case 506u: goto L_088C1DF0;
    case 507u: goto L_088C1E08;
    case 508u: goto L_088C1E14;
    case 509u: goto L_088C1E20;
    case 510u: goto L_088C1E28;
    case 511u: goto L_088C1E30;
    case 512u: goto L_088C1E38;
    case 513u: goto L_088C1E40;
    case 514u: goto L_088C1E48;
    case 515u: goto L_088C1E50;
    case 516u: goto L_088C1E58;
    case 517u: goto L_088C1E70;
    case 518u: goto L_088C1E7C;
    case 519u: goto L_088C1E88;
    case 520u: goto L_088C1EA0;
    case 521u: goto L_088C1EA8;
    case 522u: goto L_088C1EBC;
    case 523u: goto L_088C1ED4;
    case 524u: goto L_088C1EE8;
    case 525u: goto L_088C1EF0;
    case 526u: goto L_088C1EF8;
    case 527u: goto L_088C1F00;
    case 528u: goto L_088C1F08;
    case 529u: goto L_088C1F10;
    case 530u: goto L_088C1F18;
    case 531u: goto L_088C1F20;
    case 532u: goto L_088C1F34;
    case 533u: goto L_088C1F3C;
    case 534u: goto L_088C1F44;
    case 535u: goto L_088C1F4C;
    case 536u: goto L_088C1F54;
    case 537u: goto L_088C1F5C;
    case 538u: goto L_088C1F64;
    case 539u: goto L_088C1F6C;
    case 540u: goto L_088C1F80;
    case 541u: goto L_088C1F88;
    case 542u: goto L_088C1F90;
    case 543u: goto L_088C1F98;
    case 544u: goto L_088C1FA0;
    case 545u: goto L_088C1FA8;
    case 546u: goto L_088C1FB0;
    case 547u: goto L_088C1FB8;
    case 548u: goto L_088C1FC0;
    case 549u: goto L_088C1FC8;
    case 550u: goto L_088C1FD0;
    case 551u: goto L_088C1FD8;
    case 552u: goto L_088C1FE4;
    case 553u: goto L_088C1FF8;
    case 554u: goto L_088C2000;
    case 555u: goto L_088C2008;
    case 556u: goto L_088C2010;
    case 557u: goto L_088C2018;
    case 558u: goto L_088C2020;
    case 559u: goto L_088C2028;
    case 560u: goto L_088C2030;
    case 561u: goto L_088C2038;
    case 562u: goto L_088C2040;
    case 563u: goto L_088C204C;
    case 564u: goto L_088C2054;
    case 565u: goto L_088C205C;
    case 566u: goto L_088C2064;
    case 567u: goto L_088C206C;
    case 568u: goto L_088C2074;
    case 569u: goto L_088C2080;
    case 570u: goto L_088C208C;
    case 571u: goto L_088C2098;
    case 572u: goto L_088C20A4;
    case 573u: goto L_088C20B0;
    case 574u: goto L_088C20B4;
    case 575u: goto L_088C20BC;
    case 576u: goto L_088C20C4;
    case 577u: goto L_088C20CC;
    case 578u: goto L_088C20D4;
    case 579u: goto L_088C20E8;
    case 580u: goto L_088C2110;
    case 581u: goto L_088C211C;
    case 582u: goto L_088C212C;
    case 583u: goto L_088C2134;
    case 584u: goto L_088C2140;
    case 585u: goto L_088C214C;
    case 586u: goto L_088C2158;
    case 587u: goto L_088C216C;
    case 588u: goto L_088C2174;
    case 589u: goto L_088C217C;
    case 590u: goto L_088C2188;
    case 591u: goto L_088C2190;
    case 592u: goto L_088C21A0;
    case 593u: goto L_088C21C4;
    case 594u: goto L_088C21E8;
    case 595u: goto L_088C220C;
    case 596u: goto L_088C2214;
    case 597u: goto L_088C2224;
    case 598u: goto L_088C223C;
    case 599u: goto L_088C2244;
    case 600u: goto L_088C225C;
    case 601u: goto L_088C226C;
    case 602u: goto L_088C227C;
    case 603u: goto L_088C22A4;
    case 604u: goto L_088C22BC;
    case 605u: goto L_088C22C4;
    case 606u: goto L_088C22D8;
    case 607u: goto L_088C22E4;
    case 608u: goto L_088C2304;
    case 609u: goto L_088C234C;
    case 610u: goto L_088C2358;
    case 611u: goto L_088C2370;
    case 612u: goto L_088C2378;
    case 613u: goto L_088C2398;
    case 614u: goto L_088C23AC;
    case 615u: goto L_088C23B4;
    case 616u: goto L_088C23C8;
    case 617u: goto L_088C23E8;
    case 618u: goto L_088C240C;
    case 619u: goto L_088C241C;
    case 620u: goto L_088C2428;
    case 621u: goto L_088C2438;
    case 622u: goto L_088C2444;
    case 623u: goto L_088C2454;
    case 624u: goto L_088C2460;
    case 625u: goto L_088C2474;
    case 626u: goto L_088C247C;
    case 627u: goto L_088C248C;
    case 628u: goto L_088C249C;
    case 629u: goto L_088C24BC;
    case 630u: goto L_088C24CC;
    case 631u: goto L_088C24D4;
    case 632u: goto L_088C24E4;
    case 633u: goto L_088C24F4;
    case 634u: goto L_088C2500;
    case 635u: goto L_088C2508;
    case 636u: goto L_088C2510;
    case 637u: goto L_088C2524;
    case 638u: goto L_088C2538;
    case 639u: goto L_088C2544;
    case 640u: goto L_088C254C;
    case 641u: goto L_088C255C;
    case 642u: goto L_088C2570;
    case 643u: goto L_088C257C;
    case 644u: goto L_088C258C;
    case 645u: goto L_088C25A0;
    case 646u: goto L_088C25AC;
    case 647u: goto L_088C25C0;
    case 648u: goto L_088C25D8;
    case 649u: goto L_088C25E4;
    case 650u: goto L_088C25F0;
    case 651u: goto L_088C2600;
    case 652u: goto L_088C2608;
    case 653u: goto L_088C2610;
    case 654u: goto L_088C2618;
    case 655u: goto L_088C2620;
    case 656u: goto L_088C2628;
    case 657u: goto L_088C2630;
    case 658u: goto L_088C2638;
    case 659u: goto L_088C2640;
    case 660u: goto L_088C2648;
    case 661u: goto L_088C264C;
    case 662u: goto L_088C2654;
    case 663u: goto L_088C265C;
    case 664u: goto L_088C26D8;
    case 665u: goto L_088C26EC;
    case 666u: goto L_088C26FC;
    case 667u: goto L_088C2710;
    case 668u: goto L_088C271C;
    case 669u: goto L_088C272C;
    case 670u: goto L_088C2740;
    case 671u: goto L_088C274C;
    case 672u: goto L_088C275C;
    case 673u: goto L_088C2770;
    case 674u: goto L_088C277C;
    case 675u: goto L_088C278C;
    case 676u: goto L_088C27A0;
    case 677u: goto L_088C27AC;
    case 678u: goto L_088C27BC;
    case 679u: goto L_088C27D0;
    case 680u: goto L_088C27DC;
    case 681u: goto L_088C27EC;
    case 682u: goto L_088C2800;
    case 683u: goto L_088C280C;
    case 684u: goto L_088C281C;
    case 685u: goto L_088C2830;
    case 686u: goto L_088C283C;
    case 687u: goto L_088C284C;
    case 688u: goto L_088C2860;
    case 689u: goto L_088C286C;
    case 690u: goto L_088C287C;
    case 691u: goto L_088C2890;
    case 692u: goto L_088C289C;
    case 693u: goto L_088C28AC;
    case 694u: goto L_088C28C0;
    case 695u: goto L_088C28CC;
    case 696u: goto L_088C28DC;
    case 697u: goto L_088C28F0;
    case 698u: goto L_088C28FC;
    case 699u: goto L_088C290C;
    case 700u: goto L_088C2920;
    case 701u: goto L_088C292C;
    case 702u: goto L_088C293C;
    case 703u: goto L_088C2950;
    case 704u: goto L_088C295C;
    case 705u: goto L_088C296C;
    case 706u: goto L_088C2980;
    case 707u: goto L_088C298C;
    case 708u: goto L_088C299C;
    case 709u: goto L_088C29B0;
    case 710u: goto L_088C29BC;
    case 711u: goto L_088C29CC;
    case 712u: goto L_088C29E0;
    case 713u: goto L_088C2A1C;
    case 714u: goto L_088C2A2C;
    case 715u: goto L_088C2A84;
    case 716u: goto L_088C2A94;
    case 717u: goto L_088C2AA0;
    case 718u: goto L_088C2AAC;
    case 719u: goto L_088C2AC0;
    case 720u: goto L_088C2ACC;
    case 721u: goto L_088C2ADC;
    case 722u: goto L_088C2AE8;
    case 723u: goto L_088C2AF4;
    case 724u: goto L_088C2B08;
    case 725u: goto L_088C2B14;
    case 726u: goto L_088C2B2C;
    case 727u: goto L_088C2B38;
    case 728u: goto L_088C2B44;
    case 729u: goto L_088C2B4C;
    case 730u: goto L_088C2B5C;
    case 731u: goto L_088C2B68;
    case 732u: goto L_088C2B78;
    case 733u: goto L_088C2B84;
    case 734u: goto L_088C2BE8;
    case 735u: goto L_088C2BFC;
    case 736u: goto L_088C2C08;
    case 737u: goto L_088C2C10;
    case 738u: goto L_088C2C28;
    case 739u: goto L_088C2C3C;
    case 740u: goto L_088C2C44;
    case 741u: goto L_088C2C54;
    case 742u: goto L_088C2C5C;
    case 743u: goto L_088C2C64;
    case 744u: goto L_088C2C6C;
    case 745u: goto L_088C2C70;
    case 746u: goto L_088C2CA0;
    case 747u: goto L_088C2CB4;
    case 748u: goto L_088C2CC4;
    case 749u: goto L_088C2CC8;
    case 750u: goto L_088C2CD8;
    case 751u: goto L_088C2CF0;
    case 752u: goto L_088C2D0C;
    case 753u: goto L_088C2D18;
    case 754u: goto L_088C2D24;
    case 755u: goto L_088C2D2C;
    case 756u: goto L_088C2D38;
    case 757u: goto L_088C2D40;
    case 758u: goto L_088C2D48;
    case 759u: goto L_088C2D50;
    case 760u: goto L_088C2D80;
    case 761u: goto L_088C2D88;
    case 762u: goto L_088C2D90;
    case 763u: goto L_088C2D98;
    case 764u: goto L_088C2DA0;
    case 765u: goto L_088C2DA8;
    case 766u: goto L_088C2DD8;
    case 767u: goto L_088C2DE0;
    case 768u: goto L_088C2DF8;
    case 769u: goto L_088C2E0C;
    case 770u: goto L_088C2E14;
    case 771u: goto L_088C2E24;
    case 772u: goto L_088C2E2C;
    case 773u: goto L_088C2E34;
    case 774u: goto L_088C2E3C;
    case 775u: goto L_088C2E40;
    case 776u: goto L_088C2E70;
    case 777u: goto L_088C2E7C;
    case 778u: goto L_088C2E84;
    case 779u: goto L_088C2E88;
    case 780u: goto L_088C2E90;
    case 781u: goto L_088C2E94;
    case 782u: goto L_088C2EA0;
    case 783u: goto L_088C2EAC;
    case 784u: goto L_088C2EB4;
    case 785u: goto L_088C2EBC;
    case 786u: goto L_088C2EC4;
    case 787u: goto L_088C2ECC;
    case 788u: goto L_088C2ED4;
    case 789u: goto L_088C2EDC;
    case 790u: goto L_088C2EE0;
    case 791u: goto L_088C2EE8;
    case 792u: goto L_088C2F18;
    case 793u: goto L_088C2F20;
    case 794u: goto L_088C2F50;
    case 795u: goto L_088C2F58;
    case 796u: goto L_088C2F70;
    case 797u: goto L_088C2F84;
    case 798u: goto L_088C2F8C;
    case 799u: goto L_088C2F9C;
    case 800u: goto L_088C2FA4;
    case 801u: goto L_088C2FAC;
    case 802u: goto L_088C2FB4;
    case 803u: goto L_088C2FB8;
    case 804u: goto L_088C2FE4;
    case 805u: goto L_088C3014;
    case 806u: goto L_088C3074;
    case 807u: goto L_088C3088;
    case 808u: goto L_088C3090;
    case 809u: goto L_088C3098;
    case 810u: goto L_088C30C8;
    case 811u: goto L_088C30E0;
    case 812u: goto L_088C30F4;
    case 813u: goto L_088C30FC;
    case 814u: goto L_088C310C;
    case 815u: goto L_088C3114;
    case 816u: goto L_088C311C;
    case 817u: goto L_088C3124;
    case 818u: goto L_088C3128;
    case 819u: goto L_088C3158;
    case 820u: goto L_088C3170;
    case 821u: goto L_088C3180;
    case 822u: goto L_088C3184;
    case 823u: goto L_088C319C;
    case 824u: goto L_088C31B8;
    case 825u: goto L_088C31C4;
    case 826u: goto L_088C31CC;
    case 827u: goto L_088C31D4;
    case 828u: goto L_088C31DC;
    case 829u: goto L_088C31E4;
    case 830u: goto L_088C31EC;
    case 831u: goto L_088C31F4;
    case 832u: goto L_088C31F8;
    case 833u: goto L_088C3200;
    case 834u: goto L_088C3230;
    case 835u: goto L_088C3238;
    case 836u: goto L_088C3268;
    case 837u: goto L_088C3270;
    case 838u: goto L_088C3288;
    case 839u: goto L_088C329C;
    case 840u: goto L_088C32A4;
    case 841u: goto L_088C32B4;
    case 842u: goto L_088C32BC;
    case 843u: goto L_088C32C4;
    case 844u: goto L_088C32CC;
    case 845u: goto L_088C32D0;
    case 846u: goto L_088C32FC;
    case 847u: goto L_088C3314;
    case 848u: goto L_088C3320;
    case 849u: goto L_088C332C;
    case 850u: goto L_088C3338;
    case 851u: goto L_088C3340;
    case 852u: goto L_088C3344;
    case 853u: goto L_088C334C;
    case 854u: goto L_088C337C;
    case 855u: goto L_088C33AC;
    case 856u: goto L_088C33B4;
    case 857u: goto L_088C33BC;
    case 858u: goto L_088C33C4;
    case 859u: goto L_088C33CC;
    case 860u: goto L_088C33E4;
    case 861u: goto L_088C33FC;
    case 862u: goto L_088C3414;
    case 863u: goto L_088C3420;
    case 864u: goto L_088C3434;
    case 865u: goto L_088C343C;
    case 866u: goto L_088C3448;
    case 867u: goto L_088C3454;
    case 868u: goto L_088C345C;
    case 869u: goto L_088C3464;
    case 870u: goto L_088C346C;
    case 871u: goto L_088C347C;
    case 872u: goto L_088C3484;
    case 873u: goto L_088C348C;
    case 874u: goto L_088C3498;
    case 875u: goto L_088C34A4;
    case 876u: goto L_088C34B0;
    case 877u: goto L_088C34C4;
    case 878u: goto L_088C34DC;
    case 879u: goto L_088C34F0;
    case 880u: goto L_088C3500;
    case 881u: goto L_088C3520;
    case 882u: goto L_088C3530;
    case 883u: goto L_088C3544;
    case 884u: goto L_088C3550;
    case 885u: goto L_088C3558;
    case 886u: goto L_088C3568;
    case 887u: goto L_088C3574;
    case 888u: goto L_088C357C;
    case 889u: goto L_088C3588;
    case 890u: goto L_088C3590;
    case 891u: goto L_088C359C;
    case 892u: goto L_088C35A4;
    case 893u: goto L_088C35AC;
    case 894u: goto L_088C35B4;
    case 895u: goto L_088C35C0;
    case 896u: goto L_088C35C8;
    case 897u: goto L_088C35D4;
    case 898u: goto L_088C35E0;
    case 899u: goto L_088C35E8;
    case 900u: goto L_088C35F0;
    case 901u: goto L_088C35F8;
    case 902u: goto L_088C3600;
    case 903u: goto L_088C3608;
    case 904u: goto L_088C3610;
    case 905u: goto L_088C3618;
    case 906u: goto L_088C3620;
    case 907u: goto L_088C3628;
    case 908u: goto L_088C3630;
    case 909u: goto L_088C3638;
    case 910u: goto L_088C3640;
    case 911u: goto L_088C3648;
    case 912u: goto L_088C3650;
    case 913u: goto L_088C365C;
    case 914u: goto L_088C3664;
    case 915u: goto L_088C366C;
    case 916u: goto L_088C367C;
    case 917u: goto L_088C3684;
    case 918u: goto L_088C368C;
    case 919u: goto L_088C3694;
    case 920u: goto L_088C369C;
    case 921u: goto L_088C36A4;
    case 922u: goto L_088C36AC;
    case 923u: goto L_088C36C0;
    case 924u: goto L_088C36D0;
    case 925u: goto L_088C36E0;
    case 926u: goto L_088C36F0;
    case 927u: goto L_088C36F8;
    case 928u: goto L_088C3700;
    case 929u: goto L_088C370C;
    case 930u: goto L_088C3714;
    case 931u: goto L_088C371C;
    case 932u: goto L_088C3734;
    case 933u: goto L_088C373C;
    case 934u: goto L_088C3748;
    case 935u: goto L_088C3750;
    case 936u: goto L_088C3754;
    case 937u: goto L_088C375C;
    case 938u: goto L_088C3764;
    case 939u: goto L_088C3768;
    case 940u: goto L_088C3770;
    case 941u: goto L_088C3778;
    case 942u: goto L_088C3784;
    case 943u: goto L_088C378C;
    case 944u: goto L_088C3798;
    case 945u: goto L_088C37A0;
    case 946u: goto L_088C37A8;
    case 947u: goto L_088C37C0;
    case 948u: goto L_088C37C8;
    case 949u: goto L_088C37D0;
    case 950u: goto L_088C37D8;
    case 951u: goto L_088C37E0;
    case 952u: goto L_088C37E8;
    case 953u: goto L_088C37F0;
    case 954u: goto L_088C37F8;
    case 955u: goto L_088C380C;
    case 956u: goto L_088C3814;
    case 957u: goto L_088C381C;
    case 958u: goto L_088C382C;
    case 959u: goto L_088C3838;
    case 960u: goto L_088C3850;
    case 961u: goto L_088C3858;
    case 962u: goto L_088C3860;
    case 963u: goto L_088C386C;
    case 964u: goto L_088C3874;
    case 965u: goto L_088C387C;
    case 966u: goto L_088C3884;
    case 967u: goto L_088C388C;
    case 968u: goto L_088C38A0;
    case 969u: goto L_088C38A8;
    case 970u: goto L_088C38B0;
    case 971u: goto L_088C38B8;
    case 972u: goto L_088C38C0;
    case 973u: goto L_088C38C8;
    case 974u: goto L_088C38D0;
    case 975u: goto L_088C38D8;
    case 976u: goto L_088C38E0;
    case 977u: goto L_088C38E8;
    case 978u: goto L_088C38F0;
    case 979u: goto L_088C38F8;
    case 980u: goto L_088C3900;
    case 981u: goto L_088C3908;
    case 982u: goto L_088C3910;
    case 983u: goto L_088C3918;
    case 984u: goto L_088C3920;
    case 985u: goto L_088C3928;
    case 986u: goto L_088C3930;
    case 987u: goto L_088C3938;
    case 988u: goto L_088C3940;
    case 989u: goto L_088C3948;
    case 990u: goto L_088C3950;
    case 991u: goto L_088C3958;
    case 992u: goto L_088C3960;
    case 993u: goto L_088C3968;
    case 994u: goto L_088C3970;
    case 995u: goto L_088C3978;
    case 996u: goto L_088C3980;
    case 997u: goto L_088C3988;
    case 998u: goto L_088C3990;
    case 999u: goto L_088C3998;
    case 1000u: goto L_088C39A0;
    case 1001u: goto L_088C39A8;
    case 1002u: goto L_088C39B0;
    case 1003u: goto L_088C39B8;
    case 1004u: goto L_088C39C0;
    case 1005u: goto L_088C39C8;
    case 1006u: goto L_088C39D0;
    case 1007u: goto L_088C39D8;
    case 1008u: goto L_088C39E0;
    case 1009u: goto L_088C39E8;
    case 1010u: goto L_088C39F0;
    case 1011u: goto L_088C39F8;
    case 1012u: goto L_088C3A04;
    case 1013u: goto L_088C3A0C;
    case 1014u: goto L_088C3A14;
    case 1015u: goto L_088C3A1C;
    case 1016u: goto L_088C3A24;
    case 1017u: goto L_088C3A2C;
    case 1018u: goto L_088C3A34;
    case 1019u: goto L_088C3A3C;
    case 1020u: goto L_088C3A44;
    case 1021u: goto L_088C3A50;
    case 1022u: goto L_088C3A58;
    case 1023u: goto L_088C3A60;
    case 1024u: goto L_088C3A68;
    case 1025u: goto L_088C3A70;
    case 1026u: goto L_088C3A78;
    case 1027u: goto L_088C3A80;
    case 1028u: goto L_088C3A88;
    case 1029u: goto L_088C3A90;
    case 1030u: goto L_088C3A98;
    case 1031u: goto L_088C3AA0;
    case 1032u: goto L_088C3AAC;
    case 1033u: goto L_088C3AB4;
    case 1034u: goto L_088C3ABC;
    case 1035u: goto L_088C3AC4;
    case 1036u: goto L_088C3ACC;
    case 1037u: goto L_088C3AD4;
    case 1038u: goto L_088C3ADC;
    case 1039u: goto L_088C3AE4;
    case 1040u: goto L_088C3AEC;
    case 1041u: goto L_088C3AF4;
    case 1042u: goto L_088C3AFC;
    case 1043u: goto L_088C3B08;
    case 1044u: goto L_088C3B10;
    case 1045u: goto L_088C3B18;
    case 1046u: goto L_088C3B20;
    case 1047u: goto L_088C3B28;
    case 1048u: goto L_088C3B30;
    case 1049u: goto L_088C3B38;
    case 1050u: goto L_088C3B40;
    case 1051u: goto L_088C3B48;
    case 1052u: goto L_088C3B50;
    case 1053u: goto L_088C3B58;
    case 1054u: goto L_088C3B64;
    case 1055u: goto L_088C3B6C;
    case 1056u: goto L_088C3B74;
    case 1057u: goto L_088C3B7C;
    case 1058u: goto L_088C3B84;
    case 1059u: goto L_088C3B8C;
    case 1060u: goto L_088C3B94;
    case 1061u: goto L_088C3BA0;
    case 1062u: goto L_088C3BA8;
    case 1063u: goto L_088C3BB0;
    case 1064u: goto L_088C3BB8;
    case 1065u: goto L_088C3BC0;
    case 1066u: goto L_088C3BC8;
    case 1067u: goto L_088C3BD0;
    case 1068u: goto L_088C3BD8;
    case 1069u: goto L_088C3BE0;
    case 1070u: goto L_088C3BE8;
    case 1071u: goto L_088C3BF0;
    case 1072u: goto L_088C3BF8;
    case 1073u: goto L_088C3C00;
    case 1074u: goto L_088C3C08;
    case 1075u: goto L_088C3C10;
    case 1076u: goto L_088C3C18;
    case 1077u: goto L_088C3C20;
    case 1078u: goto L_088C3C28;
    case 1079u: goto L_088C3C30;
    case 1080u: goto L_088C3C38;
    case 1081u: goto L_088C3C40;
    case 1082u: goto L_088C3C48;
    case 1083u: goto L_088C3C50;
    case 1084u: goto L_088C3C58;
    case 1085u: goto L_088C3C60;
    case 1086u: goto L_088C3C68;
    case 1087u: goto L_088C3C70;
    case 1088u: goto L_088C3C78;
    case 1089u: goto L_088C3C80;
    case 1090u: goto L_088C3C88;
    case 1091u: goto L_088C3C90;
    case 1092u: goto L_088C3C98;
    case 1093u: goto L_088C3CA0;
    case 1094u: goto L_088C3CA8;
    case 1095u: goto L_088C3CB0;
    case 1096u: goto L_088C3CB8;
    case 1097u: goto L_088C3CC0;
    case 1098u: goto L_088C3CC8;
    case 1099u: goto L_088C3CD0;
    case 1100u: goto L_088C3CD8;
    case 1101u: goto L_088C3CE0;
    case 1102u: goto L_088C3CE8;
    case 1103u: goto L_088C3CF0;
    case 1104u: goto L_088C3CF8;
    case 1105u: goto L_088C3D00;
    case 1106u: goto L_088C3D08;
    case 1107u: goto L_088C3D10;
    case 1108u: goto L_088C3D18;
    case 1109u: goto L_088C3D20;
    case 1110u: goto L_088C3D28;
    case 1111u: goto L_088C3D30;
    case 1112u: goto L_088C3D38;
    case 1113u: goto L_088C3D40;
    case 1114u: goto L_088C3D48;
    case 1115u: goto L_088C3D50;
    case 1116u: goto L_088C3D58;
    case 1117u: goto L_088C3D60;
    case 1118u: goto L_088C3D68;
    case 1119u: goto L_088C3D70;
    case 1120u: goto L_088C3D7C;
    case 1121u: goto L_088C3D84;
    case 1122u: goto L_088C3D8C;
    case 1123u: goto L_088C3D94;
    case 1124u: goto L_088C3D9C;
    case 1125u: goto L_088C3DA8;
    case 1126u: goto L_088C3DB0;
    case 1127u: goto L_088C3DB8;
    case 1128u: goto L_088C3DC0;
    case 1129u: goto L_088C3DC8;
    case 1130u: goto L_088C3DD0;
    case 1131u: goto L_088C3DD8;
    case 1132u: goto L_088C3DE0;
    case 1133u: goto L_088C3DEC;
    case 1134u: goto L_088C3DF4;
    case 1135u: goto L_088C3E10;
    case 1136u: goto L_088C3E3C;
    case 1137u: goto L_088C3E44;
    case 1138u: goto L_088C3E60;
    case 1139u: goto L_088C3E68;
    case 1140u: goto L_088C3E84;
    case 1141u: goto L_088C3E98;
    case 1142u: goto L_088C3EAC;
    case 1143u: goto L_088C3EC0;
    case 1144u: goto L_088C3ECC;
    case 1145u: goto L_088C3EE8;
    case 1146u: goto L_088C3EEC;
    case 1147u: goto L_088C3EF8;
    case 1148u: goto L_088C3F00;
    case 1149u: goto L_088C3F08;
    case 1150u: goto L_088C3F14;
    case 1151u: goto L_088C3F30;
    case 1152u: goto L_088C3F40;
    case 1153u: goto L_088C3F4C;
    case 1154u: goto L_088C3F64;
    case 1155u: goto L_088C3F78;
    case 1156u: goto L_088C3F7C;
    case 1157u: goto L_088C3F84;
    case 1158u: goto L_088C3F90;
    case 1159u: goto L_088C3FA0;
    case 1160u: goto L_088C3FA8;
    case 1161u: goto L_088C3FAC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088C0000:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0008:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C0020u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(17300));
    goto L_088C3014;
L_088C0020:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C0040;
      }
      goto L_088C002C;
    }
L_088C002C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0040:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C0068;
      }
      goto L_088C0048;
    }
L_088C0048:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17300)));
    ctx.gpr[4] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(17304));
      if (branch_taken) {
          goto L_088C007C;
      }
      goto L_088C0068;
    }
L_088C0068:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C007C:
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 15u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C00A0;
      }
      goto L_088C008C;
    }
L_088C008C:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(87));
        goto L_088C00A4;
    }
    goto L_088C0094;
L_088C0094:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_088C00A8;
      }
      goto L_088C00A0;
    }
L_088C00A0:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(87));
    goto L_088C00A4;
L_088C00A4:
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_088C00A8;
L_088C00A8:
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
      if (branch_taken) {
          goto L_088C007C;
      }
      goto L_088C00BC;
    }
L_088C00BC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088C00C8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_088C225C;
L_088C00C8:
    ctx.gpr[31] = (0x088C00D0u);
    ctx.gpr[4] = (0u | 83u);
    goto L_088C025C;
L_088C00D0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C00E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C00F4u);
    ctx.gpr[4] = (0u | 85u);
    goto L_088C025C;
L_088C00F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0100:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C0110u);
    ctx.gpr[4] = (0u | 86u);
    goto L_088C025C;
L_088C0110:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0120:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (4660u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22136));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C0140u);
    ctx.gpr[5] = (0u | 4u);
    goto L_088C2B84;
L_088C0140:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C0150;
      }
      goto L_088C0148;
    }
L_088C0148:
    ctx.gpr[31] = (0x088C0150u);
    ctx.gpr[4] = (0u | 87u);
    goto L_088C025C;
L_088C0150:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C015C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C0170u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_088C3014;
L_088C0170:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C018C;
      }
      goto L_088C017C;
    }
L_088C017C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C018C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C01B0;
      }
      goto L_088C0194;
    }
L_088C0194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (4660u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22136));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C01C0;
      }
      goto L_088C01A8;
    }
L_088C01A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C01C8;
      }
      goto L_088C01B0;
    }
L_088C01B0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C01C0:
    ctx.gpr[31] = (0x088C01C8u);
    ctx.gpr[4] = (0u | 87u);
    goto L_088C025C;
L_088C01C8:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C01D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C01F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.pc = 0x08AB4374u;
    return;
L_088C01F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
        goto L_088C0210;
    }
    goto L_088C0204;
L_088C0204:
    ctx.gpr[31] = (0x088C020Cu);
    // nop
    goto L_088C142C;
L_088C020C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    goto L_088C0210;
L_088C0210:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[31] = (0x088C0220u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8284));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 320u, 0x0897ED10u>(ctx, &aot_mem) && ctx.pc == 0x088C0220u) goto L_088C0220;
    return;
L_088C0220:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C0244;
      }
      goto L_088C0230;
    }
L_088C0230:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[31] = (0x088C023Cu);
    ctx.gpr[4] = (0u | 2000u);
    goto L_088C025C;
L_088C023C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C024C;
      }
      goto L_088C0244;
    }
L_088C0244:
    ctx.gpr[31] = (0x088C024Cu);
    ctx.gpr[4] = (0u | 1000u);
    goto L_088C025C;
L_088C024C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C025C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C0278u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_088C160C;
L_088C0278:
    ctx.gpr[31] = (0x088C0280u);
    // nop
    goto L_088C02D8;
L_088C0280:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088C0290;
      }
      goto L_088C0288;
    }
L_088C0288:
    ctx.gpr[31] = (0x088C0290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 40u, 0x088C430Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0290u) goto L_088C0290;
    return;
L_088C0290:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C029C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C02AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C02CC;
      }
      goto L_088C02C4;
    }
L_088C02C4:
    ctx.gpr[31] = (0x088C02CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 40u, 0x088C430Cu>(ctx, &aot_mem) && ctx.pc == 0x088C02CCu) goto L_088C02CC;
    return;
L_088C02CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C02D8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C02E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10652)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C032C;
      }
      goto L_088C0308;
    }
L_088C0308:
    ctx.gpr[31] = (0x088C0310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 125u, 0x088C4668u>(ctx, &aot_mem) && ctx.pc == 0x088C0310u) goto L_088C0310;
    return;
L_088C0310:
    ctx.gpr[31] = (0x088C0318u);
    // nop
    goto L_088C0868;
L_088C0318:
    ctx.gpr[31] = (0x088C0320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 151u, 0x088C4D44u>(ctx, &aot_mem) && ctx.pc == 0x088C0320u) goto L_088C0320;
    return;
L_088C0320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10652), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088C032C;
L_088C032C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C033C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10652)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C0380;
      }
      goto L_088C0360;
    }
L_088C0360:
    ctx.gpr[31] = (0x088C0368u);
    // nop
    goto L_088C0418;
L_088C0368:
    ctx.gpr[31] = (0x088C0370u);
    // nop
    goto L_088C0994;
L_088C0370:
    ctx.gpr[31] = (0x088C0378u);
    // nop
    goto L_088C0A98;
L_088C0378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10652), static_cast<std::uint8_t>(0u));
    goto L_088C0380;
L_088C0380:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0390:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10652)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C03C8;
      }
      goto L_088C03B0;
    }
L_088C03B0:
    ctx.gpr[31] = (0x088C03B8u);
    // nop
    goto L_088C0594;
L_088C03B8:
    ctx.gpr[31] = (0x088C03C0u);
    // nop
    goto L_088C09E0;
L_088C03C0:
    ctx.gpr[31] = (0x088C03C8u);
    // nop
    goto L_088C0BD4;
L_088C03C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C03D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10652)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C040C;
      }
      goto L_088C03F4;
    }
L_088C03F4:
    ctx.gpr[31] = (0x088C03FCu);
    // nop
    goto L_088C0694;
L_088C03FC:
    ctx.gpr[31] = (0x088C0404u);
    // nop
    goto L_088C0A90;
L_088C0404:
    ctx.gpr[31] = (0x088C040Cu);
    // nop
    goto L_088C0DD8;
L_088C040C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0418:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C0438u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10684)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088C0438u) goto L_088C0438;
    return;
L_088C0438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C0450u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10684)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C0450u) goto L_088C0450;
    return;
L_088C0450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10680)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10684), 0u);
    ctx.gpr[31] = (0x088C0464u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 485u, 0x0883BBF8u>(ctx, &aot_mem) && ctx.pc == 0x088C0464u) goto L_088C0464;
    return;
L_088C0464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C0478u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10680)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C0478u) goto L_088C0478;
    return;
L_088C0478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10680), 0u);
    ctx.gpr[31] = (0x088C048Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 873u, 0x08837B58u>(ctx, &aot_mem) && ctx.pc == 0x088C048Cu) goto L_088C048C;
    return;
L_088C048C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    ctx.gpr[31] = (0x088C049Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088C049Cu) goto L_088C049C;
    return;
L_088C049C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    ctx.gpr[31] = (0x088C04ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088C04ACu) goto L_088C04AC;
    return;
L_088C04AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C04C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C04C0u) goto L_088C04C0;
    return;
L_088C04C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10656), 0u);
    ctx.gpr[31] = (0x088C04D4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088C04D4u) goto L_088C04D4;
    return;
L_088C04D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[31] = (0x088C04E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088C04E4u) goto L_088C04E4;
    return;
L_088C04E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[31] = (0x088C04F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x088C04F4u) goto L_088C04F4;
    return;
L_088C04F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[31] = (0x088C0504u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x088C0504u) goto L_088C0504;
    return;
L_088C0504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[31] = (0x088C0514u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 60u, 0x08838878u>(ctx, &aot_mem) && ctx.pc == 0x088C0514u) goto L_088C0514;
    return;
L_088C0514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C0528u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C0528u) goto L_088C0528;
    return;
L_088C0528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10672)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10660), 0u);
    ctx.gpr[31] = (0x088C053Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 504u, 0x0883BD64u>(ctx, &aot_mem) && ctx.pc == 0x088C053Cu) goto L_088C053C;
    return;
L_088C053C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C0550u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10672)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C0550u) goto L_088C0550;
    return;
L_088C0550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10676)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10672), 0u);
    ctx.gpr[31] = (0x088C0564u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088C0564u) goto L_088C0564;
    return;
L_088C0564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C0578u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10676)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C0578u) goto L_088C0578;
    return;
L_088C0578:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10676), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0594:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088C0680;
      }
      goto L_088C05B8;
    }
L_088C05B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16808u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17090u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10676)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088C05ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10676)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088C05ECu) goto L_088C05EC;
    return;
L_088C05EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (17064u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10680)));
      if (branch_taken) {
          goto L_088C061C;
      }
      goto L_088C0608;
    }
L_088C0608:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10680)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10680)));
      if (branch_taken) {
          goto L_088C0660;
      }
      goto L_088C061C;
    }
L_088C061C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17320u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10680)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10680)));
    goto L_088C0660;
L_088C0660:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (17340u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C0680u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10680)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 487u, 0x0883BC14u>(ctx, &aot_mem) && ctx.pc == 0x088C0680u) goto L_088C0680;
    return;
L_088C0680:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0694:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C06B0u);
    // nop
    goto L_088C02D8;
L_088C06B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C0850;
      }
      goto L_088C06B8;
    }
L_088C06B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C07EC;
      }
      goto L_088C06CC;
    }
L_088C06CC:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
        goto L_088C07F0;
    }
    goto L_088C06D4;
L_088C06D4:
    ctx.gpr[31] = (0x088C06DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 875u, 0x08837B74u>(ctx, &aot_mem) && ctx.pc == 0x088C06DCu) goto L_088C06DC;
    return;
L_088C06DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[31] = (0x088C06ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 62u, 0x08838894u>(ctx, &aot_mem) && ctx.pc == 0x088C06ECu) goto L_088C06EC;
    return;
L_088C06EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    ctx.gpr[31] = (0x088C06FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088C06FCu) goto L_088C06FC;
    return;
L_088C06FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088C0708u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088C0708u) goto L_088C0708;
    return;
L_088C0708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[18] = (0u | 0u);
        goto L_088C0720;
    }
    goto L_088C0720;
L_088C0720:
    ctx.gpr[31] = (0x088C0728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 733u, 0x088C7CBCu>(ctx, &aot_mem) && ctx.pc == 0x088C0728u) goto L_088C0728;
    return;
L_088C0728:
    ctx.gpr[4] = (0u | 2u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.gpr[17] = (0u | 0u);
        goto L_088C074C;
    }
    goto L_088C0734;
L_088C0734:
    ctx.gpr[31] = (0x088C073Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 733u, 0x088C7CBCu>(ctx, &aot_mem) && ctx.pc == 0x088C073Cu) goto L_088C073C;
    return;
L_088C073C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C074C;
      }
      goto L_088C0748;
    }
L_088C0748:
    ctx.gpr[17] = (0u | 0u);
    goto L_088C074C;
L_088C074C:
    ctx.gpr[31] = (0x088C0754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 734u, 0x088C7CCCu>(ctx, &aot_mem) && ctx.pc == 0x088C0754u) goto L_088C0754;
    return;
L_088C0754:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C0788;
      }
      goto L_088C075C;
    }
L_088C075C:
    ctx.gpr[31] = (0x088C0764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 733u, 0x088C7CBCu>(ctx, &aot_mem) && ctx.pc == 0x088C0764u) goto L_088C0764;
    return;
L_088C0764:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[18] = (0u | 0u);
        goto L_088C0784;
    }
    goto L_088C076C;
L_088C076C:
    ctx.gpr[31] = (0x088C0774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 733u, 0x088C7CBCu>(ctx, &aot_mem) && ctx.pc == 0x088C0774u) goto L_088C0774;
    return;
L_088C0774:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C0788;
      }
      goto L_088C0780;
    }
L_088C0780:
    ctx.gpr[18] = (0u | 0u);
    goto L_088C0784;
L_088C0784:
    ctx.gpr[17] = (0u | 0u);
    goto L_088C0788;
L_088C0788:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
      if (branch_taken) {
          goto L_088C07A0;
      }
      goto L_088C0790;
    }
L_088C0790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[31] = (0x088C079Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x088C079Cu) goto L_088C079C;
    return;
L_088C079C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    goto L_088C07A0;
L_088C07A0:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_088C07BC;
    }
    goto L_088C07A8;
L_088C07A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[31] = (0x088C07B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x088C07B4u) goto L_088C07B4;
    return;
L_088C07B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_088C07BC;
L_088C07BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088C0850;
      }
      goto L_088C07C4;
    }
L_088C07C4:
    ctx.gpr[31] = (0x088C07CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10676)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088C07CCu) goto L_088C07CC;
    return;
L_088C07CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088C07D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10684)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088C07D8u) goto L_088C07D8;
    return;
L_088C07D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088C07E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10680)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 492u, 0x0883BC58u>(ctx, &aot_mem) && ctx.pc == 0x088C07E4u) goto L_088C07E4;
    return;
L_088C07E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0850;
      }
      goto L_088C07EC;
    }
L_088C07EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    goto L_088C07F0;
L_088C07F0:
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 68 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C0850;
      }
      goto L_088C07FC;
    }
L_088C07FC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0850;
      }
      goto L_088C0804;
    }
L_088C0804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10656)));
    ctx.gpr[31] = (0x088C0810u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088C0810u) goto L_088C0810;
    return;
L_088C0810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[31] = (0x088C0820u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 62u, 0x08838894u>(ctx, &aot_mem) && ctx.pc == 0x088C0820u) goto L_088C0820;
    return;
L_088C0820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[31] = (0x088C0830u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088C0830u) goto L_088C0830;
    return;
L_088C0830:
    ctx.gpr[31] = (0x088C0838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 734u, 0x088C7CCCu>(ctx, &aot_mem) && ctx.pc == 0x088C0838u) goto L_088C0838;
    return;
L_088C0838:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C0850;
      }
      goto L_088C0840;
    }
L_088C0840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10660)));
    ctx.gpr[31] = (0x088C0850u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x088C0850u) goto L_088C0850;
    return;
L_088C0850:
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
L_088C0868:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C088Cu);
    ctx.gpr[5] = (0u | 153u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C088Cu) goto L_088C088C;
    return;
L_088C088C:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10664), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x088C08ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10664)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C08ACu) goto L_088C08AC;
    return;
L_088C08AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10748)));
    ctx.gpr[5] = (17353u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10664)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (17221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10664)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (17028u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10664)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (17026u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10664)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10664)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10664)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10648)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10664)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    ctx.gpr[6] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10664)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088C0984u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10664)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x088C0984u) goto L_088C0984;
    return;
L_088C0984:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0994:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C09B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10664)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088C09B0u) goto L_088C09B0;
    return;
L_088C09B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C09C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10664)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C09C8u) goto L_088C09C8;
    return;
L_088C09C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10664), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C09E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10668)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x088C0A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 376u, 0x08A96020u>(ctx, &aot_mem) && ctx.pc == 0x088C0A28u) goto L_088C0A28;
    return;
L_088C0A28:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_088C0A48;
    }
    goto L_088C0A48;
L_088C0A48:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10664)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x088C0A64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10664)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088C0A64u) goto L_088C0A64;
    return;
L_088C0A64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(10668)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10668), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 90 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(10668), 0u);
        goto L_088C0A80;
    }
    goto L_088C0A80;
L_088C0A80:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0A90:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0A98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C0AC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10688)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0AC0u) goto L_088C0AC0;
    return;
L_088C0AC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C0AD8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10688)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C0AD8u) goto L_088C0AD8;
    return;
L_088C0AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10692)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10688), 0u);
    ctx.gpr[31] = (0x088C0AECu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0AECu) goto L_088C0AEC;
    return;
L_088C0AEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C0B00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10692)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C0B00u) goto L_088C0B00;
    return;
L_088C0B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10696)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10692), 0u);
    ctx.gpr[31] = (0x088C0B14u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0B14u) goto L_088C0B14;
    return;
L_088C0B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C0B28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10696)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C0B28u) goto L_088C0B28;
    return;
L_088C0B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10696), 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10704)));
    ctx.gpr[18] = (0u | 0u);
    goto L_088C0B3C;
L_088C0B3C:
    ctx.gpr[31] = (0x088C0B44u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0B44u) goto L_088C0B44;
    return;
L_088C0B44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10704)));
      if (branch_taken) {
          goto L_088C0B3C;
      }
      goto L_088C0B5C;
    }
L_088C0B5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C0B6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C0B6Cu) goto L_088C0B6C;
    return;
L_088C0B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10704), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10700)));
    ctx.gpr[18] = (0u | 0u);
    goto L_088C0B80;
L_088C0B80:
    ctx.gpr[31] = (0x088C0B88u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0B88u) goto L_088C0B88;
    return;
L_088C0B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10700)));
      if (branch_taken) {
          goto L_088C0B80;
      }
      goto L_088C0BA0;
    }
L_088C0BA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C0BB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C0BB0u) goto L_088C0BB0;
    return;
L_088C0BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10700), 0u);
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
L_088C0BD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_088C0C20;
    }
    goto L_088C0C18;
L_088C0C18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088C0C2C;
      }
      goto L_088C0C20;
    }
L_088C0C20:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u | 4u);
    ctx.gpr[20] = (ctx.gpr[20] - ctx.gpr[5]);
    goto L_088C0C2C;
L_088C0C2C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 255u);
      if (branch_taken) {
          goto L_088C0CFC;
      }
      goto L_088C0C3C;
    }
L_088C0C3C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22736));
    ctx.gpr[30] = (ctx.gpr[5] << 24u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[6]);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 24u));
    goto L_088C0C60;
L_088C0C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10704)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088C0C78u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C0C78u) goto L_088C0C78;
    return;
L_088C0C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10704)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x088C0C90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    goto L_088C0FB4;
L_088C0C90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[18] == ctx.gpr[5]) {
    ctx.gpr[21] = (0u | 255u);
        goto L_088C0CA4;
    }
    goto L_088C0CA4;
L_088C0CA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10704)));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10704)));
    ctx.gpr[31] = (0x088C0CD8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088C0CD8u) goto L_088C0CD8;
    return;
L_088C0CD8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(180));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
      if (branch_taken) {
          goto L_088C0C60;
      }
      goto L_088C0CF0;
    }
L_088C0CF0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[23]));
    goto L_088C0CFC;
L_088C0CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 29 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C0DA8;
      }
      goto L_088C0D0C;
    }
L_088C0D0C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C0DA8;
      }
      goto L_088C0D14;
    }
L_088C0D14:
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(17056));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(17072));
    goto L_088C0D28;
L_088C0D28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10700)));
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088C0D44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C0D44u) goto L_088C0D44;
    return;
L_088C0D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10700)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[18]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088C0D74;
      }
      goto L_088C0D5C;
    }
L_088C0D5C:
    ctx.gpr[31] = (0x088C0D64u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C0D64u) goto L_088C0D64;
    return;
L_088C0D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10700)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_088C0D88;
      }
      goto L_088C0D74;
    }
L_088C0D74:
    ctx.gpr[31] = (0x088C0D7Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C0D7Cu) goto L_088C0D7C;
    return;
L_088C0D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10700)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_088C0D88;
L_088C0D88:
    ctx.gpr[31] = (0x088C0D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088C0D90u) goto L_088C0D90;
    return;
L_088C0D90:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C0D28;
      }
      goto L_088C0DA8;
    }
L_088C0DA8:
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
L_088C0DD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C0DF8u);
    // nop
    goto L_088C02D8;
L_088C0DF8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C0ECC;
      }
      goto L_088C0E00;
    }
L_088C0E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C0ECC;
      }
      goto L_088C0E10;
    }
L_088C0E10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C0ECC;
      }
      goto L_088C0E20;
    }
L_088C0E20:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0ECC;
      }
      goto L_088C0E28;
    }
L_088C0E28:
    ctx.gpr[31] = (0x088C0E30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10688)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088C0E30u) goto L_088C0E30;
    return;
L_088C0E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088C0E3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10692)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088C0E3Cu) goto L_088C0E3C;
    return;
L_088C0E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[31] = (0x088C0E48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10696)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088C0E48u) goto L_088C0E48;
    return;
L_088C0E48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088C0EA8;
      }
      goto L_088C0E5C;
    }
L_088C0E5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (0u | 4u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_088C0E70;
    }
    goto L_088C0E70;
L_088C0E70:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088C0EA8;
      }
      goto L_088C0E80;
    }
L_088C0E80:
    ctx.gpr[18] = (0u | 0u);
    goto L_088C0E84;
L_088C0E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10704)));
    ctx.gpr[31] = (0x088C0E94u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088C0E94u) goto L_088C0E94;
    return;
L_088C0E94:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088C0E84;
      }
      goto L_088C0EA4;
    }
L_088C0EA4:
    ctx.gpr[18] = (0u | 0u);
    goto L_088C0EA8;
L_088C0EA8:
    ctx.gpr[17] = (0u | 0u);
    goto L_088C0EAC;
L_088C0EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10700)));
    ctx.gpr[31] = (0x088C0EBCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088C0EBCu) goto L_088C0EBC;
    return;
L_088C0EBC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088C0EAC;
      }
      goto L_088C0ECC;
    }
L_088C0ECC:
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
L_088C0EE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C0F14u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C0F14u) goto L_088C0F14;
    return;
L_088C0F14:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C0F28u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C0F28u) goto L_088C0F28;
    return;
L_088C0F28:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088C0F38u);
    ctx.gpr[6] = (0u | 64u);
    ctx.pc = 0x08AB412Cu;
    return;
L_088C0F38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_088C0F44;
      }
      goto L_088C0F40;
    }
L_088C0F40:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088C0F44;
L_088C0F44:
    ctx.gpr[31] = (0x088C0F4Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088C0F4Cu) goto L_088C0F4C;
    return;
L_088C0F4C:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(19) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088C0F94;
      }
      goto L_088C0F58;
    }
L_088C0F58:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088C0F68u);
    ctx.gpr[6] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x088C0F68u) goto L_088C0F68;
    return;
L_088C0F68:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17044));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088C0F7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x088C0F7Cu) goto L_088C0F7C;
    return;
L_088C0F7C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(99), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C0F8Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C0F8Cu) goto L_088C0F8C;
    return;
L_088C0F8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0F9C;
      }
      goto L_088C0F94;
    }
L_088C0F94:
    ctx.gpr[31] = (0x088C0F9Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C0F9Cu) goto L_088C0F9C;
    return;
L_088C0F9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0FB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C0FE8u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C0FE8u) goto L_088C0FE8;
    return;
L_088C0FE8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C0FFCu);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C0FFCu) goto L_088C0FFC;
    return;
L_088C0FFC:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10600)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088C1028u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C1028u) goto L_088C1028;
    return;
L_088C1028:
    ctx.gpr[31] = (0x088C1030u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088C1030u) goto L_088C1030;
    return;
L_088C1030:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(27) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088C1078;
      }
      goto L_088C103C;
    }
L_088C103C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088C104Cu);
    ctx.gpr[6] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x088C104Cu) goto L_088C104C;
    return;
L_088C104C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17044));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088C1060u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x088C1060u) goto L_088C1060;
    return;
L_088C1060:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C1070u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C1070u) goto L_088C1070;
    return;
L_088C1070:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1080;
      }
      goto L_088C1078;
    }
L_088C1078:
    ctx.gpr[31] = (0x088C1080u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C1080u) goto L_088C1080;
    return;
L_088C1080:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C109C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C10B0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_088C02D8;
L_088C10B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088C11F4;
      }
      goto L_088C10B8;
    }
L_088C10B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C11F4;
      }
      goto L_088C10C8;
    }
L_088C10C8:
    ctx.gpr[31] = (0x088C10D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 733u, 0x088C7CBCu>(ctx, &aot_mem) && ctx.pc == 0x088C10D0u) goto L_088C10D0;
    return;
L_088C10D0:
    ctx.gpr[31] = (0x088C10D8u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 734u, 0x088C7CCCu>(ctx, &aot_mem) && ctx.pc == 0x088C10D8u) goto L_088C10D8;
    return;
L_088C10D8:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088C1130;
      }
      goto L_088C10E4;
    }
L_088C10E4:
    ctx.gpr[31] = (0x088C10ECu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C10ECu) goto L_088C10EC;
    return;
L_088C10EC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10600)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088C1118u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 240u, 0x0897E59Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1118u) goto L_088C1118;
    return;
L_088C1118:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C11F4;
      }
      goto L_088C1120;
    }
L_088C1120:
    ctx.gpr[31] = (0x088C1128u);
    ctx.gpr[4] = (0u | 4u);
    goto L_088C025C;
L_088C1128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C11F4;
      }
      goto L_088C1130;
    }
L_088C1130:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C11F4;
      }
      goto L_088C1138;
    }
L_088C1138:
    ctx.gpr[31] = (0x088C1140u);
    ctx.gpr[16] = (0u | 0u);
    goto L_088C029C;
L_088C1140:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_088C1158;
      }
      goto L_088C1150;
    }
L_088C1150:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088C11D8;
      }
      goto L_088C1158;
    }
L_088C1158:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 55u);
      if (branch_taken) {
          goto L_088C1168;
      }
      goto L_088C1160;
    }
L_088C1160:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088C11D8;
      }
      goto L_088C1168;
    }
L_088C1168:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 68u);
      if (branch_taken) {
          goto L_088C1178;
      }
      goto L_088C1170;
    }
L_088C1170:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C1190;
      }
      goto L_088C1178;
    }
L_088C1178:
    ctx.gpr[31] = (0x088C1180u);
    ctx.gpr[16] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 323u, 0x0885DAC8u>(ctx, &aot_mem) && ctx.pc == 0x088C1180u) goto L_088C1180;
    return;
L_088C1180:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[16] = (0u | 0u);
        goto L_088C1188;
    }
    goto L_088C1188;
L_088C1188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C11D8;
      }
      goto L_088C1190;
    }
L_088C1190:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C11C8;
      }
      goto L_088C11A0;
    }
L_088C11A0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 55 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C11B0;
      }
      goto L_088C11A8;
    }
L_088C11A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088C11D8;
      }
      goto L_088C11B0;
    }
L_088C11B0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 88 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C11D8;
      }
      goto L_088C11B8;
    }
L_088C11B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C11D8;
      }
      goto L_088C11C0;
    }
L_088C11C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088C11D8;
      }
      goto L_088C11C8;
    }
L_088C11C8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 88 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C11D8;
      }
      goto L_088C11D4;
    }
L_088C11D4:
    ctx.gpr[16] = (0u | 1u);
    goto L_088C11D8;
L_088C11D8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C11F4;
      }
      goto L_088C11E0;
    }
L_088C11E0:
    ctx.gpr[31] = (0x088C11E8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088C11E8u) goto L_088C11E8;
    return;
L_088C11E8:
    ctx.gpr[4] = (28672u << 16u);
    ctx.gpr[31] = (0x088C11F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11));
    goto L_088C02AC;
L_088C11F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1204:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C1234;
      }
      goto L_088C1220;
    }
L_088C1220:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1234:
    ctx.gpr[31] = (0x088C123Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8284));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 324u, 0x0897ED64u>(ctx, &aot_mem) && ctx.pc == 0x088C123Cu) goto L_088C123C;
    return;
L_088C123C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x088C124Cu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10740), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 266u, 0x088BDA28u>(ctx, &aot_mem) && ctx.pc == 0x088C124Cu) goto L_088C124C;
    return;
L_088C124C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1260:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (28672u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C1274u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(257));
    goto L_088C02AC;
L_088C1274:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1280:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (28672u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C1294u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(258));
    goto L_088C02AC;
L_088C1294:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C12A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C12B0u);
    // nop
    goto L_088C02D8;
L_088C12B0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C12C0;
      }
      goto L_088C12B8;
    }
L_088C12B8:
    ctx.gpr[31] = (0x088C12C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11));
    goto L_088C02AC;
L_088C12C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C12CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C12DCu);
    // nop
    goto L_088C02D8;
L_088C12DC:
    ctx.gpr[4] = (28672u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C12F4;
      }
      goto L_088C12EC;
    }
L_088C12EC:
    ctx.gpr[31] = (0x088C12F4u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088C02AC;
L_088C12F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1300:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1318;
      }
      goto L_088C1310;
    }
L_088C1310:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10716)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1318:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1320:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10620), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1334:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10620), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1344:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10620)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088C1384;
      }
      goto L_088C136C;
    }
L_088C136C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1384:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C1394u);
    ctx.gpr[6] = (0u | 88u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C1394u) goto L_088C1394;
    return;
L_088C1394:
    ctx.gpr[31] = (0x088C139Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 527u, 0x088327C8u>(ctx, &aot_mem) && ctx.pc == 0x088C139Cu) goto L_088C139C;
    return;
L_088C139C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C13A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C13A8u) goto L_088C13A8;
    return;
L_088C13A8:
    ctx.gpr[31] = (0x088C13B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 560u, 0x08832AF4u>(ctx, &aot_mem) && ctx.pc == 0x088C13B0u) goto L_088C13B0;
    return;
L_088C13B0:
    ctx.gpr[31] = (0x088C13B8u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 568u, 0x08832BE4u>(ctx, &aot_mem) && ctx.pc == 0x088C13B8u) goto L_088C13B8;
    return;
L_088C13B8:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    ctx.gpr[31] = (0x088C13C4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 556u, 0x08832A7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C13C4u) goto L_088C13C4;
    return;
L_088C13C4:
    ctx.gpr[31] = (0x088C13CCu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 564u, 0x08832B6Cu>(ctx, &aot_mem) && ctx.pc == 0x088C13CCu) goto L_088C13CC;
    return;
L_088C13CC:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    ctx.gpr[31] = (0x088C13D8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 581u, 0x08832CF8u>(ctx, &aot_mem) && ctx.pc == 0x088C13D8u) goto L_088C13D8;
    return;
L_088C13D8:
    ctx.gpr[31] = (0x088C13E0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 586u, 0x08832D40u>(ctx, &aot_mem) && ctx.pc == 0x088C13E0u) goto L_088C13E0;
    return;
L_088C13E0:
    ctx.gpr[31] = (0x088C13E8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 572u, 0x08832C5Cu>(ctx, &aot_mem) && ctx.pc == 0x088C13E8u) goto L_088C13E8;
    return;
L_088C13E8:
    ctx.gpr[31] = (0x088C13F0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 590u, 0x08832DB8u>(ctx, &aot_mem) && ctx.pc == 0x088C13F0u) goto L_088C13F0;
    return;
L_088C13F0:
    ctx.gpr[31] = (0x088C13F8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 594u, 0x08832E30u>(ctx, &aot_mem) && ctx.pc == 0x088C13F8u) goto L_088C13F8;
    return;
L_088C13F8:
    ctx.gpr[31] = (0x088C1400u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 598u, 0x08832EA8u>(ctx, &aot_mem) && ctx.pc == 0x088C1400u) goto L_088C1400;
    return;
L_088C1400:
    ctx.gpr[31] = (0x088C1408u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 602u, 0x08832F20u>(ctx, &aot_mem) && ctx.pc == 0x088C1408u) goto L_088C1408;
    return;
L_088C1408:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.gpr[31] = (0x088C1414u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 622u, 0x08842FE8u>(ctx, &aot_mem) && ctx.pc == 0x088C1414u) goto L_088C1414;
    return;
L_088C1414:
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
L_088C142C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1434:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1450;
      }
      goto L_088C1444;
    }
L_088C1444:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10632), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10636), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10640), 0u);
    goto L_088C1450;
L_088C1450:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1510:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C157C;
      }
      goto L_088C152C;
    }
L_088C152C:
    ctx.gpr[31] = (0x088C1534u);
    // nop
    goto L_088C029C;
L_088C1534:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 3001u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4001u);
      if (branch_taken) {
          goto L_088C154C;
      }
      goto L_088C1544;
    }
L_088C1544:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C157C;
      }
      goto L_088C154C;
    }
L_088C154C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (76u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10640)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19264));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C157C;
      }
      goto L_088C1568;
    }
L_088C1568:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C157C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1590:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C15DC;
      }
      goto L_088C15AC;
    }
L_088C15AC:
    ctx.gpr[31] = (0x088C15B4u);
    // nop
    goto L_088C029C;
L_088C15B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 3001u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4001u);
      if (branch_taken) {
          goto L_088C15CC;
      }
      goto L_088C15C4;
    }
L_088C15C4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C15DC;
      }
      goto L_088C15CC;
    }
L_088C15CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (76u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19264));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10640), ctx.gpr[5]);
    goto L_088C15DC;
L_088C15DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C15EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C15FCu);
    // nop
    ctx.pc = 0x08AB42C4u;
    return;
L_088C15FC:
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C160C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C1624u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10624));
    ctx.pc = 0x08AB455Cu;
    return;
L_088C1624:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1630:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C164Cu);
    ctx.gpr[16] = (0u | 0u);
    goto L_088C029C;
L_088C164C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 3001u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4001u);
      if (branch_taken) {
          goto L_088C1664;
      }
      goto L_088C165C;
    }
L_088C165C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C1680;
      }
      goto L_088C1664;
    }
L_088C1664:
    ctx.gpr[31] = (0x088C166Cu);
    // nop
    goto L_088C1510;
L_088C166C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C17A4;
      }
      goto L_088C1678;
    }
L_088C1678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088C17A4;
      }
      goto L_088C1680;
    }
L_088C1680:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 12u);
      if (branch_taken) {
          goto L_088C16D0;
      }
      goto L_088C1688;
    }
L_088C1688:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_088C16D0;
      }
      goto L_088C1690;
    }
L_088C1690:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1000 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C16D0;
      }
      goto L_088C1698;
    }
L_088C1698:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C16D0;
      }
      goto L_088C16A0;
    }
L_088C16A0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088C16B0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10624));
    ctx.pc = 0x08AB455Cu;
    return;
L_088C16B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_088C16EC;
    }
    goto L_088C16C8;
L_088C16C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088C17A4;
      }
      goto L_088C16D0;
    }
L_088C16D0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C16EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
        goto L_088C1704;
    }
    goto L_088C16FC;
L_088C16FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_088C1708;
      }
      goto L_088C1704;
    }
L_088C1704:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    goto L_088C1708;
L_088C1708:
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24288));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C17A4;
      }
      goto L_088C171C;
    }
L_088C171C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(54));
    ctx.gpr[31] = (0x088C1730u);
    ctx.gpr[5] = (0u | 152u);
    ctx.pc = 0x08AB433Cu;
    return;
L_088C1730:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088C1744;
      }
      goto L_088C1738;
    }
L_088C1738:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088C1778;
      }
      goto L_088C1744;
    }
L_088C1744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(17324)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(17320)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[17] ? 1u : 0u);
    goto L_088C1778;
L_088C1778:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[18] - ctx.gpr[17]);
        goto L_088C1788;
    }
    goto L_088C1780;
L_088C1780:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_088C178C;
      }
      goto L_088C1788;
    }
L_088C1788:
    ctx.gpr[17] = (0u - ctx.gpr[17]);
    goto L_088C178C;
L_088C178C:
    ctx.gpr[4] = (153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27008));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C17A4;
      }
      goto L_088C17A0;
    }
L_088C17A0:
    ctx.gpr[16] = (0u | 1u);
    goto L_088C17A4;
L_088C17A4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C17C0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8292)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C1800;
      }
      goto L_088C17D4;
    }
L_088C17D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C1800;
      }
      goto L_088C17DC;
    }
L_088C17DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17328)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17328), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 241 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C1808;
      }
      goto L_088C17F4;
    }
L_088C17F4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17328), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1800:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1808:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1810:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C1824u);
    ctx.gpr[16] = (0u | 0u);
    goto L_088C029C;
L_088C1824:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 3001u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4001u);
      if (branch_taken) {
          goto L_088C183C;
      }
      goto L_088C1834;
    }
L_088C1834:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C1854;
      }
      goto L_088C183C;
    }
L_088C183C:
    ctx.gpr[31] = (0x088C1844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 859u, 0x0881F488u>(ctx, &aot_mem) && ctx.pc == 0x088C1844u) goto L_088C1844;
    return;
L_088C1844:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C1854;
      }
      goto L_088C1850;
    }
L_088C1850:
    ctx.gpr[16] = (0u | 1u);
    goto L_088C1854;
L_088C1854:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1868:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C1880u);
    ctx.gpr[17] = (0u | 0u);
    goto L_088C029C;
L_088C1880:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 88 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 29 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C1960;
      }
      goto L_088C1890;
    }
L_088C1890:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 29u);
      if (branch_taken) {
          goto L_088C1938;
      }
      goto L_088C1898;
    }
L_088C1898:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 50 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C18BC;
      }
      goto L_088C18A4;
    }
L_088C18A4:
    ctx.gpr[31] = (0x088C18ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 508u, 0x088525BCu>(ctx, &aot_mem) && ctx.pc == 0x088C18ACu) goto L_088C18AC;
    return;
L_088C18AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 29u);
      if (branch_taken) {
          goto L_088C1938;
      }
      goto L_088C18B4;
    }
L_088C18B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088C1934;
      }
      goto L_088C18BC;
    }
L_088C18BC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 68 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C18DC;
      }
      goto L_088C18C4;
    }
L_088C18C4:
    ctx.gpr[31] = (0x088C18CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 518u, 0x08863248u>(ctx, &aot_mem) && ctx.pc == 0x088C18CCu) goto L_088C18CC;
    return;
L_088C18CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 29u);
      if (branch_taken) {
          goto L_088C1938;
      }
      goto L_088C18D4;
    }
L_088C18D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088C1934;
      }
      goto L_088C18DC;
    }
L_088C18DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C190C;
      }
      goto L_088C18E4;
    }
L_088C18E4:
    ctx.gpr[31] = (0x088C18ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x088C18ECu) goto L_088C18EC;
    return;
L_088C18EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 29u);
      if (branch_taken) {
          goto L_088C1938;
      }
      goto L_088C18F4;
    }
L_088C18F4:
    ctx.gpr[31] = (0x088C18FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 309u, 0x0885DA40u>(ctx, &aot_mem) && ctx.pc == 0x088C18FCu) goto L_088C18FC;
    return;
L_088C18FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 29u);
      if (branch_taken) {
          goto L_088C1938;
      }
      goto L_088C1904;
    }
L_088C1904:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088C1934;
      }
      goto L_088C190C;
    }
L_088C190C:
    ctx.gpr[31] = (0x088C1914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1914u) goto L_088C1914;
    return;
L_088C1914:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 29u);
      if (branch_taken) {
          goto L_088C1938;
      }
      goto L_088C1920;
    }
L_088C1920:
    ctx.gpr[31] = (0x088C1928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 309u, 0x0885DA40u>(ctx, &aot_mem) && ctx.pc == 0x088C1928u) goto L_088C1928;
    return;
L_088C1928:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 29u);
      if (branch_taken) {
          goto L_088C1938;
      }
      goto L_088C1930;
    }
L_088C1930:
    ctx.gpr[17] = (0u | 1u);
    goto L_088C1934;
L_088C1934:
    ctx.gpr[4] = (0u | 29u);
    goto L_088C1938;
L_088C1938:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 36u);
      if (branch_taken) {
          goto L_088C1958;
      }
      goto L_088C1940;
    }
L_088C1940:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 43u);
      if (branch_taken) {
          goto L_088C1958;
      }
      goto L_088C1948;
    }
L_088C1948:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 54u);
      if (branch_taken) {
          goto L_088C1958;
      }
      goto L_088C1950;
    }
L_088C1950:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C1974;
      }
      goto L_088C1958;
    }
L_088C1958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_088C1974;
      }
      goto L_088C1960;
    }
L_088C1960:
    ctx.gpr[31] = (0x088C1968u);
    // nop
    goto L_088C1810;
L_088C1968:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1974;
      }
      goto L_088C1970;
    }
L_088C1970:
    ctx.gpr[17] = (0u | 1u);
    goto L_088C1974;
L_088C1974:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C198C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C19A8u);
    // nop
    goto L_088C029C;
L_088C19A8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 88 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C1B30;
      }
      goto L_088C19B8;
    }
L_088C19B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[18]) < 29 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C19F0;
      }
      goto L_088C19C8;
    }
L_088C19C8:
    ctx.gpr[31] = (0x088C19D0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB4374u;
    return;
L_088C19D0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
      if (branch_taken) {
          goto L_088C19E8;
      }
      goto L_088C19DC;
    }
L_088C19DC:
    ctx.gpr[31] = (0x088C19E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    goto L_088C142C;
L_088C19E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_088C19E8;
L_088C19E8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    goto L_088C19F0;
L_088C19F0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C1A10;
      }
      goto L_088C19FC;
    }
L_088C19FC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1A10;
      }
      goto L_088C1A04;
    }
L_088C1A04:
    ctx.gpr[31] = (0x088C1A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 253u, 0x0897E664u>(ctx, &aot_mem) && ctx.pc == 0x088C1A0Cu) goto L_088C1A0C;
    return;
L_088C1A0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    goto L_088C1A10;
L_088C1A10:
    ctx.gpr[31] = (0x088C1A18u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8284));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 320u, 0x0897ED10u>(ctx, &aot_mem) && ctx.pc == 0x088C1A18u) goto L_088C1A18;
    return;
L_088C1A18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10740), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088C1A38;
      }
      goto L_088C1A28;
    }
L_088C1A28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(10740)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10740), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088C1B98;
      }
      goto L_088C1A38;
    }
L_088C1A38:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 36 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 50 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C1A78;
      }
      goto L_088C1A44;
    }
L_088C1A44:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x088C1A54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3520));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x088C1A54u) goto L_088C1A54;
    return;
L_088C1A54:
    ctx.gpr[31] = (0x088C1A5Cu);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x088C1A5Cu) goto L_088C1A5C;
    return;
L_088C1A5C:
    ctx.gpr[31] = (0x088C1A64u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x088C1A64u) goto L_088C1A64;
    return;
L_088C1A64:
    ctx.gpr[31] = (0x088C1A6Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1A6Cu) goto L_088C1A6C;
    return;
L_088C1A6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
      if (branch_taken) {
          goto L_088C1B9C;
      }
      goto L_088C1A74;
    }
L_088C1A74:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 50 ? 1u : 0u);
    goto L_088C1A78;
L_088C1A78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 54 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C1AB4;
      }
      goto L_088C1A80;
    }
L_088C1A80:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x088C1A90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2780));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x088C1A90u) goto L_088C1A90;
    return;
L_088C1A90:
    ctx.gpr[31] = (0x088C1A98u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x088C1A98u) goto L_088C1A98;
    return;
L_088C1A98:
    ctx.gpr[31] = (0x088C1AA0u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x088C1AA0u) goto L_088C1AA0;
    return;
L_088C1AA0:
    ctx.gpr[31] = (0x088C1AA8u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1AA8u) goto L_088C1AA8;
    return;
L_088C1AA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
      if (branch_taken) {
          goto L_088C1B9C;
      }
      goto L_088C1AB0;
    }
L_088C1AB0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 54 ? 1u : 0u);
    goto L_088C1AB4;
L_088C1AB4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 68 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C1B98;
      }
      goto L_088C1ABC;
    }
L_088C1ABC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2182u << 16u);
      if (branch_taken) {
          goto L_088C1B04;
      }
      goto L_088C1AC4;
    }
L_088C1AC4:
    ctx.gpr[31] = (0x088C1ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1ACCu) goto L_088C1ACC;
    return;
L_088C1ACC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2182u << 16u);
      if (branch_taken) {
          goto L_088C1B98;
      }
      goto L_088C1AD4;
    }
L_088C1AD4:
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x088C1AE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26212));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x088C1AE0u) goto L_088C1AE0;
    return;
L_088C1AE0:
    ctx.gpr[31] = (0x088C1AE8u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x088C1AE8u) goto L_088C1AE8;
    return;
L_088C1AE8:
    ctx.gpr[31] = (0x088C1AF0u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x088C1AF0u) goto L_088C1AF0;
    return;
L_088C1AF0:
    ctx.gpr[31] = (0x088C1AF8u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1AF8u) goto L_088C1AF8;
    return;
L_088C1AF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
      if (branch_taken) {
          goto L_088C1B9C;
      }
      goto L_088C1B00;
    }
L_088C1B00:
    ctx.gpr[4] = (2182u << 16u);
    goto L_088C1B04;
L_088C1B04:
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x088C1B10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26212));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x088C1B10u) goto L_088C1B10;
    return;
L_088C1B10:
    ctx.gpr[31] = (0x088C1B18u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x088C1B18u) goto L_088C1B18;
    return;
L_088C1B18:
    ctx.gpr[31] = (0x088C1B20u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x088C1B20u) goto L_088C1B20;
    return;
L_088C1B20:
    ctx.gpr[31] = (0x088C1B28u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1B28u) goto L_088C1B28;
    return;
L_088C1B28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
      if (branch_taken) {
          goto L_088C1B9C;
      }
      goto L_088C1B30;
    }
L_088C1B30:
    ctx.gpr[4] = (0u | 1000u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 1001u);
      if (branch_taken) {
          goto L_088C1B64;
      }
      goto L_088C1B3C;
    }
L_088C1B3C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 3000u);
      if (branch_taken) {
          goto L_088C1B64;
      }
      goto L_088C1B44;
    }
L_088C1B44:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 2000u);
      if (branch_taken) {
          goto L_088C1B64;
      }
      goto L_088C1B4C;
    }
L_088C1B4C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 2001u);
      if (branch_taken) {
          goto L_088C1B64;
      }
      goto L_088C1B54;
    }
L_088C1B54:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 4000u);
      if (branch_taken) {
          goto L_088C1B64;
      }
      goto L_088C1B5C;
    }
L_088C1B5C:
    if (ctx.gpr[18] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
        goto L_088C1B9C;
    }
    goto L_088C1B64;
L_088C1B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10740), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x088C1B80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26212));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x088C1B80u) goto L_088C1B80;
    return;
L_088C1B80:
    ctx.gpr[31] = (0x088C1B88u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x088C1B88u) goto L_088C1B88;
    return;
L_088C1B88:
    ctx.gpr[31] = (0x088C1B90u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x088C1B90u) goto L_088C1B90;
    return;
L_088C1B90:
    ctx.gpr[31] = (0x088C1B98u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1B98u) goto L_088C1B98;
    return;
L_088C1B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    goto L_088C1B9C;
L_088C1B9C:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10724), static_cast<std::uint8_t>(ctx.gpr[5]));
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
L_088C1BBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C1BCCu);
    // nop
    goto L_088C029C;
L_088C1BCC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 88 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 1000u);
      if (branch_taken) {
          goto L_088C1C20;
      }
      goto L_088C1BDC;
    }
L_088C1BDC:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(10740), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2188u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C1BFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9688));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x088C1BFCu) goto L_088C1BFC;
    return;
L_088C1BFC:
    ctx.gpr[31] = (0x088C1C04u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x088C1C04u) goto L_088C1C04;
    return;
L_088C1C04:
    ctx.gpr[31] = (0x088C1C0Cu);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x088C1C0Cu) goto L_088C1C0C;
    return;
L_088C1C0C:
    ctx.gpr[31] = (0x088C1C14u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1C14u) goto L_088C1C14;
    return;
L_088C1C14:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1C20:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C1C68;
      }
      goto L_088C1C28;
    }
L_088C1C28:
    ctx.gpr[5] = (0u | 1001u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C1C68;
      }
      goto L_088C1C34;
    }
L_088C1C34:
    ctx.gpr[5] = (0u | 3000u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C1C68;
      }
      goto L_088C1C40;
    }
L_088C1C40:
    ctx.gpr[5] = (0u | 2000u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C1C68;
      }
      goto L_088C1C4C;
    }
L_088C1C4C:
    ctx.gpr[5] = (0u | 2001u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C1C68;
      }
      goto L_088C1C58;
    }
L_088C1C58:
    ctx.gpr[5] = (0u | 4000u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C1C9C;
      }
      goto L_088C1C64;
    }
L_088C1C64:
    ctx.gpr[5] = (2221u << 16u);
    goto L_088C1C68;
L_088C1C68:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(10740), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2188u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C1C84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9688));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x088C1C84u) goto L_088C1C84;
    return;
L_088C1C84:
    ctx.gpr[31] = (0x088C1C8Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x088C1C8Cu) goto L_088C1C8C;
    return;
L_088C1C8C:
    ctx.gpr[31] = (0x088C1C94u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x088C1C94u) goto L_088C1C94;
    return;
L_088C1C94:
    ctx.gpr[31] = (0x088C1C9Cu);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1C9Cu) goto L_088C1C9C;
    return;
L_088C1C9C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1CA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C1CB8u);
    // nop
    goto L_088C029C;
L_088C1CB8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 88 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 1000u);
      if (branch_taken) {
          goto L_088C1D30;
      }
      goto L_088C1CC8;
    }
L_088C1CC8:
    ctx.gpr[31] = (0x088C1CD0u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x088C1CD0u) goto L_088C1CD0;
    return;
L_088C1CD0:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4484));
    ctx.gpr[31] = (0x088C1CE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4252));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088C1CE8u) goto L_088C1CE8;
    return;
L_088C1CE8:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3248));
    ctx.gpr[31] = (0x088C1D00u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3520));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088C1D00u) goto L_088C1D00;
    return;
L_088C1D00:
    ctx.gpr[4] = (2183u << 16u);
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18136));
    ctx.gpr[31] = (0x088C1D18u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18308));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088C1D18u) goto L_088C1D18;
    return;
L_088C1D18:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088C1D24u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088C1D24u) goto L_088C1D24;
    return;
L_088C1D24:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1D30:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1001u);
      if (branch_taken) {
          goto L_088C1D60;
      }
      goto L_088C1D38;
    }
L_088C1D38:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3000u);
      if (branch_taken) {
          goto L_088C1D60;
      }
      goto L_088C1D40;
    }
L_088C1D40:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2000u);
      if (branch_taken) {
          goto L_088C1D60;
      }
      goto L_088C1D48;
    }
L_088C1D48:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2001u);
      if (branch_taken) {
          goto L_088C1D60;
      }
      goto L_088C1D50;
    }
L_088C1D50:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4000u);
      if (branch_taken) {
          goto L_088C1D60;
      }
      goto L_088C1D58;
    }
L_088C1D58:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C1DBC;
      }
      goto L_088C1D60;
    }
L_088C1D60:
    ctx.gpr[31] = (0x088C1D68u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x088C1D68u) goto L_088C1D68;
    return;
L_088C1D68:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4484));
    ctx.gpr[31] = (0x088C1D80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4252));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088C1D80u) goto L_088C1D80;
    return;
L_088C1D80:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3248));
    ctx.gpr[31] = (0x088C1D98u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3520));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088C1D98u) goto L_088C1D98;
    return;
L_088C1D98:
    ctx.gpr[4] = (2183u << 16u);
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18136));
    ctx.gpr[31] = (0x088C1DB0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18308));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088C1DB0u) goto L_088C1DB0;
    return;
L_088C1DB0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088C1DBCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088C1DBCu) goto L_088C1DBC;
    return;
L_088C1DBC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1DC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C1DD8u);
    // nop
    goto L_088C029C;
L_088C1DD8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 88 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 1000u);
      if (branch_taken) {
          goto L_088C1E20;
      }
      goto L_088C1DE8;
    }
L_088C1DE8:
    ctx.gpr[31] = (0x088C1DF0u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x088C1DF0u) goto L_088C1DF0;
    return;
L_088C1DF0:
    ctx.gpr[4] = (2188u << 16u);
    ctx.gpr[5] = (2188u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10316));
    ctx.gpr[31] = (0x088C1E08u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9688));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088C1E08u) goto L_088C1E08;
    return;
L_088C1E08:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088C1E14u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088C1E14u) goto L_088C1E14;
    return;
L_088C1E14:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1E20:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1001u);
      if (branch_taken) {
          goto L_088C1E50;
      }
      goto L_088C1E28;
    }
L_088C1E28:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3000u);
      if (branch_taken) {
          goto L_088C1E50;
      }
      goto L_088C1E30;
    }
L_088C1E30:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2000u);
      if (branch_taken) {
          goto L_088C1E50;
      }
      goto L_088C1E38;
    }
L_088C1E38:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2001u);
      if (branch_taken) {
          goto L_088C1E50;
      }
      goto L_088C1E40;
    }
L_088C1E40:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4000u);
      if (branch_taken) {
          goto L_088C1E50;
      }
      goto L_088C1E48;
    }
L_088C1E48:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C1E7C;
      }
      goto L_088C1E50;
    }
L_088C1E50:
    ctx.gpr[31] = (0x088C1E58u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x088C1E58u) goto L_088C1E58;
    return;
L_088C1E58:
    ctx.gpr[4] = (2188u << 16u);
    ctx.gpr[5] = (2188u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10316));
    ctx.gpr[31] = (0x088C1E70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9688));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088C1E70u) goto L_088C1E70;
    return;
L_088C1E70:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088C1E7Cu);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088C1E7Cu) goto L_088C1E7C;
    return;
L_088C1E7C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1E88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C1EA0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_088C029C;
L_088C1EA0:
    ctx.gpr[31] = (0x088C1EA8u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088C02D8;
L_088C1EA8:
    ctx.gpr[4] = (28672u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(13) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C20D4;
      }
      goto L_088C1EBC;
    }
L_088C1EBC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-11024)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1ED4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10724)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C1EF0;
      }
      goto L_088C1EE8;
    }
L_088C1EE8:
    ctx.gpr[31] = (0x088C1EF0u);
    // nop
    goto L_088C198C;
L_088C1EF0:
    ctx.gpr[31] = (0x088C1EF8u);
    // nop
    goto L_088C17C0;
L_088C1EF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C20D4;
      }
      goto L_088C1F00;
    }
L_088C1F00:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C20D4;
      }
      goto L_088C1F08;
    }
L_088C1F08:
    ctx.gpr[31] = (0x088C1F10u);
    // nop
    goto L_088C1BBC;
L_088C1F10:
    ctx.gpr[31] = (0x088C1F18u);
    // nop
    goto L_088C1DC8;
L_088C1F18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C20D4;
      }
      goto L_088C1F20;
    }
L_088C1F20:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10724)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C1F3C;
      }
      goto L_088C1F34;
    }
L_088C1F34:
    ctx.gpr[31] = (0x088C1F3Cu);
    // nop
    goto L_088C198C;
L_088C1F3C:
    ctx.gpr[31] = (0x088C1F44u);
    // nop
    goto L_088C17C0;
L_088C1F44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C20D4;
      }
      goto L_088C1F4C;
    }
L_088C1F4C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C20D4;
      }
      goto L_088C1F54;
    }
L_088C1F54:
    ctx.gpr[31] = (0x088C1F5Cu);
    // nop
    goto L_088C1BBC;
L_088C1F5C:
    ctx.gpr[31] = (0x088C1F64u);
    // nop
    goto L_088C1CA8;
L_088C1F64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C20D4;
      }
      goto L_088C1F6C;
    }
L_088C1F6C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10724)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C1F88;
      }
      goto L_088C1F80;
    }
L_088C1F80:
    ctx.gpr[31] = (0x088C1F88u);
    // nop
    goto L_088C198C;
L_088C1F88:
    ctx.gpr[31] = (0x088C1F90u);
    // nop
    goto L_088C17C0;
L_088C1F90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C20D4;
      }
      goto L_088C1F98;
    }
L_088C1F98:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088C1FB8;
      }
      goto L_088C1FA0;
    }
L_088C1FA0:
    ctx.gpr[31] = (0x088C1FA8u);
    // nop
    goto L_088C1BBC;
L_088C1FA8:
    ctx.gpr[31] = (0x088C1FB0u);
    // nop
    goto L_088C1DC8;
L_088C1FB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C20D4;
      }
      goto L_088C1FB8;
    }
L_088C1FB8:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C20D4;
      }
      goto L_088C1FC0;
    }
L_088C1FC0:
    ctx.gpr[31] = (0x088C1FC8u);
    // nop
    goto L_088C1BBC;
L_088C1FC8:
    ctx.gpr[31] = (0x088C1FD0u);
    // nop
    goto L_088C1CA8;
L_088C1FD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C20D4;
      }
      goto L_088C1FD8;
    }
L_088C1FD8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 88 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1000u);
      if (branch_taken) {
          goto L_088C206C;
      }
      goto L_088C1FE4;
    }
L_088C1FE4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10724)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2028;
      }
      goto L_088C1FF8;
    }
L_088C1FF8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088C2010;
      }
      goto L_088C2000;
    }
L_088C2000:
    ctx.gpr[31] = (0x088C2008u);
    // nop
    goto L_088C198C;
L_088C2008:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C20D4;
      }
      goto L_088C2010;
    }
L_088C2010:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C20D4;
      }
      goto L_088C2018;
    }
L_088C2018:
    ctx.gpr[31] = (0x088C2020u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_088C02AC;
L_088C2020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C20D4;
      }
      goto L_088C2028;
    }
L_088C2028:
    ctx.gpr[31] = (0x088C2030u);
    // nop
    goto L_088C17C0;
L_088C2030:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C20D4;
      }
      goto L_088C2038;
    }
L_088C2038:
    ctx.gpr[31] = (0x088C2040u);
    // nop
    goto L_088C1BBC;
L_088C2040:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C205C;
      }
      goto L_088C204C;
    }
L_088C204C:
    ctx.gpr[31] = (0x088C2054u);
    // nop
    goto L_088C1CA8;
L_088C2054:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C20D4;
      }
      goto L_088C205C;
    }
L_088C205C:
    ctx.gpr[31] = (0x088C2064u);
    // nop
    goto L_088C1DC8;
L_088C2064:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C20D4;
      }
      goto L_088C206C;
    }
L_088C206C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C20B4;
      }
      goto L_088C2074;
    }
L_088C2074:
    ctx.gpr[4] = (0u | 1001u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C20B4;
      }
      goto L_088C2080;
    }
L_088C2080:
    ctx.gpr[4] = (0u | 3000u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C20B4;
      }
      goto L_088C208C;
    }
L_088C208C:
    ctx.gpr[4] = (0u | 2000u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C20B4;
      }
      goto L_088C2098;
    }
L_088C2098:
    ctx.gpr[4] = (0u | 2001u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C20B4;
      }
      goto L_088C20A4;
    }
L_088C20A4:
    ctx.gpr[4] = (0u | 4000u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C20D4;
      }
      goto L_088C20B0;
    }
L_088C20B0:
    ctx.gpr[4] = (28672u << 16u);
    goto L_088C20B4;
L_088C20B4:
    ctx.gpr[31] = (0x088C20BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    goto L_088C02AC;
L_088C20BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C20D4;
      }
      goto L_088C20C4;
    }
L_088C20C4:
    ctx.gpr[31] = (0x088C20CCu);
    ctx.gpr[4] = (0u | 0u);
    goto L_088C02AC;
L_088C20CC:
    ctx.gpr[31] = (0x088C20D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 40u, 0x088C430Cu>(ctx, &aot_mem) && ctx.pc == 0x088C20D4u) goto L_088C20D4;
    return;
L_088C20D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C20E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C2110u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 715u, 0x0884BD98u>(ctx, &aot_mem) && ctx.pc == 0x088C2110u) goto L_088C2110;
    return;
L_088C2110:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088C212C;
      }
      goto L_088C211C;
    }
L_088C211C:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088C212Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11388));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C212Cu) goto L_088C212C;
    return;
L_088C212C:
    ctx.gpr[31] = (0x088C2134u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 260u, 0x0898D448u>(ctx, &aot_mem) && ctx.pc == 0x088C2134u) goto L_088C2134;
    return;
L_088C2134:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088C21A0;
      }
      goto L_088C2140;
    }
L_088C2140:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C214Cu);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C214Cu) goto L_088C214C;
    return;
L_088C214C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088C2158u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 479u, 0x08AAE4DCu>(ctx, &aot_mem) && ctx.pc == 0x088C2158u) goto L_088C2158;
    return;
L_088C2158:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_088C21A0;
      }
      goto L_088C216C;
    }
L_088C216C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    goto L_088C2174;
L_088C2174:
    ctx.gpr[31] = (0x088C217Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 408u, 0x08AAD900u>(ctx, &aot_mem) && ctx.pc == 0x088C217Cu) goto L_088C217C;
    return;
L_088C217C:
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x088C2188u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 185u, 0x08844F40u>(ctx, &aot_mem) && ctx.pc == 0x088C2188u) goto L_088C2188;
    return;
L_088C2188:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C21C4;
      }
      goto L_088C2190;
    }
L_088C2190:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088C2174;
      }
      goto L_088C21A0;
    }
L_088C21A0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C21C4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C21E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C220Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08AB4334u;
    return;
L_088C220C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088C223C;
      }
      goto L_088C2214;
    }
L_088C2214:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C2224u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11384));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C2224u) goto L_088C2224;
    return;
L_088C2224:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C223C:
    ctx.gpr[31] = (0x088C2244u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088C2244u) goto L_088C2244;
    return;
L_088C2244:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C225C:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10644), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C226C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10644)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C227C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_088C22A4;
L_088C22A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10600)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088C22BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 248u, 0x0897E62Cu>(ctx, &aot_mem) && ctx.pc == 0x088C22BCu) goto L_088C22BC;
    return;
L_088C22BC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_088C22D8;
    }
    goto L_088C22C4;
L_088C22C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10600)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_088C22D8;
L_088C22D8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
      if (branch_taken) {
          goto L_088C22A4;
      }
      goto L_088C22E4;
    }
L_088C22E4:
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
L_088C2304:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10600)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(54));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C234Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 248u, 0x0897E62Cu>(ctx, &aot_mem) && ctx.pc == 0x088C234Cu) goto L_088C234C;
    return;
L_088C234C:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088C2378;
      }
      goto L_088C2358;
    }
L_088C2358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C23C8;
      }
      goto L_088C2370;
    }
L_088C2370:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088C2398;
      }
      goto L_088C2378;
    }
L_088C2378:
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
L_088C2398:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10600)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(54));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088C23ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 248u, 0x0897E62Cu>(ctx, &aot_mem) && ctx.pc == 0x088C23ACu) goto L_088C23AC;
    return;
L_088C23AC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
      if (branch_taken) {
          goto L_088C23E8;
      }
      goto L_088C23B4;
    }
L_088C23B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
      if (branch_taken) {
          goto L_088C2398;
      }
      goto L_088C23C8;
    }
L_088C23C8:
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
L_088C23E8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
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
L_088C240C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C241Cu);
    ctx.gpr[4] = (0u | 30u);
    goto L_088C025C;
L_088C241C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2428:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C2438u);
    ctx.gpr[4] = (0u | 37u);
    goto L_088C025C;
L_088C2438:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C2454u);
    ctx.gpr[4] = (0u | 44u);
    goto L_088C025C;
L_088C2454:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2460:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C2474u);
    ctx.gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2474u) goto L_088C2474;
    return;
L_088C2474:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_088C247C;
    }
    goto L_088C247C;
L_088C247C:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17276), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[31] = (0x088C248Cu);
    ctx.gpr[4] = (0u | 55u);
    goto L_088C025C;
L_088C248C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C249C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_088C24D4;
      }
      goto L_088C24BC;
    }
L_088C24BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C24CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C24CCu) goto L_088C24CC;
    return;
L_088C24CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10708), 0u);
    goto L_088C24D4;
L_088C24D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C24E4:
    ctx.gpr[2] = (2221u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(17240)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2508;
      }
      goto L_088C24F4;
    }
L_088C24F4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(10712)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2508;
      }
      goto L_088C2500;
    }
L_088C2500:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2508:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2510:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2524:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_088C2544;
      }
      goto L_088C2538;
    }
L_088C2538:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2544:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C254C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C2570;
      }
      goto L_088C255C;
    }
L_088C255C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[31] = (0x088C2570u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(592));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C2570u) goto L_088C2570;
    return;
L_088C2570:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C257C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C25A0;
      }
      goto L_088C258C;
    }
L_088C258C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[31] = (0x088C25A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C25A0u) goto L_088C25A0;
    return;
L_088C25A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C25AC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C265C;
      }
      goto L_088C25C0;
    }
L_088C25C0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (0u | 86u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_088C2600;
      }
      goto L_088C25D8;
    }
L_088C25D8:
    ctx.gpr[9] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[7] = (0u | 107u);
      if (branch_taken) {
          goto L_088C2600;
      }
      goto L_088C25E4;
    }
L_088C25E4:
    ctx.gpr[9] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[7] = (0u | 128u);
      if (branch_taken) {
          goto L_088C2600;
      }
      goto L_088C25F0;
    }
L_088C25F0:
    ctx.gpr[7] = (0u | 170u);
    ctx.gpr[9] = (0u | 3u);
    if (ctx.gpr[8] == ctx.gpr[9]) {
    ctx.gpr[7] = (0u | 149u);
        goto L_088C2600;
    }
    goto L_088C2600;
L_088C2600:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[2] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088C264C;
      }
      goto L_088C2608;
    }
L_088C2608:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_088C2618;
      }
      goto L_088C2610;
    }
L_088C2610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C2648;
      }
      goto L_088C2618;
    }
L_088C2618:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[8] = (0u | 2u);
      if (branch_taken) {
          goto L_088C2628;
      }
      goto L_088C2620;
    }
L_088C2620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(7));
      if (branch_taken) {
          goto L_088C2648;
      }
      goto L_088C2628;
    }
L_088C2628:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[8] = (0u | 3u);
      if (branch_taken) {
          goto L_088C2638;
      }
      goto L_088C2630;
    }
L_088C2630:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_088C2648;
      }
      goto L_088C2638;
    }
L_088C2638:
    if (ctx.gpr[6] != ctx.gpr[8]) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(19));
        goto L_088C2648;
    }
    goto L_088C2640;
L_088C2640:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088C2648;
      }
      goto L_088C2648;
    }
L_088C2648:
    ctx.gpr[2] = (ctx.gpr[7] | 0u);
    goto L_088C264C;
L_088C264C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_088C265C;
      }
      goto L_088C2654;
    }
L_088C2654:
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_088C265C;
L_088C265C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C26D8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10708)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C26EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C2710;
      }
      goto L_088C26FC;
    }
L_088C26FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[31] = (0x088C2710u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(592));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C2710u) goto L_088C2710;
    return;
L_088C2710:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C271C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C2740;
      }
      goto L_088C272C;
    }
L_088C272C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[31] = (0x088C2740u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(960));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C2740u) goto L_088C2740;
    return;
L_088C2740:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C274C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C2770;
      }
      goto L_088C275C;
    }
L_088C275C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[31] = (0x088C2770u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C2770u) goto L_088C2770;
    return;
L_088C2770:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C277C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C27A0;
      }
      goto L_088C278C;
    }
L_088C278C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[31] = (0x088C27A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(604));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C27A0u) goto L_088C27A0;
    return;
L_088C27A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C27AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C27D0;
      }
      goto L_088C27BC;
    }
L_088C27BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 96u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[31] = (0x088C27D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(652));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C27D0u) goto L_088C27D0;
    return;
L_088C27D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C27DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C2800;
      }
      goto L_088C27EC;
    }
L_088C27EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[31] = (0x088C2800u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(748));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C2800u) goto L_088C2800;
    return;
L_088C2800:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C280C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C2830;
      }
      goto L_088C281C;
    }
L_088C281C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[31] = (0x088C2830u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(812));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C2830u) goto L_088C2830;
    return;
L_088C2830:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C283C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C2860;
      }
      goto L_088C284C;
    }
L_088C284C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[31] = (0x088C2860u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(848));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C2860u) goto L_088C2860;
    return;
L_088C2860:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C286C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C2890;
      }
      goto L_088C287C;
    }
L_088C287C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[31] = (0x088C2890u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(888));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C2890u) goto L_088C2890;
    return;
L_088C2890:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C289C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C28C0;
      }
      goto L_088C28AC;
    }
L_088C28AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[31] = (0x088C28C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1108));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C28C0u) goto L_088C28C0;
    return;
L_088C28C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C28CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C28F0;
      }
      goto L_088C28DC;
    }
L_088C28DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[31] = (0x088C28F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(924));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C28F0u) goto L_088C28F0;
    return;
L_088C28F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C28FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C2920;
      }
      goto L_088C290C;
    }
L_088C290C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[31] = (0x088C2920u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1032));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C2920u) goto L_088C2920;
    return;
L_088C2920:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C292C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C2950;
      }
      goto L_088C293C;
    }
L_088C293C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[31] = (0x088C2950u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1068));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C2950u) goto L_088C2950;
    return;
L_088C2950:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C295C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C2980;
      }
      goto L_088C296C;
    }
L_088C296C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[31] = (0x088C2980u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1144));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C2980u) goto L_088C2980;
    return;
L_088C2980:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C298C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C29B0;
      }
      goto L_088C299C;
    }
L_088C299C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[31] = (0x088C29B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1184));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C29B0u) goto L_088C29B0;
    return;
L_088C29B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C29BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C29E0;
      }
      goto L_088C29CC;
    }
L_088C29CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 204u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10708)));
    ctx.gpr[31] = (0x088C29E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1220));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C29E0u) goto L_088C29E0;
    return;
L_088C29E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2A1C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10728)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2A2C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10728)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10728), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2A84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C2AAC;
      }
      goto L_088C2A94;
    }
L_088C2A94:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[31] = (0x088C2AA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11388));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 91u, 0x088C85DCu>(ctx, &aot_mem) && ctx.pc == 0x088C2AA0u) goto L_088C2AA0;
    return;
L_088C2AA0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2AAC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17088));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088C2AC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 91u, 0x088C85DCu>(ctx, &aot_mem) && ctx.pc == 0x088C2AC0u) goto L_088C2AC0;
    return;
L_088C2AC0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2ACC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C2AF4;
      }
      goto L_088C2ADC;
    }
L_088C2ADC:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[31] = (0x088C2AE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11388));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 93u, 0x088C8604u>(ctx, &aot_mem) && ctx.pc == 0x088C2AE8u) goto L_088C2AE8;
    return;
L_088C2AE8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2AF4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17112));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088C2B08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 93u, 0x088C8604u>(ctx, &aot_mem) && ctx.pc == 0x088C2B08u) goto L_088C2B08;
    return;
L_088C2B08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2B14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17252)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[6] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C2B44;
      }
      goto L_088C2B2C;
    }
L_088C2B2C:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[31] = (0x088C2B38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11388));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 95u, 0x088C862Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2B38u) goto L_088C2B38;
    return;
L_088C2B38:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2B44:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17208));
      if (branch_taken) {
          goto L_088C2B68;
      }
      goto L_088C2B4C;
    }
L_088C2B4C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[31] = (0x088C2B5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 95u, 0x088C862Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2B5Cu) goto L_088C2B5C;
    return;
L_088C2B5C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2B68:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[31] = (0x088C2B78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 95u, 0x088C862Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2B78u) goto L_088C2B78;
    return;
L_088C2B78:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2B84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[7] = (((ctx.gpr[5] & 0x000000FFu) << 24u) | ((ctx.gpr[5] & 0x0000FF00u) << 8u) | ((ctx.gpr[5] & 0x00FF0000u) >> 8u) | ((ctx.gpr[5] & 0xFF000000u) >> 24u));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[23] = (32833u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1801));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_088C2BE8;
L_088C2BE8:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088C2BFCu);
    ctx.gpr[8] = (0u | 1u);
    ctx.pc = 0x08AB4384u;
    return;
L_088C2BFC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == ctx.gpr[23]) {
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
        goto L_088C2BE8;
    }
    goto L_088C2C08;
L_088C2C08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (32833u << 16u);
      if (branch_taken) {
          goto L_088C2CA0;
      }
      goto L_088C2C10;
    }
L_088C2C10:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1804));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[6] = (28672u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C2C44;
      }
      goto L_088C2C28;
    }
L_088C2C28:
    ctx.gpr[7] = (32833u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1803));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2C64;
      }
      goto L_088C2C3C;
    }
L_088C2C3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2C54;
      }
      goto L_088C2C44;
    }
L_088C2C44:
    ctx.gpr[7] = (32833u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1813));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088C2C64;
      }
      goto L_088C2C54;
    }
L_088C2C54:
    ctx.gpr[31] = (0x088C2C5Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_088C02AC;
L_088C2C5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C2C70;
      }
      goto L_088C2C64;
    }
L_088C2C64:
    ctx.gpr[31] = (0x088C2C6Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_088C02AC;
L_088C2C6C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088C2C70;
L_088C2C70:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2CA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(62));
    ctx.gpr[31] = (0x088C2CB4u);
    ctx.gpr[6] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C2CB4u) goto L_088C2CB4;
    return;
L_088C2CB4:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088C2E94;
      }
      goto L_088C2CC4;
    }
L_088C2CC4:
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[20]);
    goto L_088C2CC8;
L_088C2CC8:
    ctx.gpr[4] = (0u | 8192u);
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(8192) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_088C2CD8;
    }
    goto L_088C2CD8;
L_088C2CD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(62));
    ctx.gpr[31] = (0x088C2CF0u);
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C2CF0u) goto L_088C2CF0;
    return;
L_088C2CF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(62));
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088C2D0Cu);
    ctx.gpr[8] = (0u | 1u);
    ctx.pc = 0x08AB4384u;
    return;
L_088C2D0C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088C2DD8;
      }
      goto L_088C2D18;
    }
L_088C2D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x088C2D24u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_088C15EC;
L_088C2D24:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[22];
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C2D48;
      }
      goto L_088C2D2C;
    }
L_088C2D2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2D80;
      }
      goto L_088C2D38;
    }
L_088C2D38:
    ctx.gpr[31] = (0x088C2D40u);
    // nop
    goto L_088C160C;
L_088C2D40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2D90;
      }
      goto L_088C2D48;
    }
L_088C2D48:
    ctx.gpr[31] = (0x088C2D50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_088C02AC;
L_088C2D50:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2D80:
    ctx.gpr[31] = (0x088C2D88u);
    // nop
    goto L_088C1630;
L_088C2D88:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[22];
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C2DA0;
      }
      goto L_088C2D90;
    }
L_088C2D90:
    ctx.gpr[31] = (0x088C2D98u);
    ctx.gpr[4] = (0u | 100u);
    ctx.pc = 0x08AB469Cu;
    return;
L_088C2D98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_088C2E88;
      }
      goto L_088C2DA0;
    }
L_088C2DA0:
    ctx.gpr[31] = (0x088C2DA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    goto L_088C02AC;
L_088C2DA8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2DD8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (32833u << 16u);
      if (branch_taken) {
          goto L_088C2E70;
      }
      goto L_088C2DE0;
    }
L_088C2DE0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1804));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[6] = (28672u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C2E14;
      }
      goto L_088C2DF8;
    }
L_088C2DF8:
    ctx.gpr[7] = (32833u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1803));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2E34;
      }
      goto L_088C2E0C;
    }
L_088C2E0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2E24;
      }
      goto L_088C2E14;
    }
L_088C2E14:
    ctx.gpr[7] = (32833u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1813));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088C2E34;
      }
      goto L_088C2E24;
    }
L_088C2E24:
    ctx.gpr[31] = (0x088C2E2Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_088C02AC;
L_088C2E2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C2E40;
      }
      goto L_088C2E34;
    }
L_088C2E34:
    ctx.gpr[31] = (0x088C2E3Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_088C02AC;
L_088C2E3C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088C2E40;
L_088C2E40:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2E70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x088C2E7Cu);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_088C160C;
L_088C2E7C:
    ctx.gpr[31] = (0x088C2E84u);
    ctx.gpr[4] = (0u | 100u);
    ctx.pc = 0x08AB469Cu;
    return;
L_088C2E84:
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[17] ? 1u : 0u);
    goto L_088C2E88;
L_088C2E88:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[20]);
      if (branch_taken) {
          goto L_088C2CC8;
      }
      goto L_088C2E90;
    }
L_088C2E90:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_088C2E94;
L_088C2E94:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C2EA0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = 0x08AB43ACu;
    return;
L_088C2EA0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088C2F50;
      }
      goto L_088C2EAC;
    }
L_088C2EAC:
    ctx.gpr[31] = (0x088C2EB4u);
    // nop
    goto L_088C15EC;
L_088C2EB4:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[22];
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C2F18;
      }
      goto L_088C2EBC;
    }
L_088C2EBC:
    ctx.gpr[31] = (0x088C2EC4u);
    // nop
    goto L_088C1630;
L_088C2EC4:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[22];
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C2EE0;
      }
      goto L_088C2ECC;
    }
L_088C2ECC:
    ctx.gpr[31] = (0x088C2ED4u);
    ctx.gpr[4] = (0u | 100u);
    ctx.pc = 0x08AB469Cu;
    return;
L_088C2ED4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088C2E94;
      }
      goto L_088C2EDC;
    }
L_088C2EDC:
    ctx.gpr[4] = (28672u << 16u);
    goto L_088C2EE0;
L_088C2EE0:
    ctx.gpr[31] = (0x088C2EE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    goto L_088C02AC;
L_088C2EE8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2F18:
    ctx.gpr[31] = (0x088C2F20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_088C02AC;
L_088C2F20:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2F50:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (32833u << 16u);
      if (branch_taken) {
          goto L_088C2FE4;
      }
      goto L_088C2F58;
    }
L_088C2F58:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1804));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[5] = (28672u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C2F8C;
      }
      goto L_088C2F70;
    }
L_088C2F70:
    ctx.gpr[6] = (32833u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1803));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2FAC;
      }
      goto L_088C2F84;
    }
L_088C2F84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2F9C;
      }
      goto L_088C2F8C;
    }
L_088C2F8C:
    ctx.gpr[6] = (32833u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1813));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C2FAC;
      }
      goto L_088C2F9C;
    }
L_088C2F9C:
    ctx.gpr[31] = (0x088C2FA4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_088C02AC;
L_088C2FA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C2FB8;
      }
      goto L_088C2FAC;
    }
L_088C2FAC:
    ctx.gpr[31] = (0x088C2FB4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_088C02AC;
L_088C2FB4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088C2FB8;
L_088C2FB8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2FE4:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3014:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C3074u);
    ctx.gpr[8] = (0u | 1u);
    ctx.pc = 0x08AB439Cu;
    return;
L_088C3074:
    ctx.gpr[21] = (32833u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1801));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088C3098;
      }
      goto L_088C3088;
    }
L_088C3088:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (32833u << 16u);
      if (branch_taken) {
          goto L_088C30C8;
      }
      goto L_088C3090;
    }
L_088C3090:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_088C3158;
      }
      goto L_088C3098;
    }
L_088C3098:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C30C8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1804));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[6] = (28672u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C30FC;
      }
      goto L_088C30E0;
    }
L_088C30E0:
    ctx.gpr[7] = (32833u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1803));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C311C;
      }
      goto L_088C30F4;
    }
L_088C30F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C310C;
      }
      goto L_088C30FC;
    }
L_088C30FC:
    ctx.gpr[7] = (32833u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1813));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088C311C;
      }
      goto L_088C310C;
    }
L_088C310C:
    ctx.gpr[31] = (0x088C3114u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_088C02AC;
L_088C3114:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C3128;
      }
      goto L_088C311C;
    }
L_088C311C:
    ctx.gpr[31] = (0x088C3124u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_088C02AC;
L_088C3124:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088C3128;
L_088C3128:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[22] = (((ctx.gpr[22] & 0x000000FFu) << 24u) | ((ctx.gpr[22] & 0x0000FF00u) << 8u) | ((ctx.gpr[22] & 0x00FF0000u) >> 8u) | ((ctx.gpr[22] & 0xFF000000u) >> 24u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(62));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088C3170u);
    ctx.gpr[6] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088C3170u) goto L_088C3170;
    return;
L_088C3170:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C334C;
      }
      goto L_088C3180;
    }
L_088C3180:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    goto L_088C3184;
L_088C3184:
    ctx.gpr[5] = (ctx.gpr[22] - ctx.gpr[23]);
    ctx.gpr[4] = (0u | 8192u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8192 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(62));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_088C319C;
    }
    goto L_088C319C;
L_088C319C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088C31B8u);
    ctx.gpr[8] = (0u | 1u);
    ctx.pc = 0x08AB439Cu;
    return;
L_088C31B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088C3268;
      }
      goto L_088C31C4;
    }
L_088C31C4:
    ctx.gpr[31] = (0x088C31CCu);
    // nop
    goto L_088C15EC;
L_088C31CC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[20];
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C3230;
      }
      goto L_088C31D4;
    }
L_088C31D4:
    ctx.gpr[31] = (0x088C31DCu);
    // nop
    goto L_088C1630;
L_088C31DC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[20];
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C31F8;
      }
      goto L_088C31E4;
    }
L_088C31E4:
    ctx.gpr[31] = (0x088C31ECu);
    ctx.gpr[4] = (0u | 100u);
    ctx.pc = 0x08AB469Cu;
    return;
L_088C31EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088C3344;
      }
      goto L_088C31F4;
    }
L_088C31F4:
    ctx.gpr[4] = (28672u << 16u);
    goto L_088C31F8;
L_088C31F8:
    ctx.gpr[31] = (0x088C3200u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    goto L_088C02AC;
L_088C3200:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3230:
    ctx.gpr[31] = (0x088C3238u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_088C02AC;
L_088C3238:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3268:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (32833u << 16u);
      if (branch_taken) {
          goto L_088C32FC;
      }
      goto L_088C3270;
    }
L_088C3270:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1804));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[5] = (28672u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C32A4;
      }
      goto L_088C3288;
    }
L_088C3288:
    ctx.gpr[6] = (32833u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1803));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C32C4;
      }
      goto L_088C329C;
    }
L_088C329C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C32B4;
      }
      goto L_088C32A4;
    }
L_088C32A4:
    ctx.gpr[6] = (32833u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1813));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088C32C4;
      }
      goto L_088C32B4;
    }
L_088C32B4:
    ctx.gpr[31] = (0x088C32BCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_088C02AC;
L_088C32BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C32D0;
      }
      goto L_088C32C4;
    }
L_088C32C4:
    ctx.gpr[31] = (0x088C32CCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_088C02AC;
L_088C32CC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088C32D0;
L_088C32D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C32FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(62));
      if (branch_taken) {
          goto L_088C3320;
      }
      goto L_088C3314;
    }
L_088C3314:
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_088C3320;
      }
      goto L_088C3320;
    }
L_088C3320:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x088C332Cu);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088C332Cu) goto L_088C332C;
    return;
L_088C332C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x088C3338u);
    ctx.gpr[23] = (ctx.gpr[4] + ctx.gpr[23]);
    goto L_088C160C;
L_088C3338:
    ctx.gpr[31] = (0x088C3340u);
    ctx.gpr[4] = (0u | 100u);
    ctx.pc = 0x08AB469Cu;
    return;
L_088C3340:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    goto L_088C3344;
L_088C3344:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
        goto L_088C3184;
    }
    goto L_088C334C;
L_088C334C:
    ctx.gpr[2] = (ctx.gpr[23] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C337C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(17296)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_088C343C;
      }
      goto L_088C33AC;
    }
L_088C33AC:
    ctx.gpr[31] = (0x088C33B4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x088C33B4u) goto L_088C33B4;
    return;
L_088C33B4:
    ctx.gpr[31] = (0x088C33BCu);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x088C33BCu) goto L_088C33BC;
    return;
L_088C33BC:
    ctx.gpr[31] = (0x088C33C4u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x088C33C4u) goto L_088C33C4;
    return;
L_088C33C4:
    ctx.gpr[31] = (0x088C33CCu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x088C33CCu) goto L_088C33CC;
    return;
L_088C33CC:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4484));
    ctx.gpr[31] = (0x088C33E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4252));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088C33E4u) goto L_088C33E4;
    return;
L_088C33E4:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3248));
    ctx.gpr[31] = (0x088C33FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3520));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088C33FCu) goto L_088C33FC;
    return;
L_088C33FC:
    ctx.gpr[4] = (2183u << 16u);
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18136));
    ctx.gpr[31] = (0x088C3414u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18308));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x088C3414u) goto L_088C3414;
    return;
L_088C3414:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088C3420u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088C3420u) goto L_088C3420;
    return;
L_088C3420:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088C3434u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C3434u) goto L_088C3434;
    return;
L_088C3434:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(17240), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(17296), static_cast<std::uint8_t>(0u));
    goto L_088C343C;
L_088C343C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DF4;
      }
      goto L_088C3448;
    }
L_088C3448:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10741)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088C3484;
      }
      goto L_088C3454;
    }
L_088C3454:
    ctx.gpr[31] = (0x088C345Cu);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 212u, 0x088BD6A8u>(ctx, &aot_mem) && ctx.pc == 0x088C345Cu) goto L_088C345C;
    return;
L_088C345C:
    if (ctx.gpr[2] == ctx.gpr[18]) {
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
        goto L_088C3464;
    }
    goto L_088C3464;
L_088C3464:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088C3DF4;
      }
      goto L_088C346C;
    }
L_088C346C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[31] = (0x088C347Cu);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10741), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x088C347Cu) goto L_088C347C;
    return;
L_088C347C:
    ctx.gpr[31] = (0x088C3484u);
    ctx.gpr[4] = (0u | 0u);
    goto L_088C025C;
L_088C3484:
    ctx.gpr[31] = (0x088C348Cu);
    // nop
    goto L_088C02D8;
L_088C348C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C34B0;
      }
      goto L_088C3498;
    }
L_088C3498:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C34B0;
      }
      goto L_088C34A4;
    }
L_088C34A4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C3638;
      }
      goto L_088C34B0;
    }
L_088C34B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8292)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[17] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C35AC;
      }
      goto L_088C34C4;
    }
L_088C34C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8296)));
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3339));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (32833u << 16u);
      if (branch_taken) {
          goto L_088C3520;
      }
      goto L_088C34DC;
    }
L_088C34DC:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2818));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (32833u << 16u);
      if (branch_taken) {
          goto L_088C35A4;
      }
      goto L_088C34F0;
    }
L_088C34F0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2831));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (32703u << 16u);
      if (branch_taken) {
          goto L_088C35A4;
      }
      goto L_088C3500;
    }
L_088C3500:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2819));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-10968)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3520:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3349));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (32833u << 16u);
      if (branch_taken) {
          goto L_088C3558;
      }
      goto L_088C3530;
    }
L_088C3530:
    ctx.gpr[5] = (32833u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3340));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C35A4;
      }
      goto L_088C3544;
    }
L_088C3544:
    ctx.gpr[4] = (28672u << 16u);
    ctx.gpr[31] = (0x088C3550u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_088C02AC;
L_088C3550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C35AC;
      }
      goto L_088C3558;
    }
L_088C3558:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3350));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C35A4;
      }
      goto L_088C3568;
    }
L_088C3568:
    ctx.gpr[4] = (28672u << 16u);
    ctx.gpr[31] = (0x088C3574u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_088C02AC;
L_088C3574:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C35AC;
      }
      goto L_088C357C;
    }
L_088C357C:
    ctx.gpr[4] = (28672u << 16u);
    ctx.gpr[31] = (0x088C3588u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    goto L_088C02AC;
L_088C3588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C35AC;
      }
      goto L_088C3590;
    }
L_088C3590:
    ctx.gpr[4] = (28672u << 16u);
    ctx.gpr[31] = (0x088C359Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_088C02AC;
L_088C359C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C35AC;
      }
      goto L_088C35A4;
    }
L_088C35A4:
    ctx.gpr[31] = (0x088C35ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088C02AC;
L_088C35AC:
    ctx.gpr[31] = (0x088C35B4u);
    // nop
    goto L_088C02D8;
L_088C35B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C35E0;
      }
      goto L_088C35C0;
    }
L_088C35C0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[5] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C35E0;
      }
      goto L_088C35C8;
    }
L_088C35C8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C35E0;
      }
      goto L_088C35D4;
    }
L_088C35D4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C35F8;
      }
      goto L_088C35E0;
    }
L_088C35E0:
    ctx.gpr[31] = (0x088C35E8u);
    // nop
    goto L_088C1630;
L_088C35E8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C35F8;
      }
      goto L_088C35F0;
    }
L_088C35F0:
    ctx.gpr[31] = (0x088C35F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    goto L_088C02AC;
L_088C35F8:
    ctx.gpr[31] = (0x088C3600u);
    // nop
    goto L_088C15EC;
L_088C3600:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C3610;
      }
      goto L_088C3608;
    }
L_088C3608:
    ctx.gpr[31] = (0x088C3610u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_088C02AC;
L_088C3610:
    ctx.gpr[31] = (0x088C3618u);
    // nop
    goto L_088C02D8;
L_088C3618:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088C3638;
      }
      goto L_088C3620;
    }
L_088C3620:
    ctx.gpr[31] = (0x088C3628u);
    // nop
    goto L_088C029C;
L_088C3628:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088C3638;
      }
      goto L_088C3630;
    }
L_088C3630:
    ctx.gpr[31] = (0x088C3638u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    goto L_088C02AC;
L_088C3638:
    ctx.gpr[31] = (0x088C3640u);
    ctx.gpr[17] = (0u | 2u);
    goto L_088C1810;
L_088C3640:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C365C;
      }
      goto L_088C3648;
    }
L_088C3648:
    ctx.gpr[31] = (0x088C3650u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 717u, 0x088C7B78u>(ctx, &aot_mem) && ctx.pc == 0x088C3650u) goto L_088C3650;
    return;
L_088C3650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10720), ctx.gpr[17]);
    goto L_088C365C;
L_088C365C:
    ctx.gpr[31] = (0x088C3664u);
    // nop
    goto L_088C02D8;
L_088C3664:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C36A4;
      }
      goto L_088C366C;
    }
L_088C366C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10724)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088C368C;
      }
      goto L_088C367C;
    }
L_088C367C:
    ctx.gpr[31] = (0x088C3684u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088C1E88;
L_088C3684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C36A4;
      }
      goto L_088C368C;
    }
L_088C368C:
    ctx.gpr[31] = (0x088C3694u);
    // nop
    goto L_088C1868;
L_088C3694:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C36A4;
      }
      goto L_088C369C;
    }
L_088C369C:
    ctx.gpr[31] = (0x088C36A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088C1E88;
L_088C36A4:
    ctx.gpr[31] = (0x088C36ACu);
    // nop
    goto L_088C02D8;
L_088C36AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088C36F0;
      }
      goto L_088C36C0;
    }
L_088C36C0:
    ctx.gpr[8] = (28672u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_088C36E0;
      }
      goto L_088C36D0;
    }
L_088C36D0:
    ctx.gpr[8] = (28672u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088C36F0;
      }
      goto L_088C36E0;
    }
L_088C36E0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10724)));
    ctx.gpr[6] = (0u | 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
        goto L_088C36F0;
    }
    goto L_088C36F0;
L_088C36F0:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2001 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C3DE0;
      }
      goto L_088C36F8;
    }
L_088C36F8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 4001u);
      if (branch_taken) {
          goto L_088C3768;
      }
      goto L_088C3700;
    }
L_088C3700:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 1000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 1002 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C3734;
      }
      goto L_088C370C;
    }
L_088C370C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 88 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3714;
    }
L_088C3714:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C371C;
    }
L_088C371C:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-10912)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3734:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2000 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C3754;
      }
      goto L_088C373C;
    }
L_088C373C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 1001 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8292)));
      if (branch_taken) {
          goto L_088C37A0;
      }
      goto L_088C3748;
    }
L_088C3748:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_088C37D0;
      }
      goto L_088C3750;
    }
L_088C3750:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2000 ? 1u : 0u);
    goto L_088C3754;
L_088C3754:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C375C;
    }
L_088C375C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8292)));
      if (branch_taken) {
          goto L_088C3814;
      }
      goto L_088C3764;
    }
L_088C3764:
    ctx.gpr[5] = (0u | 4001u);
    goto L_088C3768;
L_088C3768:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4000u);
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3770;
    }
L_088C3770:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(54));
      if (branch_taken) {
          goto L_088C387C;
      }
      goto L_088C3778;
    }
L_088C3778:
    ctx.gpr[5] = (0u | 3001u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3000u);
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3784;
    }
L_088C3784:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(54));
      if (branch_taken) {
          goto L_088C37E8;
      }
      goto L_088C378C;
    }
L_088C378C:
    ctx.gpr[5] = (0u | 2001u);
    if (ctx.gpr[7] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8292)));
        goto L_088C3860;
    }
    goto L_088C3798;
L_088C3798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C37A0;
    }
L_088C37A0:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(54));
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C37A8;
    }
L_088C37A8:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[7] = (305u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8284));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17304));
    ctx.gpr[31] = (0x088C37C0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(11520));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 309u, 0x0897EBA4u>(ctx, &aot_mem) && ctx.pc == 0x088C37C0u) goto L_088C37C0;
    return;
L_088C37C0:
    ctx.gpr[31] = (0x088C37C8u);
    ctx.gpr[4] = (0u | 1001u);
    goto L_088C025C;
L_088C37C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C37D0;
    }
L_088C37D0:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C37D8;
    }
L_088C37D8:
    ctx.gpr[31] = (0x088C37E0u);
    ctx.gpr[4] = (0u | 3000u);
    goto L_088C025C;
L_088C37E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C37E8;
    }
L_088C37E8:
    ctx.gpr[31] = (0x088C37F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10540));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 365u, 0x0897F230u>(ctx, &aot_mem) && ctx.pc == 0x088C37F0u) goto L_088C37F0;
    return;
L_088C37F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C37F8;
    }
L_088C37F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10740), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088C380Cu);
    ctx.gpr[4] = (0u | 3001u);
    goto L_088C025C;
L_088C380C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3814;
    }
L_088C3814:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C381C;
    }
L_088C381C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 350 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(54));
      if (branch_taken) {
          goto L_088C3838;
      }
      goto L_088C382C;
    }
L_088C382C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3838;
    }
L_088C3838:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[7] = (305u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8284));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17304));
    ctx.gpr[31] = (0x088C3850u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(11520));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 344u, 0x0897EE78u>(ctx, &aot_mem) && ctx.pc == 0x088C3850u) goto L_088C3850;
    return;
L_088C3850:
    ctx.gpr[31] = (0x088C3858u);
    ctx.gpr[4] = (0u | 2001u);
    goto L_088C025C;
L_088C3858:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3860;
    }
L_088C3860:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C386C;
    }
L_088C386C:
    ctx.gpr[31] = (0x088C3874u);
    ctx.gpr[4] = (0u | 4000u);
    goto L_088C025C;
L_088C3874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C387C;
    }
L_088C387C:
    ctx.gpr[31] = (0x088C3884u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10540));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 365u, 0x0897F230u>(ctx, &aot_mem) && ctx.pc == 0x088C3884u) goto L_088C3884;
    return;
L_088C3884:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C388C;
    }
L_088C388C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10740), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088C38A0u);
    ctx.gpr[4] = (0u | 4001u);
    goto L_088C025C;
L_088C38A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C38A8;
    }
L_088C38A8:
    ctx.gpr[31] = (0x088C38B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 325u, 0x088BDDC8u>(ctx, &aot_mem) && ctx.pc == 0x088C38B0u) goto L_088C38B0;
    return;
L_088C38B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C38B8;
    }
L_088C38B8:
    ctx.gpr[31] = (0x088C38C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 333u, 0x088BDE28u>(ctx, &aot_mem) && ctx.pc == 0x088C38C0u) goto L_088C38C0;
    return;
L_088C38C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C38C8;
    }
L_088C38C8:
    ctx.gpr[31] = (0x088C38D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 338u, 0x088BDE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C38D0u) goto L_088C38D0;
    return;
L_088C38D0:
    ctx.gpr[31] = (0x088C38D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 345u, 0x088BDF10u>(ctx, &aot_mem) && ctx.pc == 0x088C38D8u) goto L_088C38D8;
    return;
L_088C38D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C38E0;
    }
L_088C38E0:
    ctx.gpr[31] = (0x088C38E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C3E10;
L_088C38E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C38F0;
    }
L_088C38F0:
    ctx.gpr[31] = (0x088C38F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 356u, 0x088BDFB8u>(ctx, &aot_mem) && ctx.pc == 0x088C38F8u) goto L_088C38F8;
    return;
L_088C38F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3900;
    }
L_088C3900:
    ctx.gpr[31] = (0x088C3908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 366u, 0x088BE034u>(ctx, &aot_mem) && ctx.pc == 0x088C3908u) goto L_088C3908;
    return;
L_088C3908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3910;
    }
L_088C3910:
    ctx.gpr[31] = (0x088C3918u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 376u, 0x088BE0B0u>(ctx, &aot_mem) && ctx.pc == 0x088C3918u) goto L_088C3918;
    return;
L_088C3918:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3920;
    }
L_088C3920:
    ctx.gpr[31] = (0x088C3928u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 408u, 0x088BE260u>(ctx, &aot_mem) && ctx.pc == 0x088C3928u) goto L_088C3928;
    return;
L_088C3928:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3930;
    }
L_088C3930:
    ctx.gpr[31] = (0x088C3938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 428u, 0x088BE374u>(ctx, &aot_mem) && ctx.pc == 0x088C3938u) goto L_088C3938;
    return;
L_088C3938:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3940;
    }
L_088C3940:
    ctx.gpr[31] = (0x088C3948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 431u, 0x088BE398u>(ctx, &aot_mem) && ctx.pc == 0x088C3948u) goto L_088C3948;
    return;
L_088C3948:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3950;
    }
L_088C3950:
    ctx.gpr[31] = (0x088C3958u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 437u, 0x088BE3D8u>(ctx, &aot_mem) && ctx.pc == 0x088C3958u) goto L_088C3958;
    return;
L_088C3958:
    ctx.gpr[31] = (0x088C3960u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 444u, 0x088BE42Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3960u) goto L_088C3960;
    return;
L_088C3960:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3968;
    }
L_088C3968:
    ctx.gpr[31] = (0x088C3970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 451u, 0x088BE480u>(ctx, &aot_mem) && ctx.pc == 0x088C3970u) goto L_088C3970;
    return;
L_088C3970:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3978;
    }
L_088C3978:
    ctx.gpr[31] = (0x088C3980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 457u, 0x088BE4C8u>(ctx, &aot_mem) && ctx.pc == 0x088C3980u) goto L_088C3980;
    return;
L_088C3980:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3988;
    }
L_088C3988:
    ctx.gpr[31] = (0x088C3990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 459u, 0x088BE4E4u>(ctx, &aot_mem) && ctx.pc == 0x088C3990u) goto L_088C3990;
    return;
L_088C3990:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3998;
    }
L_088C3998:
    ctx.gpr[31] = (0x088C39A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 463u, 0x088BE530u>(ctx, &aot_mem) && ctx.pc == 0x088C39A0u) goto L_088C39A0;
    return;
L_088C39A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C39A8;
    }
L_088C39A8:
    ctx.gpr[31] = (0x088C39B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 477u, 0x088BE60Cu>(ctx, &aot_mem) && ctx.pc == 0x088C39B0u) goto L_088C39B0;
    return;
L_088C39B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C39B8;
    }
L_088C39B8:
    ctx.gpr[31] = (0x088C39C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 498u, 0x088BE738u>(ctx, &aot_mem) && ctx.pc == 0x088C39C0u) goto L_088C39C0;
    return;
L_088C39C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C39C8;
    }
L_088C39C8:
    ctx.gpr[31] = (0x088C39D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 514u, 0x088BE838u>(ctx, &aot_mem) && ctx.pc == 0x088C39D0u) goto L_088C39D0;
    return;
L_088C39D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C39D8;
    }
L_088C39D8:
    ctx.gpr[31] = (0x088C39E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 527u, 0x088BE8DCu>(ctx, &aot_mem) && ctx.pc == 0x088C39E0u) goto L_088C39E0;
    return;
L_088C39E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C39E8;
    }
L_088C39E8:
    ctx.gpr[31] = (0x088C39F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 537u, 0x088BE9A8u>(ctx, &aot_mem) && ctx.pc == 0x088C39F0u) goto L_088C39F0;
    return;
L_088C39F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C39F8;
    }
L_088C39F8:
    ctx.gpr[4] = (15u << 16u);
    ctx.gpr[31] = (0x088C3A04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16960));
    ctx.pc = 0x08AB469Cu;
    return;
L_088C3A04:
    ctx.gpr[31] = (0x088C3A0Cu);
    ctx.gpr[4] = (0u | 24u);
    goto L_088C025C;
L_088C3A0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3A14;
    }
L_088C3A14:
    ctx.gpr[31] = (0x088C3A1Cu);
    ctx.gpr[4] = (0u | 25u);
    goto L_088C025C;
L_088C3A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3A24;
    }
L_088C3A24:
    ctx.gpr[31] = (0x088C3A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 545u, 0x088BEA20u>(ctx, &aot_mem) && ctx.pc == 0x088C3A2Cu) goto L_088C3A2C;
    return;
L_088C3A2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3A34;
    }
L_088C3A34:
    ctx.gpr[31] = (0x088C3A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 555u, 0x088BEAECu>(ctx, &aot_mem) && ctx.pc == 0x088C3A3Cu) goto L_088C3A3C;
    return;
L_088C3A3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3A44;
    }
L_088C3A44:
    ctx.gpr[4] = (15u << 16u);
    ctx.gpr[31] = (0x088C3A50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16960));
    ctx.pc = 0x08AB469Cu;
    return;
L_088C3A50:
    ctx.gpr[31] = (0x088C3A58u);
    ctx.gpr[4] = (0u | 28u);
    goto L_088C025C;
L_088C3A58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3A60;
    }
L_088C3A60:
    ctx.gpr[31] = (0x088C3A68u);
    ctx.gpr[4] = (0u | 28u);
    goto L_088C025C;
L_088C3A68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3A70;
    }
L_088C3A70:
    ctx.gpr[31] = (0x088C3A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 563u, 0x088BEB64u>(ctx, &aot_mem) && ctx.pc == 0x088C3A78u) goto L_088C3A78;
    return;
L_088C3A78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3A80;
    }
L_088C3A80:
    ctx.gpr[31] = (0x088C3A88u);
    // nop
    goto L_088C240C;
L_088C3A88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3A90;
    }
L_088C3A90:
    ctx.gpr[31] = (0x088C3A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 583u, 0x088BECA4u>(ctx, &aot_mem) && ctx.pc == 0x088C3A98u) goto L_088C3A98;
    return;
L_088C3A98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3AA0;
    }
L_088C3AA0:
    ctx.gpr[4] = (15u << 16u);
    ctx.gpr[31] = (0x088C3AACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16960));
    ctx.pc = 0x08AB469Cu;
    return;
L_088C3AAC:
    ctx.gpr[31] = (0x088C3AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 596u, 0x088BED68u>(ctx, &aot_mem) && ctx.pc == 0x088C3AB4u) goto L_088C3AB4;
    return;
L_088C3AB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3ABC;
    }
L_088C3ABC:
    ctx.gpr[31] = (0x088C3AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 598u, 0x088BED84u>(ctx, &aot_mem) && ctx.pc == 0x088C3AC4u) goto L_088C3AC4;
    return;
L_088C3AC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3ACC;
    }
L_088C3ACC:
    ctx.gpr[31] = (0x088C3AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 600u, 0x088BEDA4u>(ctx, &aot_mem) && ctx.pc == 0x088C3AD4u) goto L_088C3AD4;
    return;
L_088C3AD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3ADC;
    }
L_088C3ADC:
    ctx.gpr[31] = (0x088C3AE4u);
    // nop
    goto L_088C2428;
L_088C3AE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3AEC;
    }
L_088C3AEC:
    ctx.gpr[31] = (0x088C3AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 632u, 0x088BEF1Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3AF4u) goto L_088C3AF4;
    return;
L_088C3AF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3AFC;
    }
L_088C3AFC:
    ctx.gpr[4] = (15u << 16u);
    ctx.gpr[31] = (0x088C3B08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16960));
    ctx.pc = 0x08AB469Cu;
    return;
L_088C3B08:
    ctx.gpr[31] = (0x088C3B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 648u, 0x088BF008u>(ctx, &aot_mem) && ctx.pc == 0x088C3B10u) goto L_088C3B10;
    return;
L_088C3B10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3B18;
    }
L_088C3B18:
    ctx.gpr[31] = (0x088C3B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 650u, 0x088BF024u>(ctx, &aot_mem) && ctx.pc == 0x088C3B20u) goto L_088C3B20;
    return;
L_088C3B20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3B28;
    }
L_088C3B28:
    ctx.gpr[31] = (0x088C3B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 652u, 0x088BF044u>(ctx, &aot_mem) && ctx.pc == 0x088C3B30u) goto L_088C3B30;
    return;
L_088C3B30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3B38;
    }
L_088C3B38:
    ctx.gpr[31] = (0x088C3B40u);
    // nop
    goto L_088C2444;
L_088C3B40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3B48;
    }
L_088C3B48:
    ctx.gpr[31] = (0x088C3B50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 654u, 0x088BF060u>(ctx, &aot_mem) && ctx.pc == 0x088C3B50u) goto L_088C3B50;
    return;
L_088C3B50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3B58;
    }
L_088C3B58:
    ctx.gpr[4] = (15u << 16u);
    ctx.gpr[31] = (0x088C3B64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16960));
    ctx.pc = 0x08AB469Cu;
    return;
L_088C3B64:
    ctx.gpr[31] = (0x088C3B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 670u, 0x088BF14Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3B6Cu) goto L_088C3B6C;
    return;
L_088C3B6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3B74;
    }
L_088C3B74:
    ctx.gpr[31] = (0x088C3B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 672u, 0x088BF168u>(ctx, &aot_mem) && ctx.pc == 0x088C3B7Cu) goto L_088C3B7C;
    return;
L_088C3B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3B84;
    }
L_088C3B84:
    ctx.gpr[31] = (0x088C3B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 674u, 0x088BF188u>(ctx, &aot_mem) && ctx.pc == 0x088C3B8Cu) goto L_088C3B8C;
    return;
L_088C3B8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3B94;
    }
L_088C3B94:
    ctx.gpr[4] = (15u << 16u);
    ctx.gpr[31] = (0x088C3BA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16960));
    ctx.pc = 0x08AB469Cu;
    return;
L_088C3BA0:
    ctx.gpr[31] = (0x088C3BA8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 687u, 0x088BF210u>(ctx, &aot_mem) && ctx.pc == 0x088C3BA8u) goto L_088C3BA8;
    return;
L_088C3BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3BB0;
    }
L_088C3BB0:
    ctx.gpr[31] = (0x088C3BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 733u, 0x088BF518u>(ctx, &aot_mem) && ctx.pc == 0x088C3BB8u) goto L_088C3BB8;
    return;
L_088C3BB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3BC0;
    }
L_088C3BC0:
    ctx.gpr[31] = (0x088C3BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 740u, 0x088BF580u>(ctx, &aot_mem) && ctx.pc == 0x088C3BC8u) goto L_088C3BC8;
    return;
L_088C3BC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3BD0;
    }
L_088C3BD0:
    ctx.gpr[31] = (0x088C3BD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 742u, 0x088BF59Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3BD8u) goto L_088C3BD8;
    return;
L_088C3BD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3BE0;
    }
L_088C3BE0:
    ctx.gpr[31] = (0x088C3BE8u);
    // nop
    goto L_088C2460;
L_088C3BE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3BF0;
    }
L_088C3BF0:
    ctx.gpr[31] = (0x088C3BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 747u, 0x088BF5E4u>(ctx, &aot_mem) && ctx.pc == 0x088C3BF8u) goto L_088C3BF8;
    return;
L_088C3BF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3C00;
    }
L_088C3C00:
    ctx.gpr[31] = (0x088C3C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 767u, 0x088BF708u>(ctx, &aot_mem) && ctx.pc == 0x088C3C08u) goto L_088C3C08;
    return;
L_088C3C08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3C10;
    }
L_088C3C10:
    ctx.gpr[31] = (0x088C3C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 781u, 0x088BF7B8u>(ctx, &aot_mem) && ctx.pc == 0x088C3C18u) goto L_088C3C18;
    return;
L_088C3C18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3C20;
    }
L_088C3C20:
    ctx.gpr[31] = (0x088C3C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 786u, 0x088BF804u>(ctx, &aot_mem) && ctx.pc == 0x088C3C28u) goto L_088C3C28;
    return;
L_088C3C28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3C30;
    }
L_088C3C30:
    ctx.gpr[31] = (0x088C3C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 792u, 0x088BF844u>(ctx, &aot_mem) && ctx.pc == 0x088C3C38u) goto L_088C3C38;
    return;
L_088C3C38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3C40;
    }
L_088C3C40:
    ctx.gpr[31] = (0x088C3C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 809u, 0x088BF948u>(ctx, &aot_mem) && ctx.pc == 0x088C3C48u) goto L_088C3C48;
    return;
L_088C3C48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3C50;
    }
L_088C3C50:
    ctx.gpr[31] = (0x088C3C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 814u, 0x088BF990u>(ctx, &aot_mem) && ctx.pc == 0x088C3C58u) goto L_088C3C58;
    return;
L_088C3C58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3C60;
    }
L_088C3C60:
    ctx.gpr[31] = (0x088C3C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 816u, 0x088BF9B0u>(ctx, &aot_mem) && ctx.pc == 0x088C3C68u) goto L_088C3C68;
    return;
L_088C3C68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3C70;
    }
L_088C3C70:
    ctx.gpr[31] = (0x088C3C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 821u, 0x088BF9F4u>(ctx, &aot_mem) && ctx.pc == 0x088C3C78u) goto L_088C3C78;
    return;
L_088C3C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3C80;
    }
L_088C3C80:
    ctx.gpr[31] = (0x088C3C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 834u, 0x088BFAC4u>(ctx, &aot_mem) && ctx.pc == 0x088C3C88u) goto L_088C3C88;
    return;
L_088C3C88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3C90;
    }
L_088C3C90:
    ctx.gpr[31] = (0x088C3C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 844u, 0x088BFB48u>(ctx, &aot_mem) && ctx.pc == 0x088C3C98u) goto L_088C3C98;
    return;
L_088C3C98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3CA0;
    }
L_088C3CA0:
    ctx.gpr[31] = (0x088C3CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 846u, 0x088BFB68u>(ctx, &aot_mem) && ctx.pc == 0x088C3CA8u) goto L_088C3CA8;
    return;
L_088C3CA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3CB0;
    }
L_088C3CB0:
    ctx.gpr[31] = (0x088C3CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 860u, 0x088BFC3Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3CB8u) goto L_088C3CB8;
    return;
L_088C3CB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3CC0;
    }
L_088C3CC0:
    ctx.gpr[31] = (0x088C3CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 865u, 0x088BFC80u>(ctx, &aot_mem) && ctx.pc == 0x088C3CC8u) goto L_088C3CC8;
    return;
L_088C3CC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3CD0;
    }
L_088C3CD0:
    ctx.gpr[31] = (0x088C3CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 870u, 0x088BFCCCu>(ctx, &aot_mem) && ctx.pc == 0x088C3CD8u) goto L_088C3CD8;
    return;
L_088C3CD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3CE0;
    }
L_088C3CE0:
    ctx.gpr[31] = (0x088C3CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 876u, 0x088BFD0Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3CE8u) goto L_088C3CE8;
    return;
L_088C3CE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3CF0;
    }
L_088C3CF0:
    ctx.gpr[31] = (0x088C3CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 888u, 0x088BFDE4u>(ctx, &aot_mem) && ctx.pc == 0x088C3CF8u) goto L_088C3CF8;
    return;
L_088C3CF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3D00;
    }
L_088C3D00:
    ctx.gpr[31] = (0x088C3D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 890u, 0x088BFE00u>(ctx, &aot_mem) && ctx.pc == 0x088C3D08u) goto L_088C3D08;
    return;
L_088C3D08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3D10;
    }
L_088C3D10:
    ctx.gpr[31] = (0x088C3D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 892u, 0x088BFE20u>(ctx, &aot_mem) && ctx.pc == 0x088C3D18u) goto L_088C3D18;
    return;
L_088C3D18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3D20;
    }
L_088C3D20:
    ctx.gpr[31] = (0x088C3D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 897u, 0x088BFE64u>(ctx, &aot_mem) && ctx.pc == 0x088C3D28u) goto L_088C3D28;
    return;
L_088C3D28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3D30;
    }
L_088C3D30:
    ctx.gpr[31] = (0x088C3D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 907u, 0x088BFF08u>(ctx, &aot_mem) && ctx.pc == 0x088C3D38u) goto L_088C3D38;
    return;
L_088C3D38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3D40;
    }
L_088C3D40:
    ctx.gpr[31] = (0x088C3D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 909u, 0x088BFF3Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3D48u) goto L_088C3D48;
    return;
L_088C3D48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3D50;
    }
L_088C3D50:
    ctx.gpr[31] = (0x088C3D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 911u, 0x088BFF5Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3D58u) goto L_088C3D58;
    return;
L_088C3D58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3D60;
    }
L_088C3D60:
    ctx.gpr[31] = (0x088C3D68u);
    // nop
    goto L_088C0008;
L_088C3D68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3D70;
    }
L_088C3D70:
    ctx.gpr[4] = (15u << 16u);
    ctx.gpr[31] = (0x088C3D7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16960));
    ctx.pc = 0x08AB469Cu;
    return;
L_088C3D7C:
    ctx.gpr[31] = (0x088C3D84u);
    // nop
    goto L_088C00E4;
L_088C3D84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3D8C;
    }
L_088C3D8C:
    ctx.gpr[31] = (0x088C3D94u);
    // nop
    goto L_088C0100;
L_088C3D94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3D9C;
    }
L_088C3D9C:
    ctx.gpr[4] = (15u << 16u);
    ctx.gpr[31] = (0x088C3DA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16960));
    ctx.pc = 0x08AB469Cu;
    return;
L_088C3DA8:
    ctx.gpr[31] = (0x088C3DB0u);
    // nop
    goto L_088C0120;
L_088C3DB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3DB8;
    }
L_088C3DB8:
    ctx.gpr[31] = (0x088C3DC0u);
    // nop
    goto L_088C015C;
L_088C3DC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DD0;
      }
      goto L_088C3DC8;
    }
L_088C3DC8:
    ctx.gpr[31] = (0x088C3DD0u);
    // nop
    goto L_088C01D8;
L_088C3DD0:
    ctx.gpr[31] = (0x088C3DD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C109C;
L_088C3DD8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_088C3DE0;
L_088C3DE0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 88 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3DF4;
      }
      goto L_088C3DEC;
    }
L_088C3DEC:
    ctx.gpr[31] = (0x088C3DF4u);
    // nop
    goto L_088C0390;
L_088C3DF4:
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
L_088C3E10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C3E3Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 203u, 0x0897E270u>(ctx, &aot_mem) && ctx.pc == 0x088C3E3Cu) goto L_088C3E3C;
    return;
L_088C3E3C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[18] = (2222u << 16u);
      if (branch_taken) {
          goto L_088C3E60;
      }
      goto L_088C3E44;
    }
L_088C3E44:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(22736));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088C3E84;
      }
      goto L_088C3E60;
    }
L_088C3E60:
    ctx.gpr[31] = (0x088C3E68u);
    ctx.gpr[4] = (28672u << 16u);
    goto L_088C02AC;
L_088C3E68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3E84:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C3E84;
      }
      goto L_088C3E98;
    }
L_088C3E98:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 0u);
    goto L_088C3EAC;
L_088C3EAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(10600)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (static_cast<std::int32_t>(ctx.gpr[9]) <= 0) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_088C3EEC;
    }
    goto L_088C3EC0;
L_088C3EC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[5] = (ctx.gpr[7] << 2u);
      if (branch_taken) {
          goto L_088C3EE8;
      }
      goto L_088C3ECC;
    }
L_088C3ECC:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    goto L_088C3EE8;
L_088C3EE8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_088C3EEC;
L_088C3EEC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(164));
      if (branch_taken) {
          goto L_088C3EAC;
      }
      goto L_088C3EF8;
    }
L_088C3EF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C3F78;
      }
      goto L_088C3F00;
    }
L_088C3F00:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088C3F4C;
      }
      goto L_088C3F08;
    }
L_088C3F08:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088C3F30;
      }
      goto L_088C3F14;
    }
L_088C3F14:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
      if (branch_taken) {
          goto L_088C3F78;
      }
      goto L_088C3F30;
    }
L_088C3F30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(10600)));
        goto L_088C3F7C;
    }
    goto L_088C3F40;
L_088C3F40:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
      if (branch_taken) {
          goto L_088C3F78;
      }
      goto L_088C3F4C;
    }
L_088C3F4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[7]);
      if (branch_taken) {
          goto L_088C3F78;
      }
      goto L_088C3F64;
    }
L_088C3F64:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    goto L_088C3F78;
L_088C3F78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(10600)));
    goto L_088C3F7C;
L_088C3F7C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 2u);
    goto L_088C3F84;
L_088C3F84:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    if (ctx.gpr[7] == ctx.gpr[6]) {
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
        goto L_088C3FAC;
    }
    goto L_088C3F90;
L_088C3F90:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(164));
      if (branch_taken) {
          goto L_088C3F84;
      }
      goto L_088C3FA0;
    }
L_088C3FA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 5u, 0x088C405Cu>(ctx, &aot_mem); return;
      }
      goto L_088C3FA8;
    }
L_088C3FA8:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_088C3FAC;
L_088C3FAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(17240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10600)));
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(54));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.pc = 0x088C4000u; return;
}

void recomp_unit_0047(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0047_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_47(Runtime &runtime) {
    runtime.register_generated_unit(47u, 0x088C0000u, 16384u, &recomp_unit_0047, &recomp_unit_0047_entry);
    runtime.register_function(0x088C0000u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0008u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0020u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C002Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0040u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0048u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0068u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C007Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C008Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0094u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C00A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C00A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C00A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C00BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C00C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C00D0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C00E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C00F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0100u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0110u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0120u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0140u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0148u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0150u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C015Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0170u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C017Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C018Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0194u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C01A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C01B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C01C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C01C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C01D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C01F8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0204u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C020Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0210u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0220u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0230u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C023Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0244u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C024Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C025Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0278u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0280u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0288u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0290u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C029Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C02ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C02C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C02CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C02D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C02E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0308u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0310u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0318u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0320u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C032Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C033Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0360u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0368u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0370u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0378u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0380u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0390u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C03B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C03B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C03C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C03C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C03D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C03F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C03FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0404u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C040Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0418u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0438u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0450u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0464u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0478u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C048Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C049Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C04ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C04C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C04D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C04E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C04F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0504u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0514u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0528u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C053Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0550u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0564u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0578u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0594u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C05B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C05ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0608u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C061Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0660u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0680u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0694u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C06B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C06B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C06CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C06D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C06DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C06ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C06FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0708u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0720u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0728u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0734u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C073Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0748u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C074Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0754u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C075Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0764u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C076Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0774u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0780u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0784u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0788u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0790u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C079Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C07A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C07A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C07B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C07BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C07C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C07CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C07D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C07E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C07ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C07F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C07FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0804u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0810u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0820u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0830u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0838u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0840u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0850u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0868u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C088Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C08ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0984u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0994u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C09B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C09C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C09E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0A28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0A48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0A64u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0A80u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0A90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0A98u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0AC0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0AD8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0AECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B00u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B14u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B3Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B44u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B5Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B6Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B80u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B88u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0BA0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0BB0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0BD4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0C18u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0C20u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0C2Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0C3Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0C60u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0C78u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0C90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0CA4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0CD8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0CF0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0CFCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0D0Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0D14u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0D28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0D44u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0D5Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0D64u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0D74u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0D7Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0D88u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0D90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0DA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0DD8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0DF8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E00u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E10u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E20u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E30u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E3Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E5Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E80u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E94u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0EA4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0EA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0EACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0EBCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0ECCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0EE8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0F14u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0F28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0F38u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0F40u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0F44u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0F4Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0F58u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0F68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0F7Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0F8Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0F94u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0F9Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0FB4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0FE8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0FFCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1028u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1030u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C103Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C104Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1060u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1070u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1078u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1080u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C109Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C10B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C10B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C10C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C10D0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C10D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C10E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C10ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1118u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1120u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1128u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1130u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1138u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1140u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1150u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1158u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1160u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1168u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1170u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1178u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1180u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1188u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1190u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C11A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C11A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C11B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C11B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C11C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C11C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C11D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C11D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C11E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C11E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C11F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1204u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1220u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1234u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C123Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C124Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1260u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1274u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1280u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1294u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C12A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C12B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C12B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C12C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C12CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C12DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C12ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C12F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1300u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1310u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1318u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1320u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1334u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1344u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1354u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C136Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1384u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1394u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C139Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C13A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C13B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C13B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C13C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C13CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C13D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C13E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C13E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C13F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C13F8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1400u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1408u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1414u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C142Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1434u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1444u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1450u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1510u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C152Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1534u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1544u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C154Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1568u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C157Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1590u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C15ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C15B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C15C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C15CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C15DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C15ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C15FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C160Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1624u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1630u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C164Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C165Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1664u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C166Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1678u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1680u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1688u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1690u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1698u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C16A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C16B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C16C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C16D0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C16ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C16FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1704u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1708u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C171Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1730u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1738u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1744u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1778u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1780u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1788u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C178Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C17A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C17A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C17C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C17D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C17DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C17F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1800u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1808u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1810u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1824u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1834u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C183Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1844u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1850u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1854u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1868u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1880u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1890u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1898u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1904u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C190Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1914u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1920u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1928u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1930u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1934u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1938u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1940u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1948u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1950u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1958u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1960u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1968u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1970u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1974u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C198Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C19A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C19B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C19C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C19D0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C19DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C19E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C19E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C19F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C19FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A04u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A0Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A10u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A18u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A38u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A44u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A54u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A5Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A64u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A6Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A74u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A78u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A80u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A98u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1AA0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1AA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1AB0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1AB4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1ABCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1AC4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1ACCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1AD4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1AE0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1AE8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1AF0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1AF8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B00u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B04u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B10u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B18u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B20u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B30u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B3Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B44u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B4Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B54u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B5Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B64u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B80u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B88u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B98u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B9Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1BBCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1BCCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1BDCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1BFCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C04u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C0Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C14u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C20u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C34u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C40u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C4Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C58u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C64u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C8Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C94u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C9Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1CA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1CB8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1CC8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1CD0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1CE8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D00u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D18u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D24u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D30u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D38u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D40u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D50u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D58u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D60u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D80u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D98u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1DB0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1DBCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1DC8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1DD8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1DE8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1DF0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E08u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E14u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E20u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E30u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E38u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E40u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E50u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E58u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E7Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E88u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1EA0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1EA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1EBCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1ED4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1EE8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1EF0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1EF8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F00u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F08u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F10u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F18u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F20u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F34u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F3Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F44u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F4Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F54u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F5Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F64u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F6Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F80u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F88u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F98u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1FA0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1FA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1FB0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1FB8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1FC0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1FC8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1FD0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1FD8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1FE4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1FF8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2000u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2008u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2010u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2018u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2020u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2028u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2030u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2038u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2040u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C204Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2054u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C205Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2064u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C206Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2074u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2080u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C208Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2098u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C20A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C20B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C20B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C20BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C20C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C20CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C20D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C20E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2110u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C211Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C212Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2134u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2140u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C214Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2158u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C216Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2174u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C217Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2188u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2190u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C21A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C21C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C21E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C220Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2214u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2224u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C223Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2244u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C225Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C226Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C227Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C22A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C22BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C22C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C22D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C22E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2304u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C234Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2358u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2370u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2378u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2398u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C23ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C23B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C23C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C23E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C240Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C241Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2428u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2438u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2444u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2454u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2460u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2474u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C247Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C248Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C249Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C24BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C24CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C24D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C24E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C24F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2500u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2508u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2510u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2524u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2538u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2544u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C254Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C255Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2570u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C257Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C258Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C25A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C25ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C25C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C25D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C25E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C25F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2600u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2608u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2610u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2618u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2620u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2628u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2630u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2638u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2640u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2648u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C264Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2654u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C265Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C26D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C26ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C26FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2710u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C271Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C272Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2740u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C274Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C275Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2770u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C277Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C278Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C27A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C27ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C27BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C27D0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C27DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C27ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2800u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C280Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C281Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2830u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C283Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C284Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2860u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C286Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C287Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2890u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C289Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C28ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C28C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C28CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C28DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C28F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C28FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C290Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2920u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C292Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C293Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2950u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C295Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C296Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2980u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C298Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C299Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C29B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C29BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C29CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C29E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2A1Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2A2Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2A84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2A94u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2AA0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2AACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2AC0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2ACCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2ADCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2AE8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2AF4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B08u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B14u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B2Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B38u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B44u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B4Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B5Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B78u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2BE8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2BFCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C08u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C10u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C3Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C44u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C54u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C5Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C64u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C6Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2CA0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2CB4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2CC4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2CC8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2CD8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2CF0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D0Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D18u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D24u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D2Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D38u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D40u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D50u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D80u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D88u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D98u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2DA0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2DA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2DD8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2DE0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2DF8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E0Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E14u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E24u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E2Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E34u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E3Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E40u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E7Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E88u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E94u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2EA0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2EACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2EB4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2EBCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2EC4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2ECCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2ED4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2EDCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2EE0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2EE8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F18u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F20u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F50u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F58u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F8Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F9Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2FA4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2FACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2FB4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2FB8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2FE4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3014u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3074u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3088u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3090u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3098u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C30C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C30E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C30F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C30FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C310Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3114u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C311Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3124u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3128u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3158u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3170u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3180u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3184u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C319Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31F8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3200u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3230u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3238u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3268u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3270u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3288u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C329Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C32A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C32B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C32BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C32C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C32CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C32D0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C32FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3314u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3320u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C332Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3338u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3340u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3344u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C334Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C337Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C33ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C33B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C33BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C33C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C33CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C33E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C33FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3414u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3420u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3434u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C343Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3448u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3454u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C345Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3464u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C346Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C347Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3484u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C348Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3498u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C34A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C34B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C34C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C34DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C34F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3500u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3520u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3530u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3544u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3550u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3558u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3568u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3574u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C357Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3588u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3590u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C359Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C35A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C35ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C35B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C35C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C35C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C35D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C35E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C35E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C35F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C35F8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3600u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3608u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3610u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3618u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3620u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3628u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3630u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3638u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3640u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3648u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3650u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C365Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3664u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C366Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C367Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3684u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C368Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3694u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C369Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C36A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C36ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C36C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C36D0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C36E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C36F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C36F8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3700u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C370Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3714u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C371Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3734u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C373Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3748u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3750u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3754u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C375Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3764u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3768u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3770u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3778u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3784u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C378Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3798u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C37A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C37A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C37C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C37C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C37D0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C37D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C37E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C37E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C37F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C37F8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C380Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3814u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C381Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C382Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3838u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3850u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3858u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3860u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C386Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3874u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C387Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3884u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C388Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38D0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38F8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3900u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3908u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3910u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3918u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3920u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3928u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3930u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3938u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3940u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3948u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3950u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3958u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3960u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3968u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3970u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3978u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3980u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3988u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3990u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3998u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C39A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C39A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C39B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C39B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C39C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C39C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C39D0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C39D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C39E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C39E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C39F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C39F8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A04u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A0Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A14u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A1Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A24u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A2Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A34u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A3Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A44u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A50u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A58u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A60u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A78u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A80u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A88u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A98u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3AA0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3AACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3AB4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3ABCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3AC4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3ACCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3AD4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3ADCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3AE4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3AECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3AF4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3AFCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B08u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B10u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B18u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B20u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B30u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B38u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B40u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B50u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B58u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B64u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B6Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B74u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B7Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B8Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3B94u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3BA0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3BA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3BB0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3BB8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3BC0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3BC8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3BD0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3BD8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3BE0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3BE8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3BF0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3BF8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C00u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C08u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C10u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C18u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C20u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C30u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C38u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C40u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C50u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C58u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C60u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C78u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C80u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C88u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C98u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CA0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CB0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CB8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CC0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CC8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CD0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CD8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CE0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CE8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CF0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CF8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D00u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D08u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D10u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D18u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D20u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D30u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D38u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D40u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D50u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D58u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D60u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D7Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D8Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D94u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D9Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3DA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3DB0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3DB8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3DC0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3DC8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3DD0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3DD8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3DE0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3DECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3DF4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E10u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E3Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E44u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E60u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E98u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3EACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3EC0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3ECCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3EE8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3EECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3EF8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F00u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F08u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F14u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F30u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F40u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F4Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F64u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F78u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F7Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3FA0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3FA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3FACu, &recomp_unit_0047, "recomp_unit_0047");
}
} // namespace psprecomp

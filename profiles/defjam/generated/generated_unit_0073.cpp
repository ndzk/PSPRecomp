#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0073[4090] = {
    1, 0, 2, 0, 3, 0, 4, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0,
    18, 0, 19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 25, 0, 26, 0, 27, 0, 28, 0,
    0, 29, 0, 30, 0, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0,
    0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 44, 0, 0, 45, 0, 0, 0,
    46, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 54, 0, 55, 0, 0, 56,
    0, 0, 57, 0, 58, 0, 0, 59, 0, 0, 60, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0,
    0, 67, 0, 68, 0, 69, 0, 0, 70, 0, 71, 0, 0, 72, 0, 0, 73, 0, 74, 0, 75, 0, 0, 76, 0, 77, 0, 0, 78, 0, 0, 0,
    79, 0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 83, 0, 84, 0, 85, 0, 0, 86, 0, 87, 0, 0, 88, 0, 0, 89, 0, 90,
    0, 91, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 0, 98, 0, 0, 0, 99, 0, 100, 0, 101,
    0, 0, 102, 0, 103, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0,
    112, 0, 113, 0, 0, 114, 0, 115, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0, 121, 0, 122, 0, 0, 0, 123, 0, 0,
    124, 0, 125, 0, 126, 0, 0, 127, 0, 0, 0, 0, 128, 0, 129, 0, 0, 130, 0, 131, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 137, 0, 0, 0, 138, 0, 139, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0,
    142, 0, 143, 0, 144, 0, 0, 145, 0, 0, 146, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 0, 152, 0, 0, 0,
    153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 160, 0, 161, 0, 0, 162, 0, 0, 0, 163, 0, 164, 0, 165, 0,
    166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0,
    181, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 0, 195, 0,
    196, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 204, 0, 0, 0, 205,
    0, 206, 0, 207, 0, 0, 208, 0, 209, 0, 0, 210, 0, 0, 211, 0, 212, 0, 213, 0, 214, 0, 0, 215, 0, 216, 0, 0, 217, 0, 0, 0,
    218, 0, 0, 0, 0, 219, 0, 0, 220, 0, 221, 0, 0, 0, 222, 0, 223, 0, 224, 0, 0, 225, 0, 226, 0, 0, 227, 0, 0, 228, 0, 229,
    0, 230, 0, 0, 231, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 237, 0, 0, 238,
    0, 0, 0, 239, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 243, 0, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 247, 0, 0,
    0, 248, 0, 249, 0, 0, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 0, 256, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 262,
    0, 263, 0, 264, 0, 265, 0, 0, 266, 0, 267, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 272, 0, 273,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 276, 0, 0, 277, 0, 0, 0, 278, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 281,
    0, 0, 0, 0, 282, 0, 283, 0, 284, 0, 0, 285, 0, 0, 286, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 291, 0, 0,
    292, 0, 0, 0, 293, 0, 294, 0, 295, 0, 0, 0, 296, 0, 297, 0, 298, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 303,
    0, 0, 304, 0, 0, 0, 305, 0, 306, 0, 307, 0, 308, 0, 309, 0, 310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315, 0, 316, 0, 0, 317,
    0, 318, 0, 319, 0, 320, 0, 321, 0, 322, 0, 0, 323, 0, 0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332,
    0, 333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 0, 341, 0, 342, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 345,
    0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 349, 0, 350, 0, 0, 0, 351, 0, 352, 0, 353, 0, 0, 354, 0, 0, 0, 0,
    0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0,
    360, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 365, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 368,
    0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 372, 0, 373, 0, 374, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0,
    0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 383, 0, 384,
    0, 385, 0, 0, 386, 0, 0, 0, 387, 0, 388, 0, 389, 0, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 393, 0, 394, 0, 395, 0,
    0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 399, 0, 400, 0, 0, 0, 401, 0, 402, 0, 403, 0, 0, 404, 0, 0, 0, 405, 0,
    0, 0, 0, 406, 0, 0, 407, 0, 408, 0, 0, 0, 409, 0, 410, 0, 411, 0, 0, 412, 0, 413, 0, 0, 414, 0, 0, 415, 0, 416, 0, 417,
    0, 0, 418, 0, 419, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0,
    0, 424, 0, 0, 0, 0, 0, 425, 0, 426, 0, 0, 427, 0, 428, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0,
    0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 437, 0, 438, 0, 0, 0, 439, 0, 0,
    0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 443, 0, 0, 0, 0, 444, 0, 445, 0, 446, 0, 447, 0, 0, 0, 448,
    0, 0, 449, 0, 450, 0, 451, 0, 452, 0, 453, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0,
    457, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 464, 0,
    0, 0, 0, 465, 0, 466, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0,
    0, 471, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 474, 0, 475, 0, 0, 0, 476, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0,
    0, 479, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0,
    485, 0, 486, 0, 0, 487, 0, 0, 0, 488, 0, 489, 0, 490, 0, 491, 492, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 501, 0, 502, 0,
    0, 0, 503, 0, 504, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 508, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0,
    0, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 515, 0, 0, 516, 0, 0, 0, 517, 0, 518, 0, 519, 0,
    520, 521, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 525, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 531, 0, 532, 0, 0, 533, 0, 534, 0, 0, 535, 0, 536,
    0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 543,
    0, 0, 544, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 0, 0, 549, 0, 550, 0, 0, 551, 0, 552,
    0, 553, 0, 0, 554, 0, 555, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0,
    0, 0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 565, 0, 566, 0, 567,
    0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0,
    574, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 579, 0, 580, 0, 0, 0, 581, 0, 582,
    0, 583, 0, 584, 585, 0, 0, 586, 0, 587, 588, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 591, 0, 0, 592, 0, 0, 0, 0, 0,
    0, 0, 0, 593, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0,
    0, 0, 0, 597, 0, 0, 0, 0, 598, 599, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 605, 0, 606, 0, 0, 0, 0, 0, 0, 607,
    0, 0, 0, 0, 0, 608, 0, 0, 609, 0, 610, 0, 0, 0, 611, 0, 0, 612, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 615,
    0, 616, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0,
    0, 0, 621, 0, 622, 0, 0, 623, 0, 0, 0, 624, 0, 625, 0, 626, 0, 627, 628, 0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 631, 0,
    0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0,
    637, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 639, 0, 640, 0, 0, 641, 0, 642, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 0,
    645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 647, 0, 0, 648, 0, 649, 0, 0, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0,
    0, 0, 0, 0, 652, 0, 653, 0, 0, 654, 0, 0, 0, 655, 0, 656, 0, 657, 0, 658, 659, 0, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0,
    662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0,
    0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 667, 0, 668, 0, 0, 669, 0, 670, 0, 0, 671, 0, 672, 0, 0, 673,
    0, 674, 0, 0, 675, 0, 676, 0, 0, 677, 0, 678, 0, 0, 679, 0, 680, 0, 0, 681, 0, 682, 0, 0, 683, 0, 684, 0, 0, 685, 0, 686,
    0, 0, 687, 0, 688, 0, 0, 689, 0, 690, 0, 0, 691, 0, 692, 0, 0, 693, 0, 694, 0, 0, 695, 0, 696, 0, 0, 697, 0, 698, 0, 0,
    699, 0, 700, 0, 0, 701, 0, 702, 0, 0, 703, 0, 704, 0, 0, 705, 0, 706, 0, 0, 707, 0, 708, 0, 0, 709, 0, 710, 0, 0, 711, 0,
    712, 0, 0, 713, 0, 714, 0, 0, 715, 0, 716, 0, 0, 717, 0, 718, 0, 0, 719, 0, 720, 0, 0, 721, 0, 722, 0, 0, 723, 0, 724, 0,
    0, 725, 0, 726, 0, 0, 727, 0, 728, 0, 0, 729, 0, 730, 0, 0, 731, 0, 732, 0, 0, 733, 0, 734, 0, 0, 735, 0, 736, 0, 0, 737,
    0, 738, 0, 0, 739, 0, 740, 0, 0, 741, 0, 742, 0, 0, 743, 0, 744, 0, 0, 745, 0, 746, 0, 0, 747, 0, 748, 0, 0, 749, 0, 750,
    0, 0, 751, 0, 752, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 757,
    0, 758, 0, 0, 759, 0, 760, 761, 0, 762, 0, 763, 0, 764, 0, 0, 765, 0, 766, 0, 0, 767, 0, 768, 0, 0, 0, 0, 0, 0, 0, 769,
    0, 770, 0, 771, 0, 0, 0, 0, 0, 772, 0, 773, 0, 774, 0, 775, 0, 776, 0, 777, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 779, 0, 0, 0, 0, 0, 780, 0, 781, 0, 782, 0, 0, 0, 0, 783, 784, 785, 0, 0, 786, 0, 787, 0, 0, 788, 0, 0, 0,
    0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 791, 0, 0, 0, 0, 792, 0, 0, 0, 793, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 795, 0, 796, 0, 0, 797, 0, 798, 0, 0, 0, 799, 0, 0, 0, 800, 0, 801, 0, 0, 0, 802,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 805, 0, 806, 0, 0, 807,
    0, 808, 809, 0, 0, 810, 0, 0, 0, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 813, 0, 0, 814, 0,
    0, 0, 815, 0, 0, 0, 0, 0, 0, 816, 0, 0, 817, 0, 0, 818, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0,
    0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 823, 0, 824, 0, 825, 0, 826, 0, 827, 0, 0, 0, 828, 0, 0, 0, 0,
    0, 0, 829, 0, 0, 0, 0, 0, 830, 0, 0, 0, 831, 0, 0, 832, 0, 833, 0, 834, 0, 835, 0, 0, 0, 836, 0, 0, 0, 0, 0, 0,
    837, 0, 838, 0, 839, 0, 0, 840, 0, 841, 0, 0, 842, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 0, 844, 0, 0, 845, 0, 846, 0, 847,
    0, 848, 0, 849, 0, 0, 0, 850, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 0, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 853,
    0, 0, 0, 854, 0, 855, 0, 856, 0, 857, 0, 858, 0, 0, 0, 859, 0, 0, 0, 0, 0, 0, 860, 0, 0, 0, 0, 0, 861, 0, 0, 0,
    862, 0, 0, 863, 0, 864, 0, 865, 0, 866, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 868, 0, 869, 0, 870, 0, 0, 871, 0, 872, 0, 0,
    873, 0, 0, 0, 0, 0, 0, 874, 0, 0, 0, 0, 875, 0, 0, 876, 0, 877, 0, 878, 0, 879, 0, 880, 0, 0, 0, 881, 0, 0, 0, 0,
    0, 0, 0, 0, 882, 0, 0, 0, 0, 0, 0, 0, 883, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 884, 0, 0, 0, 885, 0, 0, 0, 0, 0, 0, 886, 0,
    0, 0, 0, 0, 887, 0, 0, 0, 0, 0, 888, 0, 0, 0, 0, 0, 889, 0, 0, 890, 0, 0, 0, 0, 0, 0, 891, 0, 892, 0, 0, 0,
    0, 0, 893, 0, 0, 0, 894, 0, 895, 0, 0, 0, 0, 0, 896, 0, 897, 0, 0, 898, 0, 0, 899, 0, 900, 0, 0, 0, 0, 901, 0, 0,
    0, 0, 0, 902, 0, 903, 0, 0, 0, 904, 0, 905, 0, 906, 0, 907, 0, 908, 0, 909, 0, 910, 0, 911, 0, 912, 0, 913, 0, 0, 0, 0,
    914, 0, 915, 0, 916, 0, 917, 0, 918, 0, 919, 0, 0, 920, 0, 921, 0, 922, 0, 0, 0, 0, 923, 0, 0, 0, 0, 0, 924, 0, 925, 0,
    0, 0, 0, 0, 0, 0, 926, 0, 927, 0, 0, 0, 0, 928, 0, 929, 0, 0, 930, 0, 931, 0, 0, 0, 932, 0, 933, 0, 934, 0, 0, 0,
    0, 935, 0, 0, 936, 0, 937, 0, 938, 0, 939, 0, 940, 0, 941, 0, 942, 0, 943, 0, 944, 0, 0, 945, 0, 0, 946, 0, 947, 0, 948, 0,
    949, 0, 0, 950, 0, 951, 0, 952, 0, 953, 0, 954, 0, 955, 0, 956, 0, 957, 0, 958, 0, 959, 0, 960, 0, 961, 0, 962, 0, 963, 0, 964,
    0, 965, 0, 966, 0, 0, 967, 0, 968, 0, 969, 0, 970, 0, 971, 0, 972, 0, 973, 0, 974, 0, 975, 0, 976, 0, 977, 0, 978, 0, 0, 0,
    979, 0, 0, 0, 0, 980, 0, 981, 0, 982, 0, 983, 0, 0, 0, 0, 0, 984, 0, 985, 0, 0, 0, 0, 0, 0, 0, 986, 0, 987, 0, 0,
    0, 988, 0, 989, 0, 0, 990, 0, 0, 0, 991, 0, 0, 0, 992, 0, 0, 0, 993, 0, 994, 0, 0, 995, 0, 996, 0, 997, 0, 0, 998, 0,
    999, 0, 1000, 0, 0, 1001, 0, 1002, 0, 0, 0, 1003, 1004, 0, 1005, 0, 0, 1006, 0, 1007, 0, 1008, 0, 0, 1009, 0, 1010, 0, 0, 1011, 0, 0,
    1012, 0, 1013, 0, 0, 1014, 0, 0, 0, 1015, 0, 1016, 0, 0, 1017, 0, 1018, 0, 0, 0, 0, 0, 0, 0, 0, 1019, 0, 1020, 0, 0, 0, 1021,
    0, 1022, 0, 0, 1023, 0, 0, 0, 1024, 0, 0, 0, 1025, 0, 0, 0, 1026, 0, 1027, 0, 0, 1028, 0, 1029, 0, 1030, 0, 0, 1031, 0, 1032, 0,
    1033, 0, 0, 1034, 0, 1035, 0, 1036, 0, 0, 1037, 0, 1038, 0, 0, 1039, 0, 0, 1040, 0, 1041, 0, 0, 1042, 0, 0, 0, 1043, 0, 1044, 0, 0,
    1045, 0, 1046, 0, 0, 0, 1047, 0, 1048, 0, 0, 0, 0, 1049, 0, 1050, 0, 0, 1051, 1052, 0, 0, 1053, 0, 0, 0, 0, 1054, 0, 1055, 0, 0,
    0, 0, 0, 0, 0, 0, 1056, 0, 1057, 0, 0, 0, 0, 1058, 0, 1059, 0, 0, 1060, 0, 0, 1061, 0, 1062, 0, 1063, 0, 1064, 0, 1065, 0, 0,
    0, 1066, 0, 1067, 0, 1068, 0, 1069, 0, 1070, 0, 1071, 0, 1072, 0, 1073, 0, 1074, 0, 1075, 0, 1076, 0, 1077, 0, 1078, 0, 1079, 0, 1080, 0, 1081,
    0, 1082, 0, 0, 1083, 0, 1084, 0, 1085, 0, 0, 0, 1086, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1087, 0, 0, 0, 0, 0, 1088, 0, 1089, 0,
    0, 0, 0, 0, 0, 1090, 0, 1091, 0, 0, 0, 0, 0, 0, 1092, 0, 1093, 0, 0, 1094, 0, 0, 1095, 0, 0, 1096, 0, 0, 0, 0, 0, 1097,
    0, 0, 0, 0, 1098, 0, 0, 0, 1099, 0, 0, 0, 1100, 0, 1101, 0, 0, 0, 1102, 0, 1103, 0, 1104, 0, 1105, 0, 1106, 0, 1107, 0, 1108, 0,
    1109, 0, 1110, 0, 1111, 0, 1112, 0, 1113, 0, 1114, 0, 0, 1115, 0, 1116, 0, 1117, 0, 0, 0, 0, 1118, 0, 0, 0, 1119, 0, 0, 0, 0, 0,
    1120, 0, 0, 0, 0, 0, 0, 1121, 0, 1122, 0, 0, 0, 0, 0, 0, 0, 1123, 0, 0, 0, 1124, 0, 1125, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 1126, 0, 1127, 0, 0, 0, 0, 0, 0, 0, 1128, 0, 1129, 0, 0, 0, 0, 0, 1130, 0, 1131, 0, 0, 1132, 0, 1133, 0, 0, 0, 1134, 0,
    1135, 0, 1136, 0, 0, 0, 0, 1137, 0, 0, 1138, 0, 1139, 0, 1140, 0, 0, 0, 1141, 0, 1142, 0, 1143, 0, 1144, 0, 1145, 0, 1146, 0, 1147, 0,
    1148, 0, 1149, 0, 1150, 0, 1151, 0, 0, 1152, 0, 0, 1153, 0, 1154, 0, 1155, 0, 0, 0, 1156, 0, 1157, 0, 1158, 0, 0, 0, 1159, 0, 1160, 0,
    1161, 0, 1162, 0, 1163, 0, 1164, 0, 1165, 0, 1166, 0, 1167, 0, 0, 0, 1168, 0, 1169, 0, 1170, 0, 1171, 0, 1172, 0, 1173, 0, 0, 0, 1174, 0,
    1175, 0, 1176, 0, 1177, 0, 1178, 0, 1179, 0, 1180, 0, 1181, 0, 1182, 0, 1183, 0, 1184, 0, 1185, 0, 1186, 0, 1187, 0, 1188, 0, 1189, 0, 1190, 0,
    0, 0, 0, 1191, 0, 0, 0, 0, 0, 0, 0, 0, 1192, 0, 1193, 0, 0, 0, 0, 0, 0, 0, 0, 1194, 0, 1195,
};
void recomp_unit_0073_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08928004u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0073[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08928004;
    case 2u: goto L_0892800C;
    case 3u: goto L_08928014;
    case 4u: goto L_0892801C;
    case 5u: goto L_08928028;
    case 6u: goto L_08928030;
    case 7u: goto L_08928038;
    case 8u: goto L_08928048;
    case 9u: goto L_08928058;
    case 10u: goto L_08928064;
    case 11u: goto L_08928084;
    case 12u: goto L_08928098;
    case 13u: goto L_089280A8;
    case 14u: goto L_089280BC;
    case 15u: goto L_089280D4;
    case 16u: goto L_089280F0;
    case 17u: goto L_089280FC;
    case 18u: goto L_08928104;
    case 19u: goto L_0892810C;
    case 20u: goto L_08928114;
    case 21u: goto L_0892812C;
    case 22u: goto L_08928134;
    case 23u: goto L_08928148;
    case 24u: goto L_08928150;
    case 25u: goto L_08928164;
    case 26u: goto L_0892816C;
    case 27u: goto L_08928174;
    case 28u: goto L_0892817C;
    case 29u: goto L_08928188;
    case 30u: goto L_08928190;
    case 31u: goto L_0892819C;
    case 32u: goto L_089281A4;
    case 33u: goto L_089281AC;
    case 34u: goto L_089281B4;
    case 35u: goto L_089281BC;
    case 36u: goto L_089281C4;
    case 37u: goto L_089281D4;
    case 38u: goto L_089281FC;
    case 39u: goto L_08928210;
    case 40u: goto L_0892822C;
    case 41u: goto L_0892823C;
    case 42u: goto L_0892824C;
    case 43u: goto L_0892825C;
    case 44u: goto L_08928268;
    case 45u: goto L_08928274;
    case 46u: goto L_08928284;
    case 47u: goto L_0892828C;
    case 48u: goto L_08928294;
    case 49u: goto L_089282B8;
    case 50u: goto L_089282C0;
    case 51u: goto L_089282D0;
    case 52u: goto L_089282D8;
    case 53u: goto L_089282E0;
    case 54u: goto L_089282EC;
    case 55u: goto L_089282F4;
    case 56u: goto L_08928300;
    case 57u: goto L_0892830C;
    case 58u: goto L_08928314;
    case 59u: goto L_08928320;
    case 60u: goto L_0892832C;
    case 61u: goto L_08928334;
    case 62u: goto L_08928340;
    case 63u: goto L_08928350;
    case 64u: goto L_08928364;
    case 65u: goto L_08928370;
    case 66u: goto L_08928378;
    case 67u: goto L_08928388;
    case 68u: goto L_08928390;
    case 69u: goto L_08928398;
    case 70u: goto L_089283A4;
    case 71u: goto L_089283AC;
    case 72u: goto L_089283B8;
    case 73u: goto L_089283C4;
    case 74u: goto L_089283CC;
    case 75u: goto L_089283D4;
    case 76u: goto L_089283E0;
    case 77u: goto L_089283E8;
    case 78u: goto L_089283F4;
    case 79u: goto L_08928404;
    case 80u: goto L_08928418;
    case 81u: goto L_08928424;
    case 82u: goto L_0892842C;
    case 83u: goto L_0892843C;
    case 84u: goto L_08928444;
    case 85u: goto L_0892844C;
    case 86u: goto L_08928458;
    case 87u: goto L_08928460;
    case 88u: goto L_0892846C;
    case 89u: goto L_08928478;
    case 90u: goto L_08928480;
    case 91u: goto L_08928488;
    case 92u: goto L_08928494;
    case 93u: goto L_0892849C;
    case 94u: goto L_089284A8;
    case 95u: goto L_089284B8;
    case 96u: goto L_089284CC;
    case 97u: goto L_089284D8;
    case 98u: goto L_089284E0;
    case 99u: goto L_089284F0;
    case 100u: goto L_089284F8;
    case 101u: goto L_08928500;
    case 102u: goto L_0892850C;
    case 103u: goto L_08928514;
    case 104u: goto L_08928520;
    case 105u: goto L_0892852C;
    case 106u: goto L_08928534;
    case 107u: goto L_08928540;
    case 108u: goto L_0892854C;
    case 109u: goto L_08928554;
    case 110u: goto L_08928560;
    case 111u: goto L_08928570;
    case 112u: goto L_08928584;
    case 113u: goto L_0892858C;
    case 114u: goto L_08928598;
    case 115u: goto L_089285A0;
    case 116u: goto L_089285AC;
    case 117u: goto L_089285B4;
    case 118u: goto L_089285C4;
    case 119u: goto L_089285CC;
    case 120u: goto L_089285D4;
    case 121u: goto L_089285E0;
    case 122u: goto L_089285E8;
    case 123u: goto L_089285F8;
    case 124u: goto L_08928604;
    case 125u: goto L_0892860C;
    case 126u: goto L_08928614;
    case 127u: goto L_08928620;
    case 128u: goto L_08928634;
    case 129u: goto L_0892863C;
    case 130u: goto L_08928648;
    case 131u: goto L_08928650;
    case 132u: goto L_0892865C;
    case 133u: goto L_0892866C;
    case 134u: goto L_0892869C;
    case 135u: goto L_089286A4;
    case 136u: goto L_089286AC;
    case 137u: goto L_089286B8;
    case 138u: goto L_089286C8;
    case 139u: goto L_089286D0;
    case 140u: goto L_089286DC;
    case 141u: goto L_089286F0;
    case 142u: goto L_08928704;
    case 143u: goto L_0892870C;
    case 144u: goto L_08928714;
    case 145u: goto L_08928720;
    case 146u: goto L_0892872C;
    case 147u: goto L_08928734;
    case 148u: goto L_0892873C;
    case 149u: goto L_08928758;
    case 150u: goto L_08928760;
    case 151u: goto L_08928768;
    case 152u: goto L_08928774;
    case 153u: goto L_08928784;
    case 154u: goto L_0892878C;
    case 155u: goto L_08928794;
    case 156u: goto L_0892879C;
    case 157u: goto L_089287A4;
    case 158u: goto L_089287B4;
    case 159u: goto L_089287C0;
    case 160u: goto L_089287C8;
    case 161u: goto L_089287D0;
    case 162u: goto L_089287DC;
    case 163u: goto L_089287EC;
    case 164u: goto L_089287F4;
    case 165u: goto L_089287FC;
    case 166u: goto L_08928804;
    case 167u: goto L_0892880C;
    case 168u: goto L_08928814;
    case 169u: goto L_0892881C;
    case 170u: goto L_08928824;
    case 171u: goto L_0892882C;
    case 172u: goto L_08928834;
    case 173u: goto L_0892883C;
    case 174u: goto L_08928844;
    case 175u: goto L_08928850;
    case 176u: goto L_08928858;
    case 177u: goto L_08928860;
    case 178u: goto L_08928868;
    case 179u: goto L_08928870;
    case 180u: goto L_08928878;
    case 181u: goto L_08928884;
    case 182u: goto L_08928890;
    case 183u: goto L_08928898;
    case 184u: goto L_089288A0;
    case 185u: goto L_089288A8;
    case 186u: goto L_089288B0;
    case 187u: goto L_089288B8;
    case 188u: goto L_089288C0;
    case 189u: goto L_089288C8;
    case 190u: goto L_089288D0;
    case 191u: goto L_089288D8;
    case 192u: goto L_089288E0;
    case 193u: goto L_089288E8;
    case 194u: goto L_089288F0;
    case 195u: goto L_089288FC;
    case 196u: goto L_08928904;
    case 197u: goto L_0892890C;
    case 198u: goto L_0892891C;
    case 199u: goto L_0892892C;
    case 200u: goto L_08928938;
    case 201u: goto L_08928948;
    case 202u: goto L_0892895C;
    case 203u: goto L_08928968;
    case 204u: goto L_08928970;
    case 205u: goto L_08928980;
    case 206u: goto L_08928988;
    case 207u: goto L_08928990;
    case 208u: goto L_0892899C;
    case 209u: goto L_089289A4;
    case 210u: goto L_089289B0;
    case 211u: goto L_089289BC;
    case 212u: goto L_089289C4;
    case 213u: goto L_089289CC;
    case 214u: goto L_089289D4;
    case 215u: goto L_089289E0;
    case 216u: goto L_089289E8;
    case 217u: goto L_089289F4;
    case 218u: goto L_08928A04;
    case 219u: goto L_08928A18;
    case 220u: goto L_08928A24;
    case 221u: goto L_08928A2C;
    case 222u: goto L_08928A3C;
    case 223u: goto L_08928A44;
    case 224u: goto L_08928A4C;
    case 225u: goto L_08928A58;
    case 226u: goto L_08928A60;
    case 227u: goto L_08928A6C;
    case 228u: goto L_08928A78;
    case 229u: goto L_08928A80;
    case 230u: goto L_08928A88;
    case 231u: goto L_08928A94;
    case 232u: goto L_08928A9C;
    case 233u: goto L_08928AA8;
    case 234u: goto L_08928AB8;
    case 235u: goto L_08928AE4;
    case 236u: goto L_08928AEC;
    case 237u: goto L_08928AF4;
    case 238u: goto L_08928B00;
    case 239u: goto L_08928B10;
    case 240u: goto L_08928B18;
    case 241u: goto L_08928B24;
    case 242u: goto L_08928B40;
    case 243u: goto L_08928B48;
    case 244u: goto L_08928B54;
    case 245u: goto L_08928B60;
    case 246u: goto L_08928B68;
    case 247u: goto L_08928B78;
    case 248u: goto L_08928B88;
    case 249u: goto L_08928B90;
    case 250u: goto L_08928BA0;
    case 251u: goto L_08928BA8;
    case 252u: goto L_08928BB0;
    case 253u: goto L_08928BB8;
    case 254u: goto L_08928BC0;
    case 255u: goto L_08928BC8;
    case 256u: goto L_08928BD0;
    case 257u: goto L_08928BD8;
    case 258u: goto L_08928BE0;
    case 259u: goto L_08928BE8;
    case 260u: goto L_08928BF0;
    case 261u: goto L_08928BF8;
    case 262u: goto L_08928C00;
    case 263u: goto L_08928C08;
    case 264u: goto L_08928C10;
    case 265u: goto L_08928C18;
    case 266u: goto L_08928C24;
    case 267u: goto L_08928C2C;
    case 268u: goto L_08928C34;
    case 269u: goto L_08928C4C;
    case 270u: goto L_08928C5C;
    case 271u: goto L_08928C68;
    case 272u: goto L_08928C78;
    case 273u: goto L_08928C80;
    case 274u: goto L_08928CA8;
    case 275u: goto L_08928CB0;
    case 276u: goto L_08928CB8;
    case 277u: goto L_08928CC4;
    case 278u: goto L_08928CD4;
    case 279u: goto L_08928CDC;
    case 280u: goto L_08928CE8;
    case 281u: goto L_08928D00;
    case 282u: goto L_08928D14;
    case 283u: goto L_08928D1C;
    case 284u: goto L_08928D24;
    case 285u: goto L_08928D30;
    case 286u: goto L_08928D3C;
    case 287u: goto L_08928D44;
    case 288u: goto L_08928D4C;
    case 289u: goto L_08928D68;
    case 290u: goto L_08928D70;
    case 291u: goto L_08928D78;
    case 292u: goto L_08928D84;
    case 293u: goto L_08928D94;
    case 294u: goto L_08928D9C;
    case 295u: goto L_08928DA4;
    case 296u: goto L_08928DB4;
    case 297u: goto L_08928DBC;
    case 298u: goto L_08928DC4;
    case 299u: goto L_08928DCC;
    case 300u: goto L_08928DD4;
    case 301u: goto L_08928DF0;
    case 302u: goto L_08928DF8;
    case 303u: goto L_08928E00;
    case 304u: goto L_08928E0C;
    case 305u: goto L_08928E1C;
    case 306u: goto L_08928E24;
    case 307u: goto L_08928E2C;
    case 308u: goto L_08928E34;
    case 309u: goto L_08928E3C;
    case 310u: goto L_08928E44;
    case 311u: goto L_08928E4C;
    case 312u: goto L_08928E54;
    case 313u: goto L_08928E5C;
    case 314u: goto L_08928E64;
    case 315u: goto L_08928E6C;
    case 316u: goto L_08928E74;
    case 317u: goto L_08928E80;
    case 318u: goto L_08928E88;
    case 319u: goto L_08928E90;
    case 320u: goto L_08928E98;
    case 321u: goto L_08928EA0;
    case 322u: goto L_08928EA8;
    case 323u: goto L_08928EB4;
    case 324u: goto L_08928EC0;
    case 325u: goto L_08928EC8;
    case 326u: goto L_08928ED0;
    case 327u: goto L_08928ED8;
    case 328u: goto L_08928EE0;
    case 329u: goto L_08928EE8;
    case 330u: goto L_08928EF0;
    case 331u: goto L_08928EF8;
    case 332u: goto L_08928F00;
    case 333u: goto L_08928F08;
    case 334u: goto L_08928F10;
    case 335u: goto L_08928F18;
    case 336u: goto L_08928F20;
    case 337u: goto L_08928F28;
    case 338u: goto L_08928F30;
    case 339u: goto L_08928F38;
    case 340u: goto L_08928F40;
    case 341u: goto L_08928F4C;
    case 342u: goto L_08928F54;
    case 343u: goto L_08928F5C;
    case 344u: goto L_08928F70;
    case 345u: goto L_08928F80;
    case 346u: goto L_08928F8C;
    case 347u: goto L_08928F9C;
    case 348u: goto L_08928FB0;
    case 349u: goto L_08928FBC;
    case 350u: goto L_08928FC4;
    case 351u: goto L_08928FD4;
    case 352u: goto L_08928FDC;
    case 353u: goto L_08928FE4;
    case 354u: goto L_08928FF0;
    case 355u: goto L_08929014;
    case 356u: goto L_08929028;
    case 357u: goto L_0892903C;
    case 358u: goto L_08929050;
    case 359u: goto L_0892906C;
    case 360u: goto L_08929084;
    case 361u: goto L_08929098;
    case 362u: goto L_089290A8;
    case 363u: goto L_089290B8;
    case 364u: goto L_089290C8;
    case 365u: goto L_089290D4;
    case 366u: goto L_089290E0;
    case 367u: goto L_089290F4;
    case 368u: goto L_08929100;
    case 369u: goto L_08929108;
    case 370u: goto L_08929128;
    case 371u: goto L_08929130;
    case 372u: goto L_08929140;
    case 373u: goto L_08929148;
    case 374u: goto L_08929150;
    case 375u: goto L_0892915C;
    case 376u: goto L_08929174;
    case 377u: goto L_08929188;
    case 378u: goto L_089291A0;
    case 379u: goto L_089291BC;
    case 380u: goto L_089291CC;
    case 381u: goto L_089291E0;
    case 382u: goto L_089291E8;
    case 383u: goto L_089291F8;
    case 384u: goto L_08929200;
    case 385u: goto L_08929208;
    case 386u: goto L_08929214;
    case 387u: goto L_08929224;
    case 388u: goto L_0892922C;
    case 389u: goto L_08929234;
    case 390u: goto L_08929240;
    case 391u: goto L_08929250;
    case 392u: goto L_0892925C;
    case 393u: goto L_0892926C;
    case 394u: goto L_08929274;
    case 395u: goto L_0892927C;
    case 396u: goto L_08929288;
    case 397u: goto L_08929298;
    case 398u: goto L_089292AC;
    case 399u: goto L_089292B8;
    case 400u: goto L_089292C0;
    case 401u: goto L_089292D0;
    case 402u: goto L_089292D8;
    case 403u: goto L_089292E0;
    case 404u: goto L_089292EC;
    case 405u: goto L_089292FC;
    case 406u: goto L_08929310;
    case 407u: goto L_0892931C;
    case 408u: goto L_08929324;
    case 409u: goto L_08929334;
    case 410u: goto L_0892933C;
    case 411u: goto L_08929344;
    case 412u: goto L_08929350;
    case 413u: goto L_08929358;
    case 414u: goto L_08929364;
    case 415u: goto L_08929370;
    case 416u: goto L_08929378;
    case 417u: goto L_08929380;
    case 418u: goto L_0892938C;
    case 419u: goto L_08929394;
    case 420u: goto L_089293A0;
    case 421u: goto L_089293B4;
    case 422u: goto L_089293DC;
    case 423u: goto L_089293F4;
    case 424u: goto L_08929408;
    case 425u: goto L_08929420;
    case 426u: goto L_08929428;
    case 427u: goto L_08929434;
    case 428u: goto L_0892943C;
    case 429u: goto L_08929448;
    case 430u: goto L_08929450;
    case 431u: goto L_0892946C;
    case 432u: goto L_0892947C;
    case 433u: goto L_0892948C;
    case 434u: goto L_089294A0;
    case 435u: goto L_089294B8;
    case 436u: goto L_089294D4;
    case 437u: goto L_089294E0;
    case 438u: goto L_089294E8;
    case 439u: goto L_089294F8;
    case 440u: goto L_08929510;
    case 441u: goto L_08929534;
    case 442u: goto L_0892953C;
    case 443u: goto L_08929544;
    case 444u: goto L_08929558;
    case 445u: goto L_08929560;
    case 446u: goto L_08929568;
    case 447u: goto L_08929570;
    case 448u: goto L_08929580;
    case 449u: goto L_0892958C;
    case 450u: goto L_08929594;
    case 451u: goto L_0892959C;
    case 452u: goto L_089295A4;
    case 453u: goto L_089295AC;
    case 454u: goto L_089295BC;
    case 455u: goto L_089295D4;
    case 456u: goto L_089295EC;
    case 457u: goto L_08929604;
    case 458u: goto L_0892961C;
    case 459u: goto L_08929624;
    case 460u: goto L_0892963C;
    case 461u: goto L_08929644;
    case 462u: goto L_0892965C;
    case 463u: goto L_08929664;
    case 464u: goto L_0892967C;
    case 465u: goto L_08929690;
    case 466u: goto L_08929698;
    case 467u: goto L_089296A8;
    case 468u: goto L_089296B4;
    case 469u: goto L_089296DC;
    case 470u: goto L_089296F4;
    case 471u: goto L_08929708;
    case 472u: goto L_08929720;
    case 473u: goto L_08929728;
    case 474u: goto L_08929734;
    case 475u: goto L_0892973C;
    case 476u: goto L_0892974C;
    case 477u: goto L_08929754;
    case 478u: goto L_08929770;
    case 479u: goto L_08929788;
    case 480u: goto L_08929790;
    case 481u: goto L_08929798;
    case 482u: goto L_089297B4;
    case 483u: goto L_089297CC;
    case 484u: goto L_089297E4;
    case 485u: goto L_08929804;
    case 486u: goto L_0892980C;
    case 487u: goto L_08929818;
    case 488u: goto L_08929828;
    case 489u: goto L_08929830;
    case 490u: goto L_08929838;
    case 491u: goto L_08929840;
    case 492u: goto L_08929844;
    case 493u: goto L_08929858;
    case 494u: goto L_08929868;
    case 495u: goto L_08929874;
    case 496u: goto L_0892989C;
    case 497u: goto L_089298B4;
    case 498u: goto L_089298C8;
    case 499u: goto L_089298E0;
    case 500u: goto L_089298E8;
    case 501u: goto L_089298F4;
    case 502u: goto L_089298FC;
    case 503u: goto L_0892990C;
    case 504u: goto L_08929914;
    case 505u: goto L_0892991C;
    case 506u: goto L_08929930;
    case 507u: goto L_08929948;
    case 508u: goto L_08929950;
    case 509u: goto L_08929958;
    case 510u: goto L_08929960;
    case 511u: goto L_0892997C;
    case 512u: goto L_08929994;
    case 513u: goto L_089299A8;
    case 514u: goto L_089299C8;
    case 515u: goto L_089299D0;
    case 516u: goto L_089299DC;
    case 517u: goto L_089299EC;
    case 518u: goto L_089299F4;
    case 519u: goto L_089299FC;
    case 520u: goto L_08929A04;
    case 521u: goto L_08929A08;
    case 522u: goto L_08929A1C;
    case 523u: goto L_08929A3C;
    case 524u: goto L_08929A44;
    case 525u: goto L_08929A50;
    case 526u: goto L_08929A58;
    case 527u: goto L_08929A64;
    case 528u: goto L_08929A8C;
    case 529u: goto L_08929AA4;
    case 530u: goto L_08929AB8;
    case 531u: goto L_08929AD0;
    case 532u: goto L_08929AD8;
    case 533u: goto L_08929AE4;
    case 534u: goto L_08929AEC;
    case 535u: goto L_08929AF8;
    case 536u: goto L_08929B00;
    case 537u: goto L_08929B10;
    case 538u: goto L_08929B20;
    case 539u: goto L_08929B30;
    case 540u: goto L_08929B38;
    case 541u: goto L_08929B4C;
    case 542u: goto L_08929B64;
    case 543u: goto L_08929B80;
    case 544u: goto L_08929B8C;
    case 545u: goto L_08929B94;
    case 546u: goto L_08929BA4;
    case 547u: goto L_08929BBC;
    case 548u: goto L_08929BC4;
    case 549u: goto L_08929BE4;
    case 550u: goto L_08929BEC;
    case 551u: goto L_08929BF8;
    case 552u: goto L_08929C00;
    case 553u: goto L_08929C08;
    case 554u: goto L_08929C14;
    case 555u: goto L_08929C1C;
    case 556u: goto L_08929C28;
    case 557u: goto L_08929C50;
    case 558u: goto L_08929C68;
    case 559u: goto L_08929C7C;
    case 560u: goto L_08929C94;
    case 561u: goto L_08929C9C;
    case 562u: goto L_08929CB8;
    case 563u: goto L_08929CD0;
    case 564u: goto L_08929CDC;
    case 565u: goto L_08929CF0;
    case 566u: goto L_08929CF8;
    case 567u: goto L_08929D00;
    case 568u: goto L_08929D10;
    case 569u: goto L_08929D18;
    case 570u: goto L_08929D2C;
    case 571u: goto L_08929D44;
    case 572u: goto L_08929D60;
    case 573u: goto L_08929D78;
    case 574u: goto L_08929D84;
    case 575u: goto L_08929D8C;
    case 576u: goto L_08929D9C;
    case 577u: goto L_08929DB4;
    case 578u: goto L_08929DD8;
    case 579u: goto L_08929DE0;
    case 580u: goto L_08929DE8;
    case 581u: goto L_08929DF8;
    case 582u: goto L_08929E00;
    case 583u: goto L_08929E08;
    case 584u: goto L_08929E10;
    case 585u: goto L_08929E14;
    case 586u: goto L_08929E20;
    case 587u: goto L_08929E28;
    case 588u: goto L_08929E2C;
    case 589u: goto L_08929E44;
    case 590u: goto L_08929E54;
    case 591u: goto L_08929E60;
    case 592u: goto L_08929E6C;
    case 593u: goto L_08929E90;
    case 594u: goto L_08929E98;
    case 595u: goto L_08929ED4;
    case 596u: goto L_08929EFC;
    case 597u: goto L_08929F10;
    case 598u: goto L_08929F24;
    case 599u: goto L_08929F28;
    case 600u: goto L_08929F3C;
    case 601u: goto L_08929F68;
    case 602u: goto L_08929F98;
    case 603u: goto L_08929FB0;
    case 604u: goto L_08929FC4;
    case 605u: goto L_08929FDC;
    case 606u: goto L_08929FE4;
    case 607u: goto L_0892A000;
    case 608u: goto L_0892A018;
    case 609u: goto L_0892A024;
    case 610u: goto L_0892A02C;
    case 611u: goto L_0892A03C;
    case 612u: goto L_0892A048;
    case 613u: goto L_0892A060;
    case 614u: goto L_0892A078;
    case 615u: goto L_0892A080;
    case 616u: goto L_0892A088;
    case 617u: goto L_0892A0A4;
    case 618u: goto L_0892A0BC;
    case 619u: goto L_0892A0D4;
    case 620u: goto L_0892A0EC;
    case 621u: goto L_0892A10C;
    case 622u: goto L_0892A114;
    case 623u: goto L_0892A120;
    case 624u: goto L_0892A130;
    case 625u: goto L_0892A138;
    case 626u: goto L_0892A140;
    case 627u: goto L_0892A148;
    case 628u: goto L_0892A14C;
    case 629u: goto L_0892A160;
    case 630u: goto L_0892A170;
    case 631u: goto L_0892A17C;
    case 632u: goto L_0892A18C;
    case 633u: goto L_0892A19C;
    case 634u: goto L_0892A1B0;
    case 635u: goto L_0892A1BC;
    case 636u: goto L_0892A1EC;
    case 637u: goto L_0892A204;
    case 638u: goto L_0892A218;
    case 639u: goto L_0892A230;
    case 640u: goto L_0892A238;
    case 641u: goto L_0892A244;
    case 642u: goto L_0892A24C;
    case 643u: goto L_0892A25C;
    case 644u: goto L_0892A264;
    case 645u: goto L_0892A284;
    case 646u: goto L_0892A29C;
    case 647u: goto L_0892A2B8;
    case 648u: goto L_0892A2C4;
    case 649u: goto L_0892A2CC;
    case 650u: goto L_0892A2DC;
    case 651u: goto L_0892A2F4;
    case 652u: goto L_0892A314;
    case 653u: goto L_0892A31C;
    case 654u: goto L_0892A328;
    case 655u: goto L_0892A338;
    case 656u: goto L_0892A340;
    case 657u: goto L_0892A348;
    case 658u: goto L_0892A350;
    case 659u: goto L_0892A354;
    case 660u: goto L_0892A368;
    case 661u: goto L_0892A378;
    case 662u: goto L_0892A384;
    case 663u: goto L_0892A3E8;
    case 664u: goto L_0892A3F8;
    case 665u: goto L_0892A408;
    case 666u: goto L_0892A42C;
    case 667u: goto L_0892A444;
    case 668u: goto L_0892A44C;
    case 669u: goto L_0892A458;
    case 670u: goto L_0892A460;
    case 671u: goto L_0892A46C;
    case 672u: goto L_0892A474;
    case 673u: goto L_0892A480;
    case 674u: goto L_0892A488;
    case 675u: goto L_0892A494;
    case 676u: goto L_0892A49C;
    case 677u: goto L_0892A4A8;
    case 678u: goto L_0892A4B0;
    case 679u: goto L_0892A4BC;
    case 680u: goto L_0892A4C4;
    case 681u: goto L_0892A4D0;
    case 682u: goto L_0892A4D8;
    case 683u: goto L_0892A4E4;
    case 684u: goto L_0892A4EC;
    case 685u: goto L_0892A4F8;
    case 686u: goto L_0892A500;
    case 687u: goto L_0892A50C;
    case 688u: goto L_0892A514;
    case 689u: goto L_0892A520;
    case 690u: goto L_0892A528;
    case 691u: goto L_0892A534;
    case 692u: goto L_0892A53C;
    case 693u: goto L_0892A548;
    case 694u: goto L_0892A550;
    case 695u: goto L_0892A55C;
    case 696u: goto L_0892A564;
    case 697u: goto L_0892A570;
    case 698u: goto L_0892A578;
    case 699u: goto L_0892A584;
    case 700u: goto L_0892A58C;
    case 701u: goto L_0892A598;
    case 702u: goto L_0892A5A0;
    case 703u: goto L_0892A5AC;
    case 704u: goto L_0892A5B4;
    case 705u: goto L_0892A5C0;
    case 706u: goto L_0892A5C8;
    case 707u: goto L_0892A5D4;
    case 708u: goto L_0892A5DC;
    case 709u: goto L_0892A5E8;
    case 710u: goto L_0892A5F0;
    case 711u: goto L_0892A5FC;
    case 712u: goto L_0892A604;
    case 713u: goto L_0892A610;
    case 714u: goto L_0892A618;
    case 715u: goto L_0892A624;
    case 716u: goto L_0892A62C;
    case 717u: goto L_0892A638;
    case 718u: goto L_0892A640;
    case 719u: goto L_0892A64C;
    case 720u: goto L_0892A654;
    case 721u: goto L_0892A660;
    case 722u: goto L_0892A668;
    case 723u: goto L_0892A674;
    case 724u: goto L_0892A67C;
    case 725u: goto L_0892A688;
    case 726u: goto L_0892A690;
    case 727u: goto L_0892A69C;
    case 728u: goto L_0892A6A4;
    case 729u: goto L_0892A6B0;
    case 730u: goto L_0892A6B8;
    case 731u: goto L_0892A6C4;
    case 732u: goto L_0892A6CC;
    case 733u: goto L_0892A6D8;
    case 734u: goto L_0892A6E0;
    case 735u: goto L_0892A6EC;
    case 736u: goto L_0892A6F4;
    case 737u: goto L_0892A700;
    case 738u: goto L_0892A708;
    case 739u: goto L_0892A714;
    case 740u: goto L_0892A71C;
    case 741u: goto L_0892A728;
    case 742u: goto L_0892A730;
    case 743u: goto L_0892A73C;
    case 744u: goto L_0892A744;
    case 745u: goto L_0892A750;
    case 746u: goto L_0892A758;
    case 747u: goto L_0892A764;
    case 748u: goto L_0892A76C;
    case 749u: goto L_0892A778;
    case 750u: goto L_0892A780;
    case 751u: goto L_0892A78C;
    case 752u: goto L_0892A794;
    case 753u: goto L_0892A7A0;
    case 754u: goto L_0892A7D4;
    case 755u: goto L_0892A828;
    case 756u: goto L_0892A878;
    case 757u: goto L_0892A880;
    case 758u: goto L_0892A888;
    case 759u: goto L_0892A894;
    case 760u: goto L_0892A89C;
    case 761u: goto L_0892A8A0;
    case 762u: goto L_0892A8A8;
    case 763u: goto L_0892A8B0;
    case 764u: goto L_0892A8B8;
    case 765u: goto L_0892A8C4;
    case 766u: goto L_0892A8CC;
    case 767u: goto L_0892A8D8;
    case 768u: goto L_0892A8E0;
    case 769u: goto L_0892A900;
    case 770u: goto L_0892A908;
    case 771u: goto L_0892A910;
    case 772u: goto L_0892A928;
    case 773u: goto L_0892A930;
    case 774u: goto L_0892A938;
    case 775u: goto L_0892A940;
    case 776u: goto L_0892A948;
    case 777u: goto L_0892A950;
    case 778u: goto L_0892A960;
    case 779u: goto L_0892A990;
    case 780u: goto L_0892A9A8;
    case 781u: goto L_0892A9B0;
    case 782u: goto L_0892A9B8;
    case 783u: goto L_0892A9CC;
    case 784u: goto L_0892A9D0;
    case 785u: goto L_0892A9D4;
    case 786u: goto L_0892A9E0;
    case 787u: goto L_0892A9E8;
    case 788u: goto L_0892A9F4;
    case 789u: goto L_0892AA08;
    case 790u: goto L_0892AA40;
    case 791u: goto L_0892AA50;
    case 792u: goto L_0892AA64;
    case 793u: goto L_0892AA74;
    case 794u: goto L_0892AA9C;
    case 795u: goto L_0892AAAC;
    case 796u: goto L_0892AAB4;
    case 797u: goto L_0892AAC0;
    case 798u: goto L_0892AAC8;
    case 799u: goto L_0892AAD8;
    case 800u: goto L_0892AAE8;
    case 801u: goto L_0892AAF0;
    case 802u: goto L_0892AB00;
    case 803u: goto L_0892AB28;
    case 804u: goto L_0892AB60;
    case 805u: goto L_0892AB6C;
    case 806u: goto L_0892AB74;
    case 807u: goto L_0892AB80;
    case 808u: goto L_0892AB88;
    case 809u: goto L_0892AB8C;
    case 810u: goto L_0892AB98;
    case 811u: goto L_0892ABC0;
    case 812u: goto L_0892ABE0;
    case 813u: goto L_0892ABF0;
    case 814u: goto L_0892ABFC;
    case 815u: goto L_0892AC0C;
    case 816u: goto L_0892AC28;
    case 817u: goto L_0892AC34;
    case 818u: goto L_0892AC40;
    case 819u: goto L_0892AC50;
    case 820u: goto L_0892AC74;
    case 821u: goto L_0892AC94;
    case 822u: goto L_0892AD30;
    case 823u: goto L_0892AD40;
    case 824u: goto L_0892AD48;
    case 825u: goto L_0892AD50;
    case 826u: goto L_0892AD58;
    case 827u: goto L_0892AD60;
    case 828u: goto L_0892AD70;
    case 829u: goto L_0892AD8C;
    case 830u: goto L_0892ADA4;
    case 831u: goto L_0892ADB4;
    case 832u: goto L_0892ADC0;
    case 833u: goto L_0892ADC8;
    case 834u: goto L_0892ADD0;
    case 835u: goto L_0892ADD8;
    case 836u: goto L_0892ADE8;
    case 837u: goto L_0892AE04;
    case 838u: goto L_0892AE0C;
    case 839u: goto L_0892AE14;
    case 840u: goto L_0892AE20;
    case 841u: goto L_0892AE28;
    case 842u: goto L_0892AE34;
    case 843u: goto L_0892AE50;
    case 844u: goto L_0892AE64;
    case 845u: goto L_0892AE70;
    case 846u: goto L_0892AE78;
    case 847u: goto L_0892AE80;
    case 848u: goto L_0892AE88;
    case 849u: goto L_0892AE90;
    case 850u: goto L_0892AEA0;
    case 851u: goto L_0892AEC4;
    case 852u: goto L_0892AEE4;
    case 853u: goto L_0892AF80;
    case 854u: goto L_0892AF90;
    case 855u: goto L_0892AF98;
    case 856u: goto L_0892AFA0;
    case 857u: goto L_0892AFA8;
    case 858u: goto L_0892AFB0;
    case 859u: goto L_0892AFC0;
    case 860u: goto L_0892AFDC;
    case 861u: goto L_0892AFF4;
    case 862u: goto L_0892B004;
    case 863u: goto L_0892B010;
    case 864u: goto L_0892B018;
    case 865u: goto L_0892B020;
    case 866u: goto L_0892B028;
    case 867u: goto L_0892B038;
    case 868u: goto L_0892B054;
    case 869u: goto L_0892B05C;
    case 870u: goto L_0892B064;
    case 871u: goto L_0892B070;
    case 872u: goto L_0892B078;
    case 873u: goto L_0892B084;
    case 874u: goto L_0892B0A0;
    case 875u: goto L_0892B0B4;
    case 876u: goto L_0892B0C0;
    case 877u: goto L_0892B0C8;
    case 878u: goto L_0892B0D0;
    case 879u: goto L_0892B0D8;
    case 880u: goto L_0892B0E0;
    case 881u: goto L_0892B0F0;
    case 882u: goto L_0892B114;
    case 883u: goto L_0892B134;
    case 884u: goto L_0892B1D0;
    case 885u: goto L_0892B1E0;
    case 886u: goto L_0892B1FC;
    case 887u: goto L_0892B214;
    case 888u: goto L_0892B22C;
    case 889u: goto L_0892B244;
    case 890u: goto L_0892B250;
    case 891u: goto L_0892B26C;
    case 892u: goto L_0892B274;
    case 893u: goto L_0892B28C;
    case 894u: goto L_0892B29C;
    case 895u: goto L_0892B2A4;
    case 896u: goto L_0892B2BC;
    case 897u: goto L_0892B2C4;
    case 898u: goto L_0892B2D0;
    case 899u: goto L_0892B2DC;
    case 900u: goto L_0892B2E4;
    case 901u: goto L_0892B2F8;
    case 902u: goto L_0892B310;
    case 903u: goto L_0892B318;
    case 904u: goto L_0892B328;
    case 905u: goto L_0892B330;
    case 906u: goto L_0892B338;
    case 907u: goto L_0892B340;
    case 908u: goto L_0892B348;
    case 909u: goto L_0892B350;
    case 910u: goto L_0892B358;
    case 911u: goto L_0892B360;
    case 912u: goto L_0892B368;
    case 913u: goto L_0892B370;
    case 914u: goto L_0892B384;
    case 915u: goto L_0892B38C;
    case 916u: goto L_0892B394;
    case 917u: goto L_0892B39C;
    case 918u: goto L_0892B3A4;
    case 919u: goto L_0892B3AC;
    case 920u: goto L_0892B3B8;
    case 921u: goto L_0892B3C0;
    case 922u: goto L_0892B3C8;
    case 923u: goto L_0892B3DC;
    case 924u: goto L_0892B3F4;
    case 925u: goto L_0892B3FC;
    case 926u: goto L_0892B41C;
    case 927u: goto L_0892B424;
    case 928u: goto L_0892B438;
    case 929u: goto L_0892B440;
    case 930u: goto L_0892B44C;
    case 931u: goto L_0892B454;
    case 932u: goto L_0892B464;
    case 933u: goto L_0892B46C;
    case 934u: goto L_0892B474;
    case 935u: goto L_0892B488;
    case 936u: goto L_0892B494;
    case 937u: goto L_0892B49C;
    case 938u: goto L_0892B4A4;
    case 939u: goto L_0892B4AC;
    case 940u: goto L_0892B4B4;
    case 941u: goto L_0892B4BC;
    case 942u: goto L_0892B4C4;
    case 943u: goto L_0892B4CC;
    case 944u: goto L_0892B4D4;
    case 945u: goto L_0892B4E0;
    case 946u: goto L_0892B4EC;
    case 947u: goto L_0892B4F4;
    case 948u: goto L_0892B4FC;
    case 949u: goto L_0892B504;
    case 950u: goto L_0892B510;
    case 951u: goto L_0892B518;
    case 952u: goto L_0892B520;
    case 953u: goto L_0892B528;
    case 954u: goto L_0892B530;
    case 955u: goto L_0892B538;
    case 956u: goto L_0892B540;
    case 957u: goto L_0892B548;
    case 958u: goto L_0892B550;
    case 959u: goto L_0892B558;
    case 960u: goto L_0892B560;
    case 961u: goto L_0892B568;
    case 962u: goto L_0892B570;
    case 963u: goto L_0892B578;
    case 964u: goto L_0892B580;
    case 965u: goto L_0892B588;
    case 966u: goto L_0892B590;
    case 967u: goto L_0892B59C;
    case 968u: goto L_0892B5A4;
    case 969u: goto L_0892B5AC;
    case 970u: goto L_0892B5B4;
    case 971u: goto L_0892B5BC;
    case 972u: goto L_0892B5C4;
    case 973u: goto L_0892B5CC;
    case 974u: goto L_0892B5D4;
    case 975u: goto L_0892B5DC;
    case 976u: goto L_0892B5E4;
    case 977u: goto L_0892B5EC;
    case 978u: goto L_0892B5F4;
    case 979u: goto L_0892B604;
    case 980u: goto L_0892B618;
    case 981u: goto L_0892B620;
    case 982u: goto L_0892B628;
    case 983u: goto L_0892B630;
    case 984u: goto L_0892B648;
    case 985u: goto L_0892B650;
    case 986u: goto L_0892B670;
    case 987u: goto L_0892B678;
    case 988u: goto L_0892B688;
    case 989u: goto L_0892B690;
    case 990u: goto L_0892B69C;
    case 991u: goto L_0892B6AC;
    case 992u: goto L_0892B6BC;
    case 993u: goto L_0892B6CC;
    case 994u: goto L_0892B6D4;
    case 995u: goto L_0892B6E0;
    case 996u: goto L_0892B6E8;
    case 997u: goto L_0892B6F0;
    case 998u: goto L_0892B6FC;
    case 999u: goto L_0892B704;
    case 1000u: goto L_0892B70C;
    case 1001u: goto L_0892B718;
    case 1002u: goto L_0892B720;
    case 1003u: goto L_0892B730;
    case 1004u: goto L_0892B734;
    case 1005u: goto L_0892B73C;
    case 1006u: goto L_0892B748;
    case 1007u: goto L_0892B750;
    case 1008u: goto L_0892B758;
    case 1009u: goto L_0892B764;
    case 1010u: goto L_0892B76C;
    case 1011u: goto L_0892B778;
    case 1012u: goto L_0892B784;
    case 1013u: goto L_0892B78C;
    case 1014u: goto L_0892B798;
    case 1015u: goto L_0892B7A8;
    case 1016u: goto L_0892B7B0;
    case 1017u: goto L_0892B7BC;
    case 1018u: goto L_0892B7C4;
    case 1019u: goto L_0892B7E8;
    case 1020u: goto L_0892B7F0;
    case 1021u: goto L_0892B800;
    case 1022u: goto L_0892B808;
    case 1023u: goto L_0892B814;
    case 1024u: goto L_0892B824;
    case 1025u: goto L_0892B834;
    case 1026u: goto L_0892B844;
    case 1027u: goto L_0892B84C;
    case 1028u: goto L_0892B858;
    case 1029u: goto L_0892B860;
    case 1030u: goto L_0892B868;
    case 1031u: goto L_0892B874;
    case 1032u: goto L_0892B87C;
    case 1033u: goto L_0892B884;
    case 1034u: goto L_0892B890;
    case 1035u: goto L_0892B898;
    case 1036u: goto L_0892B8A0;
    case 1037u: goto L_0892B8AC;
    case 1038u: goto L_0892B8B4;
    case 1039u: goto L_0892B8C0;
    case 1040u: goto L_0892B8CC;
    case 1041u: goto L_0892B8D4;
    case 1042u: goto L_0892B8E0;
    case 1043u: goto L_0892B8F0;
    case 1044u: goto L_0892B8F8;
    case 1045u: goto L_0892B904;
    case 1046u: goto L_0892B90C;
    case 1047u: goto L_0892B91C;
    case 1048u: goto L_0892B924;
    case 1049u: goto L_0892B938;
    case 1050u: goto L_0892B940;
    case 1051u: goto L_0892B94C;
    case 1052u: goto L_0892B950;
    case 1053u: goto L_0892B95C;
    case 1054u: goto L_0892B970;
    case 1055u: goto L_0892B978;
    case 1056u: goto L_0892B99C;
    case 1057u: goto L_0892B9A4;
    case 1058u: goto L_0892B9B8;
    case 1059u: goto L_0892B9C0;
    case 1060u: goto L_0892B9CC;
    case 1061u: goto L_0892B9D8;
    case 1062u: goto L_0892B9E0;
    case 1063u: goto L_0892B9E8;
    case 1064u: goto L_0892B9F0;
    case 1065u: goto L_0892B9F8;
    case 1066u: goto L_0892BA08;
    case 1067u: goto L_0892BA10;
    case 1068u: goto L_0892BA18;
    case 1069u: goto L_0892BA20;
    case 1070u: goto L_0892BA28;
    case 1071u: goto L_0892BA30;
    case 1072u: goto L_0892BA38;
    case 1073u: goto L_0892BA40;
    case 1074u: goto L_0892BA48;
    case 1075u: goto L_0892BA50;
    case 1076u: goto L_0892BA58;
    case 1077u: goto L_0892BA60;
    case 1078u: goto L_0892BA68;
    case 1079u: goto L_0892BA70;
    case 1080u: goto L_0892BA78;
    case 1081u: goto L_0892BA80;
    case 1082u: goto L_0892BA88;
    case 1083u: goto L_0892BA94;
    case 1084u: goto L_0892BA9C;
    case 1085u: goto L_0892BAA4;
    case 1086u: goto L_0892BAB4;
    case 1087u: goto L_0892BADC;
    case 1088u: goto L_0892BAF4;
    case 1089u: goto L_0892BAFC;
    case 1090u: goto L_0892BB18;
    case 1091u: goto L_0892BB20;
    case 1092u: goto L_0892BB3C;
    case 1093u: goto L_0892BB44;
    case 1094u: goto L_0892BB50;
    case 1095u: goto L_0892BB5C;
    case 1096u: goto L_0892BB68;
    case 1097u: goto L_0892BB80;
    case 1098u: goto L_0892BB94;
    case 1099u: goto L_0892BBA4;
    case 1100u: goto L_0892BBB4;
    case 1101u: goto L_0892BBBC;
    case 1102u: goto L_0892BBCC;
    case 1103u: goto L_0892BBD4;
    case 1104u: goto L_0892BBDC;
    case 1105u: goto L_0892BBE4;
    case 1106u: goto L_0892BBEC;
    case 1107u: goto L_0892BBF4;
    case 1108u: goto L_0892BBFC;
    case 1109u: goto L_0892BC04;
    case 1110u: goto L_0892BC0C;
    case 1111u: goto L_0892BC14;
    case 1112u: goto L_0892BC1C;
    case 1113u: goto L_0892BC24;
    case 1114u: goto L_0892BC2C;
    case 1115u: goto L_0892BC38;
    case 1116u: goto L_0892BC40;
    case 1117u: goto L_0892BC48;
    case 1118u: goto L_0892BC5C;
    case 1119u: goto L_0892BC6C;
    case 1120u: goto L_0892BC84;
    case 1121u: goto L_0892BCA0;
    case 1122u: goto L_0892BCA8;
    case 1123u: goto L_0892BCC8;
    case 1124u: goto L_0892BCD8;
    case 1125u: goto L_0892BCE0;
    case 1126u: goto L_0892BD08;
    case 1127u: goto L_0892BD10;
    case 1128u: goto L_0892BD30;
    case 1129u: goto L_0892BD38;
    case 1130u: goto L_0892BD50;
    case 1131u: goto L_0892BD58;
    case 1132u: goto L_0892BD64;
    case 1133u: goto L_0892BD6C;
    case 1134u: goto L_0892BD7C;
    case 1135u: goto L_0892BD84;
    case 1136u: goto L_0892BD8C;
    case 1137u: goto L_0892BDA0;
    case 1138u: goto L_0892BDAC;
    case 1139u: goto L_0892BDB4;
    case 1140u: goto L_0892BDBC;
    case 1141u: goto L_0892BDCC;
    case 1142u: goto L_0892BDD4;
    case 1143u: goto L_0892BDDC;
    case 1144u: goto L_0892BDE4;
    case 1145u: goto L_0892BDEC;
    case 1146u: goto L_0892BDF4;
    case 1147u: goto L_0892BDFC;
    case 1148u: goto L_0892BE04;
    case 1149u: goto L_0892BE0C;
    case 1150u: goto L_0892BE14;
    case 1151u: goto L_0892BE1C;
    case 1152u: goto L_0892BE28;
    case 1153u: goto L_0892BE34;
    case 1154u: goto L_0892BE3C;
    case 1155u: goto L_0892BE44;
    case 1156u: goto L_0892BE54;
    case 1157u: goto L_0892BE5C;
    case 1158u: goto L_0892BE64;
    case 1159u: goto L_0892BE74;
    case 1160u: goto L_0892BE7C;
    case 1161u: goto L_0892BE84;
    case 1162u: goto L_0892BE8C;
    case 1163u: goto L_0892BE94;
    case 1164u: goto L_0892BE9C;
    case 1165u: goto L_0892BEA4;
    case 1166u: goto L_0892BEAC;
    case 1167u: goto L_0892BEB4;
    case 1168u: goto L_0892BEC4;
    case 1169u: goto L_0892BECC;
    case 1170u: goto L_0892BED4;
    case 1171u: goto L_0892BEDC;
    case 1172u: goto L_0892BEE4;
    case 1173u: goto L_0892BEEC;
    case 1174u: goto L_0892BEFC;
    case 1175u: goto L_0892BF04;
    case 1176u: goto L_0892BF0C;
    case 1177u: goto L_0892BF14;
    case 1178u: goto L_0892BF1C;
    case 1179u: goto L_0892BF24;
    case 1180u: goto L_0892BF2C;
    case 1181u: goto L_0892BF34;
    case 1182u: goto L_0892BF3C;
    case 1183u: goto L_0892BF44;
    case 1184u: goto L_0892BF4C;
    case 1185u: goto L_0892BF54;
    case 1186u: goto L_0892BF5C;
    case 1187u: goto L_0892BF64;
    case 1188u: goto L_0892BF6C;
    case 1189u: goto L_0892BF74;
    case 1190u: goto L_0892BF7C;
    case 1191u: goto L_0892BF90;
    case 1192u: goto L_0892BFB4;
    case 1193u: goto L_0892BFBC;
    case 1194u: goto L_0892BFE0;
    case 1195u: goto L_0892BFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08928004:
    ctx.gpr[31] = (0x0892800Cu);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x0892800Cu) goto L_0892800C;
    return;
L_0892800C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928038;
      }
      goto L_08928014;
    }
L_08928014:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08928030;
      }
      goto L_0892801C;
    }
L_0892801C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x08928028u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928028u) goto L_08928028;
    return;
L_08928028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928038;
      }
      goto L_08928030;
    }
L_08928030:
    ctx.gpr[31] = (0x08928038u);
    ctx.gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928038u) goto L_08928038;
    return;
L_08928038:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928048:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928058u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 45u, 0x088BC324u>(ctx, &aot_mem) && ctx.pc == 0x08928058u) goto L_08928058;
    return;
L_08928058:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928064:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1048), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1044), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928084u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 42u, 0x08820300u>(ctx, &aot_mem) && ctx.pc == 0x08928084u) goto L_08928084;
    return;
L_08928084:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0892810C;
      }
      goto L_08928098;
    }
L_08928098:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089280A8u);
    ctx.gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089280A8u) goto L_089280A8;
    return;
L_089280A8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089280BCu);
    ctx.gpr[6] = (0u | 516u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089280BCu) goto L_089280BC;
    return;
L_089280BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 516u);
    ctx.gpr[31] = (0x089280D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(516));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089280D4u) goto L_089280D4;
    return;
L_089280D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(520));
    ctx.gpr[31] = (0x089280F0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x089280F0u) goto L_089280F0;
    return;
L_089280F0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(532));
    ctx.gpr[31] = (0x089280FCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089280FCu) goto L_089280FC;
    return;
L_089280FC:
    ctx.gpr[31] = (0x08928104u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 43u, 0x08820310u>(ctx, &aot_mem) && ctx.pc == 0x08928104u) goto L_08928104;
    return;
L_08928104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928114;
      }
      goto L_0892810C;
    }
L_0892810C:
    ctx.gpr[31] = (0x08928114u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 43u, 0x08820310u>(ctx, &aot_mem) && ctx.pc == 0x08928114u) goto L_08928114;
    return;
L_08928114:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1044)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892812C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928134:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 41u, 0x088202F0u>(ctx, &aot_mem) && ctx.pc == 0x08928148u) goto L_08928148;
    return;
L_08928148:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_089281C4;
      }
      goto L_08928150;
    }
L_08928150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08928174;
      }
      goto L_08928164;
    }
L_08928164:
    ctx.gpr[31] = (0x0892816Cu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x0892816Cu) goto L_0892816C;
    return;
L_0892816C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089281C4;
      }
      goto L_08928174;
    }
L_08928174:
    ctx.gpr[31] = (0x0892817Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 61u, 0x088203E8u>(ctx, &aot_mem) && ctx.pc == 0x0892817Cu) goto L_0892817C;
    return;
L_0892817C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_089281A4;
    }
    goto L_08928188;
L_08928188:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
        goto L_089281BC;
    }
    goto L_08928190;
L_08928190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x0892819Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x0892819Cu) goto L_0892819C;
    return;
L_0892819C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089281C4;
      }
      goto L_089281A4;
    }
L_089281A4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
        goto L_089281BC;
    }
    goto L_089281AC;
L_089281AC:
    ctx.gpr[31] = (0x089281B4u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x089281B4u) goto L_089281B4;
    return;
L_089281B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089281C4;
      }
      goto L_089281BC;
    }
L_089281BC:
    ctx.gpr[31] = (0x089281C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x089281C4u) goto L_089281C4;
    return;
L_089281C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089281D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[31]);
    ctx.gpr[31] = (0x089281FCu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089281FCu) goto L_089281FC;
    return;
L_089281FC:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08928210u);
    ctx.gpr[6] = (0u | 516u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08928210u) goto L_08928210;
    return;
L_08928210:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 516u);
    ctx.gpr[31] = (0x0892822Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3096));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0892822Cu) goto L_0892822C;
    return;
L_0892822C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_0892825C;
      }
      goto L_0892823C;
    }
L_0892823C:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0892824Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4088));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0892824Cu) goto L_0892824C;
    return;
L_0892824C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3100));
      if (branch_taken) {
          goto L_08928274;
      }
      goto L_0892825C;
    }
L_0892825C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08928268u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4096));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08928268u) goto L_08928268;
    return;
L_08928268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3100));
    goto L_08928274;
L_08928274:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08928284u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08928284u) goto L_08928284;
    return;
L_08928284:
    ctx.gpr[31] = (0x0892828Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 42u, 0x08820300u>(ctx, &aot_mem) && ctx.pc == 0x0892828Cu) goto L_0892828C;
    return;
L_0892828C:
    ctx.gpr[31] = (0x08928294u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 43u, 0x08820310u>(ctx, &aot_mem) && ctx.pc == 0x08928294u) goto L_08928294;
    return;
L_08928294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089282B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089282C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089282D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 41u, 0x088202F0u>(ctx, &aot_mem) && ctx.pc == 0x089282D0u) goto L_089282D0;
    return;
L_089282D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928334;
      }
      goto L_089282D8;
    }
L_089282D8:
    ctx.gpr[31] = (0x089282E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 61u, 0x088203E8u>(ctx, &aot_mem) && ctx.pc == 0x089282E0u) goto L_089282E0;
    return;
L_089282E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_0892830C;
    }
    goto L_089282EC;
L_089282EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_0892832C;
      }
      goto L_089282F4;
    }
L_089282F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x08928300u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928300u) goto L_08928300;
    return;
L_08928300:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892830C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_0892832C;
      }
      goto L_08928314;
    }
L_08928314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x08928320u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928320u) goto L_08928320;
    return;
L_08928320:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892832C:
    ctx.gpr[31] = (0x08928334u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928334u) goto L_08928334;
    return;
L_08928334:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928340:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928350u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 42u, 0x08820300u>(ctx, &aot_mem) && ctx.pc == 0x08928350u) goto L_08928350;
    return;
L_08928350:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08928364u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1032));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 43u, 0x08820310u>(ctx, &aot_mem) && ctx.pc == 0x08928364u) goto L_08928364;
    return;
L_08928364:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928370:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928378:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 41u, 0x088202F0u>(ctx, &aot_mem) && ctx.pc == 0x08928388u) goto L_08928388;
    return;
L_08928388:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089283E8;
      }
      goto L_08928390;
    }
L_08928390:
    ctx.gpr[31] = (0x08928398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 61u, 0x088203E8u>(ctx, &aot_mem) && ctx.pc == 0x08928398u) goto L_08928398;
    return;
L_08928398:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_089283C4;
    }
    goto L_089283A4;
L_089283A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_089283E0;
      }
      goto L_089283AC;
    }
L_089283AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x089283B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x089283B8u) goto L_089283B8;
    return;
L_089283B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089283C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089283E0;
      }
      goto L_089283CC;
    }
L_089283CC:
    ctx.gpr[31] = (0x089283D4u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x089283D4u) goto L_089283D4;
    return;
L_089283D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089283E0:
    ctx.gpr[31] = (0x089283E8u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x089283E8u) goto L_089283E8;
    return;
L_089283E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089283F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928404u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 42u, 0x08820300u>(ctx, &aot_mem) && ctx.pc == 0x08928404u) goto L_08928404;
    return;
L_08928404:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08928418u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4644));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 43u, 0x08820310u>(ctx, &aot_mem) && ctx.pc == 0x08928418u) goto L_08928418;
    return;
L_08928418:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928424:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892842C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892843Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 41u, 0x088202F0u>(ctx, &aot_mem) && ctx.pc == 0x0892843Cu) goto L_0892843C;
    return;
L_0892843C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892849C;
      }
      goto L_08928444;
    }
L_08928444:
    ctx.gpr[31] = (0x0892844Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 61u, 0x088203E8u>(ctx, &aot_mem) && ctx.pc == 0x0892844Cu) goto L_0892844C;
    return;
L_0892844C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08928478;
    }
    goto L_08928458;
L_08928458:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08928494;
      }
      goto L_08928460;
    }
L_08928460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x0892846Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x0892846Cu) goto L_0892846C;
    return;
L_0892846C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928478:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928494;
      }
      goto L_08928480;
    }
L_08928480:
    ctx.gpr[31] = (0x08928488u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928488u) goto L_08928488;
    return;
L_08928488:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928494:
    ctx.gpr[31] = (0x0892849Cu);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x0892849Cu) goto L_0892849C;
    return;
L_0892849C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089284A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089284B8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 42u, 0x08820300u>(ctx, &aot_mem) && ctx.pc == 0x089284B8u) goto L_089284B8;
    return;
L_089284B8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x089284CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6708));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 43u, 0x08820310u>(ctx, &aot_mem) && ctx.pc == 0x089284CCu) goto L_089284CC;
    return;
L_089284CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089284D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089284E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089284F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 41u, 0x088202F0u>(ctx, &aot_mem) && ctx.pc == 0x089284F0u) goto L_089284F0;
    return;
L_089284F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928554;
      }
      goto L_089284F8;
    }
L_089284F8:
    ctx.gpr[31] = (0x08928500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 61u, 0x088203E8u>(ctx, &aot_mem) && ctx.pc == 0x08928500u) goto L_08928500;
    return;
L_08928500:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_0892852C;
    }
    goto L_0892850C;
L_0892850C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_0892854C;
      }
      goto L_08928514;
    }
L_08928514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x08928520u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928520u) goto L_08928520;
    return;
L_08928520:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892852C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_0892854C;
      }
      goto L_08928534;
    }
L_08928534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x08928540u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928540u) goto L_08928540;
    return;
L_08928540:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892854C:
    ctx.gpr[31] = (0x08928554u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928554u) goto L_08928554;
    return;
L_08928554:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928560:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928570u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 42u, 0x08820300u>(ctx, &aot_mem) && ctx.pc == 0x08928570u) goto L_08928570;
    return;
L_08928570:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08928598;
      }
      goto L_08928584;
    }
L_08928584:
    ctx.gpr[31] = (0x0892858Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5676));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 43u, 0x08820310u>(ctx, &aot_mem) && ctx.pc == 0x0892858Cu) goto L_0892858C;
    return;
L_0892858C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928598:
    ctx.gpr[31] = (0x089285A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5160));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 43u, 0x08820310u>(ctx, &aot_mem) && ctx.pc == 0x089285A0u) goto L_089285A0;
    return;
L_089285A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089285AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089285B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089285C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 41u, 0x088202F0u>(ctx, &aot_mem) && ctx.pc == 0x089285C4u) goto L_089285C4;
    return;
L_089285C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928650;
      }
      goto L_089285CC;
    }
L_089285CC:
    ctx.gpr[31] = (0x089285D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 61u, 0x088203E8u>(ctx, &aot_mem) && ctx.pc == 0x089285D4u) goto L_089285D4;
    return;
L_089285D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08928604;
    }
    goto L_089285E0;
L_089285E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08928620;
      }
      goto L_089285E8;
    }
L_089285E8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x089285F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x089285F8u) goto L_089285F8;
    return;
L_089285F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928604:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08928620;
      }
      goto L_0892860C;
    }
L_0892860C:
    ctx.gpr[31] = (0x08928614u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928614u) goto L_08928614;
    return;
L_08928614:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08928648;
      }
      goto L_08928634;
    }
L_08928634:
    ctx.gpr[31] = (0x0892863Cu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x0892863Cu) goto L_0892863C;
    return;
L_0892863C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928648:
    ctx.gpr[31] = (0x08928650u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928650u) goto L_08928650;
    return;
L_08928650:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892865C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892866Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 84u, 0x0896C8FCu>(ctx, &aot_mem) && ctx.pc == 0x0892866Cu) goto L_0892866C;
    return;
L_0892866C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[5] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0892869Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 248u, 0x0896D988u>(ctx, &aot_mem) && ctx.pc == 0x0892869Cu) goto L_0892869C;
    return;
L_0892869C:
    ctx.gpr[31] = (0x089286A4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 29u, 0x08820260u>(ctx, &aot_mem) && ctx.pc == 0x089286A4u) goto L_089286A4;
    return;
L_089286A4:
    ctx.gpr[31] = (0x089286ACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 27u, 0x088BC20Cu>(ctx, &aot_mem) && ctx.pc == 0x089286ACu) goto L_089286AC;
    return;
L_089286AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089286B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089286C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 87u, 0x0896C950u>(ctx, &aot_mem) && ctx.pc == 0x089286C8u) goto L_089286C8;
    return;
L_089286C8:
    ctx.gpr[31] = (0x089286D0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 35u, 0x088BC290u>(ctx, &aot_mem) && ctx.pc == 0x089286D0u) goto L_089286D0;
    return;
L_089286D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089286DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089286F0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 43u, 0x088BC308u>(ctx, &aot_mem) && ctx.pc == 0x089286F0u) goto L_089286F0;
    return;
L_089286F0:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928868;
      }
      goto L_08928704;
    }
L_08928704:
    ctx.gpr[31] = (0x0892870Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 28u, 0x08820250u>(ctx, &aot_mem) && ctx.pc == 0x0892870Cu) goto L_0892870C;
    return;
L_0892870C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892890C;
      }
      goto L_08928714;
    }
L_08928714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x08928720u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 188u, 0x0896D328u>(ctx, &aot_mem) && ctx.pc == 0x08928720u) goto L_08928720;
    return;
L_08928720:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_0892878C;
      }
      goto L_0892872C;
    }
L_0892872C:
    ctx.gpr[31] = (0x08928734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 211u, 0x0896D584u>(ctx, &aot_mem) && ctx.pc == 0x08928734u) goto L_08928734;
    return;
L_08928734:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
      if (branch_taken) {
          goto L_08928768;
      }
      goto L_0892873C;
    }
L_0892873C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[31] = (0x08928758u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 127u, 0x0896CC90u>(ctx, &aot_mem) && ctx.pc == 0x08928758u) goto L_08928758;
    return;
L_08928758:
    ctx.gpr[31] = (0x08928760u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 29u, 0x08820260u>(ctx, &aot_mem) && ctx.pc == 0x08928760u) goto L_08928760;
    return;
L_08928760:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892890C;
      }
      goto L_08928768;
    }
L_08928768:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08928774u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 208u, 0x0896D440u>(ctx, &aot_mem) && ctx.pc == 0x08928774u) goto L_08928774;
    return;
L_08928774:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x08928784u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928784u) goto L_08928784;
    return;
L_08928784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892890C;
      }
      goto L_0892878C;
    }
L_0892878C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_089287F4;
      }
      goto L_08928794;
    }
L_08928794:
    ctx.gpr[31] = (0x0892879Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 210u, 0x0896D554u>(ctx, &aot_mem) && ctx.pc == 0x0892879Cu) goto L_0892879C;
    return;
L_0892879C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
      if (branch_taken) {
          goto L_089287D0;
      }
      goto L_089287A4;
    }
L_089287A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x089287B4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 592u, 0x08842DDCu>(ctx, &aot_mem) && ctx.pc == 0x089287B4u) goto L_089287B4;
    return;
L_089287B4:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x089287C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 105u, 0x0896CA30u>(ctx, &aot_mem) && ctx.pc == 0x089287C0u) goto L_089287C0;
    return;
L_089287C0:
    ctx.gpr[31] = (0x089287C8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 29u, 0x08820260u>(ctx, &aot_mem) && ctx.pc == 0x089287C8u) goto L_089287C8;
    return;
L_089287C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892890C;
      }
      goto L_089287D0;
    }
L_089287D0:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089287DCu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 208u, 0x0896D440u>(ctx, &aot_mem) && ctx.pc == 0x089287DCu) goto L_089287DC;
    return;
L_089287DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x089287ECu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x089287ECu) goto L_089287EC;
    return;
L_089287EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892890C;
      }
      goto L_089287F4;
    }
L_089287F4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_0892880C;
      }
      goto L_089287FC;
    }
L_089287FC:
    ctx.gpr[31] = (0x08928804u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928804u) goto L_08928804;
    return;
L_08928804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892890C;
      }
      goto L_0892880C;
    }
L_0892880C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_08928824;
      }
      goto L_08928814;
    }
L_08928814:
    ctx.gpr[31] = (0x0892881Cu);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x0892881Cu) goto L_0892881C;
    return;
L_0892881C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892890C;
      }
      goto L_08928824;
    }
L_08928824:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0892883C;
      }
      goto L_0892882C;
    }
L_0892882C:
    ctx.gpr[31] = (0x08928834u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928834u) goto L_08928834;
    return;
L_08928834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892890C;
      }
      goto L_0892883C;
    }
L_0892883C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08928858;
      }
      goto L_08928844;
    }
L_08928844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x08928850u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928850u) goto L_08928850;
    return;
L_08928850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892890C;
      }
      goto L_08928858;
    }
L_08928858:
    ctx.gpr[31] = (0x08928860u);
    ctx.gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928860u) goto L_08928860;
    return;
L_08928860:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892890C;
      }
      goto L_08928868;
    }
L_08928868:
    ctx.gpr[31] = (0x08928870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 28u, 0x08820250u>(ctx, &aot_mem) && ctx.pc == 0x08928870u) goto L_08928870;
    return;
L_08928870:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892890C;
      }
      goto L_08928878;
    }
L_08928878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x08928884u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 188u, 0x0896D328u>(ctx, &aot_mem) && ctx.pc == 0x08928884u) goto L_08928884;
    return;
L_08928884:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_089288A0;
      }
      goto L_08928890;
    }
L_08928890:
    ctx.gpr[31] = (0x08928898u);
    ctx.gpr[4] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928898u) goto L_08928898;
    return;
L_08928898:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892890C;
      }
      goto L_089288A0;
    }
L_089288A0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_089288B8;
      }
      goto L_089288A8;
    }
L_089288A8:
    ctx.gpr[31] = (0x089288B0u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x089288B0u) goto L_089288B0;
    return;
L_089288B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892890C;
      }
      goto L_089288B8;
    }
L_089288B8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_089288D0;
      }
      goto L_089288C0;
    }
L_089288C0:
    ctx.gpr[31] = (0x089288C8u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x089288C8u) goto L_089288C8;
    return;
L_089288C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892890C;
      }
      goto L_089288D0;
    }
L_089288D0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089288E8;
      }
      goto L_089288D8;
    }
L_089288D8:
    ctx.gpr[31] = (0x089288E0u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x089288E0u) goto L_089288E0;
    return;
L_089288E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892890C;
      }
      goto L_089288E8;
    }
L_089288E8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08928904;
      }
      goto L_089288F0;
    }
L_089288F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x089288FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x089288FCu) goto L_089288FC;
    return;
L_089288FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892890C;
      }
      goto L_08928904;
    }
L_08928904:
    ctx.gpr[31] = (0x0892890Cu);
    ctx.gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x0892890Cu) goto L_0892890C;
    return;
L_0892890C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892891C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892892Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 45u, 0x088BC324u>(ctx, &aot_mem) && ctx.pc == 0x0892892Cu) goto L_0892892C;
    return;
L_0892892C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928938:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928948u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 42u, 0x08820300u>(ctx, &aot_mem) && ctx.pc == 0x08928948u) goto L_08928948;
    return;
L_08928948:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x0892895Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1548));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 43u, 0x08820310u>(ctx, &aot_mem) && ctx.pc == 0x0892895Cu) goto L_0892895C;
    return;
L_0892895C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928968:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928970:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 41u, 0x088202F0u>(ctx, &aot_mem) && ctx.pc == 0x08928980u) goto L_08928980;
    return;
L_08928980:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089289E8;
      }
      goto L_08928988;
    }
L_08928988:
    ctx.gpr[31] = (0x08928990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 61u, 0x088203E8u>(ctx, &aot_mem) && ctx.pc == 0x08928990u) goto L_08928990;
    return;
L_08928990:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_089289BC;
    }
    goto L_0892899C;
L_0892899C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_089289E0;
      }
      goto L_089289A4;
    }
L_089289A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x089289B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x089289B0u) goto L_089289B0;
    return;
L_089289B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089289BC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089289E0;
      }
      goto L_089289C4;
    }
L_089289C4:
    ctx.gpr[31] = (0x089289CCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 501u, 0x08842738u>(ctx, &aot_mem) && ctx.pc == 0x089289CCu) goto L_089289CC;
    return;
L_089289CC:
    ctx.gpr[31] = (0x089289D4u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x089289D4u) goto L_089289D4;
    return;
L_089289D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089289E0:
    ctx.gpr[31] = (0x089289E8u);
    ctx.gpr[4] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x089289E8u) goto L_089289E8;
    return;
L_089289E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089289F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928A04u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 42u, 0x08820300u>(ctx, &aot_mem) && ctx.pc == 0x08928A04u) goto L_08928A04;
    return;
L_08928A04:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08928A18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 43u, 0x08820310u>(ctx, &aot_mem) && ctx.pc == 0x08928A18u) goto L_08928A18;
    return;
L_08928A18:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928A24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928A2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 41u, 0x088202F0u>(ctx, &aot_mem) && ctx.pc == 0x08928A3Cu) goto L_08928A3C;
    return;
L_08928A3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928A9C;
      }
      goto L_08928A44;
    }
L_08928A44:
    ctx.gpr[31] = (0x08928A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 61u, 0x088203E8u>(ctx, &aot_mem) && ctx.pc == 0x08928A4Cu) goto L_08928A4C;
    return;
L_08928A4C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08928A78;
    }
    goto L_08928A58;
L_08928A58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08928A94;
      }
      goto L_08928A60;
    }
L_08928A60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x08928A6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928A6Cu) goto L_08928A6C;
    return;
L_08928A6C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928A78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928A94;
      }
      goto L_08928A80;
    }
L_08928A80:
    ctx.gpr[31] = (0x08928A88u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928A88u) goto L_08928A88;
    return;
L_08928A88:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928A94:
    ctx.gpr[31] = (0x08928A9Cu);
    ctx.gpr[4] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928A9Cu) goto L_08928A9C;
    return;
L_08928A9C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928AA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 84u, 0x0896C8FCu>(ctx, &aot_mem) && ctx.pc == 0x08928AB8u) goto L_08928AB8;
    return;
L_08928AB8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[5] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08928AE4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 146u, 0x0896CEC0u>(ctx, &aot_mem) && ctx.pc == 0x08928AE4u) goto L_08928AE4;
    return;
L_08928AE4:
    ctx.gpr[31] = (0x08928AECu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 29u, 0x08820260u>(ctx, &aot_mem) && ctx.pc == 0x08928AECu) goto L_08928AEC;
    return;
L_08928AEC:
    ctx.gpr[31] = (0x08928AF4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 27u, 0x088BC20Cu>(ctx, &aot_mem) && ctx.pc == 0x08928AF4u) goto L_08928AF4;
    return;
L_08928AF4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928B00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 87u, 0x0896C950u>(ctx, &aot_mem) && ctx.pc == 0x08928B10u) goto L_08928B10;
    return;
L_08928B10:
    ctx.gpr[31] = (0x08928B18u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 35u, 0x088BC290u>(ctx, &aot_mem) && ctx.pc == 0x08928B18u) goto L_08928B18;
    return;
L_08928B18:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928B24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 28u, 0x08820250u>(ctx, &aot_mem) && ctx.pc == 0x08928B40u) goto L_08928B40;
    return;
L_08928B40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_08928C34;
      }
      goto L_08928B48;
    }
L_08928B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x08928B54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 188u, 0x0896D328u>(ctx, &aot_mem) && ctx.pc == 0x08928B54u) goto L_08928B54;
    return;
L_08928B54:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08928BB0;
      }
      goto L_08928B60;
    }
L_08928B60:
    ctx.gpr[31] = (0x08928B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 207u, 0x0896D41Cu>(ctx, &aot_mem) && ctx.pc == 0x08928B68u) goto L_08928B68;
    return;
L_08928B68:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08928B78u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 606u, 0x08842ED4u>(ctx, &aot_mem) && ctx.pc == 0x08928B78u) goto L_08928B78;
    return;
L_08928B78:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(3600));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08928B88u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 543u, 0x08A9DEE8u>(ctx, &aot_mem) && ctx.pc == 0x08928B88u) goto L_08928B88;
    return;
L_08928B88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08928BA0;
      }
      goto L_08928B90;
    }
L_08928B90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08928BA0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 496u, 0x088426F4u>(ctx, &aot_mem) && ctx.pc == 0x08928BA0u) goto L_08928BA0;
    return;
L_08928BA0:
    ctx.gpr[31] = (0x08928BA8u);
    ctx.gpr[4] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928BA8u) goto L_08928BA8;
    return;
L_08928BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928C34;
      }
      goto L_08928BB0;
    }
L_08928BB0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_08928BC8;
      }
      goto L_08928BB8;
    }
L_08928BB8:
    ctx.gpr[31] = (0x08928BC0u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928BC0u) goto L_08928BC0;
    return;
L_08928BC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928C34;
      }
      goto L_08928BC8;
    }
L_08928BC8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08928BE0;
      }
      goto L_08928BD0;
    }
L_08928BD0:
    ctx.gpr[31] = (0x08928BD8u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928BD8u) goto L_08928BD8;
    return;
L_08928BD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928C34;
      }
      goto L_08928BE0;
    }
L_08928BE0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_08928BF8;
      }
      goto L_08928BE8;
    }
L_08928BE8:
    ctx.gpr[31] = (0x08928BF0u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928BF0u) goto L_08928BF0;
    return;
L_08928BF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928C34;
      }
      goto L_08928BF8;
    }
L_08928BF8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08928C10;
      }
      goto L_08928C00;
    }
L_08928C00:
    ctx.gpr[31] = (0x08928C08u);
    ctx.gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928C08u) goto L_08928C08;
    return;
L_08928C08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928C34;
      }
      goto L_08928C10;
    }
L_08928C10:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08928C2C;
      }
      goto L_08928C18;
    }
L_08928C18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x08928C24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928C24u) goto L_08928C24;
    return;
L_08928C24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928C34;
      }
      goto L_08928C2C;
    }
L_08928C2C:
    ctx.gpr[31] = (0x08928C34u);
    ctx.gpr[4] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928C34u) goto L_08928C34;
    return;
L_08928C34:
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
L_08928C4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928C5Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 45u, 0x088BC324u>(ctx, &aot_mem) && ctx.pc == 0x08928C5Cu) goto L_08928C5C;
    return;
L_08928C5C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928C68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 84u, 0x0896C8FCu>(ctx, &aot_mem) && ctx.pc == 0x08928C78u) goto L_08928C78;
    return;
L_08928C78:
    ctx.gpr[31] = (0x08928C80u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 501u, 0x08842738u>(ctx, &aot_mem) && ctx.pc == 0x08928C80u) goto L_08928C80;
    return;
L_08928C80:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08928CA8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 248u, 0x0896D988u>(ctx, &aot_mem) && ctx.pc == 0x08928CA8u) goto L_08928CA8;
    return;
L_08928CA8:
    ctx.gpr[31] = (0x08928CB0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 29u, 0x08820260u>(ctx, &aot_mem) && ctx.pc == 0x08928CB0u) goto L_08928CB0;
    return;
L_08928CB0:
    ctx.gpr[31] = (0x08928CB8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 27u, 0x088BC20Cu>(ctx, &aot_mem) && ctx.pc == 0x08928CB8u) goto L_08928CB8;
    return;
L_08928CB8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928CC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 87u, 0x0896C950u>(ctx, &aot_mem) && ctx.pc == 0x08928CD4u) goto L_08928CD4;
    return;
L_08928CD4:
    ctx.gpr[31] = (0x08928CDCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 35u, 0x088BC290u>(ctx, &aot_mem) && ctx.pc == 0x08928CDCu) goto L_08928CDC;
    return;
L_08928CDC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928CE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928D00u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 43u, 0x088BC308u>(ctx, &aot_mem) && ctx.pc == 0x08928D00u) goto L_08928D00;
    return;
L_08928D00:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928E98;
      }
      goto L_08928D14;
    }
L_08928D14:
    ctx.gpr[31] = (0x08928D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 28u, 0x08820250u>(ctx, &aot_mem) && ctx.pc == 0x08928D1Cu) goto L_08928D1C;
    return;
L_08928D1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928F5C;
      }
      goto L_08928D24;
    }
L_08928D24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x08928D30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 188u, 0x0896D328u>(ctx, &aot_mem) && ctx.pc == 0x08928D30u) goto L_08928D30;
    return;
L_08928D30:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_08928D9C;
      }
      goto L_08928D3C;
    }
L_08928D3C:
    ctx.gpr[31] = (0x08928D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 211u, 0x0896D584u>(ctx, &aot_mem) && ctx.pc == 0x08928D44u) goto L_08928D44;
    return;
L_08928D44:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
      if (branch_taken) {
          goto L_08928D78;
      }
      goto L_08928D4C;
    }
L_08928D4C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[31] = (0x08928D68u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 127u, 0x0896CC90u>(ctx, &aot_mem) && ctx.pc == 0x08928D68u) goto L_08928D68;
    return;
L_08928D68:
    ctx.gpr[31] = (0x08928D70u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 29u, 0x08820260u>(ctx, &aot_mem) && ctx.pc == 0x08928D70u) goto L_08928D70;
    return;
L_08928D70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F5C;
      }
      goto L_08928D78;
    }
L_08928D78:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08928D84u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 208u, 0x0896D440u>(ctx, &aot_mem) && ctx.pc == 0x08928D84u) goto L_08928D84;
    return;
L_08928D84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x08928D94u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928D94u) goto L_08928D94;
    return;
L_08928D94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F5C;
      }
      goto L_08928D9C;
    }
L_08928D9C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08928E24;
      }
      goto L_08928DA4;
    }
L_08928DA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08928DC4;
      }
      goto L_08928DB4;
    }
L_08928DB4:
    ctx.gpr[31] = (0x08928DBCu);
    ctx.gpr[4] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928DBCu) goto L_08928DBC;
    return;
L_08928DBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F5C;
      }
      goto L_08928DC4;
    }
L_08928DC4:
    ctx.gpr[31] = (0x08928DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 210u, 0x0896D554u>(ctx, &aot_mem) && ctx.pc == 0x08928DCCu) goto L_08928DCC;
    return;
L_08928DCC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
      if (branch_taken) {
          goto L_08928E00;
      }
      goto L_08928DD4;
    }
L_08928DD4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[31] = (0x08928DF0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 105u, 0x0896CA30u>(ctx, &aot_mem) && ctx.pc == 0x08928DF0u) goto L_08928DF0;
    return;
L_08928DF0:
    ctx.gpr[31] = (0x08928DF8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 29u, 0x08820260u>(ctx, &aot_mem) && ctx.pc == 0x08928DF8u) goto L_08928DF8;
    return;
L_08928DF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F5C;
      }
      goto L_08928E00;
    }
L_08928E00:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08928E0Cu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 208u, 0x0896D440u>(ctx, &aot_mem) && ctx.pc == 0x08928E0Cu) goto L_08928E0C;
    return;
L_08928E0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x08928E1Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928E1Cu) goto L_08928E1C;
    return;
L_08928E1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F5C;
      }
      goto L_08928E24;
    }
L_08928E24:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08928E3C;
      }
      goto L_08928E2C;
    }
L_08928E2C:
    ctx.gpr[31] = (0x08928E34u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928E34u) goto L_08928E34;
    return;
L_08928E34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F5C;
      }
      goto L_08928E3C;
    }
L_08928E3C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_08928E54;
      }
      goto L_08928E44;
    }
L_08928E44:
    ctx.gpr[31] = (0x08928E4Cu);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928E4Cu) goto L_08928E4C;
    return;
L_08928E4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F5C;
      }
      goto L_08928E54;
    }
L_08928E54:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08928E6C;
      }
      goto L_08928E5C;
    }
L_08928E5C:
    ctx.gpr[31] = (0x08928E64u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928E64u) goto L_08928E64;
    return;
L_08928E64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F5C;
      }
      goto L_08928E6C;
    }
L_08928E6C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08928E88;
      }
      goto L_08928E74;
    }
L_08928E74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x08928E80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928E80u) goto L_08928E80;
    return;
L_08928E80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F5C;
      }
      goto L_08928E88;
    }
L_08928E88:
    ctx.gpr[31] = (0x08928E90u);
    ctx.gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928E90u) goto L_08928E90;
    return;
L_08928E90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F5C;
      }
      goto L_08928E98;
    }
L_08928E98:
    ctx.gpr[31] = (0x08928EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 28u, 0x08820250u>(ctx, &aot_mem) && ctx.pc == 0x08928EA0u) goto L_08928EA0;
    return;
L_08928EA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928F5C;
      }
      goto L_08928EA8;
    }
L_08928EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x08928EB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 188u, 0x0896D328u>(ctx, &aot_mem) && ctx.pc == 0x08928EB4u) goto L_08928EB4;
    return;
L_08928EB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08928EF0;
      }
      goto L_08928EC0;
    }
L_08928EC0:
    ctx.gpr[31] = (0x08928EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 504u, 0x08842764u>(ctx, &aot_mem) && ctx.pc == 0x08928EC8u) goto L_08928EC8;
    return;
L_08928EC8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08928EE0;
      }
      goto L_08928ED0;
    }
L_08928ED0:
    ctx.gpr[31] = (0x08928ED8u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928ED8u) goto L_08928ED8;
    return;
L_08928ED8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F5C;
      }
      goto L_08928EE0;
    }
L_08928EE0:
    ctx.gpr[31] = (0x08928EE8u);
    ctx.gpr[4] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928EE8u) goto L_08928EE8;
    return;
L_08928EE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F5C;
      }
      goto L_08928EF0;
    }
L_08928EF0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08928F08;
      }
      goto L_08928EF8;
    }
L_08928EF8:
    ctx.gpr[31] = (0x08928F00u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928F00u) goto L_08928F00;
    return;
L_08928F00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F5C;
      }
      goto L_08928F08;
    }
L_08928F08:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_08928F20;
      }
      goto L_08928F10;
    }
L_08928F10:
    ctx.gpr[31] = (0x08928F18u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928F18u) goto L_08928F18;
    return;
L_08928F18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F5C;
      }
      goto L_08928F20;
    }
L_08928F20:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08928F38;
      }
      goto L_08928F28;
    }
L_08928F28:
    ctx.gpr[31] = (0x08928F30u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928F30u) goto L_08928F30;
    return;
L_08928F30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F5C;
      }
      goto L_08928F38;
    }
L_08928F38:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08928F54;
      }
      goto L_08928F40;
    }
L_08928F40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x08928F4Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928F4Cu) goto L_08928F4C;
    return;
L_08928F4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08928F5C;
      }
      goto L_08928F54;
    }
L_08928F54:
    ctx.gpr[31] = (0x08928F5Cu);
    ctx.gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928F5Cu) goto L_08928F5C;
    return;
L_08928F5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928F70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928F80u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 45u, 0x088BC324u>(ctx, &aot_mem) && ctx.pc == 0x08928F80u) goto L_08928F80;
    return;
L_08928F80:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928F8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928F9Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 42u, 0x08820300u>(ctx, &aot_mem) && ctx.pc == 0x08928F9Cu) goto L_08928F9C;
    return;
L_08928F9C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08928FB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4128));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 43u, 0x08820310u>(ctx, &aot_mem) && ctx.pc == 0x08928FB0u) goto L_08928FB0;
    return;
L_08928FB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928FBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928FC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08928FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 41u, 0x088202F0u>(ctx, &aot_mem) && ctx.pc == 0x08928FD4u) goto L_08928FD4;
    return;
L_08928FD4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08928FE4;
      }
      goto L_08928FDC;
    }
L_08928FDC:
    ctx.gpr[31] = (0x08928FE4u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08928FE4u) goto L_08928FE4;
    return;
L_08928FE4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08928FF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1084), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1088), ctx.gpr[31]);
    ctx.gpr[31] = (0x08929014u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 42u, 0x08820300u>(ctx, &aot_mem) && ctx.pc == 0x08929014u) goto L_08929014;
    return;
L_08929014:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08929028u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08929028u) goto L_08929028;
    return;
L_08929028:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0892903Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0892903Cu) goto L_0892903C;
    return;
L_0892903C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08929050u);
    ctx.gpr[6] = (0u | 516u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08929050u) goto L_08929050;
    return;
L_08929050:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[31] = (0x0892906Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4104));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0892906Cu) goto L_0892906C;
    return;
L_0892906C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 516u);
    ctx.gpr[31] = (0x08929084u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3616));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08929084u) goto L_08929084;
    return;
L_08929084:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(556));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08929098u);
    ctx.gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08929098u) goto L_08929098;
    return;
L_08929098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2220u << 16u);
      if (branch_taken) {
          goto L_089290C8;
      }
      goto L_089290A8;
    }
L_089290A8:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089290B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4088));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x089290B8u) goto L_089290B8;
    return;
L_089290B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(3616));
      if (branch_taken) {
          goto L_089290E0;
      }
      goto L_089290C8;
    }
L_089290C8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089290D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4096));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x089290D4u) goto L_089290D4;
    return;
L_089290D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(3616));
    goto L_089290E0;
L_089290E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089290F4u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x089290F4u) goto L_089290F4;
    return;
L_089290F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x08929100u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08929100u) goto L_08929100;
    return;
L_08929100:
    ctx.gpr[31] = (0x08929108u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 43u, 0x08820310u>(ctx, &aot_mem) && ctx.pc == 0x08929108u) goto L_08929108;
    return;
L_08929108:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929128:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929130:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08929140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 41u, 0x088202F0u>(ctx, &aot_mem) && ctx.pc == 0x08929140u) goto L_08929140;
    return;
L_08929140:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929150;
      }
      goto L_08929148;
    }
L_08929148:
    ctx.gpr[31] = (0x08929150u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08929150u) goto L_08929150;
    return;
L_08929150:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892915C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-544));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[31]);
    ctx.gpr[31] = (0x08929174u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 42u, 0x08820300u>(ctx, &aot_mem) && ctx.pc == 0x08929174u) goto L_08929174;
    return;
L_08929174:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08929188u);
    ctx.gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08929188u) goto L_08929188;
    return;
L_08929188:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x089291A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6196));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089291A0u) goto L_089291A0;
    return;
L_089291A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(6196));
    ctx.gpr[31] = (0x089291BCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x089291BCu) goto L_089291BC;
    return;
L_089291BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x089291CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6192));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 43u, 0x08820310u>(ctx, &aot_mem) && ctx.pc == 0x089291CCu) goto L_089291CC;
    return;
L_089291CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089291E0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089291E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089291F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 41u, 0x088202F0u>(ctx, &aot_mem) && ctx.pc == 0x089291F8u) goto L_089291F8;
    return;
L_089291F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929208;
      }
      goto L_08929200;
    }
L_08929200:
    ctx.gpr[31] = (0x08929208u);
    ctx.gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08929208u) goto L_08929208;
    return;
L_08929208:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929214:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08929224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 84u, 0x0896C8FCu>(ctx, &aot_mem) && ctx.pc == 0x08929224u) goto L_08929224;
    return;
L_08929224:
    ctx.gpr[31] = (0x0892922Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 182u, 0x0896D29Cu>(ctx, &aot_mem) && ctx.pc == 0x0892922Cu) goto L_0892922C;
    return;
L_0892922C:
    ctx.gpr[31] = (0x08929234u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 29u, 0x08820260u>(ctx, &aot_mem) && ctx.pc == 0x08929234u) goto L_08929234;
    return;
L_08929234:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929240:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08929250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 87u, 0x0896C950u>(ctx, &aot_mem) && ctx.pc == 0x08929250u) goto L_08929250;
    return;
L_08929250:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892925C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892926Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 28u, 0x08820250u>(ctx, &aot_mem) && ctx.pc == 0x0892926Cu) goto L_0892926C;
    return;
L_0892926C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892927C;
      }
      goto L_08929274;
    }
L_08929274:
    ctx.gpr[31] = (0x0892927Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x0892927Cu) goto L_0892927C;
    return;
L_0892927C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929288:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08929298u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 42u, 0x08820300u>(ctx, &aot_mem) && ctx.pc == 0x08929298u) goto L_08929298;
    return;
L_08929298:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x089292ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7224));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 43u, 0x08820310u>(ctx, &aot_mem) && ctx.pc == 0x089292ACu) goto L_089292AC;
    return;
L_089292AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089292B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089292C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089292D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 41u, 0x088202F0u>(ctx, &aot_mem) && ctx.pc == 0x089292D0u) goto L_089292D0;
    return;
L_089292D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089292E0;
      }
      goto L_089292D8;
    }
L_089292D8:
    ctx.gpr[31] = (0x089292E0u);
    ctx.gpr[4] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x089292E0u) goto L_089292E0;
    return;
L_089292E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089292EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089292FCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 42u, 0x08820300u>(ctx, &aot_mem) && ctx.pc == 0x089292FCu) goto L_089292FC;
    return;
L_089292FC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08929310u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7740));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 43u, 0x08820310u>(ctx, &aot_mem) && ctx.pc == 0x08929310u) goto L_08929310;
    return;
L_08929310:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892931C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929324:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08929334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 41u, 0x088202F0u>(ctx, &aot_mem) && ctx.pc == 0x08929334u) goto L_08929334;
    return;
L_08929334:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929394;
      }
      goto L_0892933C;
    }
L_0892933C:
    ctx.gpr[31] = (0x08929344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 61u, 0x088203E8u>(ctx, &aot_mem) && ctx.pc == 0x08929344u) goto L_08929344;
    return;
L_08929344:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08929370;
    }
    goto L_08929350;
L_08929350:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_0892938C;
      }
      goto L_08929358;
    }
L_08929358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21680)));
    ctx.gpr[31] = (0x08929364u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08929364u) goto L_08929364;
    return;
L_08929364:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929370:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892938C;
      }
      goto L_08929378;
    }
L_08929378:
    ctx.gpr[31] = (0x08929380u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08929380u) goto L_08929380;
    return;
L_08929380:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892938C:
    ctx.gpr[31] = (0x08929394u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 663u, 0x089279A0u>(ctx, &aot_mem) && ctx.pc == 0x08929394u) goto L_08929394;
    return;
L_08929394:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089293A0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21672)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(21676), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089293B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 3968u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089293DCu);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089293DCu) goto L_089293DC;
    return;
L_089293DC:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(21792), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089293F4u);
    ctx.gpr[6] = (0u | 3968u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089293F4u) goto L_089293F4;
    return;
L_089293F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 12900u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08929408u);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929408u) goto L_08929408;
    return;
L_08929408:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3884), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08929420u);
    ctx.gpr[6] = (0u | 12900u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08929420u) goto L_08929420;
    return;
L_08929420:
    ctx.gpr[31] = (0x08929428u);
    // nop
    goto L_0892A7A0;
L_08929428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x08929434u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 215u, 0x0896D5ECu>(ctx, &aot_mem) && ctx.pc == 0x08929434u) goto L_08929434;
    return;
L_08929434:
    ctx.gpr[31] = (0x0892943Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 84u, 0x0896C8FCu>(ctx, &aot_mem) && ctx.pc == 0x0892943Cu) goto L_0892943C;
    return;
L_0892943C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x08929448u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    goto L_0892A384;
L_08929448:
    ctx.gpr[31] = (0x08929450u);
    // nop
    goto L_0892AC50;
L_08929450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0892946Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27376));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x0892946Cu) goto L_0892946C;
    return;
L_0892946C:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0892947Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26992));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x0892947Cu) goto L_0892947C;
    return;
L_0892947C:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0892948Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26984));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x0892948Cu) goto L_0892948C;
    return;
L_0892948C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089294A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089294B8u);
    // nop
    goto L_0892AD70;
L_089294B8:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089294D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3884)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089294D4u) goto L_089294D4;
    return;
L_089294D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x089294E0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3884), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 87u, 0x0896C950u>(ctx, &aot_mem) && ctx.pc == 0x089294E0u) goto L_089294E0;
    return;
L_089294E0:
    ctx.gpr[31] = (0x089294E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 220u, 0x0896D694u>(ctx, &aot_mem) && ctx.pc == 0x089294E8u) goto L_089294E8;
    return;
L_089294E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089294F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089294F8u) goto L_089294F8;
    return;
L_089294F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21792), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929510:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08929560;
      }
      goto L_08929534;
    }
L_08929534:
    ctx.gpr[31] = (0x0892953Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 281u, 0x0896DE38u>(ctx, &aot_mem) && ctx.pc == 0x0892953Cu) goto L_0892953C;
    return;
L_0892953C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0892967C;
      }
      goto L_08929544;
    }
L_08929544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08929558u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x08929558u) goto L_08929558;
    return;
L_08929558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892967C;
      }
      goto L_08929560;
    }
L_08929560:
    ctx.gpr[31] = (0x08929568u);
    // nop
    goto L_0892ADE8;
L_08929568:
    ctx.gpr[31] = (0x08929570u);
    // nop
    goto L_0892A408;
L_08929570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[4] = (2195u << 16u);
      if (branch_taken) {
          goto L_0892967C;
      }
      goto L_08929580;
    }
L_08929580:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0892958Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27488));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x0892958Cu) goto L_0892958C;
    return;
L_0892958C:
    ctx.gpr[31] = (0x08929594u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x08929594u) goto L_08929594;
    return;
L_08929594:
    ctx.gpr[31] = (0x0892959Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x0892959Cu) goto L_0892959C;
    return;
L_0892959C:
    ctx.gpr[31] = (0x089295A4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x089295A4u) goto L_089295A4;
    return;
L_089295A4:
    ctx.gpr[31] = (0x089295ACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x089295ACu) goto L_089295AC;
    return;
L_089295AC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892967C;
      }
      goto L_089295BC;
    }
L_089295BC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(5728)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089295D4:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4484));
    ctx.gpr[31] = (0x089295ECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4252));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x089295ECu) goto L_089295EC;
    return;
L_089295EC:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3248));
    ctx.gpr[31] = (0x08929604u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3520));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08929604u) goto L_08929604;
    return;
L_08929604:
    ctx.gpr[4] = (2183u << 16u);
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18136));
    ctx.gpr[31] = (0x0892961Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18308));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x0892961Cu) goto L_0892961C;
    return;
L_0892961C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892967C;
      }
      goto L_08929624;
    }
L_08929624:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[5] = (2181u << 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12780));
    ctx.gpr[31] = (0x0892963Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13016));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x0892963Cu) goto L_0892963C;
    return;
L_0892963C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892967C;
      }
      goto L_08929644;
    }
L_08929644:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (2182u << 16u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3332));
    ctx.gpr[31] = (0x0892965Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2780));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x0892965Cu) goto L_0892965C;
    return;
L_0892965C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892967C;
      }
      goto L_08929664;
    }
L_08929664:
    ctx.gpr[4] = (2188u << 16u);
    ctx.gpr[5] = (2188u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10316));
    ctx.gpr[31] = (0x0892967Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9688));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x0892967Cu) goto L_0892967C;
    return;
L_0892967C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929690:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929698:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089296A8u);
    // nop
    goto L_0892AE34;
L_089296A8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089296B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 3968u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089296DCu);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089296DCu) goto L_089296DC;
    return;
L_089296DC:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(21792), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089296F4u);
    ctx.gpr[6] = (0u | 3968u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089296F4u) goto L_089296F4;
    return;
L_089296F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 12900u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08929708u);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929708u) goto L_08929708;
    return;
L_08929708:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3884), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08929720u);
    ctx.gpr[6] = (0u | 12900u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08929720u) goto L_08929720;
    return;
L_08929720:
    ctx.gpr[31] = (0x08929728u);
    // nop
    goto L_0892A7A0;
L_08929728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x08929734u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 215u, 0x0896D5ECu>(ctx, &aot_mem) && ctx.pc == 0x08929734u) goto L_08929734;
    return;
L_08929734:
    ctx.gpr[31] = (0x0892973Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 84u, 0x0896C8FCu>(ctx, &aot_mem) && ctx.pc == 0x0892973Cu) goto L_0892973C;
    return;
L_0892973C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0892974Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_0892A384;
L_0892974C:
    ctx.gpr[31] = (0x08929754u);
    // nop
    goto L_0892AEA0;
L_08929754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929770:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08929788u);
    // nop
    goto L_0892AFC0;
L_08929788:
    ctx.gpr[31] = (0x08929790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 87u, 0x0896C950u>(ctx, &aot_mem) && ctx.pc == 0x08929790u) goto L_08929790;
    return;
L_08929790:
    ctx.gpr[31] = (0x08929798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 220u, 0x0896D694u>(ctx, &aot_mem) && ctx.pc == 0x08929798u) goto L_08929798;
    return;
L_08929798:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089297B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3884)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089297B4u) goto L_089297B4;
    return;
L_089297B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3884), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089297CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089297CCu) goto L_089297CC;
    return;
L_089297CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21792), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089297E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08929830;
      }
      goto L_08929804;
    }
L_08929804:
    ctx.gpr[31] = (0x0892980Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 281u, 0x0896DE38u>(ctx, &aot_mem) && ctx.pc == 0x0892980Cu) goto L_0892980C;
    return;
L_0892980C:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
      if (branch_taken) {
          goto L_08929844;
      }
      goto L_08929818;
    }
L_08929818:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08929828u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x08929828u) goto L_08929828;
    return;
L_08929828:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
      if (branch_taken) {
          goto L_08929844;
      }
      goto L_08929830;
    }
L_08929830:
    ctx.gpr[31] = (0x08929838u);
    // nop
    goto L_0892B038;
L_08929838:
    ctx.gpr[31] = (0x08929840u);
    // nop
    goto L_0892A408;
L_08929840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    goto L_08929844;
L_08929844:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(33)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929858:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08929868u);
    // nop
    goto L_0892B084;
L_08929868:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929874:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 3968u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0892989Cu);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892989Cu) goto L_0892989C;
    return;
L_0892989C:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(21792), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089298B4u);
    ctx.gpr[6] = (0u | 3968u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089298B4u) goto L_089298B4;
    return;
L_089298B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 12900u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089298C8u);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089298C8u) goto L_089298C8;
    return;
L_089298C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3884), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089298E0u);
    ctx.gpr[6] = (0u | 12900u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089298E0u) goto L_089298E0;
    return;
L_089298E0:
    ctx.gpr[31] = (0x089298E8u);
    // nop
    goto L_0892A7A0;
L_089298E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x089298F4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 215u, 0x0896D5ECu>(ctx, &aot_mem) && ctx.pc == 0x089298F4u) goto L_089298F4;
    return;
L_089298F4:
    ctx.gpr[31] = (0x089298FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 84u, 0x0896C8FCu>(ctx, &aot_mem) && ctx.pc == 0x089298FCu) goto L_089298FC;
    return;
L_089298FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0892990Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_0892A384;
L_0892990C:
    ctx.gpr[31] = (0x08929914u);
    // nop
    goto L_0892AEA0;
L_08929914:
    ctx.gpr[31] = (0x0892991Cu);
    // nop
    goto L_0892B0F0;
L_0892991C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929930:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08929948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 87u, 0x0896C950u>(ctx, &aot_mem) && ctx.pc == 0x08929948u) goto L_08929948;
    return;
L_08929948:
    ctx.gpr[31] = (0x08929950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 220u, 0x0896D694u>(ctx, &aot_mem) && ctx.pc == 0x08929950u) goto L_08929950;
    return;
L_08929950:
    ctx.gpr[31] = (0x08929958u);
    // nop
    goto L_0892AFC0;
L_08929958:
    ctx.gpr[31] = (0x08929960u);
    // nop
    goto L_0892B1E0;
L_08929960:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0892997Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3884)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892997Cu) goto L_0892997C;
    return;
L_0892997C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3884), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08929994u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929994u) goto L_08929994;
    return;
L_08929994:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089299A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089299F4;
      }
      goto L_089299C8;
    }
L_089299C8:
    ctx.gpr[31] = (0x089299D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 281u, 0x0896DE38u>(ctx, &aot_mem) && ctx.pc == 0x089299D0u) goto L_089299D0;
    return;
L_089299D0:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
      if (branch_taken) {
          goto L_08929A08;
      }
      goto L_089299DC;
    }
L_089299DC:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x089299ECu);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x089299ECu) goto L_089299EC;
    return;
L_089299EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
      if (branch_taken) {
          goto L_08929A08;
      }
      goto L_089299F4;
    }
L_089299F4:
    ctx.gpr[31] = (0x089299FCu);
    // nop
    goto L_0892B038;
L_089299FC:
    ctx.gpr[31] = (0x08929A04u);
    // nop
    goto L_0892A408;
L_08929A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    goto L_08929A08;
L_08929A08:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(33)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929A1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08929A50;
      }
      goto L_08929A3C;
    }
L_08929A3C:
    ctx.gpr[31] = (0x08929A44u);
    // nop
    goto L_0892B22C;
L_08929A44:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929A50:
    ctx.gpr[31] = (0x08929A58u);
    // nop
    goto L_0892B084;
L_08929A58:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929A64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 3968u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08929A8Cu);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929A8Cu) goto L_08929A8C;
    return;
L_08929A8C:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(21792), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08929AA4u);
    ctx.gpr[6] = (0u | 3968u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08929AA4u) goto L_08929AA4;
    return;
L_08929AA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 12900u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08929AB8u);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929AB8u) goto L_08929AB8;
    return;
L_08929AB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3884), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08929AD0u);
    ctx.gpr[6] = (0u | 12900u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08929AD0u) goto L_08929AD0;
    return;
L_08929AD0:
    ctx.gpr[31] = (0x08929AD8u);
    // nop
    goto L_0892A7A0;
L_08929AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x08929AE4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 215u, 0x0896D5ECu>(ctx, &aot_mem) && ctx.pc == 0x08929AE4u) goto L_08929AE4;
    return;
L_08929AE4:
    ctx.gpr[31] = (0x08929AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 84u, 0x0896C8FCu>(ctx, &aot_mem) && ctx.pc == 0x08929AECu) goto L_08929AEC;
    return;
L_08929AEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x08929AF8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    goto L_0892A384;
L_08929AF8:
    ctx.gpr[31] = (0x08929B00u);
    // nop
    goto L_0892AC50;
L_08929B00:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08929B10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6320));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x08929B10u) goto L_08929B10;
    return;
L_08929B10:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08929B20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25668));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x08929B20u) goto L_08929B20;
    return;
L_08929B20:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08929B30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25660));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x08929B30u) goto L_08929B30;
    return;
L_08929B30:
    ctx.gpr[31] = (0x08929B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 309u, 0x0884D3DCu>(ctx, &aot_mem) && ctx.pc == 0x08929B38u) goto L_08929B38;
    return;
L_08929B38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929B4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08929B64u);
    // nop
    goto L_0892AD70;
L_08929B64:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08929B80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3884)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929B80u) goto L_08929B80;
    return;
L_08929B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x08929B8Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3884), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 87u, 0x0896C950u>(ctx, &aot_mem) && ctx.pc == 0x08929B8Cu) goto L_08929B8C;
    return;
L_08929B8C:
    ctx.gpr[31] = (0x08929B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 220u, 0x0896D694u>(ctx, &aot_mem) && ctx.pc == 0x08929B94u) goto L_08929B94;
    return;
L_08929B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08929BA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929BA4u) goto L_08929BA4;
    return;
L_08929BA4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21792), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929BBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929BC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 41u);
      if (branch_taken) {
          goto L_08929BF8;
      }
      goto L_08929BE4;
    }
L_08929BE4:
    ctx.gpr[31] = (0x08929BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 549u, 0x08939DDCu>(ctx, &aot_mem) && ctx.pc == 0x08929BECu) goto L_08929BEC;
    return;
L_08929BEC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929BF8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08929C14;
      }
      goto L_08929C00;
    }
L_08929C00:
    ctx.gpr[31] = (0x08929C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 686u, 0x0892E2BCu>(ctx, &aot_mem) && ctx.pc == 0x08929C08u) goto L_08929C08;
    return;
L_08929C08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929C14:
    ctx.gpr[31] = (0x08929C1Cu);
    // nop
    goto L_0892AE34;
L_08929C1C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929C28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 3968u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08929C50u);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929C50u) goto L_08929C50;
    return;
L_08929C50:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21792), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08929C68u);
    ctx.gpr[6] = (0u | 3968u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08929C68u) goto L_08929C68;
    return;
L_08929C68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 12900u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08929C7Cu);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929C7Cu) goto L_08929C7C;
    return;
L_08929C7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3884), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08929C94u);
    ctx.gpr[6] = (0u | 12900u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08929C94u) goto L_08929C94;
    return;
L_08929C94:
    ctx.gpr[31] = (0x08929C9Cu);
    // nop
    goto L_0892A7A0;
L_08929C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (22u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23752));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08929CB8u);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929CB8u) goto L_08929CB8;
    return;
L_08929CB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3964), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08929CD0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08929CD0u) goto L_08929CD0;
    return;
L_08929CD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08929CDC;
L_08929CDC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3924), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08929CDC;
      }
      goto L_08929CF0;
    }
L_08929CF0:
    ctx.gpr[31] = (0x08929CF8u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 215u, 0x0896D5ECu>(ctx, &aot_mem) && ctx.pc == 0x08929CF8u) goto L_08929CF8;
    return;
L_08929CF8:
    ctx.gpr[31] = (0x08929D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 84u, 0x0896C8FCu>(ctx, &aot_mem) && ctx.pc == 0x08929D00u) goto L_08929D00;
    return;
L_08929D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08929D10u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_0892A384;
L_08929D10:
    ctx.gpr[31] = (0x08929D18u);
    // nop
    goto L_0892AEA0;
L_08929D18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929D2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08929D44u);
    // nop
    goto L_0892AFC0;
L_08929D44:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08929D60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3884)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929D60u) goto L_08929D60;
    return;
L_08929D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3884), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08929D78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3964)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929D78u) goto L_08929D78;
    return;
L_08929D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x08929D84u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3964), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 87u, 0x0896C950u>(ctx, &aot_mem) && ctx.pc == 0x08929D84u) goto L_08929D84;
    return;
L_08929D84:
    ctx.gpr[31] = (0x08929D8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 220u, 0x0896D694u>(ctx, &aot_mem) && ctx.pc == 0x08929D8Cu) goto L_08929D8C;
    return;
L_08929D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08929D9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929D9Cu) goto L_08929D9C;
    return;
L_08929D9C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21792), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929DB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08929E00;
      }
      goto L_08929DD8;
    }
L_08929DD8:
    ctx.gpr[31] = (0x08929DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 281u, 0x0896DE38u>(ctx, &aot_mem) && ctx.pc == 0x08929DE0u) goto L_08929DE0;
    return;
L_08929DE0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
      if (branch_taken) {
          goto L_08929E14;
      }
      goto L_08929DE8;
    }
L_08929DE8:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08929DF8u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x08929DF8u) goto L_08929DF8;
    return;
L_08929DF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
      if (branch_taken) {
          goto L_08929E14;
      }
      goto L_08929E00;
    }
L_08929E00:
    ctx.gpr[31] = (0x08929E08u);
    // nop
    goto L_0892B038;
L_08929E08:
    ctx.gpr[31] = (0x08929E10u);
    // nop
    goto L_0892A408;
L_08929E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    goto L_08929E14;
L_08929E14:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(33)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08929E2C;
      }
      goto L_08929E20;
    }
L_08929E20:
    ctx.gpr[31] = (0x08929E28u);
    ctx.gpr[4] = (0u | 43u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x08929E28u) goto L_08929E28;
    return;
L_08929E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    goto L_08929E2C;
L_08929E2C:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(33)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929E44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08929E54u);
    // nop
    goto L_0892B084;
L_08929E54:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929E60:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (2221u << 16u);
    goto L_08929E6C;
L_08929E6C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(3924)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08929E6C;
      }
      goto L_08929E90;
    }
L_08929E90:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929E98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (22u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08929ED4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-23752));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08929ED4u) goto L_08929ED4;
    return;
L_08929ED4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (2u << 16u);
    ctx.gpr[16] = (2u << 16u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[20] = (0u | 2u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10732));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(10732));
    ctx.gpr[21] = (2221u << 16u);
    goto L_08929EFC;
L_08929EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3924)));
    if (ctx.gpr[5] != ctx.gpr[20]) {
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
        goto L_08929F28;
    }
    goto L_08929F10;
L_08929F10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3964)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08929F24u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08929F24u) goto L_08929F24;
    return;
L_08929F24:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    goto L_08929F28;
L_08929F28:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08929EFC;
      }
      goto L_08929F3C;
    }
L_08929F3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08929F68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 3968u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08929F98u);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929F98u) goto L_08929F98;
    return;
L_08929F98:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(21792), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08929FB0u);
    ctx.gpr[6] = (0u | 3968u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08929FB0u) goto L_08929FB0;
    return;
L_08929FB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 12900u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08929FC4u);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08929FC4u) goto L_08929FC4;
    return;
L_08929FC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3884), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08929FDCu);
    ctx.gpr[6] = (0u | 12900u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08929FDCu) goto L_08929FDC;
    return;
L_08929FDC:
    ctx.gpr[31] = (0x08929FE4u);
    // nop
    goto L_0892A7A0;
L_08929FE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(10732));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0892A000u);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A000u) goto L_0892A000;
    return;
L_0892A000:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3964), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0892A018u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0892A018u) goto L_0892A018;
    return;
L_0892A018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892A024u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 215u, 0x0896D5ECu>(ctx, &aot_mem) && ctx.pc == 0x0892A024u) goto L_0892A024;
    return;
L_0892A024:
    ctx.gpr[31] = (0x0892A02Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 84u, 0x0896C8FCu>(ctx, &aot_mem) && ctx.pc == 0x0892A02Cu) goto L_0892A02C;
    return;
L_0892A02C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0892A03Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_0892A384;
L_0892A03C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892A048u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    goto L_0892AEA0;
L_0892A048:
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
L_0892A060:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892A078u);
    // nop
    goto L_0892AFC0;
L_0892A078:
    ctx.gpr[31] = (0x0892A080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 87u, 0x0896C950u>(ctx, &aot_mem) && ctx.pc == 0x0892A080u) goto L_0892A080;
    return;
L_0892A080:
    ctx.gpr[31] = (0x0892A088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 220u, 0x0896D694u>(ctx, &aot_mem) && ctx.pc == 0x0892A088u) goto L_0892A088;
    return;
L_0892A088:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0892A0A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3884)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A0A4u) goto L_0892A0A4;
    return;
L_0892A0A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3884), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0892A0BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3964)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A0BCu) goto L_0892A0BC;
    return;
L_0892A0BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3964), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0892A0D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A0D4u) goto L_0892A0D4;
    return;
L_0892A0D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21792), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A0EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A138;
      }
      goto L_0892A10C;
    }
L_0892A10C:
    ctx.gpr[31] = (0x0892A114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 281u, 0x0896DE38u>(ctx, &aot_mem) && ctx.pc == 0x0892A114u) goto L_0892A114;
    return;
L_0892A114:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
      if (branch_taken) {
          goto L_0892A14C;
      }
      goto L_0892A120;
    }
L_0892A120:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0892A130u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892A130u) goto L_0892A130;
    return;
L_0892A130:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
      if (branch_taken) {
          goto L_0892A14C;
      }
      goto L_0892A138;
    }
L_0892A138:
    ctx.gpr[31] = (0x0892A140u);
    // nop
    goto L_0892B038;
L_0892A140:
    ctx.gpr[31] = (0x0892A148u);
    // nop
    goto L_0892A408;
L_0892A148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    goto L_0892A14C;
L_0892A14C:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(33)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A160:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892A170u);
    // nop
    goto L_0892B084;
L_0892A170:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A17C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21792)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3924)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A18C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_0892A1B0;
      }
      goto L_0892A19C;
    }
L_0892A19C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3964)));
    ctx.gpr[31] = (0x0892A1B0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10732));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0892A1B0u) goto L_0892A1B0;
    return;
L_0892A1B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A1BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 3968u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0892A1ECu);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A1ECu) goto L_0892A1EC;
    return;
L_0892A1EC:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(21792), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0892A204u);
    ctx.gpr[6] = (0u | 3968u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0892A204u) goto L_0892A204;
    return;
L_0892A204:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 12900u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0892A218u);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A218u) goto L_0892A218;
    return;
L_0892A218:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3884), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0892A230u);
    ctx.gpr[6] = (0u | 12900u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0892A230u) goto L_0892A230;
    return;
L_0892A230:
    ctx.gpr[31] = (0x0892A238u);
    // nop
    goto L_0892A7A0;
L_0892A238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892A244u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 215u, 0x0896D5ECu>(ctx, &aot_mem) && ctx.pc == 0x0892A244u) goto L_0892A244;
    return;
L_0892A244:
    ctx.gpr[31] = (0x0892A24Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 84u, 0x0896C8FCu>(ctx, &aot_mem) && ctx.pc == 0x0892A24Cu) goto L_0892A24C;
    return;
L_0892A24C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0892A25Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_0892A384;
L_0892A25C:
    ctx.gpr[31] = (0x0892A264u);
    // nop
    goto L_0892AEA0;
L_0892A264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
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
L_0892A284:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892A29Cu);
    // nop
    goto L_0892AFC0;
L_0892A29C:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0892A2B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3884)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A2B8u) goto L_0892A2B8;
    return;
L_0892A2B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892A2C4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3884), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 87u, 0x0896C950u>(ctx, &aot_mem) && ctx.pc == 0x0892A2C4u) goto L_0892A2C4;
    return;
L_0892A2C4:
    ctx.gpr[31] = (0x0892A2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 220u, 0x0896D694u>(ctx, &aot_mem) && ctx.pc == 0x0892A2CCu) goto L_0892A2CC;
    return;
L_0892A2CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0892A2DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892A2DCu) goto L_0892A2DC;
    return;
L_0892A2DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(21792), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A2F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892A340;
      }
      goto L_0892A314;
    }
L_0892A314:
    ctx.gpr[31] = (0x0892A31Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 281u, 0x0896DE38u>(ctx, &aot_mem) && ctx.pc == 0x0892A31Cu) goto L_0892A31C;
    return;
L_0892A31C:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
      if (branch_taken) {
          goto L_0892A354;
      }
      goto L_0892A328;
    }
L_0892A328:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0892A338u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892A338u) goto L_0892A338;
    return;
L_0892A338:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
      if (branch_taken) {
          goto L_0892A354;
      }
      goto L_0892A340;
    }
L_0892A340:
    ctx.gpr[31] = (0x0892A348u);
    // nop
    goto L_0892B038;
L_0892A348:
    ctx.gpr[31] = (0x0892A350u);
    // nop
    goto L_0892A408;
L_0892A350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    goto L_0892A354;
L_0892A354:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(33)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A368:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892A378u);
    // nop
    goto L_0892B084;
L_0892A378:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892A3E8u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3900), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 504u, 0x08842764u>(ctx, &aot_mem) && ctx.pc == 0x0892A3E8u) goto L_0892A3E8;
    return;
L_0892A3E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x0892A3F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 492u, 0x088426B0u>(ctx, &aot_mem) && ctx.pc == 0x0892A3F8u) goto L_0892A3F8;
    return;
L_0892A3F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A408:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(43) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A794;
      }
      goto L_0892A42C;
    }
L_0892A42C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(5768)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A444:
    ctx.gpr[31] = (0x0892A44Cu);
    // nop
    goto L_0892B2A4;
L_0892A44C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A458:
    ctx.gpr[31] = (0x0892A460u);
    // nop
    goto L_0892B424;
L_0892A460:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A46C:
    ctx.gpr[31] = (0x0892A474u);
    // nop
    goto L_0892B678;
L_0892A474:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A480:
    ctx.gpr[31] = (0x0892A488u);
    // nop
    goto L_0892B7F0;
L_0892A488:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A494:
    ctx.gpr[31] = (0x0892A49Cu);
    // nop
    goto L_0892B9A4;
L_0892A49C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A4A8:
    ctx.gpr[31] = (0x0892A4B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 734u, 0x0892E590u>(ctx, &aot_mem) && ctx.pc == 0x0892A4B0u) goto L_0892A4B0;
    return;
L_0892A4B0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A4BC:
    ctx.gpr[31] = (0x0892A4C4u);
    // nop
    goto L_0892B90C;
L_0892A4C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A4D0:
    ctx.gpr[31] = (0x0892A4D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 1008u, 0x0892F020u>(ctx, &aot_mem) && ctx.pc == 0x0892A4D8u) goto L_0892A4D8;
    return;
L_0892A4D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A4E4:
    ctx.gpr[31] = (0x0892A4ECu);
    // nop
    goto L_0892BD38;
L_0892A4EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A4F8:
    ctx.gpr[31] = (0x0892A500u);
    // nop
    goto L_0892BFE8;
L_0892A500:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A50C:
    ctx.gpr[31] = (0x0892A514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 73u, 0x0892C360u>(ctx, &aot_mem) && ctx.pc == 0x0892A514u) goto L_0892A514;
    return;
L_0892A514:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A520:
    ctx.gpr[31] = (0x0892A528u);
    // nop
    goto L_0892BB20;
L_0892A528:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A534:
    ctx.gpr[31] = (0x0892A53Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 1092u, 0x0892F430u>(ctx, &aot_mem) && ctx.pc == 0x0892A53Cu) goto L_0892A53C;
    return;
L_0892A53C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A548:
    ctx.gpr[31] = (0x0892A550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 144u, 0x0892C680u>(ctx, &aot_mem) && ctx.pc == 0x0892A550u) goto L_0892A550;
    return;
L_0892A550:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A55C:
    ctx.gpr[31] = (0x0892A564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 1192u, 0x0892F8C4u>(ctx, &aot_mem) && ctx.pc == 0x0892A564u) goto L_0892A564;
    return;
L_0892A564:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A570:
    ctx.gpr[31] = (0x0892A578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 162u, 0x0892C7B0u>(ctx, &aot_mem) && ctx.pc == 0x0892A578u) goto L_0892A578;
    return;
L_0892A578:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A584:
    ctx.gpr[31] = (0x0892A58Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 241u, 0x0892CB2Cu>(ctx, &aot_mem) && ctx.pc == 0x0892A58Cu) goto L_0892A58C;
    return;
L_0892A58C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A598:
    ctx.gpr[31] = (0x0892A5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 302u, 0x0892CDD4u>(ctx, &aot_mem) && ctx.pc == 0x0892A5A0u) goto L_0892A5A0;
    return;
L_0892A5A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A5AC:
    ctx.gpr[31] = (0x0892A5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 286u, 0x0892CD0Cu>(ctx, &aot_mem) && ctx.pc == 0x0892A5B4u) goto L_0892A5B4;
    return;
L_0892A5B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A5C0:
    ctx.gpr[31] = (0x0892A5C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 314u, 0x0892CEB4u>(ctx, &aot_mem) && ctx.pc == 0x0892A5C8u) goto L_0892A5C8;
    return;
L_0892A5C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A5D4:
    ctx.gpr[31] = (0x0892A5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 334u, 0x0892CFF8u>(ctx, &aot_mem) && ctx.pc == 0x0892A5DCu) goto L_0892A5DC;
    return;
L_0892A5DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A5E8:
    ctx.gpr[31] = (0x0892A5F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 350u, 0x0892D0C0u>(ctx, &aot_mem) && ctx.pc == 0x0892A5F0u) goto L_0892A5F0;
    return;
L_0892A5F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A5FC:
    ctx.gpr[31] = (0x0892A604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 382u, 0x0892D2ACu>(ctx, &aot_mem) && ctx.pc == 0x0892A604u) goto L_0892A604;
    return;
L_0892A604:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A610:
    ctx.gpr[31] = (0x0892A618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 423u, 0x0892D480u>(ctx, &aot_mem) && ctx.pc == 0x0892A618u) goto L_0892A618;
    return;
L_0892A618:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A624:
    ctx.gpr[31] = (0x0892A62Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 431u, 0x0892D4F8u>(ctx, &aot_mem) && ctx.pc == 0x0892A62Cu) goto L_0892A62C;
    return;
L_0892A62C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A638:
    ctx.gpr[31] = (0x0892A640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 398u, 0x0892D35Cu>(ctx, &aot_mem) && ctx.pc == 0x0892A640u) goto L_0892A640;
    return;
L_0892A640:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A64C:
    ctx.gpr[31] = (0x0892A654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 439u, 0x0892D56Cu>(ctx, &aot_mem) && ctx.pc == 0x0892A654u) goto L_0892A654;
    return;
L_0892A654:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A660:
    ctx.gpr[31] = (0x0892A668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 455u, 0x0892D640u>(ctx, &aot_mem) && ctx.pc == 0x0892A668u) goto L_0892A668;
    return;
L_0892A668:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A674:
    ctx.gpr[31] = (0x0892A67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 474u, 0x0892D72Cu>(ctx, &aot_mem) && ctx.pc == 0x0892A67Cu) goto L_0892A67C;
    return;
L_0892A67C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A688:
    ctx.gpr[31] = (0x0892A690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 496u, 0x0892D878u>(ctx, &aot_mem) && ctx.pc == 0x0892A690u) goto L_0892A690;
    return;
L_0892A690:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A69C:
    ctx.gpr[31] = (0x0892A6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 512u, 0x0892D960u>(ctx, &aot_mem) && ctx.pc == 0x0892A6A4u) goto L_0892A6A4;
    return;
L_0892A6A4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A6B0:
    ctx.gpr[31] = (0x0892A6B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 529u, 0x0892DA38u>(ctx, &aot_mem) && ctx.pc == 0x0892A6B8u) goto L_0892A6B8;
    return;
L_0892A6B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A6C4:
    ctx.gpr[31] = (0x0892A6CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 504u, 0x0892D8ECu>(ctx, &aot_mem) && ctx.pc == 0x0892A6CCu) goto L_0892A6CC;
    return;
L_0892A6CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A6D8:
    ctx.gpr[31] = (0x0892A6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 548u, 0x0892DB24u>(ctx, &aot_mem) && ctx.pc == 0x0892A6E0u) goto L_0892A6E0;
    return;
L_0892A6E0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A6EC:
    ctx.gpr[31] = (0x0892A6F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 556u, 0x0892DB98u>(ctx, &aot_mem) && ctx.pc == 0x0892A6F4u) goto L_0892A6F4;
    return;
L_0892A6F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A700:
    ctx.gpr[31] = (0x0892A708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 572u, 0x0892DC68u>(ctx, &aot_mem) && ctx.pc == 0x0892A708u) goto L_0892A708;
    return;
L_0892A708:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A714:
    ctx.gpr[31] = (0x0892A71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 597u, 0x0892DDD0u>(ctx, &aot_mem) && ctx.pc == 0x0892A71Cu) goto L_0892A71C;
    return;
L_0892A71C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A728:
    ctx.gpr[31] = (0x0892A730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 617u, 0x0892DF08u>(ctx, &aot_mem) && ctx.pc == 0x0892A730u) goto L_0892A730;
    return;
L_0892A730:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A73C:
    ctx.gpr[31] = (0x0892A744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 625u, 0x0892DF7Cu>(ctx, &aot_mem) && ctx.pc == 0x0892A744u) goto L_0892A744;
    return;
L_0892A744:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A750:
    ctx.gpr[31] = (0x0892A758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 656u, 0x0892E0E8u>(ctx, &aot_mem) && ctx.pc == 0x0892A758u) goto L_0892A758;
    return;
L_0892A758:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A764:
    ctx.gpr[31] = (0x0892A76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 765u, 0x0892E6D4u>(ctx, &aot_mem) && ctx.pc == 0x0892A76Cu) goto L_0892A76C;
    return;
L_0892A76C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A778:
    ctx.gpr[31] = (0x0892A780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 672u, 0x0892E1FCu>(ctx, &aot_mem) && ctx.pc == 0x0892A780u) goto L_0892A780;
    return;
L_0892A780:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A78C:
    ctx.gpr[31] = (0x0892A794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 718u, 0x0892E4C4u>(ctx, &aot_mem) && ctx.pc == 0x0892A794u) goto L_0892A794;
    return;
L_0892A794:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892A7A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892A7D4u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 593u, 0x0884738Cu>(ctx, &aot_mem) && ctx.pc == 0x0892A7D4u) goto L_0892A7D4;
    return;
L_0892A7D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19864));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0892A828u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 621u, 0x0880ABA0u>(ctx, &aot_mem) && ctx.pc == 0x0892A828u) goto L_0892A828;
    return;
L_0892A828:
    ctx.gpr[4] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4492));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4504));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[4]);
    ctx.gpr[30] = (2220u << 16u);
    ctx.gpr[23] = (2220u << 16u);
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4512));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4520));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(21796));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4528));
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    goto L_0892A878;
L_0892A878:
    ctx.gpr[31] = (0x0892A880u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0892A880u) goto L_0892A880;
    return;
L_0892A880:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892A948;
      }
      goto L_0892A888;
    }
L_0892A888:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[31] = (0x0892A894u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0892A894u) goto L_0892A894;
    return;
L_0892A894:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0892A938;
      }
      goto L_0892A89C;
    }
L_0892A89C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0892A8A0;
L_0892A8A0:
    ctx.gpr[31] = (0x0892A8A8u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0892A8A8u) goto L_0892A8A8;
    return;
L_0892A8A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0892A930;
      }
      goto L_0892A8B0;
    }
L_0892A8B0:
    ctx.gpr[31] = (0x0892A8B8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0892A8B8u) goto L_0892A8B8;
    return;
L_0892A8B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0892A8C4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0892A8C4u) goto L_0892A8C4;
    return;
L_0892A8C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0892A900;
      }
      goto L_0892A8CC;
    }
L_0892A8CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0892A8D8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x0892A8D8u) goto L_0892A8D8;
    return;
L_0892A8D8:
    ctx.gpr[31] = (0x0892A8E0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x0892A8E0u) goto L_0892A8E0;
    return;
L_0892A8E0:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3884)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0892A900;
L_0892A900:
    ctx.gpr[31] = (0x0892A908u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0892A908u) goto L_0892A908;
    return;
L_0892A908:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0892A8A0;
      }
      goto L_0892A910;
    }
L_0892A910:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3884)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[31] = (0x0892A928u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x0892A928u) goto L_0892A928;
    return;
L_0892A928:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0892A8A0;
      }
      goto L_0892A930;
    }
L_0892A930:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(516));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0892A938;
L_0892A938:
    ctx.gpr[31] = (0x0892A940u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0892A940u) goto L_0892A940;
    return;
L_0892A940:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
      if (branch_taken) {
          goto L_0892A878;
      }
      goto L_0892A948;
    }
L_0892A948:
    ctx.gpr[31] = (0x0892A950u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x0892A950u) goto L_0892A950;
    return;
L_0892A950:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0892A960u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x0892A960u) goto L_0892A960;
    return;
L_0892A960:
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
L_0892A990:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0892A9B8;
      }
      goto L_0892A9A8;
    }
L_0892A9A8:
    ctx.gpr[31] = (0x0892A9B0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 575u, 0x08842C58u>(ctx, &aot_mem) && ctx.pc == 0x0892A9B0u) goto L_0892A9B0;
    return;
L_0892A9B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0892A9D0;
      }
      goto L_0892A9B8;
    }
L_0892A9B8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0892A9CCu);
    ctx.gpr[6] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0892A9CCu) goto L_0892A9CC;
    return;
L_0892A9CC:
    ctx.gpr[4] = (0u | 0u);
    goto L_0892A9D0;
L_0892A9D0:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    goto L_0892A9D4;
L_0892A9D4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
        goto L_0892A9E8;
    }
    goto L_0892A9E0;
L_0892A9E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0892A9F4;
      }
      goto L_0892A9E8;
    }
L_0892A9E8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0892A9D4;
      }
      goto L_0892A9F4;
    }
L_0892A9F4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892AA08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892AA40u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0892AA40u) goto L_0892AA40;
    return;
L_0892AA40:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x0892AA50u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 565u, 0x08842B94u>(ctx, &aot_mem) && ctx.pc == 0x0892AA50u) goto L_0892AA50;
    return;
L_0892AA50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0892AA74;
      }
      goto L_0892AA64;
    }
L_0892AA64:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0892AA9C;
      }
      goto L_0892AA74;
    }
L_0892AA74:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
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
L_0892AA9C:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_0892AAF0;
    }
    goto L_0892AAAC;
L_0892AAAC:
    ctx.gpr[31] = (0x0892AAB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 527u, 0x088327C8u>(ctx, &aot_mem) && ctx.pc == 0x0892AAB4u) goto L_0892AAB4;
    return;
L_0892AAB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0892AAC0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0892AAC0u) goto L_0892AAC0;
    return;
L_0892AAC0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_0892AAF0;
    }
    goto L_0892AAC8;
L_0892AAC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(140)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_0892AAF0;
    }
    goto L_0892AAD8;
L_0892AAD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_0892AAF0;
    }
    goto L_0892AAE8;
L_0892AAE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0892AB00;
      }
      goto L_0892AAF0;
    }
L_0892AAF0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(9));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0892AA9C;
      }
      goto L_0892AB00;
    }
L_0892AB00:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
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
L_0892AB28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    goto L_0892AB60;
L_0892AB60:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0892AB6Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0892AB6Cu) goto L_0892AB6C;
    return;
L_0892AB6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0892AB88;
      }
      goto L_0892AB74;
    }
L_0892AB74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0892AB8C;
      }
      goto L_0892AB80;
    }
L_0892AB80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_0892AB98;
      }
      goto L_0892AB88;
    }
L_0892AB88:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0892AB8C;
L_0892AB8C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_0892AB60;
      }
      goto L_0892AB98;
    }
L_0892AB98:
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
L_0892ABC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3880)));
    ctx.gpr[31] = (0x0892ABE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3380));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 585u, 0x08842D54u>(ctx, &aot_mem) && ctx.pc == 0x0892ABE0u) goto L_0892ABE0;
    return;
L_0892ABE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3880)));
    ctx.gpr[31] = (0x0892ABF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3600));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 609u, 0x08842F00u>(ctx, &aot_mem) && ctx.pc == 0x0892ABF0u) goto L_0892ABF0;
    return;
L_0892ABF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892ABFCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3880)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 588u, 0x08842D84u>(ctx, &aot_mem) && ctx.pc == 0x0892ABFCu) goto L_0892ABFC;
    return;
L_0892ABFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892AC0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892AC28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3424));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 585u, 0x08842D54u>(ctx, &aot_mem) && ctx.pc == 0x0892AC28u) goto L_0892AC28;
    return;
L_0892AC28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892AC34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3644));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 609u, 0x08842F00u>(ctx, &aot_mem) && ctx.pc == 0x0892AC34u) goto L_0892AC34;
    return;
L_0892AC34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892AC40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 588u, 0x08842D84u>(ctx, &aot_mem) && ctx.pc == 0x0892AC40u) goto L_0892AC40;
    return;
L_0892AC40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892AC50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0892AC74u);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892AC74u) goto L_0892AC74;
    return;
L_0892AC74:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3888), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x0892AC94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3888)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0892AC94u) goto L_0892AC94;
    return;
L_0892AC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3888)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3888)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (17392u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3888)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3888)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3888)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3888)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892AD30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3888)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0892AD30u) goto L_0892AD30;
    return;
L_0892AD30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0892AD48;
      }
      goto L_0892AD40;
    }
L_0892AD40:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892AD58;
      }
      goto L_0892AD48;
    }
L_0892AD48:
    ctx.gpr[31] = (0x0892AD50u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 27u, 0x088BC20Cu>(ctx, &aot_mem) && ctx.pc == 0x0892AD50u) goto L_0892AD50;
    return;
L_0892AD50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AD60;
      }
      goto L_0892AD58;
    }
L_0892AD58:
    ctx.gpr[31] = (0x0892AD60u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 27u, 0x088BC20Cu>(ctx, &aot_mem) && ctx.pc == 0x0892AD60u) goto L_0892AD60;
    return;
L_0892AD60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892AD70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892AD8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3888)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0892AD8Cu) goto L_0892AD8C;
    return;
L_0892AD8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0892ADA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3888)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892ADA4u) goto L_0892ADA4;
    return;
L_0892ADA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3888), 0u);
      if (branch_taken) {
          goto L_0892ADC0;
      }
      goto L_0892ADB4;
    }
L_0892ADB4:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892ADD0;
      }
      goto L_0892ADC0;
    }
L_0892ADC0:
    ctx.gpr[31] = (0x0892ADC8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 35u, 0x088BC290u>(ctx, &aot_mem) && ctx.pc == 0x0892ADC8u) goto L_0892ADC8;
    return;
L_0892ADC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892ADD8;
      }
      goto L_0892ADD0;
    }
L_0892ADD0:
    ctx.gpr[31] = (0x0892ADD8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 35u, 0x088BC290u>(ctx, &aot_mem) && ctx.pc == 0x0892ADD8u) goto L_0892ADD8;
    return;
L_0892ADD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892ADE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0892AE0C;
      }
      goto L_0892AE04;
    }
L_0892AE04:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892AE20;
      }
      goto L_0892AE0C;
    }
L_0892AE0C:
    ctx.gpr[31] = (0x0892AE14u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 43u, 0x088BC308u>(ctx, &aot_mem) && ctx.pc == 0x0892AE14u) goto L_0892AE14;
    return;
L_0892AE14:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892AE20:
    ctx.gpr[31] = (0x0892AE28u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 43u, 0x088BC308u>(ctx, &aot_mem) && ctx.pc == 0x0892AE28u) goto L_0892AE28;
    return;
L_0892AE28:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892AE34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892AE50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3888)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0892AE50u) goto L_0892AE50;
    return;
L_0892AE50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(34)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892AE90;
      }
      goto L_0892AE64;
    }
L_0892AE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AE78;
      }
      goto L_0892AE70;
    }
L_0892AE70:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892AE88;
      }
      goto L_0892AE78;
    }
L_0892AE78:
    ctx.gpr[31] = (0x0892AE80u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 45u, 0x088BC324u>(ctx, &aot_mem) && ctx.pc == 0x0892AE80u) goto L_0892AE80;
    return;
L_0892AE80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AE90;
      }
      goto L_0892AE88;
    }
L_0892AE88:
    ctx.gpr[31] = (0x0892AE90u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 45u, 0x088BC324u>(ctx, &aot_mem) && ctx.pc == 0x0892AE90u) goto L_0892AE90;
    return;
L_0892AE90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892AEA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0892AEC4u);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892AEC4u) goto L_0892AEC4;
    return;
L_0892AEC4:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3892), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x0892AEE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3892)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0892AEE4u) goto L_0892AEE4;
    return;
L_0892AEE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3892)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3892)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (17392u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3892)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3892)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3892)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3892)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892AF80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3892)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0892AF80u) goto L_0892AF80;
    return;
L_0892AF80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0892AF98;
      }
      goto L_0892AF90;
    }
L_0892AF90:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892AFA8;
      }
      goto L_0892AF98;
    }
L_0892AF98:
    ctx.gpr[31] = (0x0892AFA0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 27u, 0x088BC20Cu>(ctx, &aot_mem) && ctx.pc == 0x0892AFA0u) goto L_0892AFA0;
    return;
L_0892AFA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892AFB0;
      }
      goto L_0892AFA8;
    }
L_0892AFA8:
    ctx.gpr[31] = (0x0892AFB0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 27u, 0x088BC20Cu>(ctx, &aot_mem) && ctx.pc == 0x0892AFB0u) goto L_0892AFB0;
    return;
L_0892AFB0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892AFC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892AFDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3892)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0892AFDCu) goto L_0892AFDC;
    return;
L_0892AFDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0892AFF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3892)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892AFF4u) goto L_0892AFF4;
    return;
L_0892AFF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3892), 0u);
      if (branch_taken) {
          goto L_0892B010;
      }
      goto L_0892B004;
    }
L_0892B004:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892B020;
      }
      goto L_0892B010;
    }
L_0892B010:
    ctx.gpr[31] = (0x0892B018u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 35u, 0x088BC290u>(ctx, &aot_mem) && ctx.pc == 0x0892B018u) goto L_0892B018;
    return;
L_0892B018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B028;
      }
      goto L_0892B020;
    }
L_0892B020:
    ctx.gpr[31] = (0x0892B028u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 35u, 0x088BC290u>(ctx, &aot_mem) && ctx.pc == 0x0892B028u) goto L_0892B028;
    return;
L_0892B028:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B038:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B05C;
      }
      goto L_0892B054;
    }
L_0892B054:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892B070;
      }
      goto L_0892B05C;
    }
L_0892B05C:
    ctx.gpr[31] = (0x0892B064u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 43u, 0x088BC308u>(ctx, &aot_mem) && ctx.pc == 0x0892B064u) goto L_0892B064;
    return;
L_0892B064:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B070:
    ctx.gpr[31] = (0x0892B078u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 43u, 0x088BC308u>(ctx, &aot_mem) && ctx.pc == 0x0892B078u) goto L_0892B078;
    return;
L_0892B078:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B084:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892B0A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3892)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0892B0A0u) goto L_0892B0A0;
    return;
L_0892B0A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(34)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892B0E0;
      }
      goto L_0892B0B4;
    }
L_0892B0B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0C8;
      }
      goto L_0892B0C0;
    }
L_0892B0C0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892B0D8;
      }
      goto L_0892B0C8;
    }
L_0892B0C8:
    ctx.gpr[31] = (0x0892B0D0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 45u, 0x088BC324u>(ctx, &aot_mem) && ctx.pc == 0x0892B0D0u) goto L_0892B0D0;
    return;
L_0892B0D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B0E0;
      }
      goto L_0892B0D8;
    }
L_0892B0D8:
    ctx.gpr[31] = (0x0892B0E0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 45u, 0x088BC324u>(ctx, &aot_mem) && ctx.pc == 0x0892B0E0u) goto L_0892B0E0;
    return;
L_0892B0E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B0F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0892B114u);
    ctx.gpr[5] = (0u | 161u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892B114u) goto L_0892B114;
    return;
L_0892B114:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3896), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x0892B134u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3896)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0892B134u) goto L_0892B134;
    return;
L_0892B134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3896)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3896)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (17392u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3896)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3896)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 140u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3896)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3896)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892B1D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3896)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0892B1D0u) goto L_0892B1D0;
    return;
L_0892B1D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B1E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892B1FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3896)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x0892B1FCu) goto L_0892B1FC;
    return;
L_0892B1FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0892B214u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3896)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0892B214u) goto L_0892B214;
    return;
L_0892B214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3896), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B22C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892B244u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3896)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x0892B244u) goto L_0892B244;
    return;
L_0892B244:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B250:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892B26Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 146u, 0x0896CEC0u>(ctx, &aot_mem) && ctx.pc == 0x0892B26Cu) goto L_0892B26C;
    return;
L_0892B26C:
    ctx.gpr[31] = (0x0892B274u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 29u, 0x08820260u>(ctx, &aot_mem) && ctx.pc == 0x0892B274u) goto L_0892B274;
    return;
L_0892B274:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[31] = (0x0892B28Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    goto L_0892AC0C;
L_0892B28C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B29C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B2A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892B2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 28u, 0x08820250u>(ctx, &aot_mem) && ctx.pc == 0x0892B2BCu) goto L_0892B2BC;
    return;
L_0892B2BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_0892B3C8;
      }
      goto L_0892B2C4;
    }
L_0892B2C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892B2D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 188u, 0x0896D328u>(ctx, &aot_mem) && ctx.pc == 0x0892B2D0u) goto L_0892B2D0;
    return;
L_0892B2D0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B338;
      }
      goto L_0892B2DC;
    }
L_0892B2DC:
    ctx.gpr[31] = (0x0892B2E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 207u, 0x0896D41Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B2E4u) goto L_0892B2E4;
    return;
L_0892B2E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3880), ctx.gpr[2]);
    ctx.gpr[31] = (0x0892B2F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 606u, 0x08842ED4u>(ctx, &aot_mem) && ctx.pc == 0x0892B2F8u) goto L_0892B2F8;
    return;
L_0892B2F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3880)));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x0892B310u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3600));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 543u, 0x08A9DEE8u>(ctx, &aot_mem) && ctx.pc == 0x0892B310u) goto L_0892B310;
    return;
L_0892B310:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B328;
      }
      goto L_0892B318;
    }
L_0892B318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0892B328u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    goto L_0892ABC0;
L_0892B328:
    ctx.gpr[31] = (0x0892B330u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B330u) goto L_0892B330;
    return;
L_0892B330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B3C8;
      }
      goto L_0892B338;
    }
L_0892B338:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_0892B350;
      }
      goto L_0892B340;
    }
L_0892B340:
    ctx.gpr[31] = (0x0892B348u);
    ctx.gpr[4] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B348u) goto L_0892B348;
    return;
L_0892B348:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B3C8;
      }
      goto L_0892B350;
    }
L_0892B350:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_0892B368;
      }
      goto L_0892B358;
    }
L_0892B358:
    ctx.gpr[31] = (0x0892B360u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B360u) goto L_0892B360;
    return;
L_0892B360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B3C8;
      }
      goto L_0892B368;
    }
L_0892B368:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 9u);
      if (branch_taken) {
          goto L_0892B38C;
      }
      goto L_0892B370;
    }
L_0892B370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0892B384u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B384u) goto L_0892B384;
    return;
L_0892B384:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B3C8;
      }
      goto L_0892B38C;
    }
L_0892B38C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0892B3A4;
      }
      goto L_0892B394;
    }
L_0892B394:
    ctx.gpr[31] = (0x0892B39Cu);
    ctx.gpr[4] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B39Cu) goto L_0892B39C;
    return;
L_0892B39C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B3C8;
      }
      goto L_0892B3A4;
    }
L_0892B3A4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892B3C0;
      }
      goto L_0892B3AC;
    }
L_0892B3AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892B3B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B3B8u) goto L_0892B3B8;
    return;
L_0892B3B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B3C8;
      }
      goto L_0892B3C0;
    }
L_0892B3C0:
    ctx.gpr[31] = (0x0892B3C8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B3C8u) goto L_0892B3C8;
    return;
L_0892B3C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B3DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892B3F4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 248u, 0x0896D988u>(ctx, &aot_mem) && ctx.pc == 0x0892B3F4u) goto L_0892B3F4;
    return;
L_0892B3F4:
    ctx.gpr[31] = (0x0892B3FCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 29u, 0x08820260u>(ctx, &aot_mem) && ctx.pc == 0x0892B3FCu) goto L_0892B3FC;
    return;
L_0892B3FC:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B41C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892B438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 28u, 0x08820250u>(ctx, &aot_mem) && ctx.pc == 0x0892B438u) goto L_0892B438;
    return;
L_0892B438:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_0892B5F4;
      }
      goto L_0892B440;
    }
L_0892B440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892B44Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 188u, 0x0896D328u>(ctx, &aot_mem) && ctx.pc == 0x0892B44Cu) goto L_0892B44C;
    return;
L_0892B44C:
    ctx.gpr[31] = (0x0892B454u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 208u, 0x0896D440u>(ctx, &aot_mem) && ctx.pc == 0x0892B454u) goto L_0892B454;
    return;
L_0892B454:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0892B4D4;
      }
      goto L_0892B464;
    }
L_0892B464:
    ctx.gpr[31] = (0x0892B46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 211u, 0x0896D584u>(ctx, &aot_mem) && ctx.pc == 0x0892B46Cu) goto L_0892B46C;
    return;
L_0892B46C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892B4C4;
      }
      goto L_0892B474;
    }
L_0892B474:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(43)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0892B4B4;
      }
      goto L_0892B488;
    }
L_0892B488:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(39)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0892B4A4;
      }
      goto L_0892B494;
    }
L_0892B494:
    ctx.gpr[31] = (0x0892B49Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B49Cu) goto L_0892B49C;
    return;
L_0892B49C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5F4;
      }
      goto L_0892B4A4;
    }
L_0892B4A4:
    ctx.gpr[31] = (0x0892B4ACu);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B4ACu) goto L_0892B4AC;
    return;
L_0892B4AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5F4;
      }
      goto L_0892B4B4;
    }
L_0892B4B4:
    ctx.gpr[31] = (0x0892B4BCu);
    ctx.gpr[4] = (0u | 27u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B4BCu) goto L_0892B4BC;
    return;
L_0892B4BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5F4;
      }
      goto L_0892B4C4;
    }
L_0892B4C4:
    ctx.gpr[31] = (0x0892B4CCu);
    ctx.gpr[4] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B4CCu) goto L_0892B4CC;
    return;
L_0892B4CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5F4;
      }
      goto L_0892B4D4;
    }
L_0892B4D4:
    ctx.gpr[6] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B558;
      }
      goto L_0892B4E0;
    }
L_0892B4E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(39)));
    if (ctx.gpr[4] != ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(37)));
        goto L_0892B4FC;
    }
    goto L_0892B4EC;
L_0892B4EC:
    ctx.gpr[31] = (0x0892B4F4u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B4F4u) goto L_0892B4F4;
    return;
L_0892B4F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5F4;
      }
      goto L_0892B4FC;
    }
L_0892B4FC:
    if (ctx.gpr[4] != ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(41)));
        goto L_0892B530;
    }
    goto L_0892B504;
L_0892B504:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0892B520;
      }
      goto L_0892B510;
    }
L_0892B510:
    ctx.gpr[31] = (0x0892B518u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B518u) goto L_0892B518;
    return;
L_0892B518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5F4;
      }
      goto L_0892B520;
    }
L_0892B520:
    ctx.gpr[31] = (0x0892B528u);
    ctx.gpr[4] = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B528u) goto L_0892B528;
    return;
L_0892B528:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5F4;
      }
      goto L_0892B530;
    }
L_0892B530:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0892B548;
      }
      goto L_0892B538;
    }
L_0892B538:
    ctx.gpr[31] = (0x0892B540u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B540u) goto L_0892B540;
    return;
L_0892B540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5F4;
      }
      goto L_0892B548;
    }
L_0892B548:
    ctx.gpr[31] = (0x0892B550u);
    ctx.gpr[4] = (0u | 26u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B550u) goto L_0892B550;
    return;
L_0892B550:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5F4;
      }
      goto L_0892B558;
    }
L_0892B558:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_0892B570;
      }
      goto L_0892B560;
    }
L_0892B560:
    ctx.gpr[31] = (0x0892B568u);
    ctx.gpr[4] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B568u) goto L_0892B568;
    return;
L_0892B568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5F4;
      }
      goto L_0892B570;
    }
L_0892B570:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 6u);
      if (branch_taken) {
          goto L_0892B588;
      }
      goto L_0892B578;
    }
L_0892B578:
    ctx.gpr[31] = (0x0892B580u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B580u) goto L_0892B580;
    return;
L_0892B580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5F4;
      }
      goto L_0892B588;
    }
L_0892B588:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 9u);
      if (branch_taken) {
          goto L_0892B5BC;
      }
      goto L_0892B590;
    }
L_0892B590:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(37)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0892B5AC;
      }
      goto L_0892B59C;
    }
L_0892B59C:
    ctx.gpr[31] = (0x0892B5A4u);
    ctx.gpr[4] = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B5A4u) goto L_0892B5A4;
    return;
L_0892B5A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5F4;
      }
      goto L_0892B5AC;
    }
L_0892B5AC:
    ctx.gpr[31] = (0x0892B5B4u);
    ctx.gpr[4] = (0u | 26u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B5B4u) goto L_0892B5B4;
    return;
L_0892B5B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5F4;
      }
      goto L_0892B5BC;
    }
L_0892B5BC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0892B5D4;
      }
      goto L_0892B5C4;
    }
L_0892B5C4:
    ctx.gpr[31] = (0x0892B5CCu);
    ctx.gpr[4] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B5CCu) goto L_0892B5CC;
    return;
L_0892B5CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5F4;
      }
      goto L_0892B5D4;
    }
L_0892B5D4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0892B5EC;
      }
      goto L_0892B5DC;
    }
L_0892B5DC:
    ctx.gpr[31] = (0x0892B5E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B5E4u) goto L_0892B5E4;
    return;
L_0892B5E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892B5F4;
      }
      goto L_0892B5EC;
    }
L_0892B5EC:
    ctx.gpr[31] = (0x0892B5F4u);
    ctx.gpr[4] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B5F4u) goto L_0892B5F4;
    return;
L_0892B5F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B604:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892B618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 276u, 0x0884D1D4u>(ctx, &aot_mem) && ctx.pc == 0x0892B618u) goto L_0892B618;
    return;
L_0892B618:
    ctx.gpr[31] = (0x0892B620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 352u, 0x0884D680u>(ctx, &aot_mem) && ctx.pc == 0x0892B620u) goto L_0892B620;
    return;
L_0892B620:
    ctx.gpr[31] = (0x0892B628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 592u, 0x08842DDCu>(ctx, &aot_mem) && ctx.pc == 0x0892B628u) goto L_0892B628;
    return;
L_0892B628:
    ctx.gpr[31] = (0x0892B630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 581u, 0x08842CB4u>(ctx, &aot_mem) && ctx.pc == 0x0892B630u) goto L_0892B630;
    return;
L_0892B630:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[31] = (0x0892B648u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 105u, 0x0896CA30u>(ctx, &aot_mem) && ctx.pc == 0x0892B648u) goto L_0892B648;
    return;
L_0892B648:
    ctx.gpr[31] = (0x0892B650u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 29u, 0x08820260u>(ctx, &aot_mem) && ctx.pc == 0x0892B650u) goto L_0892B650;
    return;
L_0892B650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B670:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B678:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892B688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 28u, 0x08820250u>(ctx, &aot_mem) && ctx.pc == 0x0892B688u) goto L_0892B688;
    return;
L_0892B688:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_0892B78C;
      }
      goto L_0892B690;
    }
L_0892B690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892B69Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 188u, 0x0896D328u>(ctx, &aot_mem) && ctx.pc == 0x0892B69Cu) goto L_0892B69C;
    return;
L_0892B69C:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_0892B6E0;
      }
      goto L_0892B6AC;
    }
L_0892B6AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(43)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B6CC;
      }
      goto L_0892B6BC;
    }
L_0892B6BC:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B6CC:
    ctx.gpr[31] = (0x0892B6D4u);
    ctx.gpr[4] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B6D4u) goto L_0892B6D4;
    return;
L_0892B6D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B6E0:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_0892B6FC;
      }
      goto L_0892B6E8;
    }
L_0892B6E8:
    ctx.gpr[31] = (0x0892B6F0u);
    ctx.gpr[4] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B6F0u) goto L_0892B6F0;
    return;
L_0892B6F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B6FC:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_0892B718;
      }
      goto L_0892B704;
    }
L_0892B704:
    ctx.gpr[31] = (0x0892B70Cu);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B70Cu) goto L_0892B70C;
    return;
L_0892B70C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B718:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 9u);
      if (branch_taken) {
          goto L_0892B748;
      }
      goto L_0892B720;
    }
L_0892B720:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1968u);
      if (branch_taken) {
          goto L_0892B734;
      }
      goto L_0892B730;
    }
L_0892B730:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_0892B734;
L_0892B734:
    ctx.gpr[31] = (0x0892B73Cu);
    ctx.gpr[4] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B73Cu) goto L_0892B73C;
    return;
L_0892B73C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B748:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0892B764;
      }
      goto L_0892B750;
    }
L_0892B750:
    ctx.gpr[31] = (0x0892B758u);
    ctx.gpr[4] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B758u) goto L_0892B758;
    return;
L_0892B758:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B764:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892B784;
      }
      goto L_0892B76C;
    }
L_0892B76C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892B778u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B778u) goto L_0892B778;
    return;
L_0892B778:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B784:
    ctx.gpr[31] = (0x0892B78Cu);
    ctx.gpr[4] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B78Cu) goto L_0892B78C;
    return;
L_0892B78C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B798:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892B7A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 276u, 0x0884D1D4u>(ctx, &aot_mem) && ctx.pc == 0x0892B7A8u) goto L_0892B7A8;
    return;
L_0892B7A8:
    ctx.gpr[31] = (0x0892B7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 352u, 0x0884D680u>(ctx, &aot_mem) && ctx.pc == 0x0892B7B0u) goto L_0892B7B0;
    return;
L_0892B7B0:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x0892B7BCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 127u, 0x0896CC90u>(ctx, &aot_mem) && ctx.pc == 0x0892B7BCu) goto L_0892B7BC;
    return;
L_0892B7BC:
    ctx.gpr[31] = (0x0892B7C4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 29u, 0x08820260u>(ctx, &aot_mem) && ctx.pc == 0x0892B7C4u) goto L_0892B7C4;
    return;
L_0892B7C4:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B7E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B7F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892B800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 28u, 0x08820250u>(ctx, &aot_mem) && ctx.pc == 0x0892B800u) goto L_0892B800;
    return;
L_0892B800:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_0892B8D4;
      }
      goto L_0892B808;
    }
L_0892B808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892B814u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 188u, 0x0896D328u>(ctx, &aot_mem) && ctx.pc == 0x0892B814u) goto L_0892B814;
    return;
L_0892B814:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_0892B858;
      }
      goto L_0892B824;
    }
L_0892B824:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(43)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B844;
      }
      goto L_0892B834;
    }
L_0892B834:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B844:
    ctx.gpr[31] = (0x0892B84Cu);
    ctx.gpr[4] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B84Cu) goto L_0892B84C;
    return;
L_0892B84C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B858:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_0892B874;
      }
      goto L_0892B860;
    }
L_0892B860:
    ctx.gpr[31] = (0x0892B868u);
    ctx.gpr[4] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B868u) goto L_0892B868;
    return;
L_0892B868:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B874:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 9u);
      if (branch_taken) {
          goto L_0892B890;
      }
      goto L_0892B87C;
    }
L_0892B87C:
    ctx.gpr[31] = (0x0892B884u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B884u) goto L_0892B884;
    return;
L_0892B884:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B890:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0892B8AC;
      }
      goto L_0892B898;
    }
L_0892B898:
    ctx.gpr[31] = (0x0892B8A0u);
    ctx.gpr[4] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B8A0u) goto L_0892B8A0;
    return;
L_0892B8A0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B8AC:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0892B8CC;
      }
      goto L_0892B8B4;
    }
L_0892B8B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892B8C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B8C0u) goto L_0892B8C0;
    return;
L_0892B8C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B8CC:
    ctx.gpr[31] = (0x0892B8D4u);
    ctx.gpr[4] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B8D4u) goto L_0892B8D4;
    return;
L_0892B8D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B8E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892B8F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 182u, 0x0896D29Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B8F0u) goto L_0892B8F0;
    return;
L_0892B8F0:
    ctx.gpr[31] = (0x0892B8F8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 29u, 0x08820260u>(ctx, &aot_mem) && ctx.pc == 0x0892B8F8u) goto L_0892B8F8;
    return;
L_0892B8F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B904:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B90C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892B91Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 28u, 0x08820250u>(ctx, &aot_mem) && ctx.pc == 0x0892B91Cu) goto L_0892B91C;
    return;
L_0892B91C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_0892B950;
      }
      goto L_0892B924;
    }
L_0892B924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0892B94C;
      }
      goto L_0892B938;
    }
L_0892B938:
    ctx.gpr[31] = (0x0892B940u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892B940u) goto L_0892B940;
    return;
L_0892B940:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B94C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0892B950;
L_0892B950:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B95C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892B970u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 146u, 0x0896CEC0u>(ctx, &aot_mem) && ctx.pc == 0x0892B970u) goto L_0892B970;
    return;
L_0892B970:
    ctx.gpr[31] = (0x0892B978u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 29u, 0x08820260u>(ctx, &aot_mem) && ctx.pc == 0x0892B978u) goto L_0892B978;
    return;
L_0892B978:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B99C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892B9A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892B9B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 28u, 0x08820250u>(ctx, &aot_mem) && ctx.pc == 0x0892B9B8u) goto L_0892B9B8;
    return;
L_0892B9B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_0892BAA4;
      }
      goto L_0892B9C0;
    }
L_0892B9C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892B9CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 188u, 0x0896D328u>(ctx, &aot_mem) && ctx.pc == 0x0892B9CCu) goto L_0892B9CC;
    return;
L_0892B9CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0892BA08;
      }
      goto L_0892B9D8;
    }
L_0892B9D8:
    ctx.gpr[31] = (0x0892B9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 207u, 0x0896D41Cu>(ctx, &aot_mem) && ctx.pc == 0x0892B9E0u) goto L_0892B9E0;
    return;
L_0892B9E0:
    ctx.gpr[31] = (0x0892B9E8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 496u, 0x088426F4u>(ctx, &aot_mem) && ctx.pc == 0x0892B9E8u) goto L_0892B9E8;
    return;
L_0892B9E8:
    ctx.gpr[31] = (0x0892B9F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 273u, 0x0884D1ACu>(ctx, &aot_mem) && ctx.pc == 0x0892B9F0u) goto L_0892B9F0;
    return;
L_0892B9F0:
    ctx.gpr[31] = (0x0892B9F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 349u, 0x0884D658u>(ctx, &aot_mem) && ctx.pc == 0x0892B9F8u) goto L_0892B9F8;
    return;
L_0892B9F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0892BAA4;
      }
      goto L_0892BA08;
    }
L_0892BA08:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_0892BA20;
      }
      goto L_0892BA10;
    }
L_0892BA10:
    ctx.gpr[31] = (0x0892BA18u);
    ctx.gpr[4] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BA18u) goto L_0892BA18;
    return;
L_0892BA18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BAA4;
      }
      goto L_0892BA20;
    }
L_0892BA20:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_0892BA38;
      }
      goto L_0892BA28;
    }
L_0892BA28:
    ctx.gpr[31] = (0x0892BA30u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BA30u) goto L_0892BA30;
    return;
L_0892BA30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BAA4;
      }
      goto L_0892BA38;
    }
L_0892BA38:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_0892BA50;
      }
      goto L_0892BA40;
    }
L_0892BA40:
    ctx.gpr[31] = (0x0892BA48u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BA48u) goto L_0892BA48;
    return;
L_0892BA48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BAA4;
      }
      goto L_0892BA50;
    }
L_0892BA50:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_0892BA68;
      }
      goto L_0892BA58;
    }
L_0892BA58:
    ctx.gpr[31] = (0x0892BA60u);
    ctx.gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BA60u) goto L_0892BA60;
    return;
L_0892BA60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BAA4;
      }
      goto L_0892BA68;
    }
L_0892BA68:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0892BA80;
      }
      goto L_0892BA70;
    }
L_0892BA70:
    ctx.gpr[31] = (0x0892BA78u);
    ctx.gpr[4] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BA78u) goto L_0892BA78;
    return;
L_0892BA78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BAA4;
      }
      goto L_0892BA80;
    }
L_0892BA80:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0892BA9C;
      }
      goto L_0892BA88;
    }
L_0892BA88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892BA94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BA94u) goto L_0892BA94;
    return;
L_0892BA94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BAA4;
      }
      goto L_0892BA9C;
    }
L_0892BA9C:
    ctx.gpr[31] = (0x0892BAA4u);
    ctx.gpr[4] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BAA4u) goto L_0892BAA4;
    return;
L_0892BAA4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892BAB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3964)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892BADCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10732));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0892BADCu) goto L_0892BADC;
    return;
L_0892BADC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3924), 0u);
    ctx.gpr[31] = (0x0892BAF4u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 146u, 0x0896CEC0u>(ctx, &aot_mem) && ctx.pc == 0x0892BAF4u) goto L_0892BAF4;
    return;
L_0892BAF4:
    ctx.gpr[31] = (0x0892BAFCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 29u, 0x08820260u>(ctx, &aot_mem) && ctx.pc == 0x0892BAFCu) goto L_0892BAFC;
    return;
L_0892BAFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892BB18:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892BB20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892BB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 28u, 0x08820250u>(ctx, &aot_mem) && ctx.pc == 0x0892BB3Cu) goto L_0892BB3C;
    return;
L_0892BB3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_0892BC6C;
      }
      goto L_0892BB44;
    }
L_0892BB44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892BB50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 188u, 0x0896D328u>(ctx, &aot_mem) && ctx.pc == 0x0892BB50u) goto L_0892BB50;
    return;
L_0892BB50:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0892BBCC;
      }
      goto L_0892BB5C;
    }
L_0892BB5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892BB68u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3964)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 207u, 0x0896D41Cu>(ctx, &aot_mem) && ctx.pc == 0x0892BB68u) goto L_0892BB68;
    return;
L_0892BB68:
    ctx.gpr[17] = (2u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10732));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0892BB80u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0892BB80u) goto L_0892BB80;
    return;
L_0892BB80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3964)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 2u);
        goto L_0892BBBC;
    }
    goto L_0892BB94;
L_0892BB94:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0892BBA4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0892BBA4u) goto L_0892BBA4;
    return;
L_0892BBA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x0892BBB4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3924), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BBB4u) goto L_0892BBB4;
    return;
L_0892BBB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BC6C;
      }
      goto L_0892BBBC;
    }
L_0892BBBC:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3924), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_0892BC6C;
      }
      goto L_0892BBCC;
    }
L_0892BBCC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_0892BBE4;
      }
      goto L_0892BBD4;
    }
L_0892BBD4:
    ctx.gpr[31] = (0x0892BBDCu);
    ctx.gpr[4] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BBDCu) goto L_0892BBDC;
    return;
L_0892BBDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BC6C;
      }
      goto L_0892BBE4;
    }
L_0892BBE4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_0892BBFC;
      }
      goto L_0892BBEC;
    }
L_0892BBEC:
    ctx.gpr[31] = (0x0892BBF4u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BBF4u) goto L_0892BBF4;
    return;
L_0892BBF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BC6C;
      }
      goto L_0892BBFC;
    }
L_0892BBFC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 9u);
      if (branch_taken) {
          goto L_0892BC14;
      }
      goto L_0892BC04;
    }
L_0892BC04:
    ctx.gpr[31] = (0x0892BC0Cu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BC0Cu) goto L_0892BC0C;
    return;
L_0892BC0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BC6C;
      }
      goto L_0892BC14;
    }
L_0892BC14:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0892BC2C;
      }
      goto L_0892BC1C;
    }
L_0892BC1C:
    ctx.gpr[31] = (0x0892BC24u);
    ctx.gpr[4] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BC24u) goto L_0892BC24;
    return;
L_0892BC24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BC6C;
      }
      goto L_0892BC2C;
    }
L_0892BC2C:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
      if (branch_taken) {
          goto L_0892BC48;
      }
      goto L_0892BC38;
    }
L_0892BC38:
    ctx.gpr[31] = (0x0892BC40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BC40u) goto L_0892BC40;
    return;
L_0892BC40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BC6C;
      }
      goto L_0892BC48;
    }
L_0892BC48:
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3964)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0892BC5Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10732));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0892BC5Cu) goto L_0892BC5C;
    return;
L_0892BC5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (0u | 22u);
    ctx.gpr[31] = (0x0892BC6Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3924), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BC6Cu) goto L_0892BC6C;
    return;
L_0892BC6C:
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
L_0892BC84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892BCA0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 146u, 0x0896CEC0u>(ctx, &aot_mem) && ctx.pc == 0x0892BCA0u) goto L_0892BCA0;
    return;
L_0892BCA0:
    ctx.gpr[31] = (0x0892BCA8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 29u, 0x08820260u>(ctx, &aot_mem) && ctx.pc == 0x0892BCA8u) goto L_0892BCA8;
    return;
L_0892BCA8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3900), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0892BCC8u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    goto L_0892AC0C;
L_0892BCC8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892BCD8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892BCE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892BD08u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 248u, 0x0896D988u>(ctx, &aot_mem) && ctx.pc == 0x0892BD08u) goto L_0892BD08;
    return;
L_0892BD08:
    ctx.gpr[31] = (0x0892BD10u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 29u, 0x08820260u>(ctx, &aot_mem) && ctx.pc == 0x0892BD10u) goto L_0892BD10;
    return;
L_0892BD10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892BD30:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892BD38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892BD50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 28u, 0x08820250u>(ctx, &aot_mem) && ctx.pc == 0x0892BD50u) goto L_0892BD50;
    return;
L_0892BD50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_0892BF7C;
      }
      goto L_0892BD58;
    }
L_0892BD58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[31] = (0x0892BD64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 188u, 0x0896D328u>(ctx, &aot_mem) && ctx.pc == 0x0892BD64u) goto L_0892BD64;
    return;
L_0892BD64:
    ctx.gpr[31] = (0x0892BD6Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 208u, 0x0896D440u>(ctx, &aot_mem) && ctx.pc == 0x0892BD6Cu) goto L_0892BD6C;
    return;
L_0892BD6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0892BE1C;
      }
      goto L_0892BD7C;
    }
L_0892BD7C:
    ctx.gpr[31] = (0x0892BD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 211u, 0x0896D584u>(ctx, &aot_mem) && ctx.pc == 0x0892BD84u) goto L_0892BD84;
    return;
L_0892BD84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BE0C;
      }
      goto L_0892BD8C;
    }
L_0892BD8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(43)));
    if (ctx.gpr[4] != ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(42)));
        goto L_0892BDE4;
    }
    goto L_0892BDA0;
L_0892BDA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(39)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0892BDD4;
      }
      goto L_0892BDAC;
    }
L_0892BDAC:
    ctx.gpr[31] = (0x0892BDB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 581u, 0x08842CB4u>(ctx, &aot_mem) && ctx.pc == 0x0892BDB4u) goto L_0892BDB4;
    return;
L_0892BDB4:
    ctx.gpr[31] = (0x0892BDBCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 570u, 0x08842C10u>(ctx, &aot_mem) && ctx.pc == 0x0892BDBCu) goto L_0892BDBC;
    return;
L_0892BDBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x0892BDCCu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BDCCu) goto L_0892BDCC;
    return;
L_0892BDCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF7C;
      }
      goto L_0892BDD4;
    }
L_0892BDD4:
    ctx.gpr[31] = (0x0892BDDCu);
    ctx.gpr[4] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BDDCu) goto L_0892BDDC;
    return;
L_0892BDDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF7C;
      }
      goto L_0892BDE4;
    }
L_0892BDE4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0892BDFC;
      }
      goto L_0892BDEC;
    }
L_0892BDEC:
    ctx.gpr[31] = (0x0892BDF4u);
    ctx.gpr[4] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BDF4u) goto L_0892BDF4;
    return;
L_0892BDF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF7C;
      }
      goto L_0892BDFC;
    }
L_0892BDFC:
    ctx.gpr[31] = (0x0892BE04u);
    ctx.gpr[4] = (0u | 31u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BE04u) goto L_0892BE04;
    return;
L_0892BE04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF7C;
      }
      goto L_0892BE0C;
    }
L_0892BE0C:
    ctx.gpr[31] = (0x0892BE14u);
    ctx.gpr[4] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BE14u) goto L_0892BE14;
    return;
L_0892BE14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF7C;
      }
      goto L_0892BE1C;
    }
L_0892BE1C:
    ctx.gpr[6] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0892BF14;
      }
      goto L_0892BE28;
    }
L_0892BE28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(37)));
    if (ctx.gpr[4] != ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(41)));
        goto L_0892BE9C;
    }
    goto L_0892BE34;
L_0892BE34:
    ctx.gpr[31] = (0x0892BE3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 210u, 0x0896D554u>(ctx, &aot_mem) && ctx.pc == 0x0892BE3Cu) goto L_0892BE3C;
    return;
L_0892BE3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BE8C;
      }
      goto L_0892BE44;
    }
L_0892BE44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0892BE7C;
      }
      goto L_0892BE54;
    }
L_0892BE54:
    ctx.gpr[31] = (0x0892BE5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 581u, 0x08842CB4u>(ctx, &aot_mem) && ctx.pc == 0x0892BE5Cu) goto L_0892BE5C;
    return;
L_0892BE5C:
    ctx.gpr[31] = (0x0892BE64u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 570u, 0x08842C10u>(ctx, &aot_mem) && ctx.pc == 0x0892BE64u) goto L_0892BE64;
    return;
L_0892BE64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x0892BE74u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BE74u) goto L_0892BE74;
    return;
L_0892BE74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF7C;
      }
      goto L_0892BE7C;
    }
L_0892BE7C:
    ctx.gpr[31] = (0x0892BE84u);
    ctx.gpr[4] = (0u | 37u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BE84u) goto L_0892BE84;
    return;
L_0892BE84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF7C;
      }
      goto L_0892BE8C;
    }
L_0892BE8C:
    ctx.gpr[31] = (0x0892BE94u);
    ctx.gpr[4] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BE94u) goto L_0892BE94;
    return;
L_0892BE94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF7C;
      }
      goto L_0892BE9C;
    }
L_0892BE9C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0892BECC;
      }
      goto L_0892BEA4;
    }
L_0892BEA4:
    ctx.gpr[31] = (0x0892BEACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 581u, 0x08842CB4u>(ctx, &aot_mem) && ctx.pc == 0x0892BEACu) goto L_0892BEAC;
    return;
L_0892BEAC:
    ctx.gpr[31] = (0x0892BEB4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 570u, 0x08842C10u>(ctx, &aot_mem) && ctx.pc == 0x0892BEB4u) goto L_0892BEB4;
    return;
L_0892BEB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x0892BEC4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BEC4u) goto L_0892BEC4;
    return;
L_0892BEC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF7C;
      }
      goto L_0892BECC;
    }
L_0892BECC:
    ctx.gpr[31] = (0x0892BED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 210u, 0x0896D554u>(ctx, &aot_mem) && ctx.pc == 0x0892BED4u) goto L_0892BED4;
    return;
L_0892BED4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF04;
      }
      goto L_0892BEDC;
    }
L_0892BEDC:
    ctx.gpr[31] = (0x0892BEE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 581u, 0x08842CB4u>(ctx, &aot_mem) && ctx.pc == 0x0892BEE4u) goto L_0892BEE4;
    return;
L_0892BEE4:
    ctx.gpr[31] = (0x0892BEECu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 570u, 0x08842C10u>(ctx, &aot_mem) && ctx.pc == 0x0892BEECu) goto L_0892BEEC;
    return;
L_0892BEEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (0u | 30u);
    ctx.gpr[31] = (0x0892BEFCu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BEFCu) goto L_0892BEFC;
    return;
L_0892BEFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF7C;
      }
      goto L_0892BF04;
    }
L_0892BF04:
    ctx.gpr[31] = (0x0892BF0Cu);
    ctx.gpr[4] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BF0Cu) goto L_0892BF0C;
    return;
L_0892BF0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF7C;
      }
      goto L_0892BF14;
    }
L_0892BF14:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_0892BF2C;
      }
      goto L_0892BF1C;
    }
L_0892BF1C:
    ctx.gpr[31] = (0x0892BF24u);
    ctx.gpr[4] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BF24u) goto L_0892BF24;
    return;
L_0892BF24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF7C;
      }
      goto L_0892BF2C;
    }
L_0892BF2C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 9u);
      if (branch_taken) {
          goto L_0892BF44;
      }
      goto L_0892BF34;
    }
L_0892BF34:
    ctx.gpr[31] = (0x0892BF3Cu);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BF3Cu) goto L_0892BF3C;
    return;
L_0892BF3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF7C;
      }
      goto L_0892BF44;
    }
L_0892BF44:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0892BF5C;
      }
      goto L_0892BF4C;
    }
L_0892BF4C:
    ctx.gpr[31] = (0x0892BF54u);
    ctx.gpr[4] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BF54u) goto L_0892BF54;
    return;
L_0892BF54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF7C;
      }
      goto L_0892BF5C;
    }
L_0892BF5C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0892BF74;
      }
      goto L_0892BF64;
    }
L_0892BF64:
    ctx.gpr[31] = (0x0892BF6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BF6Cu) goto L_0892BF6C;
    return;
L_0892BF6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0892BF7C;
      }
      goto L_0892BF74;
    }
L_0892BF74:
    ctx.gpr[31] = (0x0892BF7Cu);
    ctx.gpr[4] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 831u, 0x0892EA38u>(ctx, &aot_mem) && ctx.pc == 0x0892BF7Cu) goto L_0892BF7C;
    return;
L_0892BF7C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892BF90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0892BFB4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 105u, 0x0896CA30u>(ctx, &aot_mem) && ctx.pc == 0x0892BFB4u) goto L_0892BFB4;
    return;
L_0892BFB4:
    ctx.gpr[31] = (0x0892BFBCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 29u, 0x08820260u>(ctx, &aot_mem) && ctx.pc == 0x0892BFBCu) goto L_0892BFBC;
    return;
L_0892BFBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892BFE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0892BFE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21792)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[16]);
    ctx.pc = 0x0892C000u; return;
}

void recomp_unit_0073(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0073_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_73(Runtime &runtime) {
    runtime.register_generated_unit(73u, 0x08928000u, 16384u, &recomp_unit_0073, &recomp_unit_0073_entry);
    runtime.register_function(0x08928004u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892800Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928014u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892801Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928028u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928030u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928038u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928048u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928058u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928064u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928084u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928098u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089280A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089280BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089280D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089280F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089280FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928104u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892810Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928114u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892812Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928134u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928148u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928150u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928164u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892816Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928174u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892817Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928188u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928190u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892819Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089281FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928210u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892822Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892823Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892824Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892825Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928268u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928274u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928284u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892828Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928294u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089282F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928300u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892830Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928314u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928320u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892832Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928334u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928340u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928350u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928364u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928370u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928378u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928388u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928390u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928398u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089283F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928404u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928418u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928424u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892842Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892843Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928444u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892844Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928458u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928460u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892846Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928478u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928480u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928488u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928494u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892849Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089284A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089284B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089284CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089284D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089284E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089284F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089284F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928500u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892850Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928514u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928520u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892852Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928534u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928540u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892854Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928554u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928560u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928570u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928584u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892858Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928598u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089285A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089285ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089285B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089285C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089285CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089285D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089285E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089285E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089285F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928604u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892860Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928614u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928620u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928634u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892863Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928648u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928650u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892865Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892866Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892869Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089286A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089286ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089286B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089286C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089286D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089286DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089286F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928704u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892870Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928714u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928720u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892872Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928734u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892873Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928758u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928760u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928768u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928774u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928784u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892878Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928794u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892879Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089287A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089287B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089287C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089287C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089287D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089287DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089287ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089287F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089287FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928804u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892880Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928814u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892881Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928824u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892882Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928834u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892883Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928844u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928850u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928858u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928860u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928868u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928870u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928878u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928884u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928890u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928898u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089288FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928904u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892890Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892891Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892892Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928938u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928948u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892895Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928968u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928970u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928980u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928988u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928990u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892899Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089289F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A58u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928A9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928AA8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928AB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928AE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928AECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928AF4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B48u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B68u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928B90u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BA8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BD8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BE0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BF0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928BF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C34u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C68u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928C80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CA8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CD4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928CE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D68u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D70u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D84u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928D9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DCCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DD4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DF0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928DF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E0Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E34u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E74u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E90u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928E98u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928EA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928EA8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928EB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928EC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928EC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928ED0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928ED8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928EE0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928EE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928EF0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928EF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F70u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928F9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928FB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928FBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928FC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928FD4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928FDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928FE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08928FF0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929014u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929028u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892903Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929050u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892906Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929084u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929098u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089290F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929100u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929108u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929128u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929130u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929140u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929148u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929150u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892915Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929174u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929188u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089291F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929200u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929208u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929214u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929224u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892922Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929234u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929240u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929250u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892925Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892926Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929274u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892927Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929288u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929298u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089292ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089292B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089292C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089292D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089292D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089292E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089292ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089292FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929310u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892931Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929324u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929334u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892933Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929344u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929350u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929358u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929364u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929370u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929378u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929380u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892938Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929394u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089293A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089293B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089293DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089293F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929408u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929420u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929428u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929434u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892943Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929448u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929450u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892946Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892947Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892948Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089294A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089294B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089294D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089294E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089294E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089294F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929510u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929534u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892953Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929544u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929558u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929560u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929568u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929570u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929580u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892958Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929594u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892959Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089295A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089295ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089295BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089295D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089295ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929604u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892961Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929624u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892963Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929644u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892965Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929664u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892967Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929690u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929698u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089296A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089296B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089296DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089296F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929708u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929720u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929728u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929734u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892973Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892974Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929754u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929770u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929788u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929790u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929798u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089297B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089297CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089297E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929804u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892980Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929818u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929828u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929830u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929838u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929840u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929844u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929858u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929868u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929874u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892989Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089298FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892990Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929914u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892991Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929930u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929948u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929950u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929958u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929960u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892997Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929994u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089299A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089299C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089299D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089299DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089299ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089299F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x089299FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A58u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929A8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929AA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929AB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929AD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929AD8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929AE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929AECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929AF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929B94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929BA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929BBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929BC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929BE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929BECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929BF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C68u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929C9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CB8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CF0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929CF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D84u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929D9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DD8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DE0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929DF8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E90u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929E98u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929ED4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929EFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F68u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929F98u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x08929FE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A000u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A018u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A024u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A02Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A03Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A048u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A060u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A078u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A080u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A088u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A0ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A10Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A114u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A120u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A130u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A138u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A140u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A148u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A14Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A160u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A170u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A17Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A18Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A19Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A1B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A1BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A1ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A204u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A218u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A230u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A238u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A244u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A24Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A25Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A264u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A284u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A29Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A2F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A314u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A31Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A328u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A338u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A340u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A348u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A350u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A354u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A368u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A378u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A384u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A3E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A3F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A408u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A42Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A444u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A44Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A458u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A460u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A46Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A474u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A480u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A488u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A494u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A49Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A4F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A500u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A50Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A514u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A520u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A528u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A534u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A53Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A548u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A550u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A55Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A564u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A570u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A578u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A584u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A58Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A598u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A5FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A604u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A610u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A618u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A624u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A62Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A638u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A640u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A64Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A654u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A660u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A668u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A674u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A67Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A688u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A690u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A69Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A6F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A700u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A708u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A714u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A71Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A728u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A730u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A73Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A744u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A750u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A758u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A764u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A76Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A778u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A780u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A78Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A794u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A7A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A7D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A828u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A878u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A880u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A888u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A894u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A89Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A8E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A900u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A908u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A910u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A928u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A930u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A938u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A940u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A948u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A950u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A960u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A990u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892A9F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA74u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AA9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AAACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AAB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AAC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AAC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AAD8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AAE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AAF0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB00u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB74u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AB98u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABE0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABF0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ABFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC0Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC34u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC74u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AC94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD48u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD58u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD70u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AD8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADD0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADD8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892ADE8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE0Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE34u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE70u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AE90u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AEA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AEC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AEE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF90u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AF98u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFA8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFB0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFC0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892AFF4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B004u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B010u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B018u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B020u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B028u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B038u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B054u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B05Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B064u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B070u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B078u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B084u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B0F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B114u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B134u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B1D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B1E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B1FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B214u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B22Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B244u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B250u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B26Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B274u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B28Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B29Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B2A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B2BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B2C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B2D0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B2DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B2E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B2F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B310u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B318u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B328u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B330u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B338u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B340u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B348u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B350u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B358u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B360u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B368u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B370u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B384u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B38Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B394u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B39Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3C8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B3FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B41Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B424u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B438u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B440u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B44Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B454u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B464u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B46Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B474u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B488u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B494u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B49Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B4FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B504u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B510u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B518u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B520u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B528u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B530u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B538u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B540u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B548u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B550u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B558u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B560u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B568u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B570u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B578u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B580u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B588u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B590u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B59Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5DCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5E4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5ECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B5F4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B604u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B618u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B620u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B628u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B630u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B648u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B650u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B670u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B678u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B688u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B690u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B69Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B6ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B6BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B6CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B6D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B6E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B6E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B6F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B6FCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B704u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B70Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B718u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B720u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B730u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B734u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B73Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B748u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B750u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B758u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B764u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B76Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B778u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B784u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B78Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B798u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7A8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7B0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7BCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7C4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B7F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B800u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B808u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B814u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B824u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B834u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B844u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B84Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B858u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B860u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B868u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B874u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B87Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B884u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B890u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B898u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8A0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8ACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8B4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8D4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B8F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B904u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B90Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B91Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B924u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B938u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B940u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B94Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B950u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B95Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B970u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B978u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B99Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B9A4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B9B8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B9C0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B9CCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B9D8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B9E0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B9E8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B9F0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892B9F8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA48u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA58u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA60u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA68u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA70u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA78u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA88u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BA9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BAA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BAB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BADCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BAF4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BAFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB18u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB20u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB68u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB80u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BB94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBCCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBD4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBF4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BBFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC0Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC40u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC48u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BC84u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BCA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BCA8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BCC8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BCD8u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BCE0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD08u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD10u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD30u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD38u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD50u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD58u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD84u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BD8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDA0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDCCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDD4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDF4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BDFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE0Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE28u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE34u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE74u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE84u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE8Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE94u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BE9Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEA4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEACu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEC4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BECCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BED4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEDCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEE4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEECu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BEFCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF04u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF0Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF14u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF1Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF24u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF2Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF34u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF3Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF44u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF4Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF54u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF5Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF64u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF6Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF74u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF7Cu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BF90u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFB4u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFBCu, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFE0u, &recomp_unit_0073, "recomp_unit_0073");
    runtime.register_function(0x0892BFE8u, &recomp_unit_0073, "recomp_unit_0073");
}
} // namespace psprecomp

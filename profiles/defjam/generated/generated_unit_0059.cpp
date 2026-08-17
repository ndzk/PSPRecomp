#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0059[4095] = {
    1, 2, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 8, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10,
    0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 15, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 19, 0,
    20, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 0, 27, 28, 0, 29, 0, 0, 30, 31,
    32, 0, 0, 33, 0, 34, 0, 35, 0, 0, 0, 0, 36, 0, 0, 37, 0, 38, 0, 39, 40, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0,
    44, 0, 0, 45, 0, 0, 0, 46, 0, 47, 0, 0, 48, 0, 49, 0, 0, 0, 50, 0, 51, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    55, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0,
    63, 0, 0, 0, 0, 0, 64, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 71, 0,
    0, 72, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 79, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96,
    0, 97, 0, 98, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 102, 0, 0, 0, 0, 103, 104, 0, 105, 0, 106, 0, 107, 0, 0,
    0, 0, 0, 108, 0, 109, 0, 0, 110, 0, 111, 112, 0, 113, 0, 114, 0, 115, 0, 0, 0, 0, 116, 0, 117, 118, 0, 119, 0, 120, 0, 121,
    0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 0, 133,
    0, 134, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 141, 0, 142, 0, 0, 0,
    0, 143, 0, 0, 144, 145, 146, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0,
    0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 162, 0, 163, 0, 0, 0, 164, 0, 165, 0, 166,
    0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0,
    173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 178,
    179, 0, 0, 180, 181, 0, 182, 0, 183, 0, 184, 0, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 188, 0, 189, 0, 190, 191, 0, 192, 0, 0,
    0, 193, 0, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 0, 204, 0, 205, 0, 206, 0, 0, 0, 0, 0,
    0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 211, 0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 217, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 225,
    0, 226, 0, 227, 0, 228, 229, 0, 0, 230, 0, 231, 0, 232, 0, 0, 0, 233, 0, 234, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 237,
    238, 0, 239, 0, 240, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 244,
    0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0,
    0, 250, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 0, 253, 0, 254, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 261, 0, 262, 0, 0, 0, 0, 263, 0, 0, 264, 265, 266, 0,
    0, 267, 0, 268, 0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 0, 275, 0, 276, 0, 277, 0, 278,
    0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 281, 0, 282, 0, 283, 0, 0, 0, 284, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 289, 0, 290, 0, 291, 0, 292, 0, 293, 0, 294,
    0, 0, 295, 0, 296, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 301, 302, 0, 0, 303, 0, 304, 0, 305, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 308, 0, 309, 0, 310, 0, 311, 312, 0, 0, 0, 0, 0, 313, 314, 0,
    315, 0, 316, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0,
    0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 328,
    0, 0, 0, 0, 329, 0, 330, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0,
    337, 0, 338, 0, 0, 0, 0, 339, 0, 0, 340, 341, 342, 0, 0, 343, 0, 344, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 348, 0,
    0, 0, 349, 0, 350, 0, 0, 351, 0, 352, 0, 353, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 357, 0, 358, 0, 359, 0, 0,
    0, 360, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0,
    0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0,
    0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0,
    376, 0, 377, 0, 378, 0, 379, 0, 380, 0, 381, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 386,
    387, 0, 388, 0, 0, 389, 0, 390, 391, 0, 392, 0, 393, 0, 394, 0, 395, 0, 0, 0, 0, 396, 397, 0, 398, 0, 399, 0, 400, 0, 0, 0,
    0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0,
    406, 0, 0, 0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 0, 412, 0, 413, 0,
    414, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 418, 0, 0, 419, 0, 420, 0, 421, 0, 0, 0, 0, 422, 0,
    0, 423, 424, 425, 0, 0, 426, 0, 427, 0, 428, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 431, 0, 0, 0, 432, 0, 433, 0, 0, 434, 0,
    435, 0, 436, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 441, 0, 442, 0, 0, 0, 443, 0, 444, 0, 445, 0, 0, 0,
    0, 446, 0, 447, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 452, 0,
    0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 457, 458, 0,
    0, 459, 460, 0, 461, 0, 462, 0, 463, 0, 0, 0, 464, 465, 0, 466, 0, 0, 0, 467, 0, 0, 468, 0, 469, 0, 470, 471, 0, 472, 0, 0,
    0, 473, 0, 0, 474, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 482, 0, 0, 0, 483, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0,
    0, 486, 0, 487, 0, 0, 0, 0, 0, 488, 0, 489, 0, 0, 490, 0, 491, 0, 492, 0, 0, 493, 0, 494, 0, 495, 0, 496, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 497, 0, 498, 0, 499, 0, 500, 0, 501, 0, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0,
    505, 0, 506, 0, 507, 508, 0, 0, 509, 0, 510, 0, 511, 0, 0, 0, 512, 0, 513, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0, 0, 516, 517,
    0, 518, 0, 519, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0,
    0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 528, 0, 0, 0, 0, 0, 0, 0,
    529, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0, 0, 532, 0, 533, 0, 534, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 539, 0, 540, 0, 541, 0, 0, 0, 0, 542, 0, 0, 543, 544, 545, 0, 546,
    0, 547, 0, 548, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0, 552, 0, 553, 0, 0, 554, 0, 555, 0, 556, 0, 557, 0, 0,
    0, 0, 0, 558, 0, 0, 559, 0, 0, 560, 0, 561, 0, 562, 0, 0, 0, 563, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 569, 0, 570, 0, 571, 0, 572, 0,
    573, 0, 0, 574, 0, 575, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 579, 0, 580, 581, 0, 0, 582, 0, 583, 0, 584,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 587, 0, 588, 0, 0, 589, 0, 590, 591, 0, 0, 0, 0, 0, 592,
    593, 0, 594, 0, 595, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 0, 599, 0, 0, 0, 0, 0, 600, 0, 0, 0,
    0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 606,
    0, 607, 0, 0, 0, 0, 608, 0, 609, 0, 610, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 613, 0, 0, 614, 0, 0,
    615, 0, 616, 0, 617, 0, 0, 0, 0, 618, 0, 0, 619, 620, 621, 0, 622, 0, 623, 0, 624, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 627,
    0, 0, 0, 628, 0, 629, 0, 0, 630, 0, 631, 0, 632, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 0, 636, 0, 637, 0, 638, 0,
    0, 0, 639, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0,
    643, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 645, 0, 646, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 648, 0, 0, 0, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 653, 0, 654, 0, 655, 0, 656, 0, 657, 0, 658, 0, 659, 0, 0, 0, 0, 0, 660, 0, 661, 0, 0, 0, 0, 662, 663, 0, 664, 0,
    0, 665, 0, 666, 667, 0, 668, 0, 669, 0, 670, 0, 671, 0, 0, 0, 0, 672, 673, 0, 674, 0, 675, 0, 676, 0, 0, 0, 0, 0, 677, 0,
    0, 0, 0, 0, 0, 678, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0,
    683, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 0, 688, 0, 689, 0, 690, 0, 691, 0,
    0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 695, 0, 696, 0, 697, 0, 0, 0, 0, 698, 0, 0, 699, 700, 701,
    0, 0, 702, 0, 703, 0, 704, 0, 0, 0, 705, 0, 0, 0, 706, 0, 0, 707, 0, 0, 0, 708, 0, 709, 0, 0, 710, 0, 711, 0, 712, 0,
    713, 0, 0, 0, 0, 0, 714, 0, 0, 715, 0, 0, 716, 0, 717, 0, 718, 0, 0, 0, 719, 0, 720, 0, 721, 0, 722, 0, 723, 0, 0, 0,
    724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 726, 0, 727, 0, 0, 0, 0, 0, 0, 0, 728,
    0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 732, 733, 0, 0, 734, 735, 0, 736, 0, 737,
    0, 738, 0, 0, 0, 739, 740, 0, 741, 0, 0, 0, 742, 0, 0, 743, 0, 744, 0, 745, 746, 0, 747, 0, 0, 0, 748, 0, 0, 749, 0, 750,
    0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 754, 0, 0,
    0, 755, 0, 0, 0, 0, 756, 0, 757, 0, 758, 0, 0, 0, 759, 0, 760, 0, 761, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 763,
    0, 764, 0, 765, 0, 766, 0, 767, 0, 0, 768, 0, 769, 0, 770, 0, 0, 0, 771, 0, 772, 0, 773, 0, 0, 0, 0, 774, 0, 775, 776, 0,
    0, 777, 0, 778, 0, 779, 0, 0, 0, 780, 0, 781, 0, 0, 782, 0, 783, 0, 0, 0, 0, 0, 0, 784, 785, 0, 786, 0, 787, 0, 788, 0,
    0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 0, 791, 0, 0, 0, 0, 0,
    792, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 794, 0, 0, 0, 795, 0, 796, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0,
    0, 798, 0, 799, 0, 0, 0, 0, 800, 0, 801, 0, 802, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 806, 0, 0, 807, 0, 808, 0, 809, 0, 0, 0, 0, 810, 0, 0, 811, 812, 813, 0, 0, 814,
    0, 815, 0, 816, 0, 0, 0, 817, 0, 0, 0, 818, 0, 0, 819, 0, 0, 0, 820, 0, 821, 0, 0, 822, 0, 823, 0, 824, 0, 825, 0, 0,
    0, 0, 0, 826, 0, 0, 827, 0, 0, 828, 0, 829, 0, 830, 0, 0, 0, 831, 832, 0, 0, 0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 835, 0, 0, 0, 0, 836, 0, 0, 0, 0, 0, 837, 0, 838, 0, 839, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 0, 0, 841, 0, 842, 0, 0, 0, 843, 0, 0, 0, 844, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 845, 0, 846, 0, 847, 0, 848, 0, 849, 0, 850, 0, 851, 0, 0, 0, 0, 0, 852, 0, 853, 0,
    0, 0, 0, 854, 855, 0, 856, 0, 0, 857, 0, 858, 859, 0, 860, 0, 861, 0, 862, 0, 863, 0, 0, 0, 0, 864, 865, 0, 866, 0, 867, 0,
    868, 0, 0, 0, 0, 0, 869, 0, 0, 0, 0, 0, 0, 870, 0, 0, 871, 0, 0, 0, 0, 0, 872, 0, 0, 0, 0, 0, 0, 0, 0, 873,
    0, 0, 0, 0, 874, 0, 0, 0, 875, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0, 0, 0, 0, 878, 0, 879, 0, 0, 0, 0,
    880, 0, 881, 0, 882, 0, 883, 0, 0, 0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 885, 0, 0, 886, 0, 0, 887, 0, 888, 0, 889, 0, 0,
    0, 0, 890, 0, 0, 891, 892, 893, 0, 0, 894, 0, 895, 0, 896, 0, 0, 0, 897, 0, 0, 0, 898, 0, 0, 899, 0, 0, 0, 900, 0, 901,
    0, 0, 902, 0, 903, 0, 904, 0, 905, 0, 0, 0, 0, 0, 906, 0, 0, 907, 0, 0, 908, 0, 909, 0, 910, 0, 0, 0, 911, 0, 912, 0,
    913, 0, 0, 0, 0, 914, 0, 915, 0, 916, 0, 0, 0, 917, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 918, 0, 919,
    0, 920, 0, 0, 0, 0, 0, 0, 0, 921, 0, 0, 922, 0, 0, 0, 0, 0, 0, 0, 0, 923, 0, 924, 0, 0, 0, 0, 0, 0, 0, 0,
    925, 926, 0, 0, 927, 928, 0, 929, 0, 930, 0, 931, 0, 0, 932, 0, 933, 0, 0, 0, 934, 0, 0, 935, 0, 936, 0, 937, 938, 0, 939, 0,
    0, 0, 940, 0, 0, 941, 0, 942, 0, 943, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 944, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    945, 0, 0, 0, 0, 946, 0, 0, 0, 947, 0, 0, 0, 0, 948, 0, 949, 0, 950, 0, 0, 0, 951, 0, 952, 0, 953, 0, 0, 0, 0, 0,
    0, 0, 954, 0, 955, 0, 0, 0, 0, 0, 956, 0, 957, 0, 958, 0, 959, 0, 0, 960, 0, 961, 0, 962, 0, 0, 0, 963, 0, 964, 0, 965,
    0, 0, 0, 0, 966, 0, 967, 968, 0, 0, 969, 0, 970, 0, 971, 0, 0, 0, 972, 0, 973, 0, 0, 974, 0, 975, 0, 0, 0, 0, 0, 0,
    976, 977, 0, 978, 0, 979, 0, 980, 0, 0, 0, 0, 0, 981, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 982, 0, 0,
    983, 0, 0, 0, 0, 0, 984, 0, 0, 0, 0, 0, 0, 0, 0, 985, 0, 0, 0, 0, 986, 0, 0, 0, 987, 0, 988, 0, 0, 0, 0, 0,
    0, 0, 989, 0, 0, 0, 0, 990, 0, 991, 0, 0, 0, 0, 992, 0, 993, 0, 994, 0, 0, 995, 0, 0, 0, 0, 0, 0, 0, 996, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 997, 0, 0, 998, 0, 0, 999, 0, 1000, 0, 1001, 0, 0, 0, 0, 1002, 0, 0, 1003, 1004, 1005,
    0, 0, 1006, 0, 1007, 0, 1008, 0, 0, 0, 1009, 0, 0, 0, 1010, 0, 0, 1011, 0, 0, 0, 1012, 0, 1013, 0, 0, 1014, 0, 1015, 0, 1016, 0,
    1017, 0, 0, 0, 0, 0, 1018, 0, 0, 1019, 0, 0, 1020, 0, 1021, 0, 1022, 0, 0, 0, 1023, 1024, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1025,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1026, 0, 0, 0, 0, 1027, 0, 0, 0, 1028, 0, 0, 0, 0, 1029, 0, 1030, 0, 1031, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1032, 0, 0, 0, 0, 0, 0, 0, 1033, 0, 0, 0, 1034, 0, 1035, 0, 1036,
    0, 1037, 0, 1038, 0, 1039, 0, 1040, 0, 0, 0, 0, 0, 1041, 0, 1042, 0, 0, 0, 0, 1043, 1044, 0, 0, 1045, 0, 1046, 0, 1047, 1048, 0, 0,
    1049, 0, 1050, 0, 1051, 0, 1052, 0, 0, 0, 0, 1053, 1054, 0, 1055, 0, 1056, 0, 1057, 0, 0, 0, 0, 0, 1058, 0, 0, 0, 0, 0, 0, 1059,
    0, 0, 1060, 0, 0, 0, 0, 0, 1061, 0, 0, 0, 0, 0, 0, 0, 0, 1062, 0, 0, 0, 0, 1063, 0, 0, 0, 1064, 0, 1065, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1066, 0, 0, 0, 0, 1067, 0, 1068, 0, 0, 0, 0, 1069, 0, 1070, 0, 1071, 0, 0, 1072, 0, 0, 0, 0, 0, 0,
    0, 1073, 0, 0, 0, 0, 1074, 0, 0, 1075, 0, 0, 1076, 0, 1077, 0, 1078, 0, 0, 0, 0, 1079, 0, 0, 1080, 1081, 1082, 0, 0, 1083, 0, 1084,
    0, 1085, 0, 0, 0, 1086, 0, 0, 0, 1087, 0, 0, 1088, 0, 0, 0, 1089, 0, 1090, 0, 0, 1091, 0, 1092, 0, 1093, 0, 1094, 0, 0, 0, 0,
    0, 1095, 0, 0, 1096, 0, 0, 1097, 0, 1098, 0, 1099, 0, 0, 0, 1100, 1101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1102, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 1103, 0, 0, 0, 0, 1104, 0, 0, 0, 0, 0, 1105, 0, 1106, 0, 1107, 0, 1108, 0, 1109, 0, 1110, 0, 0, 1111,
};
void recomp_unit_0059_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088F0004u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0059[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088F0004;
    case 2u: goto L_088F0008;
    case 3u: goto L_088F0010;
    case 4u: goto L_088F0018;
    case 5u: goto L_088F0020;
    case 6u: goto L_088F0040;
    case 7u: goto L_088F004C;
    case 8u: goto L_088F0054;
    case 9u: goto L_088F0058;
    case 10u: goto L_088F0080;
    case 11u: goto L_088F0090;
    case 12u: goto L_088F00B8;
    case 13u: goto L_088F00C0;
    case 14u: goto L_088F00C8;
    case 15u: goto L_088F00CC;
    case 16u: goto L_088F00D4;
    case 17u: goto L_088F00E4;
    case 18u: goto L_088F00F8;
    case 19u: goto L_088F00FC;
    case 20u: goto L_088F0104;
    case 21u: goto L_088F0118;
    case 22u: goto L_088F0124;
    case 23u: goto L_088F0134;
    case 24u: goto L_088F013C;
    case 25u: goto L_088F0148;
    case 26u: goto L_088F0150;
    case 27u: goto L_088F0164;
    case 28u: goto L_088F0168;
    case 29u: goto L_088F0170;
    case 30u: goto L_088F017C;
    case 31u: goto L_088F0180;
    case 32u: goto L_088F0184;
    case 33u: goto L_088F0190;
    case 34u: goto L_088F0198;
    case 35u: goto L_088F01A0;
    case 36u: goto L_088F01B4;
    case 37u: goto L_088F01C0;
    case 38u: goto L_088F01C8;
    case 39u: goto L_088F01D0;
    case 40u: goto L_088F01D4;
    case 41u: goto L_088F01DC;
    case 42u: goto L_088F01EC;
    case 43u: goto L_088F01FC;
    case 44u: goto L_088F0204;
    case 45u: goto L_088F0210;
    case 46u: goto L_088F0220;
    case 47u: goto L_088F0228;
    case 48u: goto L_088F0234;
    case 49u: goto L_088F023C;
    case 50u: goto L_088F024C;
    case 51u: goto L_088F0254;
    case 52u: goto L_088F0258;
    case 53u: goto L_088F0280;
    case 54u: goto L_088F02D8;
    case 55u: goto L_088F0304;
    case 56u: goto L_088F0314;
    case 57u: goto L_088F0320;
    case 58u: goto L_088F0330;
    case 59u: goto L_088F0348;
    case 60u: goto L_088F0358;
    case 61u: goto L_088F0370;
    case 62u: goto L_088F0378;
    case 63u: goto L_088F0384;
    case 64u: goto L_088F039C;
    case 65u: goto L_088F03A4;
    case 66u: goto L_088F03B0;
    case 67u: goto L_088F03C8;
    case 68u: goto L_088F03D0;
    case 69u: goto L_088F03DC;
    case 70u: goto L_088F03F4;
    case 71u: goto L_088F03FC;
    case 72u: goto L_088F0408;
    case 73u: goto L_088F0420;
    case 74u: goto L_088F0428;
    case 75u: goto L_088F0434;
    case 76u: goto L_088F043C;
    case 77u: goto L_088F0444;
    case 78u: goto L_088F0464;
    case 79u: goto L_088F047C;
    case 80u: goto L_088F04AC;
    case 81u: goto L_088F04EC;
    case 82u: goto L_088F04F4;
    case 83u: goto L_088F0508;
    case 84u: goto L_088F0520;
    case 85u: goto L_088F0528;
    case 86u: goto L_088F0530;
    case 87u: goto L_088F056C;
    case 88u: goto L_088F058C;
    case 89u: goto L_088F0594;
    case 90u: goto L_088F05A4;
    case 91u: goto L_088F05B4;
    case 92u: goto L_088F05E0;
    case 93u: goto L_088F05E8;
    case 94u: goto L_088F05F0;
    case 95u: goto L_088F05F8;
    case 96u: goto L_088F0600;
    case 97u: goto L_088F0608;
    case 98u: goto L_088F0610;
    case 99u: goto L_088F0614;
    case 100u: goto L_088F0628;
    case 101u: goto L_088F0640;
    case 102u: goto L_088F0648;
    case 103u: goto L_088F065C;
    case 104u: goto L_088F0660;
    case 105u: goto L_088F0668;
    case 106u: goto L_088F0670;
    case 107u: goto L_088F0678;
    case 108u: goto L_088F0690;
    case 109u: goto L_088F0698;
    case 110u: goto L_088F06A4;
    case 111u: goto L_088F06AC;
    case 112u: goto L_088F06B0;
    case 113u: goto L_088F06B8;
    case 114u: goto L_088F06C0;
    case 115u: goto L_088F06C8;
    case 116u: goto L_088F06DC;
    case 117u: goto L_088F06E4;
    case 118u: goto L_088F06E8;
    case 119u: goto L_088F06F0;
    case 120u: goto L_088F06F8;
    case 121u: goto L_088F0700;
    case 122u: goto L_088F0718;
    case 123u: goto L_088F0734;
    case 124u: goto L_088F0740;
    case 125u: goto L_088F0758;
    case 126u: goto L_088F077C;
    case 127u: goto L_088F0790;
    case 128u: goto L_088F07A0;
    case 129u: goto L_088F07A8;
    case 130u: goto L_088F07D0;
    case 131u: goto L_088F07E4;
    case 132u: goto L_088F07EC;
    case 133u: goto L_088F0800;
    case 134u: goto L_088F0808;
    case 135u: goto L_088F0810;
    case 136u: goto L_088F0818;
    case 137u: goto L_088F0838;
    case 138u: goto L_088F084C;
    case 139u: goto L_088F0858;
    case 140u: goto L_088F0864;
    case 141u: goto L_088F086C;
    case 142u: goto L_088F0874;
    case 143u: goto L_088F0888;
    case 144u: goto L_088F0894;
    case 145u: goto L_088F0898;
    case 146u: goto L_088F089C;
    case 147u: goto L_088F08A8;
    case 148u: goto L_088F08B0;
    case 149u: goto L_088F08B8;
    case 150u: goto L_088F08C8;
    case 151u: goto L_088F08D8;
    case 152u: goto L_088F08E4;
    case 153u: goto L_088F08F4;
    case 154u: goto L_088F08FC;
    case 155u: goto L_088F0908;
    case 156u: goto L_088F0910;
    case 157u: goto L_088F0918;
    case 158u: goto L_088F0920;
    case 159u: goto L_088F0938;
    case 160u: goto L_088F0944;
    case 161u: goto L_088F0950;
    case 162u: goto L_088F0958;
    case 163u: goto L_088F0960;
    case 164u: goto L_088F0970;
    case 165u: goto L_088F0978;
    case 166u: goto L_088F0980;
    case 167u: goto L_088F0994;
    case 168u: goto L_088F099C;
    case 169u: goto L_088F09A4;
    case 170u: goto L_088F09B4;
    case 171u: goto L_088F09F4;
    case 172u: goto L_088F09FC;
    case 173u: goto L_088F0A04;
    case 174u: goto L_088F0A28;
    case 175u: goto L_088F0A30;
    case 176u: goto L_088F0A54;
    case 177u: goto L_088F0A5C;
    case 178u: goto L_088F0A80;
    case 179u: goto L_088F0A84;
    case 180u: goto L_088F0A90;
    case 181u: goto L_088F0A94;
    case 182u: goto L_088F0A9C;
    case 183u: goto L_088F0AA4;
    case 184u: goto L_088F0AAC;
    case 185u: goto L_088F0AB8;
    case 186u: goto L_088F0AC0;
    case 187u: goto L_088F0AD0;
    case 188u: goto L_088F0ADC;
    case 189u: goto L_088F0AE4;
    case 190u: goto L_088F0AEC;
    case 191u: goto L_088F0AF0;
    case 192u: goto L_088F0AF8;
    case 193u: goto L_088F0B08;
    case 194u: goto L_088F0B14;
    case 195u: goto L_088F0B1C;
    case 196u: goto L_088F0B24;
    case 197u: goto L_088F0B54;
    case 198u: goto L_088F0B90;
    case 199u: goto L_088F0B98;
    case 200u: goto L_088F0BA8;
    case 201u: goto L_088F0BBC;
    case 202u: goto L_088F0BC4;
    case 203u: goto L_088F0BCC;
    case 204u: goto L_088F0BDC;
    case 205u: goto L_088F0BE4;
    case 206u: goto L_088F0BEC;
    case 207u: goto L_088F0C0C;
    case 208u: goto L_088F0C14;
    case 209u: goto L_088F0C2C;
    case 210u: goto L_088F0C34;
    case 211u: goto L_088F0C40;
    case 212u: goto L_088F0C48;
    case 213u: goto L_088F0C50;
    case 214u: goto L_088F0C5C;
    case 215u: goto L_088F0C64;
    case 216u: goto L_088F0C6C;
    case 217u: goto L_088F0C74;
    case 218u: goto L_088F0C9C;
    case 219u: goto L_088F0CA4;
    case 220u: goto L_088F0CAC;
    case 221u: goto L_088F0CB4;
    case 222u: goto L_088F0CBC;
    case 223u: goto L_088F0CDC;
    case 224u: goto L_088F0CE4;
    case 225u: goto L_088F0D00;
    case 226u: goto L_088F0D08;
    case 227u: goto L_088F0D10;
    case 228u: goto L_088F0D18;
    case 229u: goto L_088F0D1C;
    case 230u: goto L_088F0D28;
    case 231u: goto L_088F0D30;
    case 232u: goto L_088F0D38;
    case 233u: goto L_088F0D48;
    case 234u: goto L_088F0D50;
    case 235u: goto L_088F0D5C;
    case 236u: goto L_088F0D64;
    case 237u: goto L_088F0D80;
    case 238u: goto L_088F0D84;
    case 239u: goto L_088F0D8C;
    case 240u: goto L_088F0D94;
    case 241u: goto L_088F0D9C;
    case 242u: goto L_088F0DB4;
    case 243u: goto L_088F0DF4;
    case 244u: goto L_088F0E00;
    case 245u: goto L_088F0E18;
    case 246u: goto L_088F0E3C;
    case 247u: goto L_088F0E50;
    case 248u: goto L_088F0E60;
    case 249u: goto L_088F0E68;
    case 250u: goto L_088F0E88;
    case 251u: goto L_088F0E9C;
    case 252u: goto L_088F0EA4;
    case 253u: goto L_088F0EB8;
    case 254u: goto L_088F0EC0;
    case 255u: goto L_088F0EC8;
    case 256u: goto L_088F0ED4;
    case 257u: goto L_088F0EF4;
    case 258u: goto L_088F0F2C;
    case 259u: goto L_088F0F38;
    case 260u: goto L_088F0F44;
    case 261u: goto L_088F0F4C;
    case 262u: goto L_088F0F54;
    case 263u: goto L_088F0F68;
    case 264u: goto L_088F0F74;
    case 265u: goto L_088F0F78;
    case 266u: goto L_088F0F7C;
    case 267u: goto L_088F0F88;
    case 268u: goto L_088F0F90;
    case 269u: goto L_088F0F98;
    case 270u: goto L_088F0FA8;
    case 271u: goto L_088F0FB8;
    case 272u: goto L_088F0FC4;
    case 273u: goto L_088F0FD4;
    case 274u: goto L_088F0FDC;
    case 275u: goto L_088F0FE8;
    case 276u: goto L_088F0FF0;
    case 277u: goto L_088F0FF8;
    case 278u: goto L_088F1000;
    case 279u: goto L_088F1018;
    case 280u: goto L_088F1024;
    case 281u: goto L_088F1030;
    case 282u: goto L_088F1038;
    case 283u: goto L_088F1040;
    case 284u: goto L_088F1050;
    case 285u: goto L_088F1054;
    case 286u: goto L_088F1080;
    case 287u: goto L_088F10B8;
    case 288u: goto L_088F10C0;
    case 289u: goto L_088F10D8;
    case 290u: goto L_088F10E0;
    case 291u: goto L_088F10E8;
    case 292u: goto L_088F10F0;
    case 293u: goto L_088F10F8;
    case 294u: goto L_088F1100;
    case 295u: goto L_088F110C;
    case 296u: goto L_088F1114;
    case 297u: goto L_088F111C;
    case 298u: goto L_088F1124;
    case 299u: goto L_088F114C;
    case 300u: goto L_088F1154;
    case 301u: goto L_088F115C;
    case 302u: goto L_088F1160;
    case 303u: goto L_088F116C;
    case 304u: goto L_088F1174;
    case 305u: goto L_088F117C;
    case 306u: goto L_088F11B0;
    case 307u: goto L_088F11B8;
    case 308u: goto L_088F11C4;
    case 309u: goto L_088F11CC;
    case 310u: goto L_088F11D4;
    case 311u: goto L_088F11DC;
    case 312u: goto L_088F11E0;
    case 313u: goto L_088F11F8;
    case 314u: goto L_088F11FC;
    case 315u: goto L_088F1204;
    case 316u: goto L_088F120C;
    case 317u: goto L_088F1214;
    case 318u: goto L_088F122C;
    case 319u: goto L_088F1248;
    case 320u: goto L_088F1254;
    case 321u: goto L_088F126C;
    case 322u: goto L_088F1290;
    case 323u: goto L_088F12A4;
    case 324u: goto L_088F12B4;
    case 325u: goto L_088F12BC;
    case 326u: goto L_088F12E4;
    case 327u: goto L_088F12F8;
    case 328u: goto L_088F1300;
    case 329u: goto L_088F1314;
    case 330u: goto L_088F131C;
    case 331u: goto L_088F1324;
    case 332u: goto L_088F1330;
    case 333u: goto L_088F1350;
    case 334u: goto L_088F1364;
    case 335u: goto L_088F1370;
    case 336u: goto L_088F137C;
    case 337u: goto L_088F1384;
    case 338u: goto L_088F138C;
    case 339u: goto L_088F13A0;
    case 340u: goto L_088F13AC;
    case 341u: goto L_088F13B0;
    case 342u: goto L_088F13B4;
    case 343u: goto L_088F13C0;
    case 344u: goto L_088F13C8;
    case 345u: goto L_088F13D0;
    case 346u: goto L_088F13E0;
    case 347u: goto L_088F13F0;
    case 348u: goto L_088F13FC;
    case 349u: goto L_088F140C;
    case 350u: goto L_088F1414;
    case 351u: goto L_088F1420;
    case 352u: goto L_088F1428;
    case 353u: goto L_088F1430;
    case 354u: goto L_088F1438;
    case 355u: goto L_088F1450;
    case 356u: goto L_088F145C;
    case 357u: goto L_088F1468;
    case 358u: goto L_088F1470;
    case 359u: goto L_088F1478;
    case 360u: goto L_088F1488;
    case 361u: goto L_088F148C;
    case 362u: goto L_088F14B4;
    case 363u: goto L_088F14E8;
    case 364u: goto L_088F14FC;
    case 365u: goto L_088F1510;
    case 366u: goto L_088F1528;
    case 367u: goto L_088F1530;
    case 368u: goto L_088F1538;
    case 369u: goto L_088F1574;
    case 370u: goto L_088F1594;
    case 371u: goto L_088F159C;
    case 372u: goto L_088F15AC;
    case 373u: goto L_088F15BC;
    case 374u: goto L_088F15E8;
    case 375u: goto L_088F15FC;
    case 376u: goto L_088F1604;
    case 377u: goto L_088F160C;
    case 378u: goto L_088F1614;
    case 379u: goto L_088F161C;
    case 380u: goto L_088F1624;
    case 381u: goto L_088F162C;
    case 382u: goto L_088F1644;
    case 383u: goto L_088F164C;
    case 384u: goto L_088F1664;
    case 385u: goto L_088F166C;
    case 386u: goto L_088F1680;
    case 387u: goto L_088F1684;
    case 388u: goto L_088F168C;
    case 389u: goto L_088F1698;
    case 390u: goto L_088F16A0;
    case 391u: goto L_088F16A4;
    case 392u: goto L_088F16AC;
    case 393u: goto L_088F16B4;
    case 394u: goto L_088F16BC;
    case 395u: goto L_088F16C4;
    case 396u: goto L_088F16D8;
    case 397u: goto L_088F16DC;
    case 398u: goto L_088F16E4;
    case 399u: goto L_088F16EC;
    case 400u: goto L_088F16F4;
    case 401u: goto L_088F170C;
    case 402u: goto L_088F1728;
    case 403u: goto L_088F1734;
    case 404u: goto L_088F174C;
    case 405u: goto L_088F1770;
    case 406u: goto L_088F1784;
    case 407u: goto L_088F1794;
    case 408u: goto L_088F179C;
    case 409u: goto L_088F17C4;
    case 410u: goto L_088F17D8;
    case 411u: goto L_088F17E0;
    case 412u: goto L_088F17F4;
    case 413u: goto L_088F17FC;
    case 414u: goto L_088F1804;
    case 415u: goto L_088F180C;
    case 416u: goto L_088F182C;
    case 417u: goto L_088F1840;
    case 418u: goto L_088F184C;
    case 419u: goto L_088F1858;
    case 420u: goto L_088F1860;
    case 421u: goto L_088F1868;
    case 422u: goto L_088F187C;
    case 423u: goto L_088F1888;
    case 424u: goto L_088F188C;
    case 425u: goto L_088F1890;
    case 426u: goto L_088F189C;
    case 427u: goto L_088F18A4;
    case 428u: goto L_088F18AC;
    case 429u: goto L_088F18BC;
    case 430u: goto L_088F18CC;
    case 431u: goto L_088F18D8;
    case 432u: goto L_088F18E8;
    case 433u: goto L_088F18F0;
    case 434u: goto L_088F18FC;
    case 435u: goto L_088F1904;
    case 436u: goto L_088F190C;
    case 437u: goto L_088F1914;
    case 438u: goto L_088F192C;
    case 439u: goto L_088F1938;
    case 440u: goto L_088F1944;
    case 441u: goto L_088F194C;
    case 442u: goto L_088F1954;
    case 443u: goto L_088F1964;
    case 444u: goto L_088F196C;
    case 445u: goto L_088F1974;
    case 446u: goto L_088F1988;
    case 447u: goto L_088F1990;
    case 448u: goto L_088F1998;
    case 449u: goto L_088F19A8;
    case 450u: goto L_088F19EC;
    case 451u: goto L_088F19F4;
    case 452u: goto L_088F19FC;
    case 453u: goto L_088F1A20;
    case 454u: goto L_088F1A28;
    case 455u: goto L_088F1A4C;
    case 456u: goto L_088F1A54;
    case 457u: goto L_088F1A78;
    case 458u: goto L_088F1A7C;
    case 459u: goto L_088F1A88;
    case 460u: goto L_088F1A8C;
    case 461u: goto L_088F1A94;
    case 462u: goto L_088F1A9C;
    case 463u: goto L_088F1AA4;
    case 464u: goto L_088F1AB4;
    case 465u: goto L_088F1AB8;
    case 466u: goto L_088F1AC0;
    case 467u: goto L_088F1AD0;
    case 468u: goto L_088F1ADC;
    case 469u: goto L_088F1AE4;
    case 470u: goto L_088F1AEC;
    case 471u: goto L_088F1AF0;
    case 472u: goto L_088F1AF8;
    case 473u: goto L_088F1B08;
    case 474u: goto L_088F1B14;
    case 475u: goto L_088F1B1C;
    case 476u: goto L_088F1B24;
    case 477u: goto L_088F1B54;
    case 478u: goto L_088F1B88;
    case 479u: goto L_088F1B9C;
    case 480u: goto L_088F1BB8;
    case 481u: goto L_088F1BC0;
    case 482u: goto L_088F1BC8;
    case 483u: goto L_088F1BD8;
    case 484u: goto L_088F1BE0;
    case 485u: goto L_088F1BE8;
    case 486u: goto L_088F1C08;
    case 487u: goto L_088F1C10;
    case 488u: goto L_088F1C28;
    case 489u: goto L_088F1C30;
    case 490u: goto L_088F1C3C;
    case 491u: goto L_088F1C44;
    case 492u: goto L_088F1C4C;
    case 493u: goto L_088F1C58;
    case 494u: goto L_088F1C60;
    case 495u: goto L_088F1C68;
    case 496u: goto L_088F1C70;
    case 497u: goto L_088F1C98;
    case 498u: goto L_088F1CA0;
    case 499u: goto L_088F1CA8;
    case 500u: goto L_088F1CB0;
    case 501u: goto L_088F1CB8;
    case 502u: goto L_088F1CD8;
    case 503u: goto L_088F1CE0;
    case 504u: goto L_088F1CFC;
    case 505u: goto L_088F1D04;
    case 506u: goto L_088F1D0C;
    case 507u: goto L_088F1D14;
    case 508u: goto L_088F1D18;
    case 509u: goto L_088F1D24;
    case 510u: goto L_088F1D2C;
    case 511u: goto L_088F1D34;
    case 512u: goto L_088F1D44;
    case 513u: goto L_088F1D4C;
    case 514u: goto L_088F1D58;
    case 515u: goto L_088F1D60;
    case 516u: goto L_088F1D7C;
    case 517u: goto L_088F1D80;
    case 518u: goto L_088F1D88;
    case 519u: goto L_088F1D90;
    case 520u: goto L_088F1D98;
    case 521u: goto L_088F1DB0;
    case 522u: goto L_088F1DF0;
    case 523u: goto L_088F1DFC;
    case 524u: goto L_088F1E14;
    case 525u: goto L_088F1E38;
    case 526u: goto L_088F1E4C;
    case 527u: goto L_088F1E5C;
    case 528u: goto L_088F1E64;
    case 529u: goto L_088F1E84;
    case 530u: goto L_088F1E98;
    case 531u: goto L_088F1EA0;
    case 532u: goto L_088F1EB4;
    case 533u: goto L_088F1EBC;
    case 534u: goto L_088F1EC4;
    case 535u: goto L_088F1ED0;
    case 536u: goto L_088F1EF0;
    case 537u: goto L_088F1F28;
    case 538u: goto L_088F1F34;
    case 539u: goto L_088F1F40;
    case 540u: goto L_088F1F48;
    case 541u: goto L_088F1F50;
    case 542u: goto L_088F1F64;
    case 543u: goto L_088F1F70;
    case 544u: goto L_088F1F74;
    case 545u: goto L_088F1F78;
    case 546u: goto L_088F1F80;
    case 547u: goto L_088F1F88;
    case 548u: goto L_088F1F90;
    case 549u: goto L_088F1FA0;
    case 550u: goto L_088F1FB0;
    case 551u: goto L_088F1FBC;
    case 552u: goto L_088F1FCC;
    case 553u: goto L_088F1FD4;
    case 554u: goto L_088F1FE0;
    case 555u: goto L_088F1FE8;
    case 556u: goto L_088F1FF0;
    case 557u: goto L_088F1FF8;
    case 558u: goto L_088F2010;
    case 559u: goto L_088F201C;
    case 560u: goto L_088F2028;
    case 561u: goto L_088F2030;
    case 562u: goto L_088F2038;
    case 563u: goto L_088F2048;
    case 564u: goto L_088F204C;
    case 565u: goto L_088F207C;
    case 566u: goto L_088F20AC;
    case 567u: goto L_088F20C0;
    case 568u: goto L_088F20DC;
    case 569u: goto L_088F20E4;
    case 570u: goto L_088F20EC;
    case 571u: goto L_088F20F4;
    case 572u: goto L_088F20FC;
    case 573u: goto L_088F2104;
    case 574u: goto L_088F2110;
    case 575u: goto L_088F2118;
    case 576u: goto L_088F2120;
    case 577u: goto L_088F2128;
    case 578u: goto L_088F2150;
    case 579u: goto L_088F2158;
    case 580u: goto L_088F2160;
    case 581u: goto L_088F2164;
    case 582u: goto L_088F2170;
    case 583u: goto L_088F2178;
    case 584u: goto L_088F2180;
    case 585u: goto L_088F21B8;
    case 586u: goto L_088F21C0;
    case 587u: goto L_088F21C8;
    case 588u: goto L_088F21D0;
    case 589u: goto L_088F21DC;
    case 590u: goto L_088F21E4;
    case 591u: goto L_088F21E8;
    case 592u: goto L_088F2200;
    case 593u: goto L_088F2204;
    case 594u: goto L_088F220C;
    case 595u: goto L_088F2214;
    case 596u: goto L_088F221C;
    case 597u: goto L_088F2234;
    case 598u: goto L_088F2250;
    case 599u: goto L_088F225C;
    case 600u: goto L_088F2274;
    case 601u: goto L_088F2298;
    case 602u: goto L_088F22AC;
    case 603u: goto L_088F22BC;
    case 604u: goto L_088F22C4;
    case 605u: goto L_088F22EC;
    case 606u: goto L_088F2300;
    case 607u: goto L_088F2308;
    case 608u: goto L_088F231C;
    case 609u: goto L_088F2324;
    case 610u: goto L_088F232C;
    case 611u: goto L_088F2338;
    case 612u: goto L_088F2358;
    case 613u: goto L_088F236C;
    case 614u: goto L_088F2378;
    case 615u: goto L_088F2384;
    case 616u: goto L_088F238C;
    case 617u: goto L_088F2394;
    case 618u: goto L_088F23A8;
    case 619u: goto L_088F23B4;
    case 620u: goto L_088F23B8;
    case 621u: goto L_088F23BC;
    case 622u: goto L_088F23C4;
    case 623u: goto L_088F23CC;
    case 624u: goto L_088F23D4;
    case 625u: goto L_088F23E4;
    case 626u: goto L_088F23F4;
    case 627u: goto L_088F2400;
    case 628u: goto L_088F2410;
    case 629u: goto L_088F2418;
    case 630u: goto L_088F2424;
    case 631u: goto L_088F242C;
    case 632u: goto L_088F2434;
    case 633u: goto L_088F243C;
    case 634u: goto L_088F2454;
    case 635u: goto L_088F2460;
    case 636u: goto L_088F246C;
    case 637u: goto L_088F2474;
    case 638u: goto L_088F247C;
    case 639u: goto L_088F248C;
    case 640u: goto L_088F2490;
    case 641u: goto L_088F24BC;
    case 642u: goto L_088F24F0;
    case 643u: goto L_088F2504;
    case 644u: goto L_088F2528;
    case 645u: goto L_088F2530;
    case 646u: goto L_088F2538;
    case 647u: goto L_088F2540;
    case 648u: goto L_088F2588;
    case 649u: goto L_088F25A8;
    case 650u: goto L_088F25B0;
    case 651u: goto L_088F25C0;
    case 652u: goto L_088F25D0;
    case 653u: goto L_088F260C;
    case 654u: goto L_088F2614;
    case 655u: goto L_088F261C;
    case 656u: goto L_088F2624;
    case 657u: goto L_088F262C;
    case 658u: goto L_088F2634;
    case 659u: goto L_088F263C;
    case 660u: goto L_088F2654;
    case 661u: goto L_088F265C;
    case 662u: goto L_088F2670;
    case 663u: goto L_088F2674;
    case 664u: goto L_088F267C;
    case 665u: goto L_088F2688;
    case 666u: goto L_088F2690;
    case 667u: goto L_088F2694;
    case 668u: goto L_088F269C;
    case 669u: goto L_088F26A4;
    case 670u: goto L_088F26AC;
    case 671u: goto L_088F26B4;
    case 672u: goto L_088F26C8;
    case 673u: goto L_088F26CC;
    case 674u: goto L_088F26D4;
    case 675u: goto L_088F26DC;
    case 676u: goto L_088F26E4;
    case 677u: goto L_088F26FC;
    case 678u: goto L_088F2718;
    case 679u: goto L_088F2724;
    case 680u: goto L_088F273C;
    case 681u: goto L_088F2760;
    case 682u: goto L_088F2774;
    case 683u: goto L_088F2784;
    case 684u: goto L_088F278C;
    case 685u: goto L_088F27B4;
    case 686u: goto L_088F27C8;
    case 687u: goto L_088F27D0;
    case 688u: goto L_088F27E4;
    case 689u: goto L_088F27EC;
    case 690u: goto L_088F27F4;
    case 691u: goto L_088F27FC;
    case 692u: goto L_088F281C;
    case 693u: goto L_088F2830;
    case 694u: goto L_088F283C;
    case 695u: goto L_088F2848;
    case 696u: goto L_088F2850;
    case 697u: goto L_088F2858;
    case 698u: goto L_088F286C;
    case 699u: goto L_088F2878;
    case 700u: goto L_088F287C;
    case 701u: goto L_088F2880;
    case 702u: goto L_088F288C;
    case 703u: goto L_088F2894;
    case 704u: goto L_088F289C;
    case 705u: goto L_088F28AC;
    case 706u: goto L_088F28BC;
    case 707u: goto L_088F28C8;
    case 708u: goto L_088F28D8;
    case 709u: goto L_088F28E0;
    case 710u: goto L_088F28EC;
    case 711u: goto L_088F28F4;
    case 712u: goto L_088F28FC;
    case 713u: goto L_088F2904;
    case 714u: goto L_088F291C;
    case 715u: goto L_088F2928;
    case 716u: goto L_088F2934;
    case 717u: goto L_088F293C;
    case 718u: goto L_088F2944;
    case 719u: goto L_088F2954;
    case 720u: goto L_088F295C;
    case 721u: goto L_088F2964;
    case 722u: goto L_088F296C;
    case 723u: goto L_088F2974;
    case 724u: goto L_088F2984;
    case 725u: goto L_088F29D0;
    case 726u: goto L_088F29D8;
    case 727u: goto L_088F29E0;
    case 728u: goto L_088F2A00;
    case 729u: goto L_088F2A0C;
    case 730u: goto L_088F2A30;
    case 731u: goto L_088F2A38;
    case 732u: goto L_088F2A5C;
    case 733u: goto L_088F2A60;
    case 734u: goto L_088F2A6C;
    case 735u: goto L_088F2A70;
    case 736u: goto L_088F2A78;
    case 737u: goto L_088F2A80;
    case 738u: goto L_088F2A88;
    case 739u: goto L_088F2A98;
    case 740u: goto L_088F2A9C;
    case 741u: goto L_088F2AA4;
    case 742u: goto L_088F2AB4;
    case 743u: goto L_088F2AC0;
    case 744u: goto L_088F2AC8;
    case 745u: goto L_088F2AD0;
    case 746u: goto L_088F2AD4;
    case 747u: goto L_088F2ADC;
    case 748u: goto L_088F2AEC;
    case 749u: goto L_088F2AF8;
    case 750u: goto L_088F2B00;
    case 751u: goto L_088F2B08;
    case 752u: goto L_088F2B38;
    case 753u: goto L_088F2B64;
    case 754u: goto L_088F2B78;
    case 755u: goto L_088F2B88;
    case 756u: goto L_088F2B9C;
    case 757u: goto L_088F2BA4;
    case 758u: goto L_088F2BAC;
    case 759u: goto L_088F2BBC;
    case 760u: goto L_088F2BC4;
    case 761u: goto L_088F2BCC;
    case 762u: goto L_088F2BE8;
    case 763u: goto L_088F2C00;
    case 764u: goto L_088F2C08;
    case 765u: goto L_088F2C10;
    case 766u: goto L_088F2C18;
    case 767u: goto L_088F2C20;
    case 768u: goto L_088F2C2C;
    case 769u: goto L_088F2C34;
    case 770u: goto L_088F2C3C;
    case 771u: goto L_088F2C4C;
    case 772u: goto L_088F2C54;
    case 773u: goto L_088F2C5C;
    case 774u: goto L_088F2C70;
    case 775u: goto L_088F2C78;
    case 776u: goto L_088F2C7C;
    case 777u: goto L_088F2C88;
    case 778u: goto L_088F2C90;
    case 779u: goto L_088F2C98;
    case 780u: goto L_088F2CA8;
    case 781u: goto L_088F2CB0;
    case 782u: goto L_088F2CBC;
    case 783u: goto L_088F2CC4;
    case 784u: goto L_088F2CE0;
    case 785u: goto L_088F2CE4;
    case 786u: goto L_088F2CEC;
    case 787u: goto L_088F2CF4;
    case 788u: goto L_088F2CFC;
    case 789u: goto L_088F2D14;
    case 790u: goto L_088F2D60;
    case 791u: goto L_088F2D6C;
    case 792u: goto L_088F2D84;
    case 793u: goto L_088F2DA8;
    case 794u: goto L_088F2DBC;
    case 795u: goto L_088F2DCC;
    case 796u: goto L_088F2DD4;
    case 797u: goto L_088F2DF4;
    case 798u: goto L_088F2E08;
    case 799u: goto L_088F2E10;
    case 800u: goto L_088F2E24;
    case 801u: goto L_088F2E2C;
    case 802u: goto L_088F2E34;
    case 803u: goto L_088F2E40;
    case 804u: goto L_088F2E60;
    case 805u: goto L_088F2EA4;
    case 806u: goto L_088F2EB0;
    case 807u: goto L_088F2EBC;
    case 808u: goto L_088F2EC4;
    case 809u: goto L_088F2ECC;
    case 810u: goto L_088F2EE0;
    case 811u: goto L_088F2EEC;
    case 812u: goto L_088F2EF0;
    case 813u: goto L_088F2EF4;
    case 814u: goto L_088F2F00;
    case 815u: goto L_088F2F08;
    case 816u: goto L_088F2F10;
    case 817u: goto L_088F2F20;
    case 818u: goto L_088F2F30;
    case 819u: goto L_088F2F3C;
    case 820u: goto L_088F2F4C;
    case 821u: goto L_088F2F54;
    case 822u: goto L_088F2F60;
    case 823u: goto L_088F2F68;
    case 824u: goto L_088F2F70;
    case 825u: goto L_088F2F78;
    case 826u: goto L_088F2F90;
    case 827u: goto L_088F2F9C;
    case 828u: goto L_088F2FA8;
    case 829u: goto L_088F2FB0;
    case 830u: goto L_088F2FB8;
    case 831u: goto L_088F2FC8;
    case 832u: goto L_088F2FCC;
    case 833u: goto L_088F2FF4;
    case 834u: goto L_088F3028;
    case 835u: goto L_088F303C;
    case 836u: goto L_088F3050;
    case 837u: goto L_088F3068;
    case 838u: goto L_088F3070;
    case 839u: goto L_088F3078;
    case 840u: goto L_088F30B4;
    case 841u: goto L_088F30D4;
    case 842u: goto L_088F30DC;
    case 843u: goto L_088F30EC;
    case 844u: goto L_088F30FC;
    case 845u: goto L_088F312C;
    case 846u: goto L_088F3134;
    case 847u: goto L_088F313C;
    case 848u: goto L_088F3144;
    case 849u: goto L_088F314C;
    case 850u: goto L_088F3154;
    case 851u: goto L_088F315C;
    case 852u: goto L_088F3174;
    case 853u: goto L_088F317C;
    case 854u: goto L_088F3190;
    case 855u: goto L_088F3194;
    case 856u: goto L_088F319C;
    case 857u: goto L_088F31A8;
    case 858u: goto L_088F31B0;
    case 859u: goto L_088F31B4;
    case 860u: goto L_088F31BC;
    case 861u: goto L_088F31C4;
    case 862u: goto L_088F31CC;
    case 863u: goto L_088F31D4;
    case 864u: goto L_088F31E8;
    case 865u: goto L_088F31EC;
    case 866u: goto L_088F31F4;
    case 867u: goto L_088F31FC;
    case 868u: goto L_088F3204;
    case 869u: goto L_088F321C;
    case 870u: goto L_088F3238;
    case 871u: goto L_088F3244;
    case 872u: goto L_088F325C;
    case 873u: goto L_088F3280;
    case 874u: goto L_088F3294;
    case 875u: goto L_088F32A4;
    case 876u: goto L_088F32AC;
    case 877u: goto L_088F32D4;
    case 878u: goto L_088F32E8;
    case 879u: goto L_088F32F0;
    case 880u: goto L_088F3304;
    case 881u: goto L_088F330C;
    case 882u: goto L_088F3314;
    case 883u: goto L_088F331C;
    case 884u: goto L_088F333C;
    case 885u: goto L_088F3350;
    case 886u: goto L_088F335C;
    case 887u: goto L_088F3368;
    case 888u: goto L_088F3370;
    case 889u: goto L_088F3378;
    case 890u: goto L_088F338C;
    case 891u: goto L_088F3398;
    case 892u: goto L_088F339C;
    case 893u: goto L_088F33A0;
    case 894u: goto L_088F33AC;
    case 895u: goto L_088F33B4;
    case 896u: goto L_088F33BC;
    case 897u: goto L_088F33CC;
    case 898u: goto L_088F33DC;
    case 899u: goto L_088F33E8;
    case 900u: goto L_088F33F8;
    case 901u: goto L_088F3400;
    case 902u: goto L_088F340C;
    case 903u: goto L_088F3414;
    case 904u: goto L_088F341C;
    case 905u: goto L_088F3424;
    case 906u: goto L_088F343C;
    case 907u: goto L_088F3448;
    case 908u: goto L_088F3454;
    case 909u: goto L_088F345C;
    case 910u: goto L_088F3464;
    case 911u: goto L_088F3474;
    case 912u: goto L_088F347C;
    case 913u: goto L_088F3484;
    case 914u: goto L_088F3498;
    case 915u: goto L_088F34A0;
    case 916u: goto L_088F34A8;
    case 917u: goto L_088F34B8;
    case 918u: goto L_088F34F8;
    case 919u: goto L_088F3500;
    case 920u: goto L_088F3508;
    case 921u: goto L_088F3528;
    case 922u: goto L_088F3534;
    case 923u: goto L_088F3558;
    case 924u: goto L_088F3560;
    case 925u: goto L_088F3584;
    case 926u: goto L_088F3588;
    case 927u: goto L_088F3594;
    case 928u: goto L_088F3598;
    case 929u: goto L_088F35A0;
    case 930u: goto L_088F35A8;
    case 931u: goto L_088F35B0;
    case 932u: goto L_088F35BC;
    case 933u: goto L_088F35C4;
    case 934u: goto L_088F35D4;
    case 935u: goto L_088F35E0;
    case 936u: goto L_088F35E8;
    case 937u: goto L_088F35F0;
    case 938u: goto L_088F35F4;
    case 939u: goto L_088F35FC;
    case 940u: goto L_088F360C;
    case 941u: goto L_088F3618;
    case 942u: goto L_088F3620;
    case 943u: goto L_088F3628;
    case 944u: goto L_088F3658;
    case 945u: goto L_088F3684;
    case 946u: goto L_088F3698;
    case 947u: goto L_088F36A8;
    case 948u: goto L_088F36BC;
    case 949u: goto L_088F36C4;
    case 950u: goto L_088F36CC;
    case 951u: goto L_088F36DC;
    case 952u: goto L_088F36E4;
    case 953u: goto L_088F36EC;
    case 954u: goto L_088F370C;
    case 955u: goto L_088F3714;
    case 956u: goto L_088F372C;
    case 957u: goto L_088F3734;
    case 958u: goto L_088F373C;
    case 959u: goto L_088F3744;
    case 960u: goto L_088F3750;
    case 961u: goto L_088F3758;
    case 962u: goto L_088F3760;
    case 963u: goto L_088F3770;
    case 964u: goto L_088F3778;
    case 965u: goto L_088F3780;
    case 966u: goto L_088F3794;
    case 967u: goto L_088F379C;
    case 968u: goto L_088F37A0;
    case 969u: goto L_088F37AC;
    case 970u: goto L_088F37B4;
    case 971u: goto L_088F37BC;
    case 972u: goto L_088F37CC;
    case 973u: goto L_088F37D4;
    case 974u: goto L_088F37E0;
    case 975u: goto L_088F37E8;
    case 976u: goto L_088F3804;
    case 977u: goto L_088F3808;
    case 978u: goto L_088F3810;
    case 979u: goto L_088F3818;
    case 980u: goto L_088F3820;
    case 981u: goto L_088F3838;
    case 982u: goto L_088F3878;
    case 983u: goto L_088F3884;
    case 984u: goto L_088F389C;
    case 985u: goto L_088F38C0;
    case 986u: goto L_088F38D4;
    case 987u: goto L_088F38E4;
    case 988u: goto L_088F38EC;
    case 989u: goto L_088F390C;
    case 990u: goto L_088F3920;
    case 991u: goto L_088F3928;
    case 992u: goto L_088F393C;
    case 993u: goto L_088F3944;
    case 994u: goto L_088F394C;
    case 995u: goto L_088F3958;
    case 996u: goto L_088F3978;
    case 997u: goto L_088F39B0;
    case 998u: goto L_088F39BC;
    case 999u: goto L_088F39C8;
    case 1000u: goto L_088F39D0;
    case 1001u: goto L_088F39D8;
    case 1002u: goto L_088F39EC;
    case 1003u: goto L_088F39F8;
    case 1004u: goto L_088F39FC;
    case 1005u: goto L_088F3A00;
    case 1006u: goto L_088F3A0C;
    case 1007u: goto L_088F3A14;
    case 1008u: goto L_088F3A1C;
    case 1009u: goto L_088F3A2C;
    case 1010u: goto L_088F3A3C;
    case 1011u: goto L_088F3A48;
    case 1012u: goto L_088F3A58;
    case 1013u: goto L_088F3A60;
    case 1014u: goto L_088F3A6C;
    case 1015u: goto L_088F3A74;
    case 1016u: goto L_088F3A7C;
    case 1017u: goto L_088F3A84;
    case 1018u: goto L_088F3A9C;
    case 1019u: goto L_088F3AA8;
    case 1020u: goto L_088F3AB4;
    case 1021u: goto L_088F3ABC;
    case 1022u: goto L_088F3AC4;
    case 1023u: goto L_088F3AD4;
    case 1024u: goto L_088F3AD8;
    case 1025u: goto L_088F3B00;
    case 1026u: goto L_088F3B30;
    case 1027u: goto L_088F3B44;
    case 1028u: goto L_088F3B54;
    case 1029u: goto L_088F3B68;
    case 1030u: goto L_088F3B70;
    case 1031u: goto L_088F3B78;
    case 1032u: goto L_088F3BC0;
    case 1033u: goto L_088F3BE0;
    case 1034u: goto L_088F3BF0;
    case 1035u: goto L_088F3BF8;
    case 1036u: goto L_088F3C00;
    case 1037u: goto L_088F3C08;
    case 1038u: goto L_088F3C10;
    case 1039u: goto L_088F3C18;
    case 1040u: goto L_088F3C20;
    case 1041u: goto L_088F3C38;
    case 1042u: goto L_088F3C40;
    case 1043u: goto L_088F3C54;
    case 1044u: goto L_088F3C58;
    case 1045u: goto L_088F3C64;
    case 1046u: goto L_088F3C6C;
    case 1047u: goto L_088F3C74;
    case 1048u: goto L_088F3C78;
    case 1049u: goto L_088F3C84;
    case 1050u: goto L_088F3C8C;
    case 1051u: goto L_088F3C94;
    case 1052u: goto L_088F3C9C;
    case 1053u: goto L_088F3CB0;
    case 1054u: goto L_088F3CB4;
    case 1055u: goto L_088F3CBC;
    case 1056u: goto L_088F3CC4;
    case 1057u: goto L_088F3CCC;
    case 1058u: goto L_088F3CE4;
    case 1059u: goto L_088F3D00;
    case 1060u: goto L_088F3D0C;
    case 1061u: goto L_088F3D24;
    case 1062u: goto L_088F3D48;
    case 1063u: goto L_088F3D5C;
    case 1064u: goto L_088F3D6C;
    case 1065u: goto L_088F3D74;
    case 1066u: goto L_088F3D9C;
    case 1067u: goto L_088F3DB0;
    case 1068u: goto L_088F3DB8;
    case 1069u: goto L_088F3DCC;
    case 1070u: goto L_088F3DD4;
    case 1071u: goto L_088F3DDC;
    case 1072u: goto L_088F3DE8;
    case 1073u: goto L_088F3E08;
    case 1074u: goto L_088F3E1C;
    case 1075u: goto L_088F3E28;
    case 1076u: goto L_088F3E34;
    case 1077u: goto L_088F3E3C;
    case 1078u: goto L_088F3E44;
    case 1079u: goto L_088F3E58;
    case 1080u: goto L_088F3E64;
    case 1081u: goto L_088F3E68;
    case 1082u: goto L_088F3E6C;
    case 1083u: goto L_088F3E78;
    case 1084u: goto L_088F3E80;
    case 1085u: goto L_088F3E88;
    case 1086u: goto L_088F3E98;
    case 1087u: goto L_088F3EA8;
    case 1088u: goto L_088F3EB4;
    case 1089u: goto L_088F3EC4;
    case 1090u: goto L_088F3ECC;
    case 1091u: goto L_088F3ED8;
    case 1092u: goto L_088F3EE0;
    case 1093u: goto L_088F3EE8;
    case 1094u: goto L_088F3EF0;
    case 1095u: goto L_088F3F08;
    case 1096u: goto L_088F3F14;
    case 1097u: goto L_088F3F20;
    case 1098u: goto L_088F3F28;
    case 1099u: goto L_088F3F30;
    case 1100u: goto L_088F3F40;
    case 1101u: goto L_088F3F44;
    case 1102u: goto L_088F3F70;
    case 1103u: goto L_088F3F9C;
    case 1104u: goto L_088F3FB0;
    case 1105u: goto L_088F3FC8;
    case 1106u: goto L_088F3FD0;
    case 1107u: goto L_088F3FD8;
    case 1108u: goto L_088F3FE0;
    case 1109u: goto L_088F3FE8;
    case 1110u: goto L_088F3FF0;
    case 1111u: goto L_088F3FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088F0004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F0008;
L_088F0008:
    if (ctx.gpr[4] != ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F00CC;
    }
    goto L_088F0010;
L_088F0010:
    ctx.gpr[31] = (0x088F0018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F0018u) goto L_088F0018;
    return;
L_088F0018:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F00CC;
    }
    goto L_088F0020;
L_088F0020:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(352)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
      if (branch_taken) {
          goto L_088F0058;
      }
      goto L_088F0040;
    }
L_088F0040:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[31] = (0x088F004Cu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F004Cu) goto L_088F004C;
    return;
L_088F004C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088F00CC;
      }
      goto L_088F0054;
    }
L_088F0054:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    goto L_088F0058;
L_088F0058:
    ctx.gpr[8] = (ctx.gpr[8] >> 30u);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[9] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F00C0;
      }
      goto L_088F0080;
    }
L_088F0080:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088F0090u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F0090u) goto L_088F0090;
    return;
L_088F0090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x088F00B8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F00B8u) goto L_088F00B8;
    return;
L_088F00B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088F00CC;
      }
      goto L_088F00C0;
    }
L_088F00C0:
    ctx.gpr[31] = (0x088F00C8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F00C8u) goto L_088F00C8;
    return;
L_088F00C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F00CC;
L_088F00CC:
    if (ctx.gpr[4] != ctx.gpr[20]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F0184;
    }
    goto L_088F00D4;
L_088F00D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (ctx.gpr[4] & 3u);
      if (branch_taken) {
          goto L_088F00F8;
      }
      goto L_088F00E4;
    }
L_088F00E4:
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088F00FC;
      }
      goto L_088F00F8;
    }
L_088F00F8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    goto L_088F00FC;
L_088F00FC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0134;
      }
      goto L_088F0104;
    }
L_088F0104:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F0134;
      }
      goto L_088F0118;
    }
L_088F0118:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F0124u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0124u) goto L_088F0124;
    return;
L_088F0124:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088F0148;
      }
      goto L_088F0134;
    }
L_088F0134:
    ctx.gpr[31] = (0x088F013Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F013Cu) goto L_088F013C;
    return;
L_088F013C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_088F0148;
L_088F0148:
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
        goto L_088F0164;
    }
    goto L_088F0150;
L_088F0150:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088F0168;
      }
      goto L_088F0164;
    }
L_088F0164:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    goto L_088F0168;
L_088F0168:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F0180;
      }
      goto L_088F0170;
    }
L_088F0170:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F0180;
      }
      goto L_088F017C;
    }
L_088F017C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_088F0180;
L_088F0180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F0184;
L_088F0184:
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F01D4;
    }
    goto L_088F0190;
L_088F0190:
    ctx.gpr[31] = (0x088F0198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F0198u) goto L_088F0198;
    return;
L_088F0198:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F01D4;
    }
    goto L_088F01A0;
L_088F01A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088F01C8;
      }
      goto L_088F01B4;
    }
L_088F01B4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F01C0u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F01C0u) goto L_088F01C0;
    return;
L_088F01C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088F01D4;
      }
      goto L_088F01C8;
    }
L_088F01C8:
    ctx.gpr[31] = (0x088F01D0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F01D0u) goto L_088F01D0;
    return;
L_088F01D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F01D4;
L_088F01D4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088F0258;
      }
      goto L_088F01DC;
    }
L_088F01DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[6] = (ctx.gpr[5] & 3u);
      if (branch_taken) {
          goto L_088F01FC;
      }
      goto L_088F01EC;
    }
L_088F01EC:
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u - ctx.gpr[6]);
      if (branch_taken) {
          goto L_088F01FC;
      }
      goto L_088F01FC;
    }
L_088F01FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F0220;
      }
      goto L_088F0204;
    }
L_088F0204:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[31] = (0x088F0210u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0210u) goto L_088F0210;
    return;
L_088F0210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088F0234;
      }
      goto L_088F0220;
    }
L_088F0220:
    ctx.gpr[31] = (0x088F0228u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0228u) goto L_088F0228;
    return;
L_088F0228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_088F0234;
L_088F0234:
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
        goto L_088F024C;
    }
    goto L_088F023C;
L_088F023C:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_088F024C;
      }
      goto L_088F024C;
    }
L_088F024C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F0258;
      }
      goto L_088F0254;
    }
L_088F0254:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_088F0258;
L_088F0258:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F0280:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[23]);
    ctx.gpr[23] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(356));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(352), 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F02D8u);
    ctx.gpr[6] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088F02D8u) goto L_088F02D8;
    return;
L_088F02D8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1236));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(488)));
    ctx.gpr[18] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(632)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088F047C;
      }
      goto L_088F0304;
    }
L_088F0304:
    ctx.gpr[30] = (0u | 4u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[22] = (0u | 2u);
    ctx.gpr[17] = (0u | 0u);
    goto L_088F0314;
L_088F0314:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088F0320u);
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 741u, 0x088337DCu>(ctx, &aot_mem) && ctx.pc == 0x088F0320u) goto L_088F0320;
    return;
L_088F0320:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F043C;
      }
      goto L_088F0330;
    }
L_088F0330:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(905)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(906)));
        goto L_088F0370;
    }
    goto L_088F0348;
L_088F0348:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(102)));
    ctx.gpr[7] = (0u | 3u);
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(906)));
        goto L_088F0370;
    }
    goto L_088F0358;
L_088F0358:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(450), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(906)));
    goto L_088F0370;
L_088F0370:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(907)));
        goto L_088F039C;
    }
    goto L_088F0378;
L_088F0378:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(102)));
    if (ctx.gpr[6] != ctx.gpr[30]) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(907)));
        goto L_088F039C;
    }
    goto L_088F0384;
L_088F0384:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(450), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(907)));
    goto L_088F039C;
L_088F039C:
    if (ctx.gpr[6] != ctx.gpr[21]) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(907)));
        goto L_088F03C8;
    }
    goto L_088F03A4;
L_088F03A4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(103)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(907)));
        goto L_088F03C8;
    }
    goto L_088F03B0;
L_088F03B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(450), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(907)));
    goto L_088F03C8;
L_088F03C8:
    if (ctx.gpr[6] != ctx.gpr[22]) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(908)));
        goto L_088F03F4;
    }
    goto L_088F03D0;
L_088F03D0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(908)));
        goto L_088F03F4;
    }
    goto L_088F03DC;
L_088F03DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(450), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(908)));
    goto L_088F03F4;
L_088F03F4:
    if (ctx.gpr[6] != ctx.gpr[21]) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(908)));
        goto L_088F0420;
    }
    goto L_088F03FC;
L_088F03FC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(105)));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(908)));
        goto L_088F0420;
    }
    goto L_088F0408;
L_088F0408:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(450), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(908)));
    goto L_088F0420;
L_088F0420:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088F043C;
      }
      goto L_088F0428;
    }
L_088F0428:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(107)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F043C;
      }
      goto L_088F0434;
    }
L_088F0434:
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(450), static_cast<std::uint8_t>(ctx.gpr[19]));
    goto L_088F043C;
L_088F043C:
    if (ctx.gpr[16] != ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
        goto L_088F0464;
    }
    goto L_088F0444;
L_088F0444:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(356), ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(352), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    goto L_088F0464;
L_088F0464:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(632)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(299));
      if (branch_taken) {
          goto L_088F0314;
      }
      goto L_088F047C;
    }
L_088F047C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F04AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F04ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F04ECu) goto L_088F04EC;
    return;
L_088F04EC:
    ctx.gpr[31] = (0x088F04F4u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 538u, 0x088EA6D0u>(ctx, &aot_mem) && ctx.pc == 0x088F04F4u) goto L_088F04F4;
    return;
L_088F04F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(440)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (0u | 2u);
      if (branch_taken) {
          goto L_088F0978;
      }
      goto L_088F0508;
    }
L_088F0508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[21] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[23] = (0u | 64u);
      if (branch_taken) {
          goto L_088F06AC;
      }
      goto L_088F0520;
    }
L_088F0520:
    ctx.gpr[31] = (0x088F0528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F0528u) goto L_088F0528;
    return;
L_088F0528:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088F06B0;
    }
    goto L_088F0530;
L_088F0530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1236));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (0u | 11u);
      if (branch_taken) {
          goto L_088F058C;
      }
      goto L_088F056C;
    }
L_088F056C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[20] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[21]);
      if (branch_taken) {
          goto L_088F06A4;
      }
      goto L_088F058C;
    }
L_088F058C:
    ctx.gpr[31] = (0x088F0594u);
    // nop
    goto L_088F0280;
L_088F0594:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(352)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
        goto L_088F05B4;
    }
    goto L_088F05A4;
L_088F05A4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(440), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[30]);
      if (branch_taken) {
          goto L_088F06A4;
      }
      goto L_088F05B4;
    }
L_088F05B4:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1236));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(60)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(488)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088F0670;
      }
      goto L_088F05E0;
    }
L_088F05E0:
    if (ctx.gpr[4] != ctx.gpr[30]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
        goto L_088F0640;
    }
    goto L_088F05E8;
L_088F05E8:
    ctx.gpr[31] = (0x088F05F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088F05F0u) goto L_088F05F0;
    return;
L_088F05F0:
    if (ctx.gpr[2] != ctx.gpr[30]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
        goto L_088F0614;
    }
    goto L_088F05F8;
L_088F05F8:
    ctx.gpr[31] = (0x088F0600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 672u, 0x088E7B10u>(ctx, &aot_mem) && ctx.pc == 0x088F0600u) goto L_088F0600;
    return;
L_088F0600:
    ctx.gpr[31] = (0x088F0608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088F0608u) goto L_088F0608;
    return;
L_088F0608:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088F0660;
      }
      goto L_088F0610;
    }
L_088F0610:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    goto L_088F0614;
L_088F0614:
    ctx.gpr[4] = (0u | 15u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[31] = (0x088F0628u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F0628u) goto L_088F0628;
    return;
L_088F0628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088F065C;
      }
      goto L_088F0640;
    }
L_088F0640:
    ctx.gpr[31] = (0x088F0648u);
    ctx.gpr[4] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F0648u) goto L_088F0648;
    return;
L_088F0648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088F065C;
L_088F065C:
    ctx.gpr[4] = (0u | 3u);
    goto L_088F0660;
L_088F0660:
    ctx.gpr[31] = (0x088F0668u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F0668u) goto L_088F0668;
    return;
L_088F0668:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088F0690;
      }
      goto L_088F0670;
    }
L_088F0670:
    ctx.gpr[31] = (0x088F0678u);
    ctx.gpr[4] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F0678u) goto L_088F0678;
    return;
L_088F0678:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 3u);
    goto L_088F0690;
L_088F0690:
    ctx.gpr[31] = (0x088F0698u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F0698u) goto L_088F0698;
    return;
L_088F0698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    goto L_088F06A4;
L_088F06A4:
    ctx.gpr[31] = (0x088F06ACu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F06ACu) goto L_088F06AC;
    return;
L_088F06AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088F06B0;
L_088F06B0:
    if (ctx.gpr[4] != ctx.gpr[23]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F06E8;
    }
    goto L_088F06B8;
L_088F06B8:
    ctx.gpr[31] = (0x088F06C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F06C0u) goto L_088F06C0;
    return;
L_088F06C0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F06E8;
    }
    goto L_088F06C8;
L_088F06C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088F06DCu);
    ctx.gpr[4] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F06DCu) goto L_088F06DC;
    return;
L_088F06DC:
    ctx.gpr[31] = (0x088F06E4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F06E4u) goto L_088F06E4;
    return;
L_088F06E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F06E8;
L_088F06E8:
    if (ctx.gpr[4] != ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F0810;
    }
    goto L_088F06F0;
L_088F06F0:
    ctx.gpr[31] = (0x088F06F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F06F8u) goto L_088F06F8;
    return;
L_088F06F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F0718;
      }
      goto L_088F0700;
    }
L_088F0700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F0810;
    }
    goto L_088F0718;
L_088F0718:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[19]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F0758;
      }
      goto L_088F0734;
    }
L_088F0734:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F0740u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0740u) goto L_088F0740;
    return;
L_088F0740:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F0800;
      }
      goto L_088F0758;
    }
L_088F0758:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F07E4;
      }
      goto L_088F077C;
    }
L_088F077C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F07A0;
      }
      goto L_088F0790;
    }
L_088F0790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    goto L_088F07A0;
L_088F07A0:
    ctx.gpr[31] = (0x088F07A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F07A8u) goto L_088F07A8;
    return;
L_088F07A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x088F07D0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F07D0u) goto L_088F07D0;
    return;
L_088F07D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F0800;
      }
      goto L_088F07E4;
    }
L_088F07E4:
    ctx.gpr[31] = (0x088F07ECu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F07ECu) goto L_088F07EC;
    return;
L_088F07EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_088F0800;
L_088F0800:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F0810;
    }
    goto L_088F0808;
L_088F0808:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F0810;
L_088F0810:
    if (ctx.gpr[4] != ctx.gpr[22]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F089C;
    }
    goto L_088F0818;
L_088F0818:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0864;
      }
      goto L_088F0838;
    }
L_088F0838:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F0864;
      }
      goto L_088F084C;
    }
L_088F084C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F0858u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0858u) goto L_088F0858;
    return;
L_088F0858:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088F0874;
      }
      goto L_088F0864;
    }
L_088F0864:
    ctx.gpr[31] = (0x088F086Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F086Cu) goto L_088F086C;
    return;
L_088F086C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    goto L_088F0874;
L_088F0874:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F0898;
      }
      goto L_088F0888;
    }
L_088F0888:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F0898;
      }
      goto L_088F0894;
    }
L_088F0894:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_088F0898;
L_088F0898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F089C;
L_088F089C:
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F0918;
    }
    goto L_088F08A8;
L_088F08A8:
    ctx.gpr[31] = (0x088F08B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F08B0u) goto L_088F08B0;
    return;
L_088F08B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F08C8;
      }
      goto L_088F08B8;
    }
L_088F08B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F0918;
    }
    goto L_088F08C8;
L_088F08C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088F08F4;
      }
      goto L_088F08D8;
    }
L_088F08D8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F08E4u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F08E4u) goto L_088F08E4;
    return;
L_088F08E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_088F0908;
      }
      goto L_088F08F4;
    }
L_088F08F4:
    ctx.gpr[31] = (0x088F08FCu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F08FCu) goto L_088F08FC;
    return;
L_088F08FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[19]);
    goto L_088F0908;
L_088F0908:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F0918;
    }
    goto L_088F0910;
L_088F0910:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F0918;
L_088F0918:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088F0B24;
      }
      goto L_088F0920;
    }
L_088F0920:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F0950;
      }
      goto L_088F0938;
    }
L_088F0938:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F0944u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0944u) goto L_088F0944;
    return;
L_088F0944:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088F0960;
      }
      goto L_088F0950;
    }
L_088F0950:
    ctx.gpr[31] = (0x088F0958u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0958u) goto L_088F0958;
    return;
L_088F0958:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    goto L_088F0960;
L_088F0960:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F0B24;
      }
      goto L_088F0970;
    }
L_088F0970:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F0B24;
      }
      goto L_088F0978;
    }
L_088F0978:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088F0B24;
      }
      goto L_088F0980;
    }
L_088F0980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[20] = (0u | 64u);
      if (branch_taken) {
          goto L_088F0A90;
      }
      goto L_088F0994;
    }
L_088F0994:
    ctx.gpr[31] = (0x088F099Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F099Cu) goto L_088F099C;
    return;
L_088F099C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088F0A94;
    }
    goto L_088F09A4;
L_088F09A4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (0u | 11u);
      if (branch_taken) {
          goto L_088F0A80;
      }
      goto L_088F09B4;
    }
L_088F09B4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1236));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088F0A54;
      }
      goto L_088F09F4;
    }
L_088F09F4:
    ctx.gpr[31] = (0x088F09FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088F09FCu) goto L_088F09FC;
    return;
L_088F09FC:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088F0A28;
      }
      goto L_088F0A04;
    }
L_088F0A04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[21] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F0A84;
      }
      goto L_088F0A28;
    }
L_088F0A28:
    ctx.gpr[31] = (0x088F0A30u);
    ctx.gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F0A30u) goto L_088F0A30;
    return;
L_088F0A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F0A84;
      }
      goto L_088F0A54;
    }
L_088F0A54:
    ctx.gpr[31] = (0x088F0A5Cu);
    ctx.gpr[4] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F0A5Cu) goto L_088F0A5C;
    return;
L_088F0A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F0A84;
      }
      goto L_088F0A80;
    }
L_088F0A80:
    ctx.gpr[21] = (0u | 6u);
    goto L_088F0A84;
L_088F0A84:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(440), 0u);
    ctx.gpr[31] = (0x088F0A90u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0A90u) goto L_088F0A90;
    return;
L_088F0A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088F0A94;
L_088F0A94:
    if (ctx.gpr[4] != ctx.gpr[20]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088F0AB8;
    }
    goto L_088F0A9C;
L_088F0A9C:
    ctx.gpr[31] = (0x088F0AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F0AA4u) goto L_088F0AA4;
    return;
L_088F0AA4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088F0AB8;
    }
    goto L_088F0AAC;
L_088F0AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088F0AB8;
L_088F0AB8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088F0AF0;
      }
      goto L_088F0AC0;
    }
L_088F0AC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088F0AE4;
      }
      goto L_088F0AD0;
    }
L_088F0AD0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[18]);
    ctx.gpr[31] = (0x088F0ADCu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0ADCu) goto L_088F0ADC;
    return;
L_088F0ADC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088F0AF0;
      }
      goto L_088F0AE4;
    }
L_088F0AE4:
    ctx.gpr[31] = (0x088F0AECu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0AECu) goto L_088F0AEC;
    return;
L_088F0AEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088F0AF0;
L_088F0AF0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088F0B24;
      }
      goto L_088F0AF8;
    }
L_088F0AF8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0B1C;
      }
      goto L_088F0B08;
    }
L_088F0B08:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(436), 0u);
    ctx.gpr[31] = (0x088F0B14u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0B14u) goto L_088F0B14;
    return;
L_088F0B14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0B24;
      }
      goto L_088F0B1C;
    }
L_088F0B1C:
    ctx.gpr[31] = (0x088F0B24u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0B24u) goto L_088F0B24;
    return;
L_088F0B24:
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
L_088F0B54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F0B90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F0B90u) goto L_088F0B90;
    return;
L_088F0B90:
    ctx.gpr[31] = (0x088F0B98u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 538u, 0x088EA6D0u>(ctx, &aot_mem) && ctx.pc == 0x088F0B98u) goto L_088F0B98;
    return;
L_088F0B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F1054;
      }
      goto L_088F0BA8;
    }
L_088F0BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[23] = (0u | 8u);
      if (branch_taken) {
          goto L_088F0D18;
      }
      goto L_088F0BBC;
    }
L_088F0BBC:
    ctx.gpr[31] = (0x088F0BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F0BC4u) goto L_088F0BC4;
    return;
L_088F0BC4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088F0D1C;
    }
    goto L_088F0BCC;
L_088F0BCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[20] = (0u | 11u);
      if (branch_taken) {
          goto L_088F0C2C;
      }
      goto L_088F0BDC;
    }
L_088F0BDC:
    ctx.gpr[31] = (0x088F0BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088F0BE4u) goto L_088F0BE4;
    return;
L_088F0BE4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088F0C0C;
      }
      goto L_088F0BEC;
    }
L_088F0BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 6u);
      if (branch_taken) {
          goto L_088F0D10;
      }
      goto L_088F0C0C;
    }
L_088F0C0C:
    ctx.gpr[31] = (0x088F0C14u);
    ctx.gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F0C14u) goto L_088F0C14;
    return;
L_088F0C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088F0D10;
      }
      goto L_088F0C2C;
    }
L_088F0C2C:
    ctx.gpr[31] = (0x088F0C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088F0C34u) goto L_088F0C34;
    return;
L_088F0C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
      if (branch_taken) {
          goto L_088F0CAC;
      }
      goto L_088F0C40;
    }
L_088F0C40:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088F0C6C;
      }
      goto L_088F0C48;
    }
L_088F0C48:
    ctx.gpr[31] = (0x088F0C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 672u, 0x088E7B10u>(ctx, &aot_mem) && ctx.pc == 0x088F0C50u) goto L_088F0C50;
    return;
L_088F0C50:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x088F0C5Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F0C5Cu) goto L_088F0C5C;
    return;
L_088F0C5C:
    ctx.gpr[31] = (0x088F0C64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088F0C64u) goto L_088F0C64;
    return;
L_088F0C64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0D10;
      }
      goto L_088F0C6C;
    }
L_088F0C6C:
    ctx.gpr[31] = (0x088F0C74u);
    ctx.gpr[4] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F0C74u) goto L_088F0C74;
    return;
L_088F0C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088F0D10;
      }
      goto L_088F0C9C;
    }
L_088F0C9C:
    ctx.gpr[31] = (0x088F0CA4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F0CA4u) goto L_088F0CA4;
    return;
L_088F0CA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0D10;
      }
      goto L_088F0CAC;
    }
L_088F0CAC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_088F0CDC;
      }
      goto L_088F0CB4;
    }
L_088F0CB4:
    ctx.gpr[31] = (0x088F0CBCu);
    ctx.gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F0CBCu) goto L_088F0CBC;
    return;
L_088F0CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088F0D00;
      }
      goto L_088F0CDC;
    }
L_088F0CDC:
    ctx.gpr[31] = (0x088F0CE4u);
    ctx.gpr[4] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F0CE4u) goto L_088F0CE4;
    return;
L_088F0CE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    goto L_088F0D00;
L_088F0D00:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088F0D10;
      }
      goto L_088F0D08;
    }
L_088F0D08:
    ctx.gpr[31] = (0x088F0D10u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F0D10u) goto L_088F0D10;
    return;
L_088F0D10:
    ctx.gpr[31] = (0x088F0D18u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0D18u) goto L_088F0D18;
    return;
L_088F0D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088F0D1C;
L_088F0D1C:
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F0D84;
    }
    goto L_088F0D28;
L_088F0D28:
    ctx.gpr[31] = (0x088F0D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F0D30u) goto L_088F0D30;
    return;
L_088F0D30:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F0D84;
    }
    goto L_088F0D38;
L_088F0D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088F0D5C;
      }
      goto L_088F0D48;
    }
L_088F0D48:
    ctx.gpr[31] = (0x088F0D50u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 756u, 0x088338F8u>(ctx, &aot_mem) && ctx.pc == 0x088F0D50u) goto L_088F0D50;
    return;
L_088F0D50:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x088F0D5Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F0D5Cu) goto L_088F0D5C;
    return;
L_088F0D5C:
    ctx.gpr[31] = (0x088F0D64u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F0D64u) goto L_088F0D64;
    return;
L_088F0D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088F0D80u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0D80u) goto L_088F0D80;
    return;
L_088F0D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F0D84;
L_088F0D84:
    if (ctx.gpr[4] != ctx.gpr[23]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F0EC8;
    }
    goto L_088F0D8C;
L_088F0D8C:
    ctx.gpr[31] = (0x088F0D94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F0D94u) goto L_088F0D94;
    return;
L_088F0D94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F0DB4;
      }
      goto L_088F0D9C;
    }
L_088F0D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F0EC8;
    }
    goto L_088F0DB4;
L_088F0DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1236));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(488)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F0E18;
      }
      goto L_088F0DF4;
    }
L_088F0DF4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F0E00u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0E00u) goto L_088F0E00;
    return;
L_088F0E00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F0EB8;
      }
      goto L_088F0E18;
    }
L_088F0E18:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[20]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0E9C;
      }
      goto L_088F0E3C;
    }
L_088F0E3C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F0E60;
      }
      goto L_088F0E50;
    }
L_088F0E50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    goto L_088F0E60;
L_088F0E60:
    ctx.gpr[31] = (0x088F0E68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F0E68u) goto L_088F0E68;
    return;
L_088F0E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[22] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[31] = (0x088F0E88u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0E88u) goto L_088F0E88;
    return;
L_088F0E88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F0EB8;
      }
      goto L_088F0E9C;
    }
L_088F0E9C:
    ctx.gpr[31] = (0x088F0EA4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0EA4u) goto L_088F0EA4;
    return;
L_088F0EA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    goto L_088F0EB8;
L_088F0EB8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F0EC8;
    }
    goto L_088F0EC0;
L_088F0EC0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F0EC8;
L_088F0EC8:
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F0F7C;
    }
    goto L_088F0ED4;
L_088F0ED4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F0F44;
      }
      goto L_088F0EF4;
    }
L_088F0EF4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1236));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(60)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(488)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F0F44;
      }
      goto L_088F0F2C;
    }
L_088F0F2C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F0F38u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0F38u) goto L_088F0F38;
    return;
L_088F0F38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088F0F54;
      }
      goto L_088F0F44;
    }
L_088F0F44:
    ctx.gpr[31] = (0x088F0F4Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0F4Cu) goto L_088F0F4C;
    return;
L_088F0F4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    goto L_088F0F54;
L_088F0F54:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F0F78;
      }
      goto L_088F0F68;
    }
L_088F0F68:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F0F78;
      }
      goto L_088F0F74;
    }
L_088F0F74:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_088F0F78;
L_088F0F78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F0F7C;
L_088F0F7C:
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F0FF8;
    }
    goto L_088F0F88;
L_088F0F88:
    ctx.gpr[31] = (0x088F0F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F0F90u) goto L_088F0F90;
    return;
L_088F0F90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F0FA8;
      }
      goto L_088F0F98;
    }
L_088F0F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F0FF8;
    }
    goto L_088F0FA8;
L_088F0FA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088F0FD4;
      }
      goto L_088F0FB8;
    }
L_088F0FB8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F0FC4u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0FC4u) goto L_088F0FC4;
    return;
L_088F0FC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_088F0FE8;
      }
      goto L_088F0FD4;
    }
L_088F0FD4:
    ctx.gpr[31] = (0x088F0FDCu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F0FDCu) goto L_088F0FDC;
    return;
L_088F0FDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[19]);
    goto L_088F0FE8;
L_088F0FE8:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F0FF8;
    }
    goto L_088F0FF0;
L_088F0FF0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F0FF8;
L_088F0FF8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088F1054;
      }
      goto L_088F1000;
    }
L_088F1000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F1030;
      }
      goto L_088F1018;
    }
L_088F1018:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[31] = (0x088F1024u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1024u) goto L_088F1024;
    return;
L_088F1024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088F1040;
      }
      goto L_088F1030;
    }
L_088F1030:
    ctx.gpr[31] = (0x088F1038u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1038u) goto L_088F1038;
    return;
L_088F1038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    goto L_088F1040;
L_088F1040:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F1054;
      }
      goto L_088F1050;
    }
L_088F1050:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    goto L_088F1054;
L_088F1054:
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
L_088F1080:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F10B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F10B8u) goto L_088F10B8;
    return;
L_088F10B8:
    ctx.gpr[31] = (0x088F10C0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 538u, 0x088EA6D0u>(ctx, &aot_mem) && ctx.pc == 0x088F10C0u) goto L_088F10C0;
    return;
L_088F10C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[20] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[21] = (0u | 8u);
      if (branch_taken) {
          goto L_088F115C;
      }
      goto L_088F10D8;
    }
L_088F10D8:
    ctx.gpr[31] = (0x088F10E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F10E0u) goto L_088F10E0;
    return;
L_088F10E0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088F1160;
    }
    goto L_088F10E8;
L_088F10E8:
    ctx.gpr[31] = (0x088F10F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088F10F0u) goto L_088F10F0;
    return;
L_088F10F0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088F111C;
      }
      goto L_088F10F8;
    }
L_088F10F8:
    ctx.gpr[31] = (0x088F1100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 672u, 0x088E7B10u>(ctx, &aot_mem) && ctx.pc == 0x088F1100u) goto L_088F1100;
    return;
L_088F1100:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x088F110Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F110Cu) goto L_088F110C;
    return;
L_088F110C:
    ctx.gpr[31] = (0x088F1114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088F1114u) goto L_088F1114;
    return;
L_088F1114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1154;
      }
      goto L_088F111C;
    }
L_088F111C:
    ctx.gpr[31] = (0x088F1124u);
    ctx.gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F1124u) goto L_088F1124;
    return;
L_088F1124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088F1154;
      }
      goto L_088F114C;
    }
L_088F114C:
    ctx.gpr[31] = (0x088F1154u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F1154u) goto L_088F1154;
    return;
L_088F1154:
    ctx.gpr[31] = (0x088F115Cu);
    ctx.gpr[4] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F115Cu) goto L_088F115C;
    return;
L_088F115C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088F1160;
L_088F1160:
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F11FC;
    }
    goto L_088F116C;
L_088F116C:
    ctx.gpr[31] = (0x088F1174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F1174u) goto L_088F1174;
    return;
L_088F1174:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F11FC;
    }
    goto L_088F117C;
L_088F117C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1236));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088F11D4;
      }
      goto L_088F11B0;
    }
L_088F11B0:
    ctx.gpr[31] = (0x088F11B8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 756u, 0x088338F8u>(ctx, &aot_mem) && ctx.pc == 0x088F11B8u) goto L_088F11B8;
    return;
L_088F11B8:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x088F11C4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F11C4u) goto L_088F11C4;
    return;
L_088F11C4:
    ctx.gpr[31] = (0x088F11CCu);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F11CCu) goto L_088F11CC;
    return;
L_088F11CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F11E0;
      }
      goto L_088F11D4;
    }
L_088F11D4:
    ctx.gpr[31] = (0x088F11DCu);
    ctx.gpr[4] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F11DCu) goto L_088F11DC;
    return;
L_088F11DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    goto L_088F11E0;
L_088F11E0:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088F11F8u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F11F8u) goto L_088F11F8;
    return;
L_088F11F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F11FC;
L_088F11FC:
    if (ctx.gpr[4] != ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F1324;
    }
    goto L_088F1204;
L_088F1204:
    ctx.gpr[31] = (0x088F120Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F120Cu) goto L_088F120C;
    return;
L_088F120C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F122C;
      }
      goto L_088F1214;
    }
L_088F1214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F1324;
    }
    goto L_088F122C;
L_088F122C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(352)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[19]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F126C;
      }
      goto L_088F1248;
    }
L_088F1248:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F1254u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1254u) goto L_088F1254;
    return;
L_088F1254:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F1314;
      }
      goto L_088F126C;
    }
L_088F126C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F12F8;
      }
      goto L_088F1290;
    }
L_088F1290:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F12B4;
      }
      goto L_088F12A4;
    }
L_088F12A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    goto L_088F12B4;
L_088F12B4:
    ctx.gpr[31] = (0x088F12BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F12BCu) goto L_088F12BC;
    return;
L_088F12BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x088F12E4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F12E4u) goto L_088F12E4;
    return;
L_088F12E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F1314;
      }
      goto L_088F12F8;
    }
L_088F12F8:
    ctx.gpr[31] = (0x088F1300u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1300u) goto L_088F1300;
    return;
L_088F1300:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_088F1314;
L_088F1314:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F1324;
    }
    goto L_088F131C;
L_088F131C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F1324;
L_088F1324:
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F13B4;
    }
    goto L_088F1330;
L_088F1330:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[21] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F137C;
      }
      goto L_088F1350;
    }
L_088F1350:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(352)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F137C;
      }
      goto L_088F1364;
    }
L_088F1364:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F1370u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1370u) goto L_088F1370;
    return;
L_088F1370:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088F138C;
      }
      goto L_088F137C;
    }
L_088F137C:
    ctx.gpr[31] = (0x088F1384u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1384u) goto L_088F1384;
    return;
L_088F1384:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    goto L_088F138C;
L_088F138C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F13B0;
      }
      goto L_088F13A0;
    }
L_088F13A0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F13B0;
      }
      goto L_088F13AC;
    }
L_088F13AC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_088F13B0;
L_088F13B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F13B4;
L_088F13B4:
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F1430;
    }
    goto L_088F13C0;
L_088F13C0:
    ctx.gpr[31] = (0x088F13C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F13C8u) goto L_088F13C8;
    return;
L_088F13C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F13E0;
      }
      goto L_088F13D0;
    }
L_088F13D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F1430;
    }
    goto L_088F13E0;
L_088F13E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088F140C;
      }
      goto L_088F13F0;
    }
L_088F13F0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F13FCu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F13FCu) goto L_088F13FC;
    return;
L_088F13FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_088F1420;
      }
      goto L_088F140C;
    }
L_088F140C:
    ctx.gpr[31] = (0x088F1414u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1414u) goto L_088F1414;
    return;
L_088F1414:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[19]);
    goto L_088F1420;
L_088F1420:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F1430;
    }
    goto L_088F1428;
L_088F1428:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F1430;
L_088F1430:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088F148C;
      }
      goto L_088F1438;
    }
L_088F1438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F1468;
      }
      goto L_088F1450;
    }
L_088F1450:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[31] = (0x088F145Cu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F145Cu) goto L_088F145C;
    return;
L_088F145C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088F1478;
      }
      goto L_088F1468;
    }
L_088F1468:
    ctx.gpr[31] = (0x088F1470u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1470u) goto L_088F1470;
    return;
L_088F1470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    goto L_088F1478;
L_088F1478:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F148C;
      }
      goto L_088F1488;
    }
L_088F1488:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_088F148C;
L_088F148C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F14B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F14E8u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 538u, 0x088EA6D0u>(ctx, &aot_mem) && ctx.pc == 0x088F14E8u) goto L_088F14E8;
    return;
L_088F14E8:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088F14FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F14FCu) goto L_088F14FC;
    return;
L_088F14FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(440)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (0u | 2u);
      if (branch_taken) {
          goto L_088F196C;
      }
      goto L_088F1510;
    }
L_088F1510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[21] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[23] = (0u | 64u);
      if (branch_taken) {
          goto L_088F16A0;
      }
      goto L_088F1528;
    }
L_088F1528:
    ctx.gpr[31] = (0x088F1530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F1530u) goto L_088F1530;
    return;
L_088F1530:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
        goto L_088F16A4;
    }
    goto L_088F1538;
L_088F1538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(2808));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 11u);
      if (branch_taken) {
          goto L_088F1594;
      }
      goto L_088F1574;
    }
L_088F1574:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[18] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[21]);
      if (branch_taken) {
          goto L_088F1698;
      }
      goto L_088F1594;
    }
L_088F1594:
    ctx.gpr[31] = (0x088F159Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 143u, 0x088E87D8u>(ctx, &aot_mem) && ctx.pc == 0x088F159Cu) goto L_088F159C;
    return;
L_088F159C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
        goto L_088F15BC;
    }
    goto L_088F15AC;
L_088F15AC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[22]);
      if (branch_taken) {
          goto L_088F1698;
      }
      goto L_088F15BC;
    }
L_088F15BC:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(2808));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088F1664;
      }
      goto L_088F15E8;
    }
L_088F15E8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088F1644;
      }
      goto L_088F15FC;
    }
L_088F15FC:
    ctx.gpr[31] = (0x088F1604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088F1604u) goto L_088F1604;
    return;
L_088F1604:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088F1624;
      }
      goto L_088F160C;
    }
L_088F160C:
    ctx.gpr[31] = (0x088F1614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 155u, 0x088E8910u>(ctx, &aot_mem) && ctx.pc == 0x088F1614u) goto L_088F1614;
    return;
L_088F1614:
    ctx.gpr[31] = (0x088F161Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088F161Cu) goto L_088F161C;
    return;
L_088F161C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_088F1684;
      }
      goto L_088F1624;
    }
L_088F1624:
    ctx.gpr[31] = (0x088F162Cu);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F162Cu) goto L_088F162C;
    return;
L_088F162C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088F1680;
      }
      goto L_088F1644;
    }
L_088F1644:
    ctx.gpr[31] = (0x088F164Cu);
    ctx.gpr[4] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F164Cu) goto L_088F164C;
    return;
L_088F164C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088F1680;
      }
      goto L_088F1664;
    }
L_088F1664:
    ctx.gpr[31] = (0x088F166Cu);
    ctx.gpr[4] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F166Cu) goto L_088F166C;
    return;
L_088F166C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088F1680;
L_088F1680:
    ctx.gpr[4] = (0u | 4u);
    goto L_088F1684;
L_088F1684:
    ctx.gpr[31] = (0x088F168Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F168Cu) goto L_088F168C;
    return;
L_088F168C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    goto L_088F1698;
L_088F1698:
    ctx.gpr[31] = (0x088F16A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F16A0u) goto L_088F16A0;
    return;
L_088F16A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    goto L_088F16A4;
L_088F16A4:
    if (ctx.gpr[4] != ctx.gpr[23]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_088F16DC;
    }
    goto L_088F16AC;
L_088F16AC:
    ctx.gpr[31] = (0x088F16B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F16B4u) goto L_088F16B4;
    return;
L_088F16B4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_088F16DC;
    }
    goto L_088F16BC;
L_088F16BC:
    ctx.gpr[31] = (0x088F16C4u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F16C4u) goto L_088F16C4;
    return;
L_088F16C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088F16D8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F16D8u) goto L_088F16D8;
    return;
L_088F16D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_088F16DC;
L_088F16DC:
    if (ctx.gpr[4] != ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_088F1804;
    }
    goto L_088F16E4;
L_088F16E4:
    ctx.gpr[31] = (0x088F16ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F16ECu) goto L_088F16EC;
    return;
L_088F16EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F170C;
      }
      goto L_088F16F4;
    }
L_088F16F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_088F1804;
    }
    goto L_088F170C;
L_088F170C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[17]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F174C;
      }
      goto L_088F1728;
    }
L_088F1728:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F1734u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1734u) goto L_088F1734;
    return;
L_088F1734:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F17F4;
      }
      goto L_088F174C;
    }
L_088F174C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F17D8;
      }
      goto L_088F1770;
    }
L_088F1770:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F1794;
      }
      goto L_088F1784;
    }
L_088F1784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    goto L_088F1794;
L_088F1794:
    ctx.gpr[31] = (0x088F179Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F179Cu) goto L_088F179C;
    return;
L_088F179C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x088F17C4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F17C4u) goto L_088F17C4;
    return;
L_088F17C4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F17F4;
      }
      goto L_088F17D8;
    }
L_088F17D8:
    ctx.gpr[31] = (0x088F17E0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F17E0u) goto L_088F17E0;
    return;
L_088F17E0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_088F17F4;
L_088F17F4:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_088F1804;
    }
    goto L_088F17FC;
L_088F17FC:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_088F1804;
L_088F1804:
    if (ctx.gpr[4] != ctx.gpr[30]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_088F1890;
    }
    goto L_088F180C;
L_088F180C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1858;
      }
      goto L_088F182C;
    }
L_088F182C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F1858;
      }
      goto L_088F1840;
    }
L_088F1840:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F184Cu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F184Cu) goto L_088F184C;
    return;
L_088F184C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088F1868;
      }
      goto L_088F1858;
    }
L_088F1858:
    ctx.gpr[31] = (0x088F1860u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1860u) goto L_088F1860;
    return;
L_088F1860:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    goto L_088F1868;
L_088F1868:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F188C;
      }
      goto L_088F187C;
    }
L_088F187C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F188C;
      }
      goto L_088F1888;
    }
L_088F1888:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_088F188C;
L_088F188C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_088F1890;
L_088F1890:
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_088F190C;
    }
    goto L_088F189C;
L_088F189C:
    ctx.gpr[31] = (0x088F18A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F18A4u) goto L_088F18A4;
    return;
L_088F18A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F18BC;
      }
      goto L_088F18AC;
    }
L_088F18AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_088F190C;
    }
    goto L_088F18BC;
L_088F18BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088F18E8;
      }
      goto L_088F18CC;
    }
L_088F18CC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F18D8u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F18D8u) goto L_088F18D8;
    return;
L_088F18D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_088F18FC;
      }
      goto L_088F18E8;
    }
L_088F18E8:
    ctx.gpr[31] = (0x088F18F0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F18F0u) goto L_088F18F0;
    return;
L_088F18F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    goto L_088F18FC;
L_088F18FC:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
        goto L_088F190C;
    }
    goto L_088F1904;
L_088F1904:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_088F190C;
L_088F190C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088F1B24;
      }
      goto L_088F1914;
    }
L_088F1914:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F1944;
      }
      goto L_088F192C;
    }
L_088F192C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F1938u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1938u) goto L_088F1938;
    return;
L_088F1938:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088F1954;
      }
      goto L_088F1944;
    }
L_088F1944:
    ctx.gpr[31] = (0x088F194Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F194Cu) goto L_088F194C;
    return;
L_088F194C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    goto L_088F1954;
L_088F1954:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F1B24;
      }
      goto L_088F1964;
    }
L_088F1964:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F1B24;
      }
      goto L_088F196C;
    }
L_088F196C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088F1B24;
      }
      goto L_088F1974;
    }
L_088F1974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (0u | 64u);
      if (branch_taken) {
          goto L_088F1A88;
      }
      goto L_088F1988;
    }
L_088F1988:
    ctx.gpr[31] = (0x088F1990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F1990u) goto L_088F1990;
    return;
L_088F1990:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
        goto L_088F1A8C;
    }
    goto L_088F1998;
L_088F1998:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (0u | 11u);
      if (branch_taken) {
          goto L_088F1A78;
      }
      goto L_088F19A8;
    }
L_088F19A8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(2808));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1A4C;
      }
      goto L_088F19EC;
    }
L_088F19EC:
    ctx.gpr[31] = (0x088F19F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088F19F4u) goto L_088F19F4;
    return;
L_088F19F4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088F1A20;
      }
      goto L_088F19FC;
    }
L_088F19FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[21] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F1A7C;
      }
      goto L_088F1A20;
    }
L_088F1A20:
    ctx.gpr[31] = (0x088F1A28u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F1A28u) goto L_088F1A28;
    return;
L_088F1A28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F1A7C;
      }
      goto L_088F1A4C;
    }
L_088F1A4C:
    ctx.gpr[31] = (0x088F1A54u);
    ctx.gpr[4] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F1A54u) goto L_088F1A54;
    return;
L_088F1A54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F1A7C;
      }
      goto L_088F1A78;
    }
L_088F1A78:
    ctx.gpr[21] = (0u | 6u);
    goto L_088F1A7C;
L_088F1A7C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(440), 0u);
    ctx.gpr[31] = (0x088F1A88u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1A88u) goto L_088F1A88;
    return;
L_088F1A88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    goto L_088F1A8C;
L_088F1A8C:
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
        goto L_088F1AB8;
    }
    goto L_088F1A94;
L_088F1A94:
    ctx.gpr[31] = (0x088F1A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F1A9Cu) goto L_088F1A9C;
    return;
L_088F1A9C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
        goto L_088F1AB8;
    }
    goto L_088F1AA4;
L_088F1AA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088F1AB4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(440), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1AB4u) goto L_088F1AB4;
    return;
L_088F1AB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    goto L_088F1AB8;
L_088F1AB8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088F1AF0;
      }
      goto L_088F1AC0;
    }
L_088F1AC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088F1AE4;
      }
      goto L_088F1AD0;
    }
L_088F1AD0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[17]);
    ctx.gpr[31] = (0x088F1ADCu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1ADCu) goto L_088F1ADC;
    return;
L_088F1ADC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088F1AF0;
      }
      goto L_088F1AE4;
    }
L_088F1AE4:
    ctx.gpr[31] = (0x088F1AECu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1AECu) goto L_088F1AEC;
    return;
L_088F1AEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    goto L_088F1AF0;
L_088F1AF0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088F1B24;
      }
      goto L_088F1AF8;
    }
L_088F1AF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1B1C;
      }
      goto L_088F1B08;
    }
L_088F1B08:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(436), 0u);
    ctx.gpr[31] = (0x088F1B14u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1B14u) goto L_088F1B14;
    return;
L_088F1B14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1B24;
      }
      goto L_088F1B1C;
    }
L_088F1B1C:
    ctx.gpr[31] = (0x088F1B24u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1B24u) goto L_088F1B24;
    return;
L_088F1B24:
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
L_088F1B54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
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
    ctx.gpr[31] = (0x088F1B88u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 538u, 0x088EA6D0u>(ctx, &aot_mem) && ctx.pc == 0x088F1B88u) goto L_088F1B88;
    return;
L_088F1B88:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088F1B9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F1B9Cu) goto L_088F1B9C;
    return;
L_088F1B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[23] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[30] = (0u | 8u);
      if (branch_taken) {
          goto L_088F1D14;
      }
      goto L_088F1BB8;
    }
L_088F1BB8:
    ctx.gpr[31] = (0x088F1BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F1BC0u) goto L_088F1BC0;
    return;
L_088F1BC0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088F1D18;
    }
    goto L_088F1BC8;
L_088F1BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[20] = (0u | 11u);
      if (branch_taken) {
          goto L_088F1C28;
      }
      goto L_088F1BD8;
    }
L_088F1BD8:
    ctx.gpr[31] = (0x088F1BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088F1BE0u) goto L_088F1BE0;
    return;
L_088F1BE0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088F1C08;
      }
      goto L_088F1BE8;
    }
L_088F1BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 6u);
      if (branch_taken) {
          goto L_088F1D0C;
      }
      goto L_088F1C08;
    }
L_088F1C08:
    ctx.gpr[31] = (0x088F1C10u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F1C10u) goto L_088F1C10;
    return;
L_088F1C10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088F1D0C;
      }
      goto L_088F1C28;
    }
L_088F1C28:
    ctx.gpr[31] = (0x088F1C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088F1C30u) goto L_088F1C30;
    return;
L_088F1C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
      if (branch_taken) {
          goto L_088F1CA8;
      }
      goto L_088F1C3C;
    }
L_088F1C3C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088F1C68;
      }
      goto L_088F1C44;
    }
L_088F1C44:
    ctx.gpr[31] = (0x088F1C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 155u, 0x088E8910u>(ctx, &aot_mem) && ctx.pc == 0x088F1C4Cu) goto L_088F1C4C;
    return;
L_088F1C4C:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x088F1C58u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F1C58u) goto L_088F1C58;
    return;
L_088F1C58:
    ctx.gpr[31] = (0x088F1C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088F1C60u) goto L_088F1C60;
    return;
L_088F1C60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1D0C;
      }
      goto L_088F1C68;
    }
L_088F1C68:
    ctx.gpr[31] = (0x088F1C70u);
    ctx.gpr[4] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F1C70u) goto L_088F1C70;
    return;
L_088F1C70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_088F1D0C;
      }
      goto L_088F1C98;
    }
L_088F1C98:
    ctx.gpr[31] = (0x088F1CA0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F1CA0u) goto L_088F1CA0;
    return;
L_088F1CA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1D0C;
      }
      goto L_088F1CA8;
    }
L_088F1CA8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_088F1CD8;
      }
      goto L_088F1CB0;
    }
L_088F1CB0:
    ctx.gpr[31] = (0x088F1CB8u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F1CB8u) goto L_088F1CB8;
    return;
L_088F1CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088F1CFC;
      }
      goto L_088F1CD8;
    }
L_088F1CD8:
    ctx.gpr[31] = (0x088F1CE0u);
    ctx.gpr[4] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F1CE0u) goto L_088F1CE0;
    return;
L_088F1CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    goto L_088F1CFC;
L_088F1CFC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_088F1D0C;
      }
      goto L_088F1D04;
    }
L_088F1D04:
    ctx.gpr[31] = (0x088F1D0Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F1D0Cu) goto L_088F1D0C;
    return;
L_088F1D0C:
    ctx.gpr[31] = (0x088F1D14u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1D14u) goto L_088F1D14;
    return;
L_088F1D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088F1D18;
L_088F1D18:
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F1D80;
    }
    goto L_088F1D24;
L_088F1D24:
    ctx.gpr[31] = (0x088F1D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F1D2Cu) goto L_088F1D2C;
    return;
L_088F1D2C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F1D80;
    }
    goto L_088F1D34;
L_088F1D34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088F1D58;
      }
      goto L_088F1D44;
    }
L_088F1D44:
    ctx.gpr[31] = (0x088F1D4Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 770u, 0x08833A00u>(ctx, &aot_mem) && ctx.pc == 0x088F1D4Cu) goto L_088F1D4C;
    return;
L_088F1D4C:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x088F1D58u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F1D58u) goto L_088F1D58;
    return;
L_088F1D58:
    ctx.gpr[31] = (0x088F1D60u);
    ctx.gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F1D60u) goto L_088F1D60;
    return;
L_088F1D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088F1D7Cu);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1D7Cu) goto L_088F1D7C;
    return;
L_088F1D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F1D80;
L_088F1D80:
    if (ctx.gpr[4] != ctx.gpr[30]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F1EC4;
    }
    goto L_088F1D88;
L_088F1D88:
    ctx.gpr[31] = (0x088F1D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F1D90u) goto L_088F1D90;
    return;
L_088F1D90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F1DB0;
      }
      goto L_088F1D98;
    }
L_088F1D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F1EC4;
    }
    goto L_088F1DB0;
L_088F1DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(2808));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(492)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F1E14;
      }
      goto L_088F1DF0;
    }
L_088F1DF0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F1DFCu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1DFCu) goto L_088F1DFC;
    return;
L_088F1DFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F1EB4;
      }
      goto L_088F1E14;
    }
L_088F1E14:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[20]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1E98;
      }
      goto L_088F1E38;
    }
L_088F1E38:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F1E5C;
      }
      goto L_088F1E4C;
    }
L_088F1E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    goto L_088F1E5C;
L_088F1E5C:
    ctx.gpr[31] = (0x088F1E64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F1E64u) goto L_088F1E64;
    return;
L_088F1E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[31] = (0x088F1E84u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1E84u) goto L_088F1E84;
    return;
L_088F1E84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F1EB4;
      }
      goto L_088F1E98;
    }
L_088F1E98:
    ctx.gpr[31] = (0x088F1EA0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1EA0u) goto L_088F1EA0;
    return;
L_088F1EA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    goto L_088F1EB4;
L_088F1EB4:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F1EC4;
    }
    goto L_088F1EBC;
L_088F1EBC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F1EC4;
L_088F1EC4:
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F1F78;
    }
    goto L_088F1ED0;
L_088F1ED0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F1F40;
      }
      goto L_088F1EF0;
    }
L_088F1EF0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(2808));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(60)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(492)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F1F40;
      }
      goto L_088F1F28;
    }
L_088F1F28:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F1F34u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1F34u) goto L_088F1F34;
    return;
L_088F1F34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088F1F50;
      }
      goto L_088F1F40;
    }
L_088F1F40:
    ctx.gpr[31] = (0x088F1F48u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1F48u) goto L_088F1F48;
    return;
L_088F1F48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    goto L_088F1F50;
L_088F1F50:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F1F74;
      }
      goto L_088F1F64;
    }
L_088F1F64:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F1F74;
      }
      goto L_088F1F70;
    }
L_088F1F70:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_088F1F74;
L_088F1F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F1F78;
L_088F1F78:
    if (ctx.gpr[4] != ctx.gpr[23]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F1FF0;
    }
    goto L_088F1F80;
L_088F1F80:
    ctx.gpr[31] = (0x088F1F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F1F88u) goto L_088F1F88;
    return;
L_088F1F88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F1FA0;
      }
      goto L_088F1F90;
    }
L_088F1F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F1FF0;
    }
    goto L_088F1FA0;
L_088F1FA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088F1FCC;
      }
      goto L_088F1FB0;
    }
L_088F1FB0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F1FBCu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1FBCu) goto L_088F1FBC;
    return;
L_088F1FBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_088F1FE0;
      }
      goto L_088F1FCC;
    }
L_088F1FCC:
    ctx.gpr[31] = (0x088F1FD4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F1FD4u) goto L_088F1FD4;
    return;
L_088F1FD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    goto L_088F1FE0;
L_088F1FE0:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F1FF0;
    }
    goto L_088F1FE8;
L_088F1FE8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F1FF0;
L_088F1FF0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088F204C;
      }
      goto L_088F1FF8;
    }
L_088F1FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F2028;
      }
      goto L_088F2010;
    }
L_088F2010:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[31] = (0x088F201Cu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F201Cu) goto L_088F201C;
    return;
L_088F201C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088F2038;
      }
      goto L_088F2028;
    }
L_088F2028:
    ctx.gpr[31] = (0x088F2030u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2030u) goto L_088F2030;
    return;
L_088F2030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    goto L_088F2038;
L_088F2038:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F204C;
      }
      goto L_088F2048;
    }
L_088F2048:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    goto L_088F204C;
L_088F204C:
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
L_088F207C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F20ACu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 538u, 0x088EA6D0u>(ctx, &aot_mem) && ctx.pc == 0x088F20ACu) goto L_088F20AC;
    return;
L_088F20AC:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088F20C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F20C0u) goto L_088F20C0;
    return;
L_088F20C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[21] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[22] = (0u | 8u);
      if (branch_taken) {
          goto L_088F2160;
      }
      goto L_088F20DC;
    }
L_088F20DC:
    ctx.gpr[31] = (0x088F20E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F20E4u) goto L_088F20E4;
    return;
L_088F20E4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088F2164;
    }
    goto L_088F20EC;
L_088F20EC:
    ctx.gpr[31] = (0x088F20F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088F20F4u) goto L_088F20F4;
    return;
L_088F20F4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088F2120;
      }
      goto L_088F20FC;
    }
L_088F20FC:
    ctx.gpr[31] = (0x088F2104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 155u, 0x088E8910u>(ctx, &aot_mem) && ctx.pc == 0x088F2104u) goto L_088F2104;
    return;
L_088F2104:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x088F2110u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F2110u) goto L_088F2110;
    return;
L_088F2110:
    ctx.gpr[31] = (0x088F2118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088F2118u) goto L_088F2118;
    return;
L_088F2118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2158;
      }
      goto L_088F2120;
    }
L_088F2120:
    ctx.gpr[31] = (0x088F2128u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F2128u) goto L_088F2128;
    return;
L_088F2128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_088F2158;
      }
      goto L_088F2150;
    }
L_088F2150:
    ctx.gpr[31] = (0x088F2158u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F2158u) goto L_088F2158;
    return;
L_088F2158:
    ctx.gpr[31] = (0x088F2160u);
    ctx.gpr[4] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2160u) goto L_088F2160;
    return;
L_088F2160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088F2164;
L_088F2164:
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F2204;
    }
    goto L_088F2170;
L_088F2170:
    ctx.gpr[31] = (0x088F2178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F2178u) goto L_088F2178;
    return;
L_088F2178:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F2204;
    }
    goto L_088F2180;
L_088F2180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(2808));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088F21C8;
      }
      goto L_088F21B8;
    }
L_088F21B8:
    ctx.gpr[31] = (0x088F21C0u);
    ctx.gpr[4] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F21C0u) goto L_088F21C0;
    return;
L_088F21C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F21E8;
      }
      goto L_088F21C8;
    }
L_088F21C8:
    ctx.gpr[31] = (0x088F21D0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 770u, 0x08833A00u>(ctx, &aot_mem) && ctx.pc == 0x088F21D0u) goto L_088F21D0;
    return;
L_088F21D0:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x088F21DCu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F21DCu) goto L_088F21DC;
    return;
L_088F21DC:
    ctx.gpr[31] = (0x088F21E4u);
    ctx.gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F21E4u) goto L_088F21E4;
    return;
L_088F21E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    goto L_088F21E8;
L_088F21E8:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088F2200u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2200u) goto L_088F2200;
    return;
L_088F2200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F2204;
L_088F2204:
    if (ctx.gpr[4] != ctx.gpr[22]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F232C;
    }
    goto L_088F220C;
L_088F220C:
    ctx.gpr[31] = (0x088F2214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F2214u) goto L_088F2214;
    return;
L_088F2214:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F2234;
      }
      goto L_088F221C;
    }
L_088F221C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F232C;
    }
    goto L_088F2234;
L_088F2234:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(352)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[17]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F2274;
      }
      goto L_088F2250;
    }
L_088F2250:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F225Cu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F225Cu) goto L_088F225C;
    return;
L_088F225C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F231C;
      }
      goto L_088F2274;
    }
L_088F2274:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2300;
      }
      goto L_088F2298;
    }
L_088F2298:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F22BC;
      }
      goto L_088F22AC;
    }
L_088F22AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    goto L_088F22BC;
L_088F22BC:
    ctx.gpr[31] = (0x088F22C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F22C4u) goto L_088F22C4;
    return;
L_088F22C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x088F22ECu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F22ECu) goto L_088F22EC;
    return;
L_088F22EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F231C;
      }
      goto L_088F2300;
    }
L_088F2300:
    ctx.gpr[31] = (0x088F2308u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2308u) goto L_088F2308;
    return;
L_088F2308:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_088F231C;
L_088F231C:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F232C;
    }
    goto L_088F2324;
L_088F2324:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F232C;
L_088F232C:
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F23BC;
    }
    goto L_088F2338;
L_088F2338:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[22] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2384;
      }
      goto L_088F2358;
    }
L_088F2358:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(352)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F2384;
      }
      goto L_088F236C;
    }
L_088F236C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F2378u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2378u) goto L_088F2378;
    return;
L_088F2378:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088F2394;
      }
      goto L_088F2384;
    }
L_088F2384:
    ctx.gpr[31] = (0x088F238Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F238Cu) goto L_088F238C;
    return;
L_088F238C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    goto L_088F2394;
L_088F2394:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F23B8;
      }
      goto L_088F23A8;
    }
L_088F23A8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F23B8;
      }
      goto L_088F23B4;
    }
L_088F23B4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_088F23B8;
L_088F23B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F23BC;
L_088F23BC:
    if (ctx.gpr[4] != ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F2434;
    }
    goto L_088F23C4;
L_088F23C4:
    ctx.gpr[31] = (0x088F23CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F23CCu) goto L_088F23CC;
    return;
L_088F23CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F23E4;
      }
      goto L_088F23D4;
    }
L_088F23D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F2434;
    }
    goto L_088F23E4;
L_088F23E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088F2410;
      }
      goto L_088F23F4;
    }
L_088F23F4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F2400u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2400u) goto L_088F2400;
    return;
L_088F2400:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_088F2424;
      }
      goto L_088F2410;
    }
L_088F2410:
    ctx.gpr[31] = (0x088F2418u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2418u) goto L_088F2418;
    return;
L_088F2418:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    goto L_088F2424;
L_088F2424:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F2434;
    }
    goto L_088F242C;
L_088F242C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F2434;
L_088F2434:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088F2490;
      }
      goto L_088F243C;
    }
L_088F243C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F246C;
      }
      goto L_088F2454;
    }
L_088F2454:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[31] = (0x088F2460u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2460u) goto L_088F2460;
    return;
L_088F2460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088F247C;
      }
      goto L_088F246C;
    }
L_088F246C:
    ctx.gpr[31] = (0x088F2474u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2474u) goto L_088F2474;
    return;
L_088F2474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    goto L_088F247C;
L_088F247C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F2490;
      }
      goto L_088F248C;
    }
L_088F248C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_088F2490;
L_088F2490:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F24BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F24F0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 538u, 0x088EA6D0u>(ctx, &aot_mem) && ctx.pc == 0x088F24F0u) goto L_088F24F0;
    return;
L_088F24F0:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088F2504u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F2504u) goto L_088F2504;
    return;
L_088F2504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(440)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (0u | 128u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[23] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[30] = (0u | 64u);
      if (branch_taken) {
          goto L_088F295C;
      }
      goto L_088F2528;
    }
L_088F2528:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[22] = (0u | 8u);
      if (branch_taken) {
          goto L_088F2690;
      }
      goto L_088F2530;
    }
L_088F2530:
    ctx.gpr[31] = (0x088F2538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F2538u) goto L_088F2538;
    return;
L_088F2538:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088F2694;
    }
    goto L_088F2540;
L_088F2540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (0u | 11u);
      if (branch_taken) {
          goto L_088F25A8;
      }
      goto L_088F2588;
    }
L_088F2588:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[20] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[22]);
      if (branch_taken) {
          goto L_088F2688;
      }
      goto L_088F25A8;
    }
L_088F25A8:
    ctx.gpr[31] = (0x088F25B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 236u, 0x088E8ED4u>(ctx, &aot_mem) && ctx.pc == 0x088F25B0u) goto L_088F25B0;
    return;
L_088F25B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
        goto L_088F25D0;
    }
    goto L_088F25C0;
L_088F25C0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[21]);
      if (branch_taken) {
          goto L_088F2688;
      }
      goto L_088F25D0;
    }
L_088F25D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2654;
      }
      goto L_088F260C;
    }
L_088F260C:
    ctx.gpr[31] = (0x088F2614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088F2614u) goto L_088F2614;
    return;
L_088F2614:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088F2634;
      }
      goto L_088F261C;
    }
L_088F261C:
    ctx.gpr[31] = (0x088F2624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 261u, 0x088E90DCu>(ctx, &aot_mem) && ctx.pc == 0x088F2624u) goto L_088F2624;
    return;
L_088F2624:
    ctx.gpr[31] = (0x088F262Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088F262Cu) goto L_088F262C;
    return;
L_088F262C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_088F2674;
      }
      goto L_088F2634;
    }
L_088F2634:
    ctx.gpr[31] = (0x088F263Cu);
    ctx.gpr[4] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F263Cu) goto L_088F263C;
    return;
L_088F263C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088F2670;
      }
      goto L_088F2654;
    }
L_088F2654:
    ctx.gpr[31] = (0x088F265Cu);
    ctx.gpr[4] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F265Cu) goto L_088F265C;
    return;
L_088F265C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088F2670;
L_088F2670:
    ctx.gpr[4] = (0u | 5u);
    goto L_088F2674;
L_088F2674:
    ctx.gpr[31] = (0x088F267Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F267Cu) goto L_088F267C;
    return;
L_088F267C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    goto L_088F2688;
L_088F2688:
    ctx.gpr[31] = (0x088F2690u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2690u) goto L_088F2690;
    return;
L_088F2690:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088F2694;
L_088F2694:
    if (ctx.gpr[4] != ctx.gpr[30]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F26CC;
    }
    goto L_088F269C;
L_088F269C:
    ctx.gpr[31] = (0x088F26A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F26A4u) goto L_088F26A4;
    return;
L_088F26A4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F26CC;
    }
    goto L_088F26AC;
L_088F26AC:
    ctx.gpr[31] = (0x088F26B4u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F26B4u) goto L_088F26B4;
    return;
L_088F26B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088F26C8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F26C8u) goto L_088F26C8;
    return;
L_088F26C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F26CC;
L_088F26CC:
    if (ctx.gpr[4] != ctx.gpr[22]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F27F4;
    }
    goto L_088F26D4;
L_088F26D4:
    ctx.gpr[31] = (0x088F26DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F26DCu) goto L_088F26DC;
    return;
L_088F26DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F26FC;
      }
      goto L_088F26E4;
    }
L_088F26E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F27F4;
    }
    goto L_088F26FC;
L_088F26FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[17]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F273C;
      }
      goto L_088F2718;
    }
L_088F2718:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F2724u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2724u) goto L_088F2724;
    return;
L_088F2724:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F27E4;
      }
      goto L_088F273C;
    }
L_088F273C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F27C8;
      }
      goto L_088F2760;
    }
L_088F2760:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F2784;
      }
      goto L_088F2774;
    }
L_088F2774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    goto L_088F2784;
L_088F2784:
    ctx.gpr[31] = (0x088F278Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F278Cu) goto L_088F278C;
    return;
L_088F278C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x088F27B4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F27B4u) goto L_088F27B4;
    return;
L_088F27B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F27E4;
      }
      goto L_088F27C8;
    }
L_088F27C8:
    ctx.gpr[31] = (0x088F27D0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F27D0u) goto L_088F27D0;
    return;
L_088F27D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_088F27E4;
L_088F27E4:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F27F4;
    }
    goto L_088F27EC;
L_088F27EC:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F27F4;
L_088F27F4:
    if (ctx.gpr[4] != ctx.gpr[23]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F2880;
    }
    goto L_088F27FC;
L_088F27FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2848;
      }
      goto L_088F281C;
    }
L_088F281C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F2848;
      }
      goto L_088F2830;
    }
L_088F2830:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F283Cu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F283Cu) goto L_088F283C;
    return;
L_088F283C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088F2858;
      }
      goto L_088F2848;
    }
L_088F2848:
    ctx.gpr[31] = (0x088F2850u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2850u) goto L_088F2850;
    return;
L_088F2850:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    goto L_088F2858;
L_088F2858:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F287C;
      }
      goto L_088F286C;
    }
L_088F286C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F287C;
      }
      goto L_088F2878;
    }
L_088F2878:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_088F287C;
L_088F287C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F2880;
L_088F2880:
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F28FC;
    }
    goto L_088F288C;
L_088F288C:
    ctx.gpr[31] = (0x088F2894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F2894u) goto L_088F2894;
    return;
L_088F2894:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F28AC;
      }
      goto L_088F289C;
    }
L_088F289C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F28FC;
    }
    goto L_088F28AC;
L_088F28AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088F28D8;
      }
      goto L_088F28BC;
    }
L_088F28BC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F28C8u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F28C8u) goto L_088F28C8;
    return;
L_088F28C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_088F28EC;
      }
      goto L_088F28D8;
    }
L_088F28D8:
    ctx.gpr[31] = (0x088F28E0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F28E0u) goto L_088F28E0;
    return;
L_088F28E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    goto L_088F28EC;
L_088F28EC:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F28FC;
    }
    goto L_088F28F4;
L_088F28F4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F28FC;
L_088F28FC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088F2B08;
      }
      goto L_088F2904;
    }
L_088F2904:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F2934;
      }
      goto L_088F291C;
    }
L_088F291C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F2928u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2928u) goto L_088F2928;
    return;
L_088F2928:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088F2944;
      }
      goto L_088F2934;
    }
L_088F2934:
    ctx.gpr[31] = (0x088F293Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F293Cu) goto L_088F293C;
    return;
L_088F293C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    goto L_088F2944;
L_088F2944:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F2B08;
      }
      goto L_088F2954;
    }
L_088F2954:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F2B08;
      }
      goto L_088F295C;
    }
L_088F295C:
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088F2A70;
    }
    goto L_088F2964;
L_088F2964:
    ctx.gpr[31] = (0x088F296Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F296Cu) goto L_088F296C;
    return;
L_088F296C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088F2A70;
    }
    goto L_088F2974;
L_088F2974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (0u | 11u);
      if (branch_taken) {
          goto L_088F2A5C;
      }
      goto L_088F2984;
    }
L_088F2984:
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(ctx.gpr[17]));
        goto L_088F2A30;
    }
    goto L_088F29D0;
L_088F29D0:
    ctx.gpr[31] = (0x088F29D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088F29D8u) goto L_088F29D8;
    return;
L_088F29D8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F2A00;
      }
      goto L_088F29E0;
    }
L_088F29E0:
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[19] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F2A60;
      }
      goto L_088F2A00;
    }
L_088F2A00:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[31] = (0x088F2A0Cu);
    ctx.gpr[4] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F2A0Cu) goto L_088F2A0C;
    return;
L_088F2A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F2A60;
      }
      goto L_088F2A30;
    }
L_088F2A30:
    ctx.gpr[31] = (0x088F2A38u);
    ctx.gpr[4] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F2A38u) goto L_088F2A38;
    return;
L_088F2A38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F2A60;
      }
      goto L_088F2A5C;
    }
L_088F2A5C:
    ctx.gpr[19] = (0u | 6u);
    goto L_088F2A60;
L_088F2A60:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), 0u);
    ctx.gpr[31] = (0x088F2A6Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2A6Cu) goto L_088F2A6C;
    return;
L_088F2A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088F2A70;
L_088F2A70:
    if (ctx.gpr[4] != ctx.gpr[30]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088F2A9C;
    }
    goto L_088F2A78;
L_088F2A78:
    ctx.gpr[31] = (0x088F2A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F2A80u) goto L_088F2A80;
    return;
L_088F2A80:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088F2A9C;
    }
    goto L_088F2A88;
L_088F2A88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088F2A98u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(440), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2A98u) goto L_088F2A98;
    return;
L_088F2A98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088F2A9C;
L_088F2A9C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088F2AD4;
      }
      goto L_088F2AA4;
    }
L_088F2AA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088F2AC8;
      }
      goto L_088F2AB4;
    }
L_088F2AB4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[21]);
    ctx.gpr[31] = (0x088F2AC0u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2AC0u) goto L_088F2AC0;
    return;
L_088F2AC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088F2AD4;
      }
      goto L_088F2AC8;
    }
L_088F2AC8:
    ctx.gpr[31] = (0x088F2AD0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2AD0u) goto L_088F2AD0;
    return;
L_088F2AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088F2AD4;
L_088F2AD4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088F2B08;
      }
      goto L_088F2ADC;
    }
L_088F2ADC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2B00;
      }
      goto L_088F2AEC;
    }
L_088F2AEC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(436), 0u);
    ctx.gpr[31] = (0x088F2AF8u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2AF8u) goto L_088F2AF8;
    return;
L_088F2AF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2B08;
      }
      goto L_088F2B00;
    }
L_088F2B00:
    ctx.gpr[31] = (0x088F2B08u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2B08u) goto L_088F2B08;
    return;
L_088F2B08:
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
L_088F2B38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F2B64u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 538u, 0x088EA6D0u>(ctx, &aot_mem) && ctx.pc == 0x088F2B64u) goto L_088F2B64;
    return;
L_088F2B64:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088F2B78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F2B78u) goto L_088F2B78;
    return;
L_088F2B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F2FCC;
      }
      goto L_088F2B88;
    }
L_088F2B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[22] = (0u | 8u);
      if (branch_taken) {
          goto L_088F2C78;
      }
      goto L_088F2B9C;
    }
L_088F2B9C:
    ctx.gpr[31] = (0x088F2BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F2BA4u) goto L_088F2BA4;
    return;
L_088F2BA4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088F2C7C;
    }
    goto L_088F2BAC;
L_088F2BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[20] = (0u | 11u);
      if (branch_taken) {
          goto L_088F2C08;
      }
      goto L_088F2BBC;
    }
L_088F2BBC:
    ctx.gpr[31] = (0x088F2BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088F2BC4u) goto L_088F2BC4;
    return;
L_088F2BC4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F2BE8;
      }
      goto L_088F2BCC;
    }
L_088F2BCC:
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 6u);
      if (branch_taken) {
          goto L_088F2C70;
      }
      goto L_088F2BE8;
    }
L_088F2BE8:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 23u);
    ctx.gpr[31] = (0x088F2C00u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F2C00u) goto L_088F2C00;
    return;
L_088F2C00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2C70;
      }
      goto L_088F2C08;
    }
L_088F2C08:
    ctx.gpr[31] = (0x088F2C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088F2C10u) goto L_088F2C10;
    return;
L_088F2C10:
    if (ctx.gpr[2] != ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
        goto L_088F2C3C;
    }
    goto L_088F2C18;
L_088F2C18:
    ctx.gpr[31] = (0x088F2C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 261u, 0x088E90DCu>(ctx, &aot_mem) && ctx.pc == 0x088F2C20u) goto L_088F2C20;
    return;
L_088F2C20:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x088F2C2Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F2C2Cu) goto L_088F2C2C;
    return;
L_088F2C2C:
    ctx.gpr[31] = (0x088F2C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088F2C34u) goto L_088F2C34;
    return;
L_088F2C34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2C70;
      }
      goto L_088F2C3C;
    }
L_088F2C3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_088F2C54;
      }
      goto L_088F2C4C;
    }
L_088F2C4C:
    ctx.gpr[31] = (0x088F2C54u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F2C54u) goto L_088F2C54;
    return;
L_088F2C54:
    ctx.gpr[31] = (0x088F2C5Cu);
    ctx.gpr[4] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F2C5Cu) goto L_088F2C5C;
    return;
L_088F2C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088F2C70;
L_088F2C70:
    ctx.gpr[31] = (0x088F2C78u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2C78u) goto L_088F2C78;
    return;
L_088F2C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088F2C7C;
L_088F2C7C:
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F2CE4;
    }
    goto L_088F2C88;
L_088F2C88:
    ctx.gpr[31] = (0x088F2C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F2C90u) goto L_088F2C90;
    return;
L_088F2C90:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F2CE4;
    }
    goto L_088F2C98;
L_088F2C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088F2CBC;
      }
      goto L_088F2CA8;
    }
L_088F2CA8:
    ctx.gpr[31] = (0x088F2CB0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 783u, 0x08833B08u>(ctx, &aot_mem) && ctx.pc == 0x088F2CB0u) goto L_088F2CB0;
    return;
L_088F2CB0:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x088F2CBCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F2CBCu) goto L_088F2CBC;
    return;
L_088F2CBC:
    ctx.gpr[31] = (0x088F2CC4u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F2CC4u) goto L_088F2CC4;
    return;
L_088F2CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088F2CE0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2CE0u) goto L_088F2CE0;
    return;
L_088F2CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F2CE4;
L_088F2CE4:
    if (ctx.gpr[4] != ctx.gpr[22]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F2E34;
    }
    goto L_088F2CEC;
L_088F2CEC:
    ctx.gpr[31] = (0x088F2CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F2CF4u) goto L_088F2CF4;
    return;
L_088F2CF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F2D14;
      }
      goto L_088F2CFC;
    }
L_088F2CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F2E34;
    }
    goto L_088F2D14;
L_088F2D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(496)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F2D84;
      }
      goto L_088F2D60;
    }
L_088F2D60:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F2D6Cu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2D6Cu) goto L_088F2D6C;
    return;
L_088F2D6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F2E24;
      }
      goto L_088F2D84;
    }
L_088F2D84:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[20]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2E08;
      }
      goto L_088F2DA8;
    }
L_088F2DA8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F2DCC;
      }
      goto L_088F2DBC;
    }
L_088F2DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    goto L_088F2DCC;
L_088F2DCC:
    ctx.gpr[31] = (0x088F2DD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F2DD4u) goto L_088F2DD4;
    return;
L_088F2DD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[31] = (0x088F2DF4u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2DF4u) goto L_088F2DF4;
    return;
L_088F2DF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F2E24;
      }
      goto L_088F2E08;
    }
L_088F2E08:
    ctx.gpr[31] = (0x088F2E10u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2E10u) goto L_088F2E10;
    return;
L_088F2E10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    goto L_088F2E24;
L_088F2E24:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F2E34;
    }
    goto L_088F2E2C;
L_088F2E2C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F2E34;
L_088F2E34:
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F2EF4;
    }
    goto L_088F2E40;
L_088F2E40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F2EBC;
      }
      goto L_088F2E60;
    }
L_088F2E60:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(496)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F2EBC;
      }
      goto L_088F2EA4;
    }
L_088F2EA4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F2EB0u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2EB0u) goto L_088F2EB0;
    return;
L_088F2EB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088F2ECC;
      }
      goto L_088F2EBC;
    }
L_088F2EBC:
    ctx.gpr[31] = (0x088F2EC4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2EC4u) goto L_088F2EC4;
    return;
L_088F2EC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    goto L_088F2ECC;
L_088F2ECC:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F2EF0;
      }
      goto L_088F2EE0;
    }
L_088F2EE0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F2EF0;
      }
      goto L_088F2EEC;
    }
L_088F2EEC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_088F2EF0;
L_088F2EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F2EF4;
L_088F2EF4:
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F2F70;
    }
    goto L_088F2F00;
L_088F2F00:
    ctx.gpr[31] = (0x088F2F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F2F08u) goto L_088F2F08;
    return;
L_088F2F08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F2F20;
      }
      goto L_088F2F10;
    }
L_088F2F10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F2F70;
    }
    goto L_088F2F20;
L_088F2F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088F2F4C;
      }
      goto L_088F2F30;
    }
L_088F2F30:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F2F3Cu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2F3Cu) goto L_088F2F3C;
    return;
L_088F2F3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_088F2F60;
      }
      goto L_088F2F4C;
    }
L_088F2F4C:
    ctx.gpr[31] = (0x088F2F54u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2F54u) goto L_088F2F54;
    return;
L_088F2F54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    goto L_088F2F60;
L_088F2F60:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F2F70;
    }
    goto L_088F2F68;
L_088F2F68:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F2F70;
L_088F2F70:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088F2FCC;
      }
      goto L_088F2F78;
    }
L_088F2F78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F2FA8;
      }
      goto L_088F2F90;
    }
L_088F2F90:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[31] = (0x088F2F9Cu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2F9Cu) goto L_088F2F9C;
    return;
L_088F2F9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088F2FB8;
      }
      goto L_088F2FA8;
    }
L_088F2FA8:
    ctx.gpr[31] = (0x088F2FB0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F2FB0u) goto L_088F2FB0;
    return;
L_088F2FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    goto L_088F2FB8;
L_088F2FB8:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F2FCC;
      }
      goto L_088F2FC8;
    }
L_088F2FC8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    goto L_088F2FCC;
L_088F2FCC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F2FF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F3028u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 538u, 0x088EA6D0u>(ctx, &aot_mem) && ctx.pc == 0x088F3028u) goto L_088F3028;
    return;
L_088F3028:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088F303Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F303Cu) goto L_088F303C;
    return;
L_088F303C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(440)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (0u | 2u);
      if (branch_taken) {
          goto L_088F347C;
      }
      goto L_088F3050;
    }
L_088F3050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[21] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[23] = (0u | 64u);
      if (branch_taken) {
          goto L_088F31B0;
      }
      goto L_088F3068;
    }
L_088F3068:
    ctx.gpr[31] = (0x088F3070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F3070u) goto L_088F3070;
    return;
L_088F3070:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088F31B4;
    }
    goto L_088F3078;
L_088F3078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(600));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (0u | 11u);
      if (branch_taken) {
          goto L_088F30D4;
      }
      goto L_088F30B4;
    }
L_088F30B4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[20] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[21]);
      if (branch_taken) {
          goto L_088F31A8;
      }
      goto L_088F30D4;
    }
L_088F30D4:
    ctx.gpr[31] = (0x088F30DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 334u, 0x088E9614u>(ctx, &aot_mem) && ctx.pc == 0x088F30DCu) goto L_088F30DC;
    return;
L_088F30DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
        goto L_088F30FC;
    }
    goto L_088F30EC;
L_088F30EC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[30]);
      if (branch_taken) {
          goto L_088F31A8;
      }
      goto L_088F30FC;
    }
L_088F30FC:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(600));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3174;
      }
      goto L_088F312C;
    }
L_088F312C:
    ctx.gpr[31] = (0x088F3134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088F3134u) goto L_088F3134;
    return;
L_088F3134:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088F3154;
      }
      goto L_088F313C;
    }
L_088F313C:
    ctx.gpr[31] = (0x088F3144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 363u, 0x088E9814u>(ctx, &aot_mem) && ctx.pc == 0x088F3144u) goto L_088F3144;
    return;
L_088F3144:
    ctx.gpr[31] = (0x088F314Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088F314Cu) goto L_088F314C;
    return;
L_088F314C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_088F3194;
      }
      goto L_088F3154;
    }
L_088F3154:
    ctx.gpr[31] = (0x088F315Cu);
    ctx.gpr[4] = (0u | 26u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F315Cu) goto L_088F315C;
    return;
L_088F315C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088F3190;
      }
      goto L_088F3174;
    }
L_088F3174:
    ctx.gpr[31] = (0x088F317Cu);
    ctx.gpr[4] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F317Cu) goto L_088F317C;
    return;
L_088F317C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088F3190;
L_088F3190:
    ctx.gpr[4] = (0u | 6u);
    goto L_088F3194;
L_088F3194:
    ctx.gpr[31] = (0x088F319Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F319Cu) goto L_088F319C;
    return;
L_088F319C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    goto L_088F31A8;
L_088F31A8:
    ctx.gpr[31] = (0x088F31B0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F31B0u) goto L_088F31B0;
    return;
L_088F31B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088F31B4;
L_088F31B4:
    if (ctx.gpr[4] != ctx.gpr[23]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F31EC;
    }
    goto L_088F31BC;
L_088F31BC:
    ctx.gpr[31] = (0x088F31C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F31C4u) goto L_088F31C4;
    return;
L_088F31C4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F31EC;
    }
    goto L_088F31CC;
L_088F31CC:
    ctx.gpr[31] = (0x088F31D4u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F31D4u) goto L_088F31D4;
    return;
L_088F31D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088F31E8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F31E8u) goto L_088F31E8;
    return;
L_088F31E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F31EC;
L_088F31EC:
    if (ctx.gpr[4] != ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F3314;
    }
    goto L_088F31F4;
L_088F31F4:
    ctx.gpr[31] = (0x088F31FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F31FCu) goto L_088F31FC;
    return;
L_088F31FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F321C;
      }
      goto L_088F3204;
    }
L_088F3204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F3314;
    }
    goto L_088F321C;
L_088F321C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[17]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F325C;
      }
      goto L_088F3238;
    }
L_088F3238:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F3244u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3244u) goto L_088F3244;
    return;
L_088F3244:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F3304;
      }
      goto L_088F325C;
    }
L_088F325C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F32E8;
      }
      goto L_088F3280;
    }
L_088F3280:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F32A4;
      }
      goto L_088F3294;
    }
L_088F3294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    goto L_088F32A4;
L_088F32A4:
    ctx.gpr[31] = (0x088F32ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F32ACu) goto L_088F32AC;
    return;
L_088F32AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x088F32D4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F32D4u) goto L_088F32D4;
    return;
L_088F32D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F3304;
      }
      goto L_088F32E8;
    }
L_088F32E8:
    ctx.gpr[31] = (0x088F32F0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F32F0u) goto L_088F32F0;
    return;
L_088F32F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_088F3304;
L_088F3304:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F3314;
    }
    goto L_088F330C;
L_088F330C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F3314;
L_088F3314:
    if (ctx.gpr[4] != ctx.gpr[22]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F33A0;
    }
    goto L_088F331C;
L_088F331C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3368;
      }
      goto L_088F333C;
    }
L_088F333C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F3368;
      }
      goto L_088F3350;
    }
L_088F3350:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F335Cu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F335Cu) goto L_088F335C;
    return;
L_088F335C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088F3378;
      }
      goto L_088F3368;
    }
L_088F3368:
    ctx.gpr[31] = (0x088F3370u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3370u) goto L_088F3370;
    return;
L_088F3370:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    goto L_088F3378;
L_088F3378:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F339C;
      }
      goto L_088F338C;
    }
L_088F338C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F339C;
      }
      goto L_088F3398;
    }
L_088F3398:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_088F339C;
L_088F339C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F33A0;
L_088F33A0:
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F341C;
    }
    goto L_088F33AC;
L_088F33AC:
    ctx.gpr[31] = (0x088F33B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F33B4u) goto L_088F33B4;
    return;
L_088F33B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F33CC;
      }
      goto L_088F33BC;
    }
L_088F33BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F341C;
    }
    goto L_088F33CC;
L_088F33CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088F33F8;
      }
      goto L_088F33DC;
    }
L_088F33DC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F33E8u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F33E8u) goto L_088F33E8;
    return;
L_088F33E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_088F340C;
      }
      goto L_088F33F8;
    }
L_088F33F8:
    ctx.gpr[31] = (0x088F3400u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3400u) goto L_088F3400;
    return;
L_088F3400:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    goto L_088F340C;
L_088F340C:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F341C;
    }
    goto L_088F3414;
L_088F3414:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F341C;
L_088F341C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088F3628;
      }
      goto L_088F3424;
    }
L_088F3424:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F3454;
      }
      goto L_088F343C;
    }
L_088F343C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F3448u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3448u) goto L_088F3448;
    return;
L_088F3448:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088F3464;
      }
      goto L_088F3454;
    }
L_088F3454:
    ctx.gpr[31] = (0x088F345Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F345Cu) goto L_088F345C;
    return;
L_088F345C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    goto L_088F3464;
L_088F3464:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F3628;
      }
      goto L_088F3474;
    }
L_088F3474:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F3628;
      }
      goto L_088F347C;
    }
L_088F347C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088F3628;
      }
      goto L_088F3484;
    }
L_088F3484:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[20] = (0u | 64u);
      if (branch_taken) {
          goto L_088F3594;
      }
      goto L_088F3498;
    }
L_088F3498:
    ctx.gpr[31] = (0x088F34A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F34A0u) goto L_088F34A0;
    return;
L_088F34A0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088F3598;
    }
    goto L_088F34A8;
L_088F34A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (0u | 11u);
      if (branch_taken) {
          goto L_088F3584;
      }
      goto L_088F34B8;
    }
L_088F34B8:
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(600));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(ctx.gpr[19]));
        goto L_088F3558;
    }
    goto L_088F34F8;
L_088F34F8:
    ctx.gpr[31] = (0x088F3500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088F3500u) goto L_088F3500;
    return;
L_088F3500:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F3528;
      }
      goto L_088F3508;
    }
L_088F3508:
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[21] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F3588;
      }
      goto L_088F3528;
    }
L_088F3528:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(448), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[31] = (0x088F3534u);
    ctx.gpr[4] = (0u | 26u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F3534u) goto L_088F3534;
    return;
L_088F3534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F3588;
      }
      goto L_088F3558;
    }
L_088F3558:
    ctx.gpr[31] = (0x088F3560u);
    ctx.gpr[4] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F3560u) goto L_088F3560;
    return;
L_088F3560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F3588;
      }
      goto L_088F3584;
    }
L_088F3584:
    ctx.gpr[21] = (0u | 6u);
    goto L_088F3588;
L_088F3588:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), 0u);
    ctx.gpr[31] = (0x088F3594u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3594u) goto L_088F3594;
    return;
L_088F3594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088F3598;
L_088F3598:
    if (ctx.gpr[4] != ctx.gpr[20]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088F35BC;
    }
    goto L_088F35A0;
L_088F35A0:
    ctx.gpr[31] = (0x088F35A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F35A8u) goto L_088F35A8;
    return;
L_088F35A8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088F35BC;
    }
    goto L_088F35B0;
L_088F35B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088F35BC;
L_088F35BC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088F35F4;
      }
      goto L_088F35C4;
    }
L_088F35C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088F35E8;
      }
      goto L_088F35D4;
    }
L_088F35D4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(436), ctx.gpr[17]);
    ctx.gpr[31] = (0x088F35E0u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F35E0u) goto L_088F35E0;
    return;
L_088F35E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088F35F4;
      }
      goto L_088F35E8;
    }
L_088F35E8:
    ctx.gpr[31] = (0x088F35F0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F35F0u) goto L_088F35F0;
    return;
L_088F35F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088F35F4;
L_088F35F4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088F3628;
      }
      goto L_088F35FC;
    }
L_088F35FC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(436)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3620;
      }
      goto L_088F360C;
    }
L_088F360C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(436), 0u);
    ctx.gpr[31] = (0x088F3618u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3618u) goto L_088F3618;
    return;
L_088F3618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3628;
      }
      goto L_088F3620;
    }
L_088F3620:
    ctx.gpr[31] = (0x088F3628u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3628u) goto L_088F3628;
    return;
L_088F3628:
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
L_088F3658:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F3684u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 538u, 0x088EA6D0u>(ctx, &aot_mem) && ctx.pc == 0x088F3684u) goto L_088F3684;
    return;
L_088F3684:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088F3698u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F3698u) goto L_088F3698;
    return;
L_088F3698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F3AD8;
      }
      goto L_088F36A8;
    }
L_088F36A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[22] = (0u | 8u);
      if (branch_taken) {
          goto L_088F379C;
      }
      goto L_088F36BC;
    }
L_088F36BC:
    ctx.gpr[31] = (0x088F36C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F36C4u) goto L_088F36C4;
    return;
L_088F36C4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088F37A0;
    }
    goto L_088F36CC;
L_088F36CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[20] = (0u | 11u);
      if (branch_taken) {
          goto L_088F372C;
      }
      goto L_088F36DC;
    }
L_088F36DC:
    ctx.gpr[31] = (0x088F36E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088F36E4u) goto L_088F36E4;
    return;
L_088F36E4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088F370C;
      }
      goto L_088F36EC;
    }
L_088F36EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 6u);
      if (branch_taken) {
          goto L_088F3794;
      }
      goto L_088F370C;
    }
L_088F370C:
    ctx.gpr[31] = (0x088F3714u);
    ctx.gpr[4] = (0u | 26u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F3714u) goto L_088F3714;
    return;
L_088F3714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088F3794;
      }
      goto L_088F372C;
    }
L_088F372C:
    ctx.gpr[31] = (0x088F3734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088F3734u) goto L_088F3734;
    return;
L_088F3734:
    if (ctx.gpr[2] != ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
        goto L_088F3760;
    }
    goto L_088F373C;
L_088F373C:
    ctx.gpr[31] = (0x088F3744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 363u, 0x088E9814u>(ctx, &aot_mem) && ctx.pc == 0x088F3744u) goto L_088F3744;
    return;
L_088F3744:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088F3750u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F3750u) goto L_088F3750;
    return;
L_088F3750:
    ctx.gpr[31] = (0x088F3758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088F3758u) goto L_088F3758;
    return;
L_088F3758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3794;
      }
      goto L_088F3760;
    }
L_088F3760:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_088F3778;
      }
      goto L_088F3770;
    }
L_088F3770:
    ctx.gpr[31] = (0x088F3778u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F3778u) goto L_088F3778;
    return;
L_088F3778:
    ctx.gpr[31] = (0x088F3780u);
    ctx.gpr[4] = (0u | 26u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F3780u) goto L_088F3780;
    return;
L_088F3780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088F3794;
L_088F3794:
    ctx.gpr[31] = (0x088F379Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F379Cu) goto L_088F379C;
    return;
L_088F379C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088F37A0;
L_088F37A0:
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F3808;
    }
    goto L_088F37AC;
L_088F37AC:
    ctx.gpr[31] = (0x088F37B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F37B4u) goto L_088F37B4;
    return;
L_088F37B4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F3808;
    }
    goto L_088F37BC;
L_088F37BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088F37E0;
      }
      goto L_088F37CC;
    }
L_088F37CC:
    ctx.gpr[31] = (0x088F37D4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 798u, 0x08833C24u>(ctx, &aot_mem) && ctx.pc == 0x088F37D4u) goto L_088F37D4;
    return;
L_088F37D4:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088F37E0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F37E0u) goto L_088F37E0;
    return;
L_088F37E0:
    ctx.gpr[31] = (0x088F37E8u);
    ctx.gpr[4] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F37E8u) goto L_088F37E8;
    return;
L_088F37E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088F3804u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3804u) goto L_088F3804;
    return;
L_088F3804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F3808;
L_088F3808:
    if (ctx.gpr[4] != ctx.gpr[22]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F394C;
    }
    goto L_088F3810;
L_088F3810:
    ctx.gpr[31] = (0x088F3818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F3818u) goto L_088F3818;
    return;
L_088F3818:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F3838;
      }
      goto L_088F3820;
    }
L_088F3820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F394C;
    }
    goto L_088F3838;
L_088F3838:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(600));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F389C;
      }
      goto L_088F3878;
    }
L_088F3878:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F3884u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3884u) goto L_088F3884;
    return;
L_088F3884:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F393C;
      }
      goto L_088F389C;
    }
L_088F389C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[20]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3920;
      }
      goto L_088F38C0;
    }
L_088F38C0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F38E4;
      }
      goto L_088F38D4;
    }
L_088F38D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    goto L_088F38E4;
L_088F38E4:
    ctx.gpr[31] = (0x088F38ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F38ECu) goto L_088F38EC;
    return;
L_088F38EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[31] = (0x088F390Cu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F390Cu) goto L_088F390C;
    return;
L_088F390C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F393C;
      }
      goto L_088F3920;
    }
L_088F3920:
    ctx.gpr[31] = (0x088F3928u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3928u) goto L_088F3928;
    return;
L_088F3928:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    goto L_088F393C;
L_088F393C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F394C;
    }
    goto L_088F3944;
L_088F3944:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F394C;
L_088F394C:
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F3A00;
    }
    goto L_088F3958;
L_088F3958:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F39C8;
      }
      goto L_088F3978;
    }
L_088F3978:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(600));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(60)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F39C8;
      }
      goto L_088F39B0;
    }
L_088F39B0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F39BCu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F39BCu) goto L_088F39BC;
    return;
L_088F39BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088F39D8;
      }
      goto L_088F39C8;
    }
L_088F39C8:
    ctx.gpr[31] = (0x088F39D0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F39D0u) goto L_088F39D0;
    return;
L_088F39D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    goto L_088F39D8;
L_088F39D8:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F39FC;
      }
      goto L_088F39EC;
    }
L_088F39EC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F39FC;
      }
      goto L_088F39F8;
    }
L_088F39F8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_088F39FC;
L_088F39FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F3A00;
L_088F3A00:
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F3A7C;
    }
    goto L_088F3A0C;
L_088F3A0C:
    ctx.gpr[31] = (0x088F3A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F3A14u) goto L_088F3A14;
    return;
L_088F3A14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F3A2C;
      }
      goto L_088F3A1C;
    }
L_088F3A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F3A7C;
    }
    goto L_088F3A2C;
L_088F3A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088F3A58;
      }
      goto L_088F3A3C;
    }
L_088F3A3C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F3A48u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3A48u) goto L_088F3A48;
    return;
L_088F3A48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_088F3A6C;
      }
      goto L_088F3A58;
    }
L_088F3A58:
    ctx.gpr[31] = (0x088F3A60u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3A60u) goto L_088F3A60;
    return;
L_088F3A60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    goto L_088F3A6C;
L_088F3A6C:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F3A7C;
    }
    goto L_088F3A74;
L_088F3A74:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F3A7C;
L_088F3A7C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088F3AD8;
      }
      goto L_088F3A84;
    }
L_088F3A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F3AB4;
      }
      goto L_088F3A9C;
    }
L_088F3A9C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[31] = (0x088F3AA8u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3AA8u) goto L_088F3AA8;
    return;
L_088F3AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088F3AC4;
      }
      goto L_088F3AB4;
    }
L_088F3AB4:
    ctx.gpr[31] = (0x088F3ABCu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3ABCu) goto L_088F3ABC;
    return;
L_088F3ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    goto L_088F3AC4;
L_088F3AC4:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F3AD8;
      }
      goto L_088F3AD4;
    }
L_088F3AD4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    goto L_088F3AD8;
L_088F3AD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F3B00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F3B30u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 538u, 0x088EA6D0u>(ctx, &aot_mem) && ctx.pc == 0x088F3B30u) goto L_088F3B30;
    return;
L_088F3B30:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088F3B44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F3B44u) goto L_088F3B44;
    return;
L_088F3B44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F3F44;
      }
      goto L_088F3B54;
    }
L_088F3B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[22] = (0u | 8u);
      if (branch_taken) {
          goto L_088F3C74;
      }
      goto L_088F3B68;
    }
L_088F3B68:
    ctx.gpr[31] = (0x088F3B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F3B70u) goto L_088F3B70;
    return;
L_088F3B70:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        goto L_088F3C78;
    }
    goto L_088F3B78;
L_088F3B78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(464)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[8] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[20] = (0u | 11u);
      if (branch_taken) {
          goto L_088F3BE0;
      }
      goto L_088F3BC0;
    }
L_088F3BC0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(440), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[20] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[22]);
      if (branch_taken) {
          goto L_088F3C6C;
      }
      goto L_088F3BE0;
    }
L_088F3BE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3C38;
      }
      goto L_088F3BF0;
    }
L_088F3BF0:
    ctx.gpr[31] = (0x088F3BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088F3BF8u) goto L_088F3BF8;
    return;
L_088F3BF8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088F3C18;
      }
      goto L_088F3C00;
    }
L_088F3C00:
    ctx.gpr[31] = (0x088F3C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 438u, 0x088E9D4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F3C08u) goto L_088F3C08;
    return;
L_088F3C08:
    ctx.gpr[31] = (0x088F3C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem) && ctx.pc == 0x088F3C10u) goto L_088F3C10;
    return;
L_088F3C10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 7u);
      if (branch_taken) {
          goto L_088F3C58;
      }
      goto L_088F3C18;
    }
L_088F3C18:
    ctx.gpr[31] = (0x088F3C20u);
    ctx.gpr[4] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F3C20u) goto L_088F3C20;
    return;
L_088F3C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088F3C54;
      }
      goto L_088F3C38;
    }
L_088F3C38:
    ctx.gpr[31] = (0x088F3C40u);
    ctx.gpr[4] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F3C40u) goto L_088F3C40;
    return;
L_088F3C40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088F3C54;
L_088F3C54:
    ctx.gpr[23] = (0u | 7u);
    goto L_088F3C58;
L_088F3C58:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x088F3C64u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F3C64u) goto L_088F3C64;
    return;
L_088F3C64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(444), ctx.gpr[23]);
    goto L_088F3C6C;
L_088F3C6C:
    ctx.gpr[31] = (0x088F3C74u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3C74u) goto L_088F3C74;
    return;
L_088F3C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088F3C78;
L_088F3C78:
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F3CB4;
    }
    goto L_088F3C84;
L_088F3C84:
    ctx.gpr[31] = (0x088F3C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F3C8Cu) goto L_088F3C8C;
    return;
L_088F3C8C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F3CB4;
    }
    goto L_088F3C94;
L_088F3C94:
    ctx.gpr[31] = (0x088F3C9Cu);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F3C9Cu) goto L_088F3C9C;
    return;
L_088F3C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x088F3CB0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3CB0u) goto L_088F3CB0;
    return;
L_088F3CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F3CB4;
L_088F3CB4:
    if (ctx.gpr[4] != ctx.gpr[22]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F3DDC;
    }
    goto L_088F3CBC;
L_088F3CBC:
    ctx.gpr[31] = (0x088F3CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F3CC4u) goto L_088F3CC4;
    return;
L_088F3CC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F3CE4;
      }
      goto L_088F3CCC;
    }
L_088F3CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F3DDC;
    }
    goto L_088F3CE4;
L_088F3CE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[17]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F3D24;
      }
      goto L_088F3D00;
    }
L_088F3D00:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F3D0Cu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3D0Cu) goto L_088F3D0C;
    return;
L_088F3D0C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F3DCC;
      }
      goto L_088F3D24;
    }
L_088F3D24:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3DB0;
      }
      goto L_088F3D48;
    }
L_088F3D48:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F3D6C;
      }
      goto L_088F3D5C;
    }
L_088F3D5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    goto L_088F3D6C;
L_088F3D6C:
    ctx.gpr[31] = (0x088F3D74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F3D74u) goto L_088F3D74;
    return;
L_088F3D74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x088F3D9Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3D9Cu) goto L_088F3D9C;
    return;
L_088F3D9C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F3DCC;
      }
      goto L_088F3DB0;
    }
L_088F3DB0:
    ctx.gpr[31] = (0x088F3DB8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3DB8u) goto L_088F3DB8;
    return;
L_088F3DB8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_088F3DCC;
L_088F3DCC:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F3DDC;
    }
    goto L_088F3DD4;
L_088F3DD4:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F3DDC;
L_088F3DDC:
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F3E6C;
    }
    goto L_088F3DE8;
L_088F3DE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F3E34;
      }
      goto L_088F3E08;
    }
L_088F3E08:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F3E34;
      }
      goto L_088F3E1C;
    }
L_088F3E1C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F3E28u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3E28u) goto L_088F3E28;
    return;
L_088F3E28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088F3E44;
      }
      goto L_088F3E34;
    }
L_088F3E34:
    ctx.gpr[31] = (0x088F3E3Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3E3Cu) goto L_088F3E3C;
    return;
L_088F3E3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    goto L_088F3E44;
L_088F3E44:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F3E68;
      }
      goto L_088F3E58;
    }
L_088F3E58:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F3E68;
      }
      goto L_088F3E64;
    }
L_088F3E64:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_088F3E68;
L_088F3E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F3E6C;
L_088F3E6C:
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F3EE8;
    }
    goto L_088F3E78;
L_088F3E78:
    ctx.gpr[31] = (0x088F3E80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F3E80u) goto L_088F3E80;
    return;
L_088F3E80:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F3E98;
      }
      goto L_088F3E88;
    }
L_088F3E88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F3EE8;
    }
    goto L_088F3E98;
L_088F3E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088F3EC4;
      }
      goto L_088F3EA8;
    }
L_088F3EA8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F3EB4u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3EB4u) goto L_088F3EB4;
    return;
L_088F3EB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_088F3ED8;
      }
      goto L_088F3EC4;
    }
L_088F3EC4:
    ctx.gpr[31] = (0x088F3ECCu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3ECCu) goto L_088F3ECC;
    return;
L_088F3ECC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    goto L_088F3ED8;
L_088F3ED8:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F3EE8;
    }
    goto L_088F3EE0;
L_088F3EE0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F3EE8;
L_088F3EE8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088F3F44;
      }
      goto L_088F3EF0;
    }
L_088F3EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F3F20;
      }
      goto L_088F3F08;
    }
L_088F3F08:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[31] = (0x088F3F14u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3F14u) goto L_088F3F14;
    return;
L_088F3F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088F3F30;
      }
      goto L_088F3F20;
    }
L_088F3F20:
    ctx.gpr[31] = (0x088F3F28u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F3F28u) goto L_088F3F28;
    return;
L_088F3F28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_088F3F30;
L_088F3F30:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F3F44;
      }
      goto L_088F3F40;
    }
L_088F3F40:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    goto L_088F3F44;
L_088F3F44:
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
L_088F3F70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F3F9Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 538u, 0x088EA6D0u>(ctx, &aot_mem) && ctx.pc == 0x088F3F9Cu) goto L_088F3F9C;
    return;
L_088F3F9C:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088F3FB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 63u, 0x088F43B4u>(ctx, &aot_mem) && ctx.pc == 0x088F3FB0u) goto L_088F3FB0;
    return;
L_088F3FB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[20] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[21] = (0u | 8u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 6u, 0x088F404Cu>(ctx, &aot_mem); return;
      }
      goto L_088F3FC8;
    }
L_088F3FC8:
    ctx.gpr[31] = (0x088F3FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 145u, 0x088F4854u>(ctx, &aot_mem) && ctx.pc == 0x088F3FD0u) goto L_088F3FD0;
    return;
L_088F3FD0:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
        (void)rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 7u, 0x088F4050u>(ctx, &aot_mem); return;
    }
    goto L_088F3FD8;
L_088F3FD8:
    ctx.gpr[31] = (0x088F3FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 381u, 0x088E6854u>(ctx, &aot_mem) && ctx.pc == 0x088F3FE0u) goto L_088F3FE0;
    return;
L_088F3FE0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 2u, 0x088F400Cu>(ctx, &aot_mem); return;
      }
      goto L_088F3FE8;
    }
L_088F3FE8:
    ctx.gpr[31] = (0x088F3FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 438u, 0x088E9D4Cu>(ctx, &aot_mem) && ctx.pc == 0x088F3FF0u) goto L_088F3FF0;
    return;
L_088F3FF0:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x088F3FFCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F3FFCu) goto L_088F3FFC;
    return;
L_088F3FFC:
    ctx.gpr[31] = (0x088F4004u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 201u, 0x08834E80u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0059(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0059_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_59(Runtime &runtime) {
    runtime.register_generated_unit(59u, 0x088F0000u, 16384u, &recomp_unit_0059, &recomp_unit_0059_entry);
    runtime.register_function(0x088F0004u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0008u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0010u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0018u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0020u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0040u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F004Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0054u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0058u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0080u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0090u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F00B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F00C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F00C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F00CCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F00D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F00E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F00F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F00FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0104u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0118u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0124u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0134u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F013Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0148u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0150u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0164u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0168u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0170u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F017Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0180u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0184u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0190u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0198u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F01A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F01B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F01C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F01C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F01D0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F01D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F01DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F01ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F01FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0204u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0210u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0220u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0228u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0234u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F023Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F024Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0254u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0258u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0280u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F02D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0304u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0314u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0320u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0330u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0348u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0358u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0370u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0378u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0384u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F039Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F03A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F03B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F03C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F03D0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F03DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F03F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F03FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0408u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0420u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0428u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0434u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F043Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0444u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0464u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F047Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F04ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F04ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F04F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0508u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0520u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0528u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0530u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F056Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F058Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0594u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F05A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F05B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F05E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F05E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F05F0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F05F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0600u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0608u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0610u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0614u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0628u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0640u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0648u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F065Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0660u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0668u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0670u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0678u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0690u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0698u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06F0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F06F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0700u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0718u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0734u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0740u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0758u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F077Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0790u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F07A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F07A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F07D0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F07E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F07ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0800u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0808u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0810u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0818u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0838u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F084Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0858u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0864u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F086Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0874u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0888u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0894u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0898u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F089Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F08A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F08B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F08B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F08C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F08D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F08E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F08F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F08FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0908u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0910u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0918u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0920u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0938u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0944u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0950u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0958u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0960u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0970u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0978u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0980u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0994u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F099Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F09A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F09B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F09F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F09FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A04u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A28u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A30u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A54u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A5Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A80u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A84u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A90u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A94u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0A9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0AA4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0AACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0AB8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0AC0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0AD0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0ADCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0AE4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0AECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0AF0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0AF8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B1Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B24u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B54u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B90u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0B98u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0BA8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0BBCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0BC4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0BCCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0BDCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0BE4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0BECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C0Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C2Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C34u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C40u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C48u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C50u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C5Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C64u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C6Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C74u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0C9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0CA4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0CACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0CB4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0CBCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0CDCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0CE4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D00u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D10u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D18u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D1Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D28u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D30u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D38u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D48u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D50u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D5Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D64u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D80u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D84u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D8Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D94u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0D9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0DB4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0DF4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E00u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E18u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E3Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E50u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E60u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E68u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E88u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0E9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0EA4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0EB8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0EC0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0EC8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0ED4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0EF4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F2Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F38u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F44u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F4Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F54u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F68u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F74u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F78u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F7Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F88u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F90u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0F98u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0FA8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0FB8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0FC4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0FD4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0FDCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0FE8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0FF0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F0FF8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1000u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1018u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1024u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1030u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1038u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1040u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1050u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1054u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1080u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F10B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F10C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F10D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F10E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F10E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F10F0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F10F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1100u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F110Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1114u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F111Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1124u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F114Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1154u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F115Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1160u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F116Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1174u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F117Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F11B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F11B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F11C4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F11CCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F11D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F11DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F11E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F11F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F11FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1204u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F120Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1214u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F122Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1248u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1254u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F126Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1290u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F12A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F12B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F12BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F12E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F12F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1300u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1314u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F131Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1324u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1330u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1350u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1364u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1370u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F137Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1384u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F138Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F13A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F13ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F13B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F13B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F13C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F13C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F13D0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F13E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F13F0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F13FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F140Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1414u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1420u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1428u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1430u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1438u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1450u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F145Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1468u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1470u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1478u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1488u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F148Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F14B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F14E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F14FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1510u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1528u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1530u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1538u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1574u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1594u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F159Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F15ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F15BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F15E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F15FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1604u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F160Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1614u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F161Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1624u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F162Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1644u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F164Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1664u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F166Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1680u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1684u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F168Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1698u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F16A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F16A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F16ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F16B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F16BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F16C4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F16D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F16DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F16E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F16ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F16F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F170Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1728u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1734u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F174Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1770u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1784u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1794u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F179Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F17C4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F17D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F17E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F17F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F17FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1804u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F180Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F182Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1840u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F184Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1858u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1860u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1868u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F187Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1888u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F188Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1890u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F189Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F18A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F18ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F18BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F18CCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F18D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F18E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F18F0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F18FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1904u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F190Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1914u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F192Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1938u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1944u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F194Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1954u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1964u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F196Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1974u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1988u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1990u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1998u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F19A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F19ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F19F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F19FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A20u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A28u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A4Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A54u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A78u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A7Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A88u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A8Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A94u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1A9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1AA4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1AB4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1AB8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1AC0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1AD0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1ADCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1AE4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1AECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1AF0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1AF8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1B08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1B14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1B1Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1B24u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1B54u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1B88u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1B9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1BB8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1BC0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1BC8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1BD8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1BE0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1BE8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C10u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C28u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C30u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C3Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C44u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C4Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C58u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C60u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C68u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C70u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1C98u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1CA0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1CA8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1CB0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1CB8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1CD8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1CE0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1CFCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D04u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D0Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D18u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D24u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D2Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D34u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D44u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D4Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D58u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D60u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D7Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D80u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D88u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D90u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1D98u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1DB0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1DF0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1DFCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E38u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E4Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E5Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E64u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E84u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1E98u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1EA0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1EB4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1EBCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1EC4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1ED0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1EF0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F28u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F34u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F40u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F48u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F50u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F64u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F70u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F74u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F78u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F80u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F88u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1F90u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1FA0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1FB0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1FBCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1FCCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1FD4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1FE0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1FE8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1FF0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F1FF8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2010u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F201Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2028u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2030u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2038u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2048u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F204Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F207Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F20ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F20C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F20DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F20E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F20ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F20F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F20FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2104u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2110u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2118u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2120u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2128u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2150u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2158u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2160u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2164u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2170u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2178u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2180u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F21B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F21C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F21C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F21D0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F21DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F21E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F21E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2200u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2204u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F220Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2214u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F221Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2234u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2250u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F225Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2274u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2298u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F22ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F22BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F22C4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F22ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2300u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2308u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F231Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2324u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F232Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2338u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2358u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F236Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2378u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2384u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F238Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2394u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F23A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F23B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F23B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F23BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F23C4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F23CCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F23D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F23E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F23F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2400u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2410u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2418u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2424u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F242Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2434u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F243Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2454u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2460u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F246Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2474u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F247Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F248Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2490u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F24BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F24F0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2504u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2528u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2530u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2538u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2540u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2588u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F25A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F25B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F25C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F25D0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F260Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2614u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F261Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2624u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F262Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2634u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F263Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2654u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F265Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2670u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2674u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F267Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2688u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2690u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2694u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F269Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F26A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F26ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F26B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F26C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F26CCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F26D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F26DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F26E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F26FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2718u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2724u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F273Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2760u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2774u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2784u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F278Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F27B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F27C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F27D0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F27E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F27ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F27F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F27FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F281Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2830u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F283Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2848u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2850u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2858u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F286Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2878u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F287Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2880u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F288Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2894u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F289Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F28ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F28BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F28C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F28D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F28E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F28ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F28F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F28FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2904u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F291Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2928u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2934u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F293Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2944u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2954u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F295Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2964u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F296Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2974u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2984u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F29D0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F29D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F29E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A00u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A0Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A30u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A38u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A5Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A60u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A6Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A70u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A78u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A80u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A88u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A98u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2A9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2AA4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2AB4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2AC0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2AC8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2AD0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2AD4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2ADCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2AECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2AF8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2B00u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2B08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2B38u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2B64u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2B78u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2B88u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2B9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2BA4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2BACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2BBCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2BC4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2BCCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2BE8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C00u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C10u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C18u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C20u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C2Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C34u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C3Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C4Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C54u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C5Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C70u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C78u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C7Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C88u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C90u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2C98u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2CA8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2CB0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2CBCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2CC4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2CE0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2CE4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2CECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2CF4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2CFCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2D14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2D60u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2D6Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2D84u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2DA8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2DBCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2DCCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2DD4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2DF4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2E08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2E10u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2E24u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2E2Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2E34u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2E40u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2E60u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2EA4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2EB0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2EBCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2EC4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2ECCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2EE0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2EECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2EF0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2EF4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F00u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F10u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F20u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F30u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F3Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F4Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F54u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F60u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F68u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F70u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F78u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F90u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2F9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2FA8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2FB0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2FB8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2FC8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2FCCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F2FF4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3028u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F303Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3050u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3068u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3070u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3078u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F30B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F30D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F30DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F30ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F30FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F312Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3134u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F313Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3144u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F314Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3154u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F315Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3174u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F317Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3190u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3194u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F319Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F31A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F31B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F31B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F31BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F31C4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F31CCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F31D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F31E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F31ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F31F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F31FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3204u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F321Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3238u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3244u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F325Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3280u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3294u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F32A4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F32ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F32D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F32E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F32F0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3304u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F330Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3314u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F331Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F333Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3350u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F335Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3368u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3370u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3378u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F338Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3398u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F339Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F33A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F33ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F33B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F33BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F33CCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F33DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F33E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F33F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3400u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F340Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3414u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F341Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3424u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F343Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3448u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3454u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F345Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3464u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3474u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F347Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3484u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3498u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F34A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F34A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F34B8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F34F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3500u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3508u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3528u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3534u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3558u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3560u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3584u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3588u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3594u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3598u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35C4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35F0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35F4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F35FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F360Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3618u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3620u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3628u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3658u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3684u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3698u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F36A8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F36BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F36C4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F36CCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F36DCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F36E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F36ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F370Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3714u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F372Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3734u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F373Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3744u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3750u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3758u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3760u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3770u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3778u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3780u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3794u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F379Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F37A0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F37ACu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F37B4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F37BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F37CCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F37D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F37E0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F37E8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3804u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3808u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3810u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3818u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3820u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3838u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3878u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3884u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F389Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F38C0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F38D4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F38E4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F38ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F390Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3920u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3928u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F393Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3944u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F394Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3958u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3978u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F39B0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F39BCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F39C8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F39D0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F39D8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F39ECu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F39F8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F39FCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A00u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A0Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A1Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A2Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A3Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A48u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A58u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A60u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A6Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A74u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A7Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A84u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3A9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3AA8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3AB4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3ABCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3AC4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3AD4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3AD8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3B00u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3B30u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3B44u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3B54u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3B68u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3B70u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3B78u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3BC0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3BE0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3BF0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3BF8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C00u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C10u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C18u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C20u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C38u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C40u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C54u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C58u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C64u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C6Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C74u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C78u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C84u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C8Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C94u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3C9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3CB0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3CB4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3CBCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3CC4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3CCCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3CE4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3D00u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3D0Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3D24u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3D48u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3D5Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3D6Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3D74u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3D9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3DB0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3DB8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3DCCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3DD4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3DDCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3DE8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E1Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E28u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E34u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E3Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E44u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E58u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E64u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E68u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E6Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E78u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E80u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E88u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3E98u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3EA8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3EB4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3EC4u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3ECCu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3ED8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3EE0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3EE8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3EF0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F08u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F14u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F20u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F28u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F30u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F40u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F44u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F70u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3F9Cu, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FB0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FC8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FD0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FD8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FE0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FE8u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FF0u, &recomp_unit_0059, "recomp_unit_0059");
    runtime.register_function(0x088F3FFCu, &recomp_unit_0059, "recomp_unit_0059");
}
} // namespace psprecomp

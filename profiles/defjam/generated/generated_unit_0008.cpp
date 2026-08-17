#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0008[4093] = {
    1, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 11, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 16,
    0, 17, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 30, 0, 31, 32, 0, 33, 0, 34, 0, 35, 0,
    36, 0, 37, 0, 0, 38, 0, 0, 39, 0, 40, 0, 41, 42, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 46, 0, 0, 47, 0, 0,
    0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 53, 0, 0, 0, 54, 0, 0, 55, 0, 56,
    0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 0, 0, 62, 0, 63, 0, 64, 0, 0,
    0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 67, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71,
    0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0,
    0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 86, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 0, 0, 0, 0, 99, 0, 100, 0,
    0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112,
    0, 113, 0, 0, 114, 0, 115, 0, 116, 0, 0, 117, 0, 118, 0, 119, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0,
    125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0,
    139, 0, 140, 0, 141, 0, 142, 0, 0, 143, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 149, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0,
    0, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 158, 0, 0, 159, 0, 0, 0, 160, 0, 0,
    161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 178, 179, 0, 0,
    180, 0, 0, 181, 0, 0, 182, 0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 186, 0, 0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 190,
    0, 0, 191, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 0, 197, 0, 198, 0, 0, 199, 0,
    0, 0, 200, 0, 201, 0, 202, 0, 203, 204, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 209, 0, 210, 0, 211,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0,
    216, 0, 217, 0, 218, 0, 219, 0, 220, 0, 221, 0, 0, 0, 222, 0, 223, 224, 0, 225, 0, 226, 0, 227, 0, 0, 228, 0, 0, 0, 229, 0,
    0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 233, 234, 0, 235, 0, 236, 0, 237, 0, 0, 0, 238, 239, 0, 0, 240, 0, 0, 241, 242,
    0, 0, 243, 0, 244, 0, 245, 246, 0, 0, 0, 0, 0, 247, 248, 0, 249, 0, 250, 0, 251, 0, 0, 0, 252, 253, 0, 0, 254, 0, 0, 255,
    256, 0, 0, 257, 0, 258, 259, 0, 260, 0, 0, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0, 0, 269, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 273, 0, 274, 275, 0, 0, 276, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 283, 0,
    284, 0, 285, 0, 286, 0, 287, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 0, 0, 293, 0, 294, 0, 295, 0, 296, 0, 0, 297, 0, 298,
    0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307, 0, 308, 0, 0, 309, 0, 0, 310, 0,
    311, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 316, 0, 317, 0,
    0, 0, 318, 0, 319, 0, 320, 0, 321, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 326, 0, 0, 327, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 330,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 338, 0, 339, 0, 340, 0, 341,
    0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0, 349, 0, 350, 0, 351, 0, 352, 0, 353, 354, 0, 0, 0, 355, 0, 356, 0,
    357, 0, 358, 359, 0, 0, 0, 0, 360, 0, 361, 0, 362, 0, 0, 0, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 370,
    0, 371, 0, 0, 372, 0, 373, 0, 0, 0, 374, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 379, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0,
    382, 0, 0, 383, 0, 0, 384, 0, 385, 0, 386, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 389, 0, 0, 390, 0, 391, 392, 0, 0, 0, 0,
    393, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 396, 0, 0, 397, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0,
    402, 0, 403, 0, 404, 405, 0, 406, 0, 407, 408, 0, 0, 409, 0, 0, 410, 411, 0, 412, 0, 413, 0, 0, 414, 0, 0, 415, 0, 416, 0, 417,
    0, 418, 0, 419, 0, 420, 0, 421, 0, 422, 0, 423, 0, 0, 424, 0, 425, 0, 0, 426, 0, 427, 0, 0, 428, 0, 429, 0, 430, 0, 0, 431,
    0, 432, 0, 0, 433, 0, 434, 0, 435, 0, 436, 437, 0, 438, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0,
    0, 443, 0, 444, 0, 0, 445, 0, 446, 0, 0, 447, 0, 448, 0, 0, 449, 0, 450, 0, 0, 451, 0, 452, 0, 0, 453, 0, 454, 0, 0, 455,
    456, 457, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 462, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 465,
    0, 466, 0, 467, 0, 0, 468, 0, 469, 0, 470, 0, 0, 0, 471, 472, 0, 0, 473, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 476, 0,
    477, 0, 0, 0, 478, 0, 479, 0, 480, 0, 481, 0, 482, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 485, 0, 0, 0, 486, 0, 487, 0, 0,
    0, 0, 488, 0, 489, 0, 490, 0, 491, 0, 492, 0, 493, 0, 494, 0, 495, 0, 0, 496, 0, 0, 497, 0, 498, 0, 499, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 502, 0, 503,
    0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0,
    0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 515, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 522,
    0, 523, 0, 524, 0, 525, 0, 526, 0, 527, 0, 528, 0, 0, 529, 0, 530, 531, 0, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0, 0, 0, 0,
    534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 536, 0, 0, 0, 537, 0, 538, 0, 0, 539, 0, 0, 540, 0, 0,
    541, 0, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 547, 0, 548, 0,
    0, 0, 549, 0, 550, 0, 0, 0, 551, 0, 552, 0, 0, 0, 553, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 557, 0, 558, 0,
    559, 0, 0, 560, 0, 0, 561, 0, 0, 562, 0, 563, 0, 0, 564, 0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 0, 0, 0,
    568, 0, 0, 0, 569, 570, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0,
    0, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 580, 0, 581, 582, 0, 583, 0, 0, 0, 0,
    0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 588, 0, 0, 589, 0,
    0, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 595, 0, 0, 0, 0, 0, 0,
    0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0,
    600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0, 0, 603, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 605, 0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 608, 0, 609,
    0, 0, 0, 0, 610, 611, 0, 0, 0, 0, 612, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 618, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 0,
    0, 0, 625, 0, 0, 0, 626, 0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 630, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0,
    0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0, 636,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 639, 0, 0, 0, 640,
    0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 646,
    0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 649, 650, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 0, 0, 653, 654,
    0, 0, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 658, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 663, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 666, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 667, 0, 0, 0, 668, 0, 669, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 671, 0, 672, 0, 0, 0, 0, 0, 673, 0,
    0, 0, 0, 0, 674, 675, 0, 0, 0, 0, 676, 677, 0, 678, 0, 0, 679, 0, 680, 681, 0, 0, 0, 0, 682, 683, 0, 684, 0, 0, 0, 0,
    0, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 688,
    0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 691, 0, 0, 692, 0,
    0, 0, 693, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 696, 0, 697, 0, 0, 0, 0, 0, 0, 0, 698, 0,
    0, 0, 699, 0, 700, 0, 0, 0, 0, 701, 0, 0, 0, 0, 702, 703, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 706, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 709, 0,
    0, 710, 0, 711, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 714, 0, 0, 0, 715, 0, 716, 0, 0, 0, 0, 0, 0, 0,
    0, 717, 0, 718, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 0, 721, 0, 0, 722, 0, 723, 0, 0, 0, 0, 0, 724, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 726, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 730, 0, 731, 0, 0, 0, 0, 0, 732, 0, 733, 0, 0, 734, 0, 735, 0, 0, 0, 0, 0, 736, 0, 0, 737, 0, 738, 0, 739, 0,
    0, 740, 0, 741, 742, 0, 0, 0, 743, 0, 744, 0, 745, 0, 0, 746, 0, 0, 0, 747, 0, 748, 0, 749, 0, 750, 751, 752, 0, 0, 0, 753,
    0, 0, 0, 0, 0, 754, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 757, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0,
    759, 0, 760, 0, 0, 0, 0, 0, 761, 762, 0, 0, 0, 0, 763, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0,
    0, 769, 0, 770, 0, 771, 0, 0, 772, 0, 773, 0, 774, 0, 0, 0, 0, 0, 0, 775, 776, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 779, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0, 781, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 783, 0, 784, 0, 0, 785, 0, 0, 786, 0, 787,
    0, 0, 0, 0, 0, 0, 788, 0, 789, 790, 0, 791, 0, 792, 0, 793, 0, 0, 0, 0, 0, 794, 0, 795, 796, 0, 0, 0, 0, 797, 798, 0,
    0, 0, 0, 799, 0, 800, 0, 801, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 803, 0, 804, 0, 0, 0, 0, 805, 0, 0, 0, 806, 0,
    0, 0, 0, 0, 0, 0, 807, 808, 0, 0, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 811, 0, 812, 0, 813, 0,
    0, 0, 814, 0, 0, 815, 0, 0, 816, 0, 817, 0, 0, 0, 818, 0, 819, 0, 820, 0, 0, 821, 0, 822, 0, 0, 0, 0, 0, 823, 0, 824,
    0, 0, 0, 0, 0, 825, 0, 826, 0, 0, 827, 0, 828, 0, 829, 0, 0, 0, 0, 0, 0, 0, 0, 830, 0, 831, 0, 0, 0, 0, 0, 832,
    0, 833, 0, 0, 0, 0, 0, 834, 835, 0, 0, 0, 0, 836, 0, 837, 0, 0, 838, 0, 839, 840, 0, 0, 0, 0, 841, 0, 842, 0, 843, 0,
    0, 0, 0, 0, 0, 844, 0, 845, 0, 846, 0, 0, 0, 0, 0, 0, 0, 0, 847, 0, 848, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 0,
    850, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 851, 0, 852, 0, 0, 853, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 854, 855, 856, 0, 0,
    857, 0, 858, 0, 0, 859, 0, 0, 0, 860, 0, 861, 0, 862, 863, 0, 0, 0, 0, 864, 0, 0, 0, 0, 0, 865, 0, 0, 0, 0, 0, 866,
    0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 868, 0, 0, 0, 0, 869, 0, 0, 0, 0, 0, 870, 0, 0, 0, 0, 0, 871, 0, 872, 0,
    0, 873, 0, 0, 0, 874, 0, 0, 0, 0, 0, 875, 0, 0, 0, 0, 876, 0, 0, 0, 0, 0, 877, 0, 878, 0, 0, 0, 0, 0, 879, 0,
    0, 0, 0, 0, 880, 0, 881, 0, 0, 0, 0, 882, 0, 883, 0, 884, 0, 0, 0, 0, 0, 885, 0, 0, 886, 0, 0, 0, 0, 0, 887, 0,
    888, 889, 0, 0, 890, 0, 0, 0, 0, 891, 0, 0, 0, 0, 892, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 893,
    0, 0, 894, 0, 895, 0, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 897, 0, 0, 0, 0, 898, 899, 0, 0, 900, 0, 0, 0, 0, 0,
    901, 902, 0, 0, 903, 0, 0, 0, 0, 0, 904, 0, 0, 905, 0, 0, 906, 0, 0, 0, 0, 0, 0, 0, 0, 907, 0, 908, 0, 0, 0, 0,
    909, 0, 0, 910, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 911, 0, 0, 0, 912, 0, 0, 913, 0, 0, 0, 0, 0, 914, 0, 915, 916,
    0, 917, 0, 0, 0, 0, 0, 918, 0, 919, 0, 920, 0, 0, 0, 0, 921, 0, 0, 0, 0, 922, 0, 0, 0, 0, 0, 0, 923, 0, 924, 0,
    0, 0, 0, 0, 0, 925, 0, 926, 927, 0, 0, 928, 0, 0, 0, 0, 0, 929, 0, 930, 931, 0, 932, 0, 0, 0, 0, 933, 0, 934, 0, 0,
    0, 935, 0, 936, 0, 937, 0, 0, 0, 0, 0, 938, 0, 939, 0, 0, 0, 0, 0, 940, 0, 941, 0, 0, 0, 0, 0, 942, 943, 0, 0, 0,
    944, 0, 0, 945, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 946, 0, 0, 0, 0, 947, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 948, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 949, 0, 0, 0, 0, 0, 950, 0, 0, 0, 951,
    0, 952, 0, 0, 953, 0, 0, 0, 0, 954, 0, 0, 955, 956, 0, 0, 957, 0, 0, 958, 0, 959, 0, 0, 0, 0, 960, 0, 961, 0, 962, 0,
    963, 0, 0, 964, 0, 965, 0, 0, 0, 0, 966, 0, 0, 0, 0, 0, 0, 967, 0, 0, 0, 968, 0, 0, 969, 0, 0, 970, 0, 0, 0, 0,
    971, 0, 0, 0, 0, 0, 0, 0, 972, 0, 973, 0, 0, 0, 974, 0, 975, 0, 0, 976, 0, 0, 0, 977, 0, 0, 0, 0, 0, 0, 0, 978,
    0, 979, 0, 0, 0, 980, 0, 981, 0, 982, 0, 983, 0, 0, 984, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 985, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 986, 0, 987, 0, 0, 0, 0, 0, 0, 988, 989, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 990, 0, 991, 0, 992, 0, 993,
    0, 0, 0, 0, 0, 994, 0, 0, 995, 0, 996, 0, 0, 997, 0, 0, 0, 0, 998, 0, 0, 999, 0, 0, 0, 0, 0, 1000, 0, 0, 1001, 0,
    0, 1002, 0, 1003, 0, 1004, 0, 0, 1005, 0, 1006, 0, 1007, 0, 1008, 0, 1009, 0, 0, 1010, 0, 1011, 0, 1012, 0, 0, 0, 0, 0, 1013, 0, 1014,
    0, 0, 0, 0, 0, 1015, 1016, 0, 0, 0, 1017, 0, 1018, 0, 1019, 1020, 0, 0, 1021, 0, 1022, 0, 0, 0, 0, 0, 1023, 0, 1024,
};
void recomp_unit_0008_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08824000u;
        entry_id = (entry_delta < 16372u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0008[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08824000;
    case 2u: goto L_08824004;
    case 3u: goto L_08824018;
    case 4u: goto L_08824040;
    case 5u: goto L_08824050;
    case 6u: goto L_08824060;
    case 7u: goto L_08824070;
    case 8u: goto L_0882408C;
    case 9u: goto L_08824098;
    case 10u: goto L_088240B4;
    case 11u: goto L_088240B8;
    case 12u: goto L_088240C8;
    case 13u: goto L_088240D0;
    case 14u: goto L_088240E4;
    case 15u: goto L_088240F8;
    case 16u: goto L_088240FC;
    case 17u: goto L_08824104;
    case 18u: goto L_08824118;
    case 19u: goto L_08824120;
    case 20u: goto L_08824128;
    case 21u: goto L_08824130;
    case 22u: goto L_08824150;
    case 23u: goto L_08824164;
    case 24u: goto L_0882418C;
    case 25u: goto L_08824194;
    case 26u: goto L_088241A4;
    case 27u: goto L_088241AC;
    case 28u: goto L_088241B4;
    case 29u: goto L_088241BC;
    case 30u: goto L_088241D4;
    case 31u: goto L_088241DC;
    case 32u: goto L_088241E0;
    case 33u: goto L_088241E8;
    case 34u: goto L_088241F0;
    case 35u: goto L_088241F8;
    case 36u: goto L_08824200;
    case 37u: goto L_08824208;
    case 38u: goto L_08824214;
    case 39u: goto L_08824220;
    case 40u: goto L_08824228;
    case 41u: goto L_08824230;
    case 42u: goto L_08824234;
    case 43u: goto L_08824250;
    case 44u: goto L_08824258;
    case 45u: goto L_08824260;
    case 46u: goto L_08824268;
    case 47u: goto L_08824274;
    case 48u: goto L_08824298;
    case 49u: goto L_088242A0;
    case 50u: goto L_088242A8;
    case 51u: goto L_088242CC;
    case 52u: goto L_088242D4;
    case 53u: goto L_088242D8;
    case 54u: goto L_088242E8;
    case 55u: goto L_088242F4;
    case 56u: goto L_088242FC;
    case 57u: goto L_08824310;
    case 58u: goto L_0882432C;
    case 59u: goto L_08824344;
    case 60u: goto L_0882434C;
    case 61u: goto L_08824354;
    case 62u: goto L_08824364;
    case 63u: goto L_0882436C;
    case 64u: goto L_08824374;
    case 65u: goto L_08824388;
    case 66u: goto L_08824398;
    case 67u: goto L_088243AC;
    case 68u: goto L_088243B8;
    case 69u: goto L_088243C0;
    case 70u: goto L_088243EC;
    case 71u: goto L_088243FC;
    case 72u: goto L_08824410;
    case 73u: goto L_08824424;
    case 74u: goto L_08824438;
    case 75u: goto L_08824440;
    case 76u: goto L_08824448;
    case 77u: goto L_0882445C;
    case 78u: goto L_08824474;
    case 79u: goto L_08824498;
    case 80u: goto L_088244A8;
    case 81u: goto L_088244B0;
    case 82u: goto L_088244B8;
    case 83u: goto L_088244C0;
    case 84u: goto L_088244C8;
    case 85u: goto L_088244D0;
    case 86u: goto L_088244D4;
    case 87u: goto L_088244F4;
    case 88u: goto L_0882450C;
    case 89u: goto L_0882451C;
    case 90u: goto L_08824540;
    case 91u: goto L_08824590;
    case 92u: goto L_0882459C;
    case 93u: goto L_088245B0;
    case 94u: goto L_088245B8;
    case 95u: goto L_088245C0;
    case 96u: goto L_088245C8;
    case 97u: goto L_088245D0;
    case 98u: goto L_088245D8;
    case 99u: goto L_088245F0;
    case 100u: goto L_088245F8;
    case 101u: goto L_08824614;
    case 102u: goto L_0882461C;
    case 103u: goto L_08824624;
    case 104u: goto L_0882463C;
    case 105u: goto L_08824644;
    case 106u: goto L_0882464C;
    case 107u: goto L_08824654;
    case 108u: goto L_0882465C;
    case 109u: goto L_08824664;
    case 110u: goto L_0882466C;
    case 111u: goto L_08824674;
    case 112u: goto L_0882467C;
    case 113u: goto L_08824684;
    case 114u: goto L_08824690;
    case 115u: goto L_08824698;
    case 116u: goto L_088246A0;
    case 117u: goto L_088246AC;
    case 118u: goto L_088246B4;
    case 119u: goto L_088246BC;
    case 120u: goto L_088246C8;
    case 121u: goto L_088246D0;
    case 122u: goto L_088246E0;
    case 123u: goto L_088246F0;
    case 124u: goto L_088246F8;
    case 125u: goto L_08824700;
    case 126u: goto L_08824708;
    case 127u: goto L_08824710;
    case 128u: goto L_08824718;
    case 129u: goto L_08824720;
    case 130u: goto L_08824728;
    case 131u: goto L_0882473C;
    case 132u: goto L_08824744;
    case 133u: goto L_08824750;
    case 134u: goto L_08824758;
    case 135u: goto L_08824760;
    case 136u: goto L_08824768;
    case 137u: goto L_08824770;
    case 138u: goto L_08824778;
    case 139u: goto L_08824780;
    case 140u: goto L_08824788;
    case 141u: goto L_08824790;
    case 142u: goto L_08824798;
    case 143u: goto L_088247A4;
    case 144u: goto L_088247AC;
    case 145u: goto L_088247C8;
    case 146u: goto L_088247E4;
    case 147u: goto L_0882481C;
    case 148u: goto L_08824824;
    case 149u: goto L_08824834;
    case 150u: goto L_08824840;
    case 151u: goto L_08824864;
    case 152u: goto L_0882486C;
    case 153u: goto L_08824888;
    case 154u: goto L_08824890;
    case 155u: goto L_088248B8;
    case 156u: goto L_088248C4;
    case 157u: goto L_088248CC;
    case 158u: goto L_088248D8;
    case 159u: goto L_088248E4;
    case 160u: goto L_088248F4;
    case 161u: goto L_08824900;
    case 162u: goto L_08824908;
    case 163u: goto L_08824910;
    case 164u: goto L_08824918;
    case 165u: goto L_08824920;
    case 166u: goto L_08824930;
    case 167u: goto L_08824938;
    case 168u: goto L_08824940;
    case 169u: goto L_08824958;
    case 170u: goto L_08824964;
    case 171u: goto L_0882496C;
    case 172u: goto L_08824994;
    case 173u: goto L_088249AC;
    case 174u: goto L_088249BC;
    case 175u: goto L_088249C4;
    case 176u: goto L_088249D0;
    case 177u: goto L_088249E4;
    case 178u: goto L_088249F0;
    case 179u: goto L_088249F4;
    case 180u: goto L_08824A00;
    case 181u: goto L_08824A0C;
    case 182u: goto L_08824A18;
    case 183u: goto L_08824A2C;
    case 184u: goto L_08824A34;
    case 185u: goto L_08824A3C;
    case 186u: goto L_08824A44;
    case 187u: goto L_08824A50;
    case 188u: goto L_08824A58;
    case 189u: goto L_08824A6C;
    case 190u: goto L_08824A7C;
    case 191u: goto L_08824A88;
    case 192u: goto L_08824A90;
    case 193u: goto L_08824A9C;
    case 194u: goto L_08824ABC;
    case 195u: goto L_08824ACC;
    case 196u: goto L_08824AD4;
    case 197u: goto L_08824AE4;
    case 198u: goto L_08824AEC;
    case 199u: goto L_08824AF8;
    case 200u: goto L_08824B08;
    case 201u: goto L_08824B10;
    case 202u: goto L_08824B18;
    case 203u: goto L_08824B20;
    case 204u: goto L_08824B24;
    case 205u: goto L_08824B38;
    case 206u: goto L_08824B40;
    case 207u: goto L_08824B58;
    case 208u: goto L_08824B64;
    case 209u: goto L_08824B6C;
    case 210u: goto L_08824B74;
    case 211u: goto L_08824B7C;
    case 212u: goto L_08824BA4;
    case 213u: goto L_08824BD0;
    case 214u: goto L_08824BE0;
    case 215u: goto L_08824BF0;
    case 216u: goto L_08824C00;
    case 217u: goto L_08824C08;
    case 218u: goto L_08824C10;
    case 219u: goto L_08824C18;
    case 220u: goto L_08824C20;
    case 221u: goto L_08824C28;
    case 222u: goto L_08824C38;
    case 223u: goto L_08824C40;
    case 224u: goto L_08824C44;
    case 225u: goto L_08824C4C;
    case 226u: goto L_08824C54;
    case 227u: goto L_08824C5C;
    case 228u: goto L_08824C68;
    case 229u: goto L_08824C78;
    case 230u: goto L_08824C84;
    case 231u: goto L_08824C90;
    case 232u: goto L_08824CA8;
    case 233u: goto L_08824CB0;
    case 234u: goto L_08824CB4;
    case 235u: goto L_08824CBC;
    case 236u: goto L_08824CC4;
    case 237u: goto L_08824CCC;
    case 238u: goto L_08824CDC;
    case 239u: goto L_08824CE0;
    case 240u: goto L_08824CEC;
    case 241u: goto L_08824CF8;
    case 242u: goto L_08824CFC;
    case 243u: goto L_08824D08;
    case 244u: goto L_08824D10;
    case 245u: goto L_08824D18;
    case 246u: goto L_08824D1C;
    case 247u: goto L_08824D34;
    case 248u: goto L_08824D38;
    case 249u: goto L_08824D40;
    case 250u: goto L_08824D48;
    case 251u: goto L_08824D50;
    case 252u: goto L_08824D60;
    case 253u: goto L_08824D64;
    case 254u: goto L_08824D70;
    case 255u: goto L_08824D7C;
    case 256u: goto L_08824D80;
    case 257u: goto L_08824D8C;
    case 258u: goto L_08824D94;
    case 259u: goto L_08824D98;
    case 260u: goto L_08824DA0;
    case 261u: goto L_08824DB0;
    case 262u: goto L_08824DB8;
    case 263u: goto L_08824DC0;
    case 264u: goto L_08824DC8;
    case 265u: goto L_08824DD0;
    case 266u: goto L_08824DD8;
    case 267u: goto L_08824DE0;
    case 268u: goto L_08824DE8;
    case 269u: goto L_08824DF4;
    case 270u: goto L_08824E28;
    case 271u: goto L_08824E94;
    case 272u: goto L_08824EA0;
    case 273u: goto L_08824EA8;
    case 274u: goto L_08824EB0;
    case 275u: goto L_08824EB4;
    case 276u: goto L_08824EC0;
    case 277u: goto L_08824EC8;
    case 278u: goto L_08824ED0;
    case 279u: goto L_08824ED8;
    case 280u: goto L_08824EE0;
    case 281u: goto L_08824EE8;
    case 282u: goto L_08824EF0;
    case 283u: goto L_08824EF8;
    case 284u: goto L_08824F00;
    case 285u: goto L_08824F08;
    case 286u: goto L_08824F10;
    case 287u: goto L_08824F18;
    case 288u: goto L_08824F20;
    case 289u: goto L_08824F28;
    case 290u: goto L_08824F30;
    case 291u: goto L_08824F38;
    case 292u: goto L_08824F40;
    case 293u: goto L_08824F50;
    case 294u: goto L_08824F58;
    case 295u: goto L_08824F60;
    case 296u: goto L_08824F68;
    case 297u: goto L_08824F74;
    case 298u: goto L_08824F7C;
    case 299u: goto L_08824F8C;
    case 300u: goto L_08824F98;
    case 301u: goto L_08824FA8;
    case 302u: goto L_08824FB0;
    case 303u: goto L_08824FB8;
    case 304u: goto L_08824FC0;
    case 305u: goto L_08824FC8;
    case 306u: goto L_08824FD0;
    case 307u: goto L_08824FD8;
    case 308u: goto L_08824FE0;
    case 309u: goto L_08824FEC;
    case 310u: goto L_08824FF8;
    case 311u: goto L_08825000;
    case 312u: goto L_08825008;
    case 313u: goto L_08825058;
    case 314u: goto L_08825060;
    case 315u: goto L_08825068;
    case 316u: goto L_08825070;
    case 317u: goto L_08825078;
    case 318u: goto L_08825088;
    case 319u: goto L_08825090;
    case 320u: goto L_08825098;
    case 321u: goto L_088250A0;
    case 322u: goto L_088250A4;
    case 323u: goto L_088250C8;
    case 324u: goto L_08825128;
    case 325u: goto L_08825130;
    case 326u: goto L_08825138;
    case 327u: goto L_08825144;
    case 328u: goto L_08825158;
    case 329u: goto L_08825160;
    case 330u: goto L_0882517C;
    case 331u: goto L_088251AC;
    case 332u: goto L_088251B8;
    case 333u: goto L_088251BC;
    case 334u: goto L_088251C4;
    case 335u: goto L_088251CC;
    case 336u: goto L_088251D4;
    case 337u: goto L_088251DC;
    case 338u: goto L_088251E4;
    case 339u: goto L_088251EC;
    case 340u: goto L_088251F4;
    case 341u: goto L_088251FC;
    case 342u: goto L_08825204;
    case 343u: goto L_0882520C;
    case 344u: goto L_08825214;
    case 345u: goto L_0882521C;
    case 346u: goto L_08825224;
    case 347u: goto L_0882522C;
    case 348u: goto L_08825234;
    case 349u: goto L_0882523C;
    case 350u: goto L_08825244;
    case 351u: goto L_0882524C;
    case 352u: goto L_08825254;
    case 353u: goto L_0882525C;
    case 354u: goto L_08825260;
    case 355u: goto L_08825270;
    case 356u: goto L_08825278;
    case 357u: goto L_08825280;
    case 358u: goto L_08825288;
    case 359u: goto L_0882528C;
    case 360u: goto L_088252A0;
    case 361u: goto L_088252A8;
    case 362u: goto L_088252B0;
    case 363u: goto L_088252C4;
    case 364u: goto L_088252CC;
    case 365u: goto L_088252D4;
    case 366u: goto L_088252DC;
    case 367u: goto L_088252E4;
    case 368u: goto L_088252EC;
    case 369u: goto L_088252F4;
    case 370u: goto L_088252FC;
    case 371u: goto L_08825304;
    case 372u: goto L_08825310;
    case 373u: goto L_08825318;
    case 374u: goto L_08825328;
    case 375u: goto L_08825330;
    case 376u: goto L_08825338;
    case 377u: goto L_08825340;
    case 378u: goto L_08825348;
    case 379u: goto L_08825354;
    case 380u: goto L_08825360;
    case 381u: goto L_08825370;
    case 382u: goto L_08825380;
    case 383u: goto L_0882538C;
    case 384u: goto L_08825398;
    case 385u: goto L_088253A0;
    case 386u: goto L_088253A8;
    case 387u: goto L_088253B8;
    case 388u: goto L_088253C4;
    case 389u: goto L_088253D4;
    case 390u: goto L_088253E0;
    case 391u: goto L_088253E8;
    case 392u: goto L_088253EC;
    case 393u: goto L_08825400;
    case 394u: goto L_08825418;
    case 395u: goto L_08825424;
    case 396u: goto L_0882542C;
    case 397u: goto L_08825438;
    case 398u: goto L_08825440;
    case 399u: goto L_08825454;
    case 400u: goto L_08825468;
    case 401u: goto L_08825478;
    case 402u: goto L_08825480;
    case 403u: goto L_08825488;
    case 404u: goto L_08825490;
    case 405u: goto L_08825494;
    case 406u: goto L_0882549C;
    case 407u: goto L_088254A4;
    case 408u: goto L_088254A8;
    case 409u: goto L_088254B4;
    case 410u: goto L_088254C0;
    case 411u: goto L_088254C4;
    case 412u: goto L_088254CC;
    case 413u: goto L_088254D4;
    case 414u: goto L_088254E0;
    case 415u: goto L_088254EC;
    case 416u: goto L_088254F4;
    case 417u: goto L_088254FC;
    case 418u: goto L_08825504;
    case 419u: goto L_0882550C;
    case 420u: goto L_08825514;
    case 421u: goto L_0882551C;
    case 422u: goto L_08825524;
    case 423u: goto L_0882552C;
    case 424u: goto L_08825538;
    case 425u: goto L_08825540;
    case 426u: goto L_0882554C;
    case 427u: goto L_08825554;
    case 428u: goto L_08825560;
    case 429u: goto L_08825568;
    case 430u: goto L_08825570;
    case 431u: goto L_0882557C;
    case 432u: goto L_08825584;
    case 433u: goto L_08825590;
    case 434u: goto L_08825598;
    case 435u: goto L_088255A0;
    case 436u: goto L_088255A8;
    case 437u: goto L_088255AC;
    case 438u: goto L_088255B4;
    case 439u: goto L_088255C0;
    case 440u: goto L_088255CC;
    case 441u: goto L_088255E4;
    case 442u: goto L_088255F8;
    case 443u: goto L_08825604;
    case 444u: goto L_0882560C;
    case 445u: goto L_08825618;
    case 446u: goto L_08825620;
    case 447u: goto L_0882562C;
    case 448u: goto L_08825634;
    case 449u: goto L_08825640;
    case 450u: goto L_08825648;
    case 451u: goto L_08825654;
    case 452u: goto L_0882565C;
    case 453u: goto L_08825668;
    case 454u: goto L_08825670;
    case 455u: goto L_0882567C;
    case 456u: goto L_08825680;
    case 457u: goto L_08825684;
    case 458u: goto L_08825690;
    case 459u: goto L_088256A0;
    case 460u: goto L_088256B0;
    case 461u: goto L_088256C8;
    case 462u: goto L_088256D0;
    case 463u: goto L_088256E0;
    case 464u: goto L_088256E8;
    case 465u: goto L_088256FC;
    case 466u: goto L_08825704;
    case 467u: goto L_0882570C;
    case 468u: goto L_08825718;
    case 469u: goto L_08825720;
    case 470u: goto L_08825728;
    case 471u: goto L_08825738;
    case 472u: goto L_0882573C;
    case 473u: goto L_08825748;
    case 474u: goto L_08825760;
    case 475u: goto L_08825770;
    case 476u: goto L_08825778;
    case 477u: goto L_08825780;
    case 478u: goto L_08825790;
    case 479u: goto L_08825798;
    case 480u: goto L_088257A0;
    case 481u: goto L_088257A8;
    case 482u: goto L_088257B0;
    case 483u: goto L_088257C8;
    case 484u: goto L_088257D0;
    case 485u: goto L_088257DC;
    case 486u: goto L_088257EC;
    case 487u: goto L_088257F4;
    case 488u: goto L_08825808;
    case 489u: goto L_08825810;
    case 490u: goto L_08825818;
    case 491u: goto L_08825820;
    case 492u: goto L_08825828;
    case 493u: goto L_08825830;
    case 494u: goto L_08825838;
    case 495u: goto L_08825840;
    case 496u: goto L_0882584C;
    case 497u: goto L_08825858;
    case 498u: goto L_08825860;
    case 499u: goto L_08825868;
    case 500u: goto L_088258D4;
    case 501u: goto L_088258E8;
    case 502u: goto L_088258F4;
    case 503u: goto L_088258FC;
    case 504u: goto L_08825904;
    case 505u: goto L_08825920;
    case 506u: goto L_08825928;
    case 507u: goto L_08825930;
    case 508u: goto L_0882596C;
    case 509u: goto L_0882598C;
    case 510u: goto L_088259C4;
    case 511u: goto L_088259D4;
    case 512u: goto L_08825A3C;
    case 513u: goto L_08825A6C;
    case 514u: goto L_08825AF0;
    case 515u: goto L_08825AF8;
    case 516u: goto L_08825B5C;
    case 517u: goto L_08825B8C;
    case 518u: goto L_08825C10;
    case 519u: goto L_08825C28;
    case 520u: goto L_08825C34;
    case 521u: goto L_08825C74;
    case 522u: goto L_08825C7C;
    case 523u: goto L_08825C84;
    case 524u: goto L_08825C8C;
    case 525u: goto L_08825C94;
    case 526u: goto L_08825C9C;
    case 527u: goto L_08825CA4;
    case 528u: goto L_08825CAC;
    case 529u: goto L_08825CB8;
    case 530u: goto L_08825CC0;
    case 531u: goto L_08825CC4;
    case 532u: goto L_08825CD8;
    case 533u: goto L_08825CE4;
    case 534u: goto L_08825D00;
    case 535u: goto L_08825D2C;
    case 536u: goto L_08825D44;
    case 537u: goto L_08825D54;
    case 538u: goto L_08825D5C;
    case 539u: goto L_08825D68;
    case 540u: goto L_08825D74;
    case 541u: goto L_08825D80;
    case 542u: goto L_08825D8C;
    case 543u: goto L_08825DA8;
    case 544u: goto L_08825DB4;
    case 545u: goto L_08825DD0;
    case 546u: goto L_08825DE0;
    case 547u: goto L_08825DF0;
    case 548u: goto L_08825DF8;
    case 549u: goto L_08825E08;
    case 550u: goto L_08825E10;
    case 551u: goto L_08825E20;
    case 552u: goto L_08825E28;
    case 553u: goto L_08825E38;
    case 554u: goto L_08825E40;
    case 555u: goto L_08825E5C;
    case 556u: goto L_08825E64;
    case 557u: goto L_08825E70;
    case 558u: goto L_08825E78;
    case 559u: goto L_08825E80;
    case 560u: goto L_08825E8C;
    case 561u: goto L_08825E98;
    case 562u: goto L_08825EA4;
    case 563u: goto L_08825EAC;
    case 564u: goto L_08825EB8;
    case 565u: goto L_08825EC4;
    case 566u: goto L_08825EDC;
    case 567u: goto L_08825EE8;
    case 568u: goto L_08825F00;
    case 569u: goto L_08825F10;
    case 570u: goto L_08825F14;
    case 571u: goto L_08825F24;
    case 572u: goto L_08825F4C;
    case 573u: goto L_08825F54;
    case 574u: goto L_08825F70;
    case 575u: goto L_08825F88;
    case 576u: goto L_08825F9C;
    case 577u: goto L_08825FAC;
    case 578u: goto L_08825FBC;
    case 579u: goto L_08825FCC;
    case 580u: goto L_08825FD8;
    case 581u: goto L_08825FE0;
    case 582u: goto L_08825FE4;
    case 583u: goto L_08825FEC;
    case 584u: goto L_08826008;
    case 585u: goto L_08826034;
    case 586u: goto L_0882604C;
    case 587u: goto L_08826058;
    case 588u: goto L_0882606C;
    case 589u: goto L_08826078;
    case 590u: goto L_08826090;
    case 591u: goto L_08826098;
    case 592u: goto L_088260B4;
    case 593u: goto L_088260C8;
    case 594u: goto L_088260D8;
    case 595u: goto L_088260E4;
    case 596u: goto L_08826108;
    case 597u: goto L_08826118;
    case 598u: goto L_0882616C;
    case 599u: goto L_08826174;
    case 600u: goto L_08826180;
    case 601u: goto L_088261D0;
    case 602u: goto L_088261E4;
    case 603u: goto L_088261F4;
    case 604u: goto L_0882622C;
    case 605u: goto L_08826234;
    case 606u: goto L_0882623C;
    case 607u: goto L_0882625C;
    case 608u: goto L_08826274;
    case 609u: goto L_0882627C;
    case 610u: goto L_08826290;
    case 611u: goto L_08826294;
    case 612u: goto L_088262A8;
    case 613u: goto L_088262B4;
    case 614u: goto L_088262DC;
    case 615u: goto L_08826310;
    case 616u: goto L_08826328;
    case 617u: goto L_08826348;
    case 618u: goto L_08826354;
    case 619u: goto L_0882635C;
    case 620u: goto L_0882638C;
    case 621u: goto L_088263A0;
    case 622u: goto L_088263D0;
    case 623u: goto L_088263E0;
    case 624u: goto L_088263E8;
    case 625u: goto L_08826408;
    case 626u: goto L_08826418;
    case 627u: goto L_08826420;
    case 628u: goto L_08826438;
    case 629u: goto L_08826450;
    case 630u: goto L_08826454;
    case 631u: goto L_08826460;
    case 632u: goto L_08826484;
    case 633u: goto L_08826494;
    case 634u: goto L_088264E8;
    case 635u: goto L_088264F0;
    case 636u: goto L_088264FC;
    case 637u: goto L_0882654C;
    case 638u: goto L_08826560;
    case 639u: goto L_0882656C;
    case 640u: goto L_0882657C;
    case 641u: goto L_08826584;
    case 642u: goto L_088265B4;
    case 643u: goto L_088265C4;
    case 644u: goto L_088265CC;
    case 645u: goto L_088265EC;
    case 646u: goto L_088265FC;
    case 647u: goto L_08826604;
    case 648u: goto L_0882661C;
    case 649u: goto L_08826634;
    case 650u: goto L_08826638;
    case 651u: goto L_08826658;
    case 652u: goto L_08826660;
    case 653u: goto L_08826678;
    case 654u: goto L_0882667C;
    case 655u: goto L_08826690;
    case 656u: goto L_0882669C;
    case 657u: goto L_088266CC;
    case 658u: goto L_08826704;
    case 659u: goto L_0882671C;
    case 660u: goto L_0882673C;
    case 661u: goto L_08826758;
    case 662u: goto L_08826770;
    case 663u: goto L_08826778;
    case 664u: goto L_088267A8;
    case 665u: goto L_088267D8;
    case 666u: goto L_088267E0;
    case 667u: goto L_08826810;
    case 668u: goto L_08826820;
    case 669u: goto L_08826828;
    case 670u: goto L_08826848;
    case 671u: goto L_08826858;
    case 672u: goto L_08826860;
    case 673u: goto L_08826878;
    case 674u: goto L_08826890;
    case 675u: goto L_08826894;
    case 676u: goto L_088268A8;
    case 677u: goto L_088268AC;
    case 678u: goto L_088268B4;
    case 679u: goto L_088268C0;
    case 680u: goto L_088268C8;
    case 681u: goto L_088268CC;
    case 682u: goto L_088268E0;
    case 683u: goto L_088268E4;
    case 684u: goto L_088268EC;
    case 685u: goto L_08826910;
    case 686u: goto L_08826920;
    case 687u: goto L_08826974;
    case 688u: goto L_0882697C;
    case 689u: goto L_08826988;
    case 690u: goto L_088269D8;
    case 691u: goto L_088269EC;
    case 692u: goto L_088269F8;
    case 693u: goto L_08826A08;
    case 694u: goto L_08826A10;
    case 695u: goto L_08826A40;
    case 696u: goto L_08826A50;
    case 697u: goto L_08826A58;
    case 698u: goto L_08826A78;
    case 699u: goto L_08826A88;
    case 700u: goto L_08826A90;
    case 701u: goto L_08826AA4;
    case 702u: goto L_08826AB8;
    case 703u: goto L_08826ABC;
    case 704u: goto L_08826AD8;
    case 705u: goto L_08826AEC;
    case 706u: goto L_08826AF8;
    case 707u: goto L_08826B2C;
    case 708u: goto L_08826B5C;
    case 709u: goto L_08826B78;
    case 710u: goto L_08826B84;
    case 711u: goto L_08826B8C;
    case 712u: goto L_08826B98;
    case 713u: goto L_08826BC0;
    case 714u: goto L_08826BC8;
    case 715u: goto L_08826BD8;
    case 716u: goto L_08826BE0;
    case 717u: goto L_08826C04;
    case 718u: goto L_08826C0C;
    case 719u: goto L_08826C38;
    case 720u: goto L_08826C40;
    case 721u: goto L_08826C4C;
    case 722u: goto L_08826C58;
    case 723u: goto L_08826C60;
    case 724u: goto L_08826C78;
    case 725u: goto L_08826CEC;
    case 726u: goto L_08826CF8;
    case 727u: goto L_08826D2C;
    case 728u: goto L_08826D3C;
    case 729u: goto L_08826D54;
    case 730u: goto L_08826D88;
    case 731u: goto L_08826D90;
    case 732u: goto L_08826DA8;
    case 733u: goto L_08826DB0;
    case 734u: goto L_08826DBC;
    case 735u: goto L_08826DC4;
    case 736u: goto L_08826DDC;
    case 737u: goto L_08826DE8;
    case 738u: goto L_08826DF0;
    case 739u: goto L_08826DF8;
    case 740u: goto L_08826E04;
    case 741u: goto L_08826E0C;
    case 742u: goto L_08826E10;
    case 743u: goto L_08826E20;
    case 744u: goto L_08826E28;
    case 745u: goto L_08826E30;
    case 746u: goto L_08826E3C;
    case 747u: goto L_08826E4C;
    case 748u: goto L_08826E54;
    case 749u: goto L_08826E5C;
    case 750u: goto L_08826E64;
    case 751u: goto L_08826E68;
    case 752u: goto L_08826E6C;
    case 753u: goto L_08826E7C;
    case 754u: goto L_08826E94;
    case 755u: goto L_08826EA0;
    case 756u: goto L_08826EC4;
    case 757u: goto L_08826ECC;
    case 758u: goto L_08826EE4;
    case 759u: goto L_08826F00;
    case 760u: goto L_08826F08;
    case 761u: goto L_08826F20;
    case 762u: goto L_08826F24;
    case 763u: goto L_08826F38;
    case 764u: goto L_08826F44;
    case 765u: goto L_08826F70;
    case 766u: goto L_08826FC0;
    case 767u: goto L_08826FC8;
    case 768u: goto L_08826FF8;
    case 769u: goto L_08827004;
    case 770u: goto L_0882700C;
    case 771u: goto L_08827014;
    case 772u: goto L_08827020;
    case 773u: goto L_08827028;
    case 774u: goto L_08827030;
    case 775u: goto L_0882704C;
    case 776u: goto L_08827050;
    case 777u: goto L_08827064;
    case 778u: goto L_088270C0;
    case 779u: goto L_088270C8;
    case 780u: goto L_088270D0;
    case 781u: goto L_088270F8;
    case 782u: goto L_08827134;
    case 783u: goto L_08827154;
    case 784u: goto L_0882715C;
    case 785u: goto L_08827168;
    case 786u: goto L_08827174;
    case 787u: goto L_0882717C;
    case 788u: goto L_08827198;
    case 789u: goto L_088271A0;
    case 790u: goto L_088271A4;
    case 791u: goto L_088271AC;
    case 792u: goto L_088271B4;
    case 793u: goto L_088271BC;
    case 794u: goto L_088271D4;
    case 795u: goto L_088271DC;
    case 796u: goto L_088271E0;
    case 797u: goto L_088271F4;
    case 798u: goto L_088271F8;
    case 799u: goto L_0882720C;
    case 800u: goto L_08827214;
    case 801u: goto L_0882721C;
    case 802u: goto L_08827234;
    case 803u: goto L_0882724C;
    case 804u: goto L_08827254;
    case 805u: goto L_08827268;
    case 806u: goto L_08827278;
    case 807u: goto L_08827298;
    case 808u: goto L_0882729C;
    case 809u: goto L_088272AC;
    case 810u: goto L_088272D0;
    case 811u: goto L_088272E8;
    case 812u: goto L_088272F0;
    case 813u: goto L_088272F8;
    case 814u: goto L_08827308;
    case 815u: goto L_08827314;
    case 816u: goto L_08827320;
    case 817u: goto L_08827328;
    case 818u: goto L_08827338;
    case 819u: goto L_08827340;
    case 820u: goto L_08827348;
    case 821u: goto L_08827354;
    case 822u: goto L_0882735C;
    case 823u: goto L_08827374;
    case 824u: goto L_0882737C;
    case 825u: goto L_08827394;
    case 826u: goto L_0882739C;
    case 827u: goto L_088273A8;
    case 828u: goto L_088273B0;
    case 829u: goto L_088273B8;
    case 830u: goto L_088273DC;
    case 831u: goto L_088273E4;
    case 832u: goto L_088273FC;
    case 833u: goto L_08827404;
    case 834u: goto L_0882741C;
    case 835u: goto L_08827420;
    case 836u: goto L_08827434;
    case 837u: goto L_0882743C;
    case 838u: goto L_08827448;
    case 839u: goto L_08827450;
    case 840u: goto L_08827454;
    case 841u: goto L_08827468;
    case 842u: goto L_08827470;
    case 843u: goto L_08827478;
    case 844u: goto L_08827494;
    case 845u: goto L_0882749C;
    case 846u: goto L_088274A4;
    case 847u: goto L_088274C8;
    case 848u: goto L_088274D0;
    case 849u: goto L_088274DC;
    case 850u: goto L_08827500;
    case 851u: goto L_0882752C;
    case 852u: goto L_08827534;
    case 853u: goto L_08827540;
    case 854u: goto L_0882756C;
    case 855u: goto L_08827570;
    case 856u: goto L_08827574;
    case 857u: goto L_08827580;
    case 858u: goto L_08827588;
    case 859u: goto L_08827594;
    case 860u: goto L_088275A4;
    case 861u: goto L_088275AC;
    case 862u: goto L_088275B4;
    case 863u: goto L_088275B8;
    case 864u: goto L_088275CC;
    case 865u: goto L_088275E4;
    case 866u: goto L_088275FC;
    case 867u: goto L_08827610;
    case 868u: goto L_0882762C;
    case 869u: goto L_08827640;
    case 870u: goto L_08827658;
    case 871u: goto L_08827670;
    case 872u: goto L_08827678;
    case 873u: goto L_08827684;
    case 874u: goto L_08827694;
    case 875u: goto L_088276AC;
    case 876u: goto L_088276C0;
    case 877u: goto L_088276D8;
    case 878u: goto L_088276E0;
    case 879u: goto L_088276F8;
    case 880u: goto L_08827710;
    case 881u: goto L_08827718;
    case 882u: goto L_0882772C;
    case 883u: goto L_08827734;
    case 884u: goto L_0882773C;
    case 885u: goto L_08827754;
    case 886u: goto L_08827760;
    case 887u: goto L_08827778;
    case 888u: goto L_08827780;
    case 889u: goto L_08827784;
    case 890u: goto L_08827790;
    case 891u: goto L_088277A4;
    case 892u: goto L_088277B8;
    case 893u: goto L_088277FC;
    case 894u: goto L_08827808;
    case 895u: goto L_08827810;
    case 896u: goto L_08827824;
    case 897u: goto L_08827844;
    case 898u: goto L_08827858;
    case 899u: goto L_0882785C;
    case 900u: goto L_08827868;
    case 901u: goto L_08827880;
    case 902u: goto L_08827884;
    case 903u: goto L_08827890;
    case 904u: goto L_088278A8;
    case 905u: goto L_088278B4;
    case 906u: goto L_088278C0;
    case 907u: goto L_088278E4;
    case 908u: goto L_088278EC;
    case 909u: goto L_08827900;
    case 910u: goto L_0882790C;
    case 911u: goto L_0882793C;
    case 912u: goto L_0882794C;
    case 913u: goto L_08827958;
    case 914u: goto L_08827970;
    case 915u: goto L_08827978;
    case 916u: goto L_0882797C;
    case 917u: goto L_08827984;
    case 918u: goto L_0882799C;
    case 919u: goto L_088279A4;
    case 920u: goto L_088279AC;
    case 921u: goto L_088279C0;
    case 922u: goto L_088279D4;
    case 923u: goto L_088279F0;
    case 924u: goto L_088279F8;
    case 925u: goto L_08827A14;
    case 926u: goto L_08827A1C;
    case 927u: goto L_08827A20;
    case 928u: goto L_08827A2C;
    case 929u: goto L_08827A44;
    case 930u: goto L_08827A4C;
    case 931u: goto L_08827A50;
    case 932u: goto L_08827A58;
    case 933u: goto L_08827A6C;
    case 934u: goto L_08827A74;
    case 935u: goto L_08827A84;
    case 936u: goto L_08827A8C;
    case 937u: goto L_08827A94;
    case 938u: goto L_08827AAC;
    case 939u: goto L_08827AB4;
    case 940u: goto L_08827ACC;
    case 941u: goto L_08827AD4;
    case 942u: goto L_08827AEC;
    case 943u: goto L_08827AF0;
    case 944u: goto L_08827B00;
    case 945u: goto L_08827B0C;
    case 946u: goto L_08827B58;
    case 947u: goto L_08827B6C;
    case 948u: goto L_08827B98;
    case 949u: goto L_08827BD4;
    case 950u: goto L_08827BEC;
    case 951u: goto L_08827BFC;
    case 952u: goto L_08827C04;
    case 953u: goto L_08827C10;
    case 954u: goto L_08827C24;
    case 955u: goto L_08827C30;
    case 956u: goto L_08827C34;
    case 957u: goto L_08827C40;
    case 958u: goto L_08827C4C;
    case 959u: goto L_08827C54;
    case 960u: goto L_08827C68;
    case 961u: goto L_08827C70;
    case 962u: goto L_08827C78;
    case 963u: goto L_08827C80;
    case 964u: goto L_08827C8C;
    case 965u: goto L_08827C94;
    case 966u: goto L_08827CA8;
    case 967u: goto L_08827CC4;
    case 968u: goto L_08827CD4;
    case 969u: goto L_08827CE0;
    case 970u: goto L_08827CEC;
    case 971u: goto L_08827D00;
    case 972u: goto L_08827D20;
    case 973u: goto L_08827D28;
    case 974u: goto L_08827D38;
    case 975u: goto L_08827D40;
    case 976u: goto L_08827D4C;
    case 977u: goto L_08827D5C;
    case 978u: goto L_08827D7C;
    case 979u: goto L_08827D84;
    case 980u: goto L_08827D94;
    case 981u: goto L_08827D9C;
    case 982u: goto L_08827DA4;
    case 983u: goto L_08827DAC;
    case 984u: goto L_08827DB8;
    case 985u: goto L_08827DE4;
    case 986u: goto L_08827E0C;
    case 987u: goto L_08827E14;
    case 988u: goto L_08827E30;
    case 989u: goto L_08827E34;
    case 990u: goto L_08827E64;
    case 991u: goto L_08827E6C;
    case 992u: goto L_08827E74;
    case 993u: goto L_08827E7C;
    case 994u: goto L_08827E94;
    case 995u: goto L_08827EA0;
    case 996u: goto L_08827EA8;
    case 997u: goto L_08827EB4;
    case 998u: goto L_08827EC8;
    case 999u: goto L_08827ED4;
    case 1000u: goto L_08827EEC;
    case 1001u: goto L_08827EF8;
    case 1002u: goto L_08827F04;
    case 1003u: goto L_08827F0C;
    case 1004u: goto L_08827F14;
    case 1005u: goto L_08827F20;
    case 1006u: goto L_08827F28;
    case 1007u: goto L_08827F30;
    case 1008u: goto L_08827F38;
    case 1009u: goto L_08827F40;
    case 1010u: goto L_08827F4C;
    case 1011u: goto L_08827F54;
    case 1012u: goto L_08827F5C;
    case 1013u: goto L_08827F74;
    case 1014u: goto L_08827F7C;
    case 1015u: goto L_08827F94;
    case 1016u: goto L_08827F98;
    case 1017u: goto L_08827FA8;
    case 1018u: goto L_08827FB0;
    case 1019u: goto L_08827FB8;
    case 1020u: goto L_08827FBC;
    case 1021u: goto L_08827FC8;
    case 1022u: goto L_08827FD0;
    case 1023u: goto L_08827FE8;
    case 1024u: goto L_08827FF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08824000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    goto L_08824004;
L_08824004:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 841u, 0x08823FE4u>(ctx, &aot_mem); return;
      }
      goto L_08824018;
    }
L_08824018:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
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
L_08824040:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2852)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824050:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2852)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824060:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2852)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824070:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882408Cu);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0882408Cu) goto L_0882408C;
    return;
L_0882408C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_088240B8;
      }
      goto L_08824098;
    }
L_08824098:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22344)));
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(10540));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(10556));
    ctx.gpr[31] = (0x088240B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13456));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 272u, 0x089554E8u>(ctx, &aot_mem) && ctx.pc == 0x088240B4u) goto L_088240B4;
    return;
L_088240B4:
    ctx.gpr[4] = (2224u << 16u);
    goto L_088240B8;
L_088240B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088240D0;
      }
      goto L_088240C8;
    }
L_088240C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088240FC;
      }
      goto L_088240D0;
    }
L_088240D0:
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-14744)));
    ctx.gpr[5] = (ctx.gpr[5] & 64u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2224u << 16u);
      if (branch_taken) {
          goto L_088240FC;
      }
      goto L_088240E4;
    }
L_088240E4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 512u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088240FC;
      }
      goto L_088240F8;
    }
L_088240F8:
    ctx.gpr[4] = (0u | 1u);
    goto L_088240FC;
L_088240FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_08824150;
      }
      goto L_08824104;
    }
L_08824104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824150;
      }
      goto L_08824118;
    }
L_08824118:
    ctx.gpr[31] = (0x08824120u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 860u, 0x0881F498u>(ctx, &aot_mem) && ctx.pc == 0x08824120u) goto L_08824120;
    return;
L_08824120:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824150;
      }
      goto L_08824128;
    }
L_08824128:
    ctx.gpr[31] = (0x08824130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 516u, 0x08806358u>(ctx, &aot_mem) && ctx.pc == 0x08824130u) goto L_08824130;
    return;
L_08824130:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13456));
    ctx.gpr[6] = (ctx.gpr[6] | 8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(168), ctx.gpr[6]);
    ctx.gpr[31] = (0x08824150u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 259u, 0x08955424u>(ctx, &aot_mem) && ctx.pc == 0x08824150u) goto L_08824150;
    return;
L_08824150:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824164:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_088242FC;
      }
      goto L_0882418C;
    }
L_0882418C:
    ctx.gpr[31] = (0x08824194u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13456));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 271u, 0x089554D4u>(ctx, &aot_mem) && ctx.pc == 0x08824194u) goto L_08824194;
    return;
L_08824194:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088241E0;
      }
      goto L_088241A4;
    }
L_088241A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088242D4;
      }
      goto L_088241AC;
    }
L_088241AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-9));
      if (branch_taken) {
          goto L_088241F8;
      }
      goto L_088241B4;
    }
L_088241B4:
    ctx.gpr[31] = (0x088241BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 581u, 0x088066FCu>(ctx, &aot_mem) && ctx.pc == 0x088241BCu) goto L_088241BC;
    return;
L_088241BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[16]);
    ctx.gpr[31] = (0x088241D4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(168), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x088241D4u) goto L_088241D4;
    return;
L_088241D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_088242D8;
      }
      goto L_088241DC;
    }
L_088241DC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    goto L_088241E0;
L_088241E0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08824258;
      }
      goto L_088241E8;
    }
L_088241E8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088242A0;
      }
      goto L_088241F0;
    }
L_088241F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_088242D8;
      }
      goto L_088241F8;
    }
L_088241F8:
    ctx.gpr[31] = (0x08824200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 581u, 0x088066FCu>(ctx, &aot_mem) && ctx.pc == 0x08824200u) goto L_08824200;
    return;
L_08824200:
    ctx.gpr[31] = (0x08824208u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08824208u) goto L_08824208;
    return;
L_08824208:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08824228;
      }
      goto L_08824214;
    }
L_08824214:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08824220u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08824220u) goto L_08824220;
    return;
L_08824220:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08824234;
      }
      goto L_08824228;
    }
L_08824228:
    ctx.gpr[31] = (0x08824230u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08824230u) goto L_08824230;
    return;
L_08824230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    goto L_08824234;
L_08824234:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    ctx.gpr[31] = (0x08824250u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x08824250u) goto L_08824250;
    return;
L_08824250:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_088242D8;
      }
      goto L_08824258;
    }
L_08824258:
    ctx.gpr[31] = (0x08824260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 581u, 0x088066FCu>(ctx, &aot_mem) && ctx.pc == 0x08824260u) goto L_08824260;
    return;
L_08824260:
    ctx.gpr[31] = (0x08824268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 195u, 0x08934E94u>(ctx, &aot_mem) && ctx.pc == 0x08824268u) goto L_08824268;
    return;
L_08824268:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08824274u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08824274u) goto L_08824274;
    return;
L_08824274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-9));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    ctx.gpr[31] = (0x08824298u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x08824298u) goto L_08824298;
    return;
L_08824298:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_088242D8;
      }
      goto L_088242A0;
    }
L_088242A0:
    ctx.gpr[31] = (0x088242A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 581u, 0x088066FCu>(ctx, &aot_mem) && ctx.pc == 0x088242A8u) goto L_088242A8;
    return;
L_088242A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-9));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    ctx.gpr[31] = (0x088242CCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x088242CCu) goto L_088242CC;
    return;
L_088242CC:
    ctx.gpr[31] = (0x088242D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 538u, 0x08907F7Cu>(ctx, &aot_mem) && ctx.pc == 0x088242D4u) goto L_088242D4;
    return;
L_088242D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    goto L_088242D8;
L_088242D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_088242FC;
      }
      goto L_088242E8;
    }
L_088242E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22344)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088242FC;
      }
      goto L_088242F4;
    }
L_088242F4:
    ctx.gpr[31] = (0x088242FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 293u, 0x088C1320u>(ctx, &aot_mem) && ctx.pc == 0x088242FCu) goto L_088242FC;
    return;
L_088242FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824310:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882434C;
      }
      goto L_0882432C;
    }
L_0882432C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2219u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29408)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824344:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882434C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824354:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882436C;
      }
      goto L_08824364;
    }
L_08824364:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882436C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824374:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08824388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08824388u) goto L_08824388;
    return;
L_08824388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_08824410;
      }
      goto L_08824398;
    }
L_08824398:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08824410;
      }
      goto L_088243AC;
    }
L_088243AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08824410;
      }
      goto L_088243B8;
    }
L_088243B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824410;
      }
      goto L_088243C0;
    }
L_088243C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14744));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088243ECu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 190u, 0x08A15824u>(ctx, &aot_mem) && ctx.pc == 0x088243ECu) goto L_088243EC;
    return;
L_088243EC:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08824410;
      }
      goto L_088243FC;
    }
L_088243FC:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824410:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x08824438u);
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08824310;
L_08824438:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08824448;
      }
      goto L_08824440;
    }
L_08824440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    goto L_08824448;
L_08824448:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882445C:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14744)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[2] = (ctx.gpr[4] & ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824474:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088244F4;
      }
      goto L_08824498;
    }
L_08824498:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
        goto L_08824654;
    }
    goto L_088244A8;
L_088244A8:
    ctx.gpr[31] = (0x088244B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 415u, 0x08842278u>(ctx, &aot_mem) && ctx.pc == 0x088244B0u) goto L_088244B0;
    return;
L_088244B0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088244C8;
      }
      goto L_088244B8;
    }
L_088244B8:
    ctx.gpr[31] = (0x088244C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 482u, 0x08842614u>(ctx, &aot_mem) && ctx.pc == 0x088244C0u) goto L_088244C0;
    return;
L_088244C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_088244D4;
      }
      goto L_088244C8;
    }
L_088244C8:
    ctx.gpr[31] = (0x088244D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 804u, 0x08823C88u>(ctx, &aot_mem) && ctx.pc == 0x088244D0u) goto L_088244D0;
    return;
L_088244D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    goto L_088244D4;
L_088244D4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), ctx.gpr[16]);
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
L_088244F4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 172u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882450Cu);
    ctx.gpr[5] = (0u | 156u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882450Cu) goto L_0882450C;
    return;
L_0882450C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2852), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[31] = (0x0882451Cu);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1004u, 0x0881FF94u>(ctx, &aot_mem) && ctx.pc == 0x0882451Cu) goto L_0882451C;
    return;
L_0882451C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.gpr[31] = (0x08824540u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 952u, 0x0881FB40u>(ctx, &aot_mem) && ctx.pc == 0x08824540u) goto L_08824540;
    return;
L_08824540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(132), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(160), 0u);
    ctx.gpr[31] = (0x08824590u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 888u, 0x0881F69Cu>(ctx, &aot_mem) && ctx.pc == 0x08824590u) goto L_08824590;
    return;
L_08824590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0882459C;
L_0882459C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882459C;
      }
      goto L_088245B0;
    }
L_088245B0:
    ctx.gpr[31] = (0x088245B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 415u, 0x08842278u>(ctx, &aot_mem) && ctx.pc == 0x088245B8u) goto L_088245B8;
    return;
L_088245B8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088245F8;
      }
      goto L_088245C0;
    }
L_088245C0:
    ctx.gpr[31] = (0x088245C8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 769u, 0x0893B9C4u>(ctx, &aot_mem) && ctx.pc == 0x088245C8u) goto L_088245C8;
    return;
L_088245C8:
    ctx.gpr[31] = (0x088245D0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 222u, 0x08945104u>(ctx, &aot_mem) && ctx.pc == 0x088245D0u) goto L_088245D0;
    return;
L_088245D0:
    ctx.gpr[31] = (0x088245D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 164u, 0x08814BA0u>(ctx, &aot_mem) && ctx.pc == 0x088245D8u) goto L_088245D8;
    return;
L_088245D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824614;
      }
      goto L_088245F0;
    }
L_088245F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882463C;
      }
      goto L_088245F8;
    }
L_088245F8:
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
L_08824614:
    ctx.gpr[31] = (0x0882461Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 89u, 0x08820660u>(ctx, &aot_mem) && ctx.pc == 0x0882461Cu) goto L_0882461C;
    return;
L_0882461C:
    ctx.gpr[31] = (0x08824624u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 930u, 0x0881F9B4u>(ctx, &aot_mem) && ctx.pc == 0x08824624u) goto L_08824624;
    return;
L_08824624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824614;
      }
      goto L_0882463C;
    }
L_0882463C:
    ctx.gpr[31] = (0x08824644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 963u, 0x0881FCB0u>(ctx, &aot_mem) && ctx.pc == 0x08824644u) goto L_08824644;
    return;
L_08824644:
    ctx.gpr[31] = (0x0882464Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 211u, 0x088213E8u>(ctx, &aot_mem) && ctx.pc == 0x0882464Cu) goto L_0882464C;
    return;
L_0882464C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    goto L_08824654;
L_08824654:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08824744;
      }
      goto L_0882465C;
    }
L_0882465C:
    ctx.gpr[31] = (0x08824664u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FABCu>(ctx, &aot_mem) && ctx.pc == 0x08824664u) goto L_08824664;
    return;
L_08824664:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
        goto L_0882466C;
    }
    goto L_0882466C;
L_0882466C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088247C8;
      }
      goto L_08824674;
    }
L_08824674:
    ctx.gpr[31] = (0x0882467Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FABCu>(ctx, &aot_mem) && ctx.pc == 0x0882467Cu) goto L_0882467C;
    return;
L_0882467C:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08824684;
    }
    goto L_08824684;
L_08824684:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088247C8;
      }
      goto L_08824690;
    }
L_08824690:
    ctx.gpr[31] = (0x08824698u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 549u, 0x0882289Cu>(ctx, &aot_mem) && ctx.pc == 0x08824698u) goto L_08824698;
    return;
L_08824698:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_088246A0;
    }
    goto L_088246A0;
L_088246A0:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_088247C8;
      }
      goto L_088246AC;
    }
L_088246AC:
    ctx.gpr[31] = (0x088246B4u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 549u, 0x0882289Cu>(ctx, &aot_mem) && ctx.pc == 0x088246B4u) goto L_088246B4;
    return;
L_088246B4:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_088246BC;
    }
    goto L_088246BC;
L_088246BC:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088247C8;
      }
      goto L_088246C8;
    }
L_088246C8:
    ctx.gpr[31] = (0x088246D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 227u, 0x08821578u>(ctx, &aot_mem) && ctx.pc == 0x088246D0u) goto L_088246D0;
    return;
L_088246D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_088246E0;
    }
    goto L_088246E0;
L_088246E0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088247C8;
      }
      goto L_088246F0;
    }
L_088246F0:
    ctx.gpr[31] = (0x088246F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 166u, 0x08814BCCu>(ctx, &aot_mem) && ctx.pc == 0x088246F8u) goto L_088246F8;
    return;
L_088246F8:
    ctx.gpr[31] = (0x08824700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 216u, 0x08821444u>(ctx, &aot_mem) && ctx.pc == 0x08824700u) goto L_08824700;
    return;
L_08824700:
    ctx.gpr[31] = (0x08824708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 804u, 0x08823C88u>(ctx, &aot_mem) && ctx.pc == 0x08824708u) goto L_08824708;
    return;
L_08824708:
    ctx.gpr[31] = (0x08824710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 220u, 0x088214CCu>(ctx, &aot_mem) && ctx.pc == 0x08824710u) goto L_08824710;
    return;
L_08824710:
    ctx.gpr[31] = (0x08824718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 107u, 0x088207F8u>(ctx, &aot_mem) && ctx.pc == 0x08824718u) goto L_08824718;
    return;
L_08824718:
    ctx.gpr[31] = (0x08824720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 174u, 0x08820F88u>(ctx, &aot_mem) && ctx.pc == 0x08824720u) goto L_08824720;
    return;
L_08824720:
    ctx.gpr[31] = (0x08824728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 602u, 0x08822C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08824728u) goto L_08824728;
    return;
L_08824728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(160), ctx.gpr[16]);
    ctx.gpr[31] = (0x0882473Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 463u, 0x08805F78u>(ctx, &aot_mem) && ctx.pc == 0x0882473Cu) goto L_0882473C;
    return;
L_0882473C:
    ctx.gpr[31] = (0x08824744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 493u, 0x08806140u>(ctx, &aot_mem) && ctx.pc == 0x08824744u) goto L_08824744;
    return;
L_08824744:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x08824750u);
    ctx.gpr[5] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 131u, 0x08820A64u>(ctx, &aot_mem) && ctx.pc == 0x08824750u) goto L_08824750;
    return;
L_08824750:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
        goto L_08824758;
    }
    goto L_08824758;
L_08824758:
    ctx.gpr[31] = (0x08824760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 602u, 0x08822C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08824760u) goto L_08824760;
    return;
L_08824760:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08824768;
    }
    goto L_08824768;
L_08824768:
    ctx.gpr[31] = (0x08824770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 76u, 0x089405C0u>(ctx, &aot_mem) && ctx.pc == 0x08824770u) goto L_08824770;
    return;
L_08824770:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08824778;
    }
    goto L_08824778;
L_08824778:
    ctx.gpr[31] = (0x08824780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 50u, 0x089684ACu>(ctx, &aot_mem) && ctx.pc == 0x08824780u) goto L_08824780;
    return;
L_08824780:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08824788;
    }
    goto L_08824788;
L_08824788:
    ctx.gpr[31] = (0x08824790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 736u, 0x08806F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08824790u) goto L_08824790;
    return;
L_08824790:
    if (ctx.gpr[2] == ctx.gpr[16]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08824798;
    }
    goto L_08824798;
L_08824798:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088247C8;
      }
      goto L_088247A4;
    }
L_088247A4:
    ctx.gpr[31] = (0x088247ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 681u, 0x0896BFC4u>(ctx, &aot_mem) && ctx.pc == 0x088247ACu) goto L_088247AC;
    return;
L_088247AC:
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
L_088247C8:
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
L_088247E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882481Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x0882481Cu) goto L_0882481C;
    return;
L_0882481C:
    ctx.gpr[31] = (0x08824824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 956u, 0x0881FB7Cu>(ctx, &aot_mem) && ctx.pc == 0x08824824u) goto L_08824824;
    return;
L_08824824:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[31] = (0x08824834u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1007u, 0x0881FFCCu>(ctx, &aot_mem) && ctx.pc == 0x08824834u) goto L_08824834;
    return;
L_08824834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[31] = (0x08824840u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1006u, 0x0881FFBCu>(ctx, &aot_mem) && ctx.pc == 0x08824840u) goto L_08824840;
    return;
L_08824840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 4u);
    ctx.gpr[21] = (0u | 9u);
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[23] = (2222u << 16u);
    goto L_08824864;
L_08824864:
    ctx.gpr[31] = (0x0882486Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1005u, 0x0881FFA4u>(ctx, &aot_mem) && ctx.pc == 0x0882486Cu) goto L_0882486C;
    return;
L_0882486C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08824864;
      }
      goto L_08824888;
    }
L_08824888:
    ctx.gpr[31] = (0x08824890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1008u, 0x0881FFDCu>(ctx, &aot_mem) && ctx.pc == 0x08824890u) goto L_08824890;
    return;
L_08824890:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(116), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(120), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(124), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(152), 0u);
    ctx.gpr[31] = (0x088248B8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(168), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 860u, 0x0881F498u>(ctx, &aot_mem) && ctx.pc == 0x088248B8u) goto L_088248B8;
    return;
L_088248B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
      if (branch_taken) {
          goto L_088248CC;
      }
      goto L_088248C4;
    }
L_088248C4:
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    goto L_088248CC;
L_088248CC:
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (2224u << 16u);
      if (branch_taken) {
          goto L_088248E4;
      }
      goto L_088248D8;
    }
L_088248D8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-4596)));
      if (branch_taken) {
          goto L_0882496C;
      }
      goto L_088248E4;
    }
L_088248E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08824900;
      }
      goto L_088248F4;
    }
L_088248F4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-4596)));
      if (branch_taken) {
          goto L_0882496C;
      }
      goto L_08824900;
    }
L_08824900:
    ctx.gpr[31] = (0x08824908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 415u, 0x08842278u>(ctx, &aot_mem) && ctx.pc == 0x08824908u) goto L_08824908;
    return;
L_08824908:
    if (ctx.gpr[2] != ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
        goto L_08824964;
    }
    goto L_08824910;
L_08824910:
    ctx.gpr[31] = (0x08824918u);
    ctx.gpr[4] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08824918u) goto L_08824918;
    return;
L_08824918:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824930;
      }
      goto L_08824920;
    }
L_08824920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-4596)));
      if (branch_taken) {
          goto L_0882496C;
      }
      goto L_08824930;
    }
L_08824930:
    ctx.gpr[31] = (0x08824938u);
    ctx.gpr[4] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08824938u) goto L_08824938;
    return;
L_08824938:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08824958;
      }
      goto L_08824940;
    }
L_08824940:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-4596)));
      if (branch_taken) {
          goto L_0882496C;
      }
      goto L_08824958;
    }
L_08824958:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-4596)));
      if (branch_taken) {
          goto L_0882496C;
      }
      goto L_08824964;
    }
L_08824964:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-4596)));
    goto L_0882496C;
L_0882496C:
    ctx.gpr[4] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08824994u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 350u, 0x0880F4F8u>(ctx, &aot_mem) && ctx.pc == 0x08824994u) goto L_08824994;
    return;
L_08824994:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 152u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088249ACu);
    ctx.gpr[5] = (0u | 141u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088249ACu) goto L_088249AC;
    return;
L_088249AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088249F4;
      }
      goto L_088249BC;
    }
L_088249BC:
    ctx.gpr[31] = (0x088249C4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1000u, 0x0881FF20u>(ctx, &aot_mem) && ctx.pc == 0x088249C4u) goto L_088249C4;
    return;
L_088249C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088249D0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 480u, 0x0880FF38u>(ctx, &aot_mem) && ctx.pc == 0x088249D0u) goto L_088249D0;
    return;
L_088249D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088249E4u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1000u, 0x0881FF20u>(ctx, &aot_mem) && ctx.pc == 0x088249E4u) goto L_088249E4;
    return;
L_088249E4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088249F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 480u, 0x0880FF38u>(ctx, &aot_mem) && ctx.pc == 0x088249F0u) goto L_088249F0;
    return;
L_088249F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    goto L_088249F4;
L_088249F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
        goto L_08824A50;
    }
    goto L_08824A00;
L_08824A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08824A34;
      }
      goto L_08824A0C;
    }
L_08824A0C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08824A18u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 373u, 0x0882D570u>(ctx, &aot_mem) && ctx.pc == 0x08824A18u) goto L_08824A18;
    return;
L_08824A18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (0x08824A2Cu);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 373u, 0x0882D570u>(ctx, &aot_mem) && ctx.pc == 0x08824A2Cu) goto L_08824A2C;
    return;
L_08824A2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    goto L_08824A34;
L_08824A34:
    ctx.gpr[31] = (0x08824A3Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 808u, 0x0882B684u>(ctx, &aot_mem) && ctx.pc == 0x08824A3Cu) goto L_08824A3C;
    return;
L_08824A3C:
    ctx.gpr[31] = (0x08824A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 962u, 0x0881FBE0u>(ctx, &aot_mem) && ctx.pc == 0x08824A44u) goto L_08824A44;
    return;
L_08824A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    goto L_08824A50;
L_08824A50:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824B38;
      }
      goto L_08824A58;
    }
L_08824A58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08824B38;
      }
      goto L_08824A6C;
    }
L_08824A6C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08824A7Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 257u, 0x0881CE88u>(ctx, &aot_mem) && ctx.pc == 0x08824A7Cu) goto L_08824A7C;
    return;
L_08824A7C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08824A88u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 472u, 0x0881DCA0u>(ctx, &aot_mem) && ctx.pc == 0x08824A88u) goto L_08824A88;
    return;
L_08824A88:
    ctx.gpr[31] = (0x08824A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1009u, 0x0881FFECu>(ctx, &aot_mem) && ctx.pc == 0x08824A90u) goto L_08824A90;
    return;
L_08824A90:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[31] = (0x08824A9Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1001u, 0x0881FF38u>(ctx, &aot_mem) && ctx.pc == 0x08824A9Cu) goto L_08824A9C;
    return;
L_08824A9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x08824ABCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 428u, 0x0881D904u>(ctx, &aot_mem) && ctx.pc == 0x08824ABCu) goto L_08824ABC;
    return;
L_08824ABC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08824ACCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 388u, 0x0881D6A4u>(ctx, &aot_mem) && ctx.pc == 0x08824ACCu) goto L_08824ACC;
    return;
L_08824ACC:
    ctx.gpr[31] = (0x08824AD4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 284u, 0x0881D05Cu>(ctx, &aot_mem) && ctx.pc == 0x08824AD4u) goto L_08824AD4;
    return;
L_08824AD4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08824AE4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881D31Cu>(ctx, &aot_mem) && ctx.pc == 0x08824AE4u) goto L_08824AE4;
    return;
L_08824AE4:
    ctx.gpr[31] = (0x08824AECu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1000u, 0x0881FF20u>(ctx, &aot_mem) && ctx.pc == 0x08824AECu) goto L_08824AEC;
    return;
L_08824AEC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08824AF8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 287u, 0x0881D08Cu>(ctx, &aot_mem) && ctx.pc == 0x08824AF8u) goto L_08824AF8;
    return;
L_08824AF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08824B08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 631u, 0x0897AABCu>(ctx, &aot_mem) && ctx.pc == 0x08824B08u) goto L_08824B08;
    return;
L_08824B08:
    ctx.gpr[31] = (0x08824B10u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 488u, 0x0881DD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08824B10u) goto L_08824B10;
    return;
L_08824B10:
    if (ctx.gpr[2] != ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
        goto L_08824B24;
    }
    goto L_08824B18;
L_08824B18:
    ctx.gpr[31] = (0x08824B20u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 479u, 0x0881DCF4u>(ctx, &aot_mem) && ctx.pc == 0x08824B20u) goto L_08824B20;
    return;
L_08824B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    goto L_08824B24;
L_08824B24:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08824A6C;
      }
      goto L_08824B38;
    }
L_08824B38:
    ctx.gpr[31] = (0x08824B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 74u, 0x0896C71Cu>(ctx, &aot_mem) && ctx.pc == 0x08824B40u) goto L_08824B40;
    return;
L_08824B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08824BF0;
      }
      goto L_08824B58;
    }
L_08824B58:
    ctx.gpr[19] = (0u | 10000u);
    ctx.gpr[20] = (0u | 5000u);
    ctx.gpr[22] = (0u | 0u);
    goto L_08824B64;
L_08824B64:
    ctx.gpr[31] = (0x08824B6Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 14u, 0x08820128u>(ctx, &aot_mem) && ctx.pc == 0x08824B6Cu) goto L_08824B6C;
    return;
L_08824B6C:
    if (ctx.gpr[2] != ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
        goto L_08824BD0;
    }
    goto L_08824B74;
L_08824B74:
    ctx.gpr[31] = (0x08824B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 74u, 0x0896C71Cu>(ctx, &aot_mem) && ctx.pc == 0x08824B7Cu) goto L_08824B7C;
    return;
L_08824B7C:
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[19]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[5] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x08824BA4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 74u, 0x0896C71Cu>(ctx, &aot_mem) && ctx.pc == 0x08824BA4u) goto L_08824BA4;
    return;
L_08824BA4:
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[19]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[6] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[6] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(140), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_08824BE0;
      }
      goto L_08824BD0;
    }
L_08824BD0:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(132), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(140), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    goto L_08824BE0;
L_08824BE0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08824B64;
      }
      goto L_08824BF0;
    }
L_08824BF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
      if (branch_taken) {
          goto L_08824C10;
      }
      goto L_08824C00;
    }
L_08824C00:
    ctx.gpr[31] = (0x08824C08u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 133u, 0x089408D0u>(ctx, &aot_mem) && ctx.pc == 0x08824C08u) goto L_08824C08;
    return;
L_08824C08:
    ctx.gpr[31] = (0x08824C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 185u, 0x08969A10u>(ctx, &aot_mem) && ctx.pc == 0x08824C10u) goto L_08824C10;
    return;
L_08824C10:
    ctx.gpr[31] = (0x08824C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 151u, 0x08950DC4u>(ctx, &aot_mem) && ctx.pc == 0x08824C18u) goto L_08824C18;
    return;
L_08824C18:
    ctx.gpr[31] = (0x08824C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 813u, 0x08823DB4u>(ctx, &aot_mem) && ctx.pc == 0x08824C20u) goto L_08824C20;
    return;
L_08824C20:
    ctx.gpr[31] = (0x08824C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 415u, 0x08842278u>(ctx, &aot_mem) && ctx.pc == 0x08824C28u) goto L_08824C28;
    return;
L_08824C28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08824C44;
      }
      goto L_08824C38;
    }
L_08824C38:
    ctx.gpr[31] = (0x08824C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 493u, 0x0896AE70u>(ctx, &aot_mem) && ctx.pc == 0x08824C40u) goto L_08824C40;
    return;
L_08824C40:
    ctx.gpr[4] = (2224u << 16u);
    goto L_08824C44;
L_08824C44:
    ctx.gpr[31] = (0x08824C4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13456));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 343u, 0x08955940u>(ctx, &aot_mem) && ctx.pc == 0x08824C4Cu) goto L_08824C4C;
    return;
L_08824C4C:
    ctx.gpr[31] = (0x08824C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 38u, 0x0896C248u>(ctx, &aot_mem) && ctx.pc == 0x08824C54u) goto L_08824C54;
    return;
L_08824C54:
    ctx.gpr[31] = (0x08824C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 203u, 0x088BD634u>(ctx, &aot_mem) && ctx.pc == 0x08824C5Cu) goto L_08824C5C;
    return;
L_08824C5C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(22344), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08824DD0;
      }
      goto L_08824C68;
    }
L_08824C68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 3001u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08824C84;
      }
      goto L_08824C78;
    }
L_08824C78:
    ctx.gpr[6] = (0u | 4001u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 20000 ? 1u : 0u);
        goto L_08824D98;
    }
    goto L_08824C84;
L_08824C84:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10584), ctx.gpr[18]);
    goto L_08824C90;
L_08824C90:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10588), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10592), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10593), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(10584));
    ctx.gpr[31] = (0x08824CA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10540));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 410u, 0x0897F594u>(ctx, &aot_mem) && ctx.pc == 0x08824CA8u) goto L_08824CA8;
    return;
L_08824CA8:
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(22344)));
        goto L_08824CE0;
    }
    goto L_08824CB0;
L_08824CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(22344)));
    goto L_08824CB4;
L_08824CB4:
    ctx.gpr[31] = (0x08824CBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10540));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 388u, 0x0897F3C4u>(ctx, &aot_mem) && ctx.pc == 0x08824CBCu) goto L_08824CBC;
    return;
L_08824CBC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(22344)));
        goto L_08824CE0;
    }
    goto L_08824CC4;
L_08824CC4:
    ctx.gpr[31] = (0x08824CCCu);
    ctx.gpr[4] = (0u | 100u);
    ctx.pc = 0x08AB469Cu;
    return;
L_08824CCC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (static_cast<std::int32_t>(ctx.gpr[16]) < 20000 ? 1u : 0u);
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(22344)));
        goto L_08824CB4;
    }
    goto L_08824CDC;
L_08824CDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(22344)));
    goto L_08824CE0;
L_08824CE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10540)));
    if (ctx.gpr[5] != ctx.gpr[18]) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08824CFC;
    }
    goto L_08824CEC;
L_08824CEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10556)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08824D10;
      }
      goto L_08824CF8;
    }
L_08824CF8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08824CFC;
L_08824CFC:
    ctx.gpr[17] = (static_cast<std::int32_t>(ctx.gpr[16]) < 20000 ? 1u : 0u);
    if (ctx.gpr[17] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10584), ctx.gpr[18]);
        goto L_08824C90;
    }
    goto L_08824D08;
L_08824D08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824D8C;
      }
      goto L_08824D10;
    }
L_08824D10:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824D8C;
      }
      goto L_08824D18;
    }
L_08824D18:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10584), 0u);
    goto L_08824D1C;
L_08824D1C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10588), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10592), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10593), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(10584));
    ctx.gpr[31] = (0x08824D34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10540));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 410u, 0x0897F594u>(ctx, &aot_mem) && ctx.pc == 0x08824D34u) goto L_08824D34;
    return;
L_08824D34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(22344)));
    goto L_08824D38;
L_08824D38:
    ctx.gpr[31] = (0x08824D40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10540));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 388u, 0x0897F3C4u>(ctx, &aot_mem) && ctx.pc == 0x08824D40u) goto L_08824D40;
    return;
L_08824D40:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(22344)));
        goto L_08824D64;
    }
    goto L_08824D48;
L_08824D48:
    ctx.gpr[31] = (0x08824D50u);
    ctx.gpr[4] = (0u | 100u);
    ctx.pc = 0x08AB469Cu;
    return;
L_08824D50:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 20000 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(22344)));
        goto L_08824D38;
    }
    goto L_08824D60;
L_08824D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(22344)));
    goto L_08824D64;
L_08824D64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10540)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08824D80;
    }
    goto L_08824D70;
L_08824D70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10556)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824D8C;
      }
      goto L_08824D7C;
    }
L_08824D7C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08824D80;
L_08824D80:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 20000 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10584), 0u);
        goto L_08824D1C;
    }
    goto L_08824D8C;
L_08824D8C:
    ctx.gpr[31] = (0x08824D94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 293u, 0x088C1320u>(ctx, &aot_mem) && ctx.pc == 0x08824D94u) goto L_08824D94;
    return;
L_08824D94:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 20000 ? 1u : 0u);
    goto L_08824D98;
L_08824D98:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824DB8;
      }
      goto L_08824DA0;
    }
L_08824DA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(22344)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(10540));
    ctx.gpr[31] = (0x08824DB0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10584));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 410u, 0x0897F594u>(ctx, &aot_mem) && ctx.pc == 0x08824DB0u) goto L_08824DB0;
    return;
L_08824DB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824DC0;
      }
      goto L_08824DB8;
    }
L_08824DB8:
    ctx.gpr[31] = (0x08824DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 325u, 0x088C1590u>(ctx, &aot_mem) && ctx.pc == 0x08824DC0u) goto L_08824DC0;
    return;
L_08824DC0:
    ctx.gpr[31] = (0x08824DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 248u, 0x08821724u>(ctx, &aot_mem) && ctx.pc == 0x08824DC8u) goto L_08824DC8;
    return;
L_08824DC8:
    ctx.gpr[31] = (0x08824DD0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 432u, 0x0884DB28u>(ctx, &aot_mem) && ctx.pc == 0x08824DD0u) goto L_08824DD0;
    return;
L_08824DD0:
    ctx.gpr[31] = (0x08824DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 415u, 0x08842278u>(ctx, &aot_mem) && ctx.pc == 0x08824DD8u) goto L_08824DD8;
    return;
L_08824DD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824DF4;
      }
      goto L_08824DE0;
    }
L_08824DE0:
    ctx.gpr[31] = (0x08824DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 74u, 0x0896C71Cu>(ctx, &aot_mem) && ctx.pc == 0x08824DE8u) goto L_08824DE8;
    return;
L_08824DE8:
    ctx.gpr[5] = (ctx.gpr[2] & 31u);
    ctx.gpr[31] = (0x08824DF4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 680u, 0x08806C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08824DF4u) goto L_08824DF4;
    return;
L_08824DF4:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08824E28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(2848), ctx.gpr[21]);
    ctx.gpr[22] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22344)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[30]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[19] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_08824F7C;
      }
      goto L_08824E94;
    }
L_08824E94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
        goto L_08824EB4;
    }
    goto L_08824EA0;
L_08824EA0:
    ctx.gpr[31] = (0x08824EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 34u, 0x08908258u>(ctx, &aot_mem) && ctx.pc == 0x08824EA8u) goto L_08824EA8;
    return;
L_08824EA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824F58;
      }
      goto L_08824EB0;
    }
L_08824EB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    goto L_08824EB4;
L_08824EB4:
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824F58;
      }
      goto L_08824EC0;
    }
L_08824EC0:
    ctx.gpr[31] = (0x08824EC8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 860u, 0x0881F498u>(ctx, &aot_mem) && ctx.pc == 0x08824EC8u) goto L_08824EC8;
    return;
L_08824EC8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824F08;
      }
      goto L_08824ED0;
    }
L_08824ED0:
    ctx.gpr[31] = (0x08824ED8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x08824ED8u) goto L_08824ED8;
    return;
L_08824ED8:
    ctx.gpr[31] = (0x08824EE0u);
    // nop
    goto L_08824310;
L_08824EE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824EF8;
      }
      goto L_08824EE8;
    }
L_08824EE8:
    ctx.gpr[31] = (0x08824EF0u);
    // nop
    goto L_0882445C;
L_08824EF0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08824F58;
      }
      goto L_08824EF8;
    }
L_08824EF8:
    ctx.gpr[31] = (0x08824F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 516u, 0x08806358u>(ctx, &aot_mem) && ctx.pc == 0x08824F00u) goto L_08824F00;
    return;
L_08824F00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824F58;
      }
      goto L_08824F08;
    }
L_08824F08:
    ctx.gpr[31] = (0x08824F10u);
    // nop
    goto L_08824310;
L_08824F10:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08824F28;
      }
      goto L_08824F18;
    }
L_08824F18:
    ctx.gpr[31] = (0x08824F20u);
    // nop
    goto L_0882445C;
L_08824F20:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[23];
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08824F40;
      }
      goto L_08824F28;
    }
L_08824F28:
    ctx.gpr[31] = (0x08824F30u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x08824F30u) goto L_08824F30;
    return;
L_08824F30:
    ctx.gpr[31] = (0x08824F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 581u, 0x088066FCu>(ctx, &aot_mem) && ctx.pc == 0x08824F38u) goto L_08824F38;
    return;
L_08824F38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08824F58;
      }
      goto L_08824F40;
    }
L_08824F40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14744)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08824F58;
      }
      goto L_08824F50;
    }
L_08824F50:
    ctx.gpr[31] = (0x08824F58u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x08824F58u) goto L_08824F58;
    return;
L_08824F58:
    ctx.gpr[31] = (0x08824F60u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 860u, 0x0881F498u>(ctx, &aot_mem) && ctx.pc == 0x08824F60u) goto L_08824F60;
    return;
L_08824F60:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
        goto L_088253EC;
    }
    goto L_08824F68;
L_08824F68:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08824F74u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 998u, 0x0881FEE8u>(ctx, &aot_mem) && ctx.pc == 0x08824F74u) goto L_08824F74;
    return;
L_08824F74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_088253EC;
      }
      goto L_08824F7C;
    }
L_08824F7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 3001u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08824F98;
      }
      goto L_08824F8C;
    }
L_08824F8C:
    ctx.gpr[6] = (0u | 4001u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08825098;
      }
      goto L_08824F98;
    }
L_08824F98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08824FD8;
      }
      goto L_08824FA8;
    }
L_08824FA8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[23];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08824FD8;
      }
      goto L_08824FB0;
    }
L_08824FB0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_08824FD8;
      }
      goto L_08824FB8;
    }
L_08824FB8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_08824FD8;
      }
      goto L_08824FC0;
    }
L_08824FC0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 7u);
      if (branch_taken) {
          goto L_08824FD8;
      }
      goto L_08824FC8;
    }
L_08824FC8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 8u);
      if (branch_taken) {
          goto L_08824FD8;
      }
      goto L_08824FD0;
    }
L_08824FD0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08825098;
      }
      goto L_08824FD8;
    }
L_08824FD8:
    ctx.gpr[31] = (0x08824FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 206u, 0x088BD65Cu>(ctx, &aot_mem) && ctx.pc == 0x08824FE0u) goto L_08824FE0;
    return;
L_08824FE0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (28672u << 16u);
      if (branch_taken) {
          goto L_08824FF8;
      }
      goto L_08824FEC;
    }
L_08824FEC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08825098;
      }
      goto L_08824FF8;
    }
L_08824FF8:
    ctx.gpr[31] = (0x08825000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 179u, 0x08964DBCu>(ctx, &aot_mem) && ctx.pc == 0x08825000u) goto L_08825000;
    return;
L_08825000:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825098;
      }
      goto L_08825008;
    }
L_08825008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22344)));
    ctx.gpr[6] = (17150u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10584), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10588), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[23] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10592), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10593), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22344)));
    goto L_08825058;
L_08825058:
    ctx.gpr[31] = (0x08825060u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10540));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 388u, 0x0897F3C4u>(ctx, &aot_mem) && ctx.pc == 0x08825060u) goto L_08825060;
    return;
L_08825060:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825070;
      }
      goto L_08825068;
    }
L_08825068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08825088;
      }
      goto L_08825070;
    }
L_08825070:
    ctx.gpr[31] = (0x08825078u);
    ctx.gpr[4] = (0u | 100u);
    ctx.pc = 0x08AB469Cu;
    return;
L_08825078:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (static_cast<std::int32_t>(ctx.gpr[16]) < 15000 ? 1u : 0u);
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22344)));
        goto L_08825058;
    }
    goto L_08825088;
L_08825088:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825098;
      }
      goto L_08825090;
    }
L_08825090:
    ctx.gpr[31] = (0x08825098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 325u, 0x088C1590u>(ctx, &aot_mem) && ctx.pc == 0x08825098u) goto L_08825098;
    return;
L_08825098:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088252F4;
      }
      goto L_088250A0;
    }
L_088250A0:
    ctx.gpr[5] = (0u | 15u);
    goto L_088250A4;
L_088250A4:
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088250A4;
      }
      goto L_088250C8;
    }
L_088250C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22344)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10540)));
    ctx.gpr[6] = (17150u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10544)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10548))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10549))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10544)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10560)));
    ctx.gpr[17] = (ctx.gpr[17] & 16u);
    ctx.gpr[16] = (ctx.gpr[16] & 16u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08825288;
      }
      goto L_08825128;
    }
L_08825128:
    ctx.gpr[31] = (0x08825130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 209u, 0x088BD67Cu>(ctx, &aot_mem) && ctx.pc == 0x08825130u) goto L_08825130;
    return;
L_08825130:
    ctx.gpr[31] = (0x08825138u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 295u, 0x088C1344u>(ctx, &aot_mem) && ctx.pc == 0x08825138u) goto L_08825138;
    return;
L_08825138:
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088251AC;
      }
      goto L_08825144;
    }
L_08825144:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22344)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    if (static_cast<std::int32_t>(ctx.gpr[19]) >= 0) {
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
        goto L_08825158;
    }
    goto L_08825158;
L_08825158:
    if (ctx.gpr[18] != ctx.gpr[16]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10544)));
        goto L_0882517C;
    }
    goto L_08825160;
L_08825160:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10560)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10556)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10560), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10556), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088251BC;
      }
      goto L_0882517C;
    }
L_0882517C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(10540)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10544), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(10540), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088251BC;
      }
      goto L_088251AC;
    }
L_088251AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_088251B8;
    }
    goto L_088251B8;
L_088251B8:
    ctx.gpr[16] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_088251BC;
L_088251BC:
    ctx.gpr[31] = (0x088251C4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 860u, 0x0881F498u>(ctx, &aot_mem) && ctx.pc == 0x088251C4u) goto L_088251C4;
    return;
L_088251C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882520C;
      }
      goto L_088251CC;
    }
L_088251CC:
    ctx.gpr[31] = (0x088251D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 294u, 0x088C1334u>(ctx, &aot_mem) && ctx.pc == 0x088251D4u) goto L_088251D4;
    return;
L_088251D4:
    ctx.gpr[31] = (0x088251DCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x088251DCu) goto L_088251DC;
    return;
L_088251DC:
    ctx.gpr[31] = (0x088251E4u);
    // nop
    goto L_08824310;
L_088251E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088251FC;
      }
      goto L_088251EC;
    }
L_088251EC:
    ctx.gpr[31] = (0x088251F4u);
    // nop
    goto L_0882445C;
L_088251F4:
    if (ctx.gpr[2] != ctx.gpr[23]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22344)));
        goto L_0882528C;
    }
    goto L_088251FC;
L_088251FC:
    ctx.gpr[31] = (0x08825204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 516u, 0x08806358u>(ctx, &aot_mem) && ctx.pc == 0x08825204u) goto L_08825204;
    return;
L_08825204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22344)));
      if (branch_taken) {
          goto L_0882528C;
      }
      goto L_0882520C;
    }
L_0882520C:
    ctx.gpr[31] = (0x08825214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 295u, 0x088C1344u>(ctx, &aot_mem) && ctx.pc == 0x08825214u) goto L_08825214;
    return;
L_08825214:
    if (ctx.gpr[16] != ctx.gpr[2]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22344)));
        goto L_0882528C;
    }
    goto L_0882521C;
L_0882521C:
    ctx.gpr[31] = (0x08825224u);
    // nop
    goto L_08824310;
L_08825224:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882523C;
      }
      goto L_0882522C;
    }
L_0882522C:
    ctx.gpr[31] = (0x08825234u);
    // nop
    goto L_0882445C;
L_08825234:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[23];
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08825260;
      }
      goto L_0882523C;
    }
L_0882523C:
    ctx.gpr[31] = (0x08825244u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x08825244u) goto L_08825244;
    return;
L_08825244:
    ctx.gpr[31] = (0x0882524Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 293u, 0x088C1320u>(ctx, &aot_mem) && ctx.pc == 0x0882524Cu) goto L_0882524C;
    return;
L_0882524C:
    ctx.gpr[31] = (0x08825254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 581u, 0x088066FCu>(ctx, &aot_mem) && ctx.pc == 0x08825254u) goto L_08825254;
    return;
L_08825254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22344)));
      if (branch_taken) {
          goto L_0882528C;
      }
      goto L_0882525C;
    }
L_0882525C:
    ctx.gpr[4] = (2224u << 16u);
    goto L_08825260;
L_08825260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14744)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22344)));
        goto L_0882528C;
    }
    goto L_08825270;
L_08825270:
    if (ctx.gpr[19] != ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22344)));
        goto L_0882528C;
    }
    goto L_08825278;
L_08825278:
    ctx.gpr[31] = (0x08825280u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 862u, 0x0881F4CCu>(ctx, &aot_mem) && ctx.pc == 0x08825280u) goto L_08825280;
    return;
L_08825280:
    ctx.gpr[31] = (0x08825288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 293u, 0x088C1320u>(ctx, &aot_mem) && ctx.pc == 0x08825288u) goto L_08825288;
    return;
L_08825288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22344)));
    goto L_0882528C;
L_0882528C:
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10566)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (0u | 9u);
      if (branch_taken) {
          goto L_088252F4;
      }
      goto L_088252A0;
    }
L_088252A0:
    ctx.gpr[31] = (0x088252A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 179u, 0x08964DBCu>(ctx, &aot_mem) && ctx.pc == 0x088252A8u) goto L_088252A8;
    return;
L_088252A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088252F4;
      }
      goto L_088252B0;
    }
L_088252B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088252EC;
      }
      goto L_088252C4;
    }
L_088252C4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_088252EC;
      }
      goto L_088252CC;
    }
L_088252CC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_088252EC;
      }
      goto L_088252D4;
    }
L_088252D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_088252EC;
      }
      goto L_088252DC;
    }
L_088252DC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_088252EC;
      }
      goto L_088252E4;
    }
L_088252E4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088252F4;
      }
      goto L_088252EC;
    }
L_088252EC:
    ctx.gpr[31] = (0x088252F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 278u, 0x088C1260u>(ctx, &aot_mem) && ctx.pc == 0x088252F4u) goto L_088252F4;
    return;
L_088252F4:
    ctx.gpr[31] = (0x088252FCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 860u, 0x0881F498u>(ctx, &aot_mem) && ctx.pc == 0x088252FCu) goto L_088252FC;
    return;
L_088252FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (15692u << 16u);
      if (branch_taken) {
          goto L_08825318;
      }
      goto L_08825304;
    }
L_08825304:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08825310u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 998u, 0x0881FEE8u>(ctx, &aot_mem) && ctx.pc == 0x08825310u) goto L_08825310;
    return;
L_08825310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825328;
      }
      goto L_08825318;
    }
L_08825318:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08825328u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 998u, 0x0881FEE8u>(ctx, &aot_mem) && ctx.pc == 0x08825328u) goto L_08825328;
    return;
L_08825328:
    ctx.gpr[31] = (0x08825330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 179u, 0x08964DBCu>(ctx, &aot_mem) && ctx.pc == 0x08825330u) goto L_08825330;
    return;
L_08825330:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08825340;
      }
      goto L_08825338;
    }
L_08825338:
    ctx.gpr[31] = (0x08825340u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 854u, 0x088C337Cu>(ctx, &aot_mem) && ctx.pc == 0x08825340u) goto L_08825340;
    return;
L_08825340:
    ctx.gpr[31] = (0x08825348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 206u, 0x088BD65Cu>(ctx, &aot_mem) && ctx.pc == 0x08825348u) goto L_08825348;
    return;
L_08825348:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
        goto L_088253EC;
    }
    goto L_08825354;
L_08825354:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08825360u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 998u, 0x0881FEE8u>(ctx, &aot_mem) && ctx.pc == 0x08825360u) goto L_08825360;
    return;
L_08825360:
    ctx.gpr[4] = (28672u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[4] = (28672u << 16u);
      if (branch_taken) {
          goto L_088253B8;
      }
      goto L_08825370;
    }
L_08825370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22344)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10720)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 10u);
      if (branch_taken) {
          goto L_08825398;
      }
      goto L_08825380;
    }
L_08825380:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0882538Cu);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x0882538Cu) goto L_0882538C;
    return;
L_0882538C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088253E8;
      }
      goto L_08825398;
    }
L_08825398:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088253E8;
      }
      goto L_088253A0;
    }
L_088253A0:
    ctx.gpr[31] = (0x088253A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088253A8u) goto L_088253A8;
    return;
L_088253A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088253E8;
      }
      goto L_088253B8;
    }
L_088253B8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11));
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
        goto L_088253EC;
    }
    goto L_088253C4;
L_088253C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22344)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(10720)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 10u);
      if (branch_taken) {
          goto L_088253E8;
      }
      goto L_088253D4;
    }
L_088253D4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088253E0u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x088253E0u) goto L_088253E0;
    return;
L_088253E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    goto L_088253E8;
L_088253E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
    goto L_088253EC;
L_088253EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08825680;
      }
      goto L_08825400;
    }
L_08825400:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2219u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29440)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825418:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08825424u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08826008;
L_08825424:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08825680;
      }
      goto L_0882542C;
    }
L_0882542C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08825438u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088262DC;
L_08825438:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08825680;
      }
      goto L_08825440;
    }
L_08825440:
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08825468;
      }
      goto L_08825454;
    }
L_08825454:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 256u);
      if (branch_taken) {
          goto L_08825478;
      }
      goto L_08825468;
    }
L_08825468:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[4] & 256u);
    goto L_08825478;
L_08825478:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
      if (branch_taken) {
          goto L_08825494;
      }
      goto L_08825480;
    }
L_08825480:
    ctx.gpr[31] = (0x08825488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 837u, 0x08823F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08825488u) goto L_08825488;
    return;
L_08825488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088254A8;
      }
      goto L_08825490;
    }
L_08825490:
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    goto L_08825494;
L_08825494:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088254A8;
      }
      goto L_0882549C;
    }
L_0882549C:
    ctx.gpr[31] = (0x088254A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 832u, 0x08823ECCu>(ctx, &aot_mem) && ctx.pc == 0x088254A4u) goto L_088254A4;
    return;
L_088254A4:
    ctx.gpr[4] = (2221u << 16u);
    goto L_088254A8;
L_088254A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[31] = (0x088254B4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 369u, 0x0880F6C4u>(ctx, &aot_mem) && ctx.pc == 0x088254B4u) goto L_088254B4;
    return;
L_088254B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_088254C4;
      }
      goto L_088254C0;
    }
L_088254C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    goto L_088254C4;
L_088254C4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_0882551C;
      }
      goto L_088254CC;
    }
L_088254CC:
    ctx.gpr[31] = (0x088254D4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 497u, 0x0896AEDCu>(ctx, &aot_mem) && ctx.pc == 0x088254D4u) goto L_088254D4;
    return;
L_088254D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088254FC;
      }
      goto L_088254E0;
    }
L_088254E0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
        goto L_08825684;
    }
    goto L_088254EC;
L_088254EC:
    ctx.gpr[31] = (0x088254F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 38u, 0x0896C248u>(ctx, &aot_mem) && ctx.pc == 0x088254F4u) goto L_088254F4;
    return;
L_088254F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_08825680;
      }
      goto L_088254FC;
    }
L_088254FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08825680;
      }
      goto L_08825504;
    }
L_08825504:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08825680;
      }
      goto L_0882550C;
    }
L_0882550C:
    ctx.gpr[31] = (0x08825514u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_0882596C;
L_08825514:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08825680;
      }
      goto L_0882551C;
    }
L_0882551C:
    ctx.gpr[31] = (0x08825524u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_0882596C;
L_08825524:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08825680;
      }
      goto L_0882552C;
    }
L_0882552C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08825538u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08826B2C;
L_08825538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08825680;
      }
      goto L_08825540;
    }
L_08825540:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882554Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08826F70;
L_0882554C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08825680;
      }
      goto L_08825554;
    }
L_08825554:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08825560u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088266CC;
L_08825560:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08825680;
      }
      goto L_08825568;
    }
L_08825568:
    ctx.gpr[31] = (0x08825570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 178u, 0x08964DB0u>(ctx, &aot_mem) && ctx.pc == 0x08825570u) goto L_08825570;
    return;
L_08825570:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_088255AC;
      }
      goto L_0882557C;
    }
L_0882557C:
    ctx.gpr[31] = (0x08825584u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08825584u) goto L_08825584;
    return;
L_08825584:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088255A0;
      }
      goto L_08825590;
    }
L_08825590:
    ctx.gpr[31] = (0x08825598u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 380u, 0x08965604u>(ctx, &aot_mem) && ctx.pc == 0x08825598u) goto L_08825598;
    return;
L_08825598:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_088255AC;
      }
      goto L_088255A0;
    }
L_088255A0:
    ctx.gpr[31] = (0x088255A8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 380u, 0x08965604u>(ctx, &aot_mem) && ctx.pc == 0x088255A8u) goto L_088255A8;
    return;
L_088255A8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_088255AC;
L_088255AC:
    ctx.gpr[31] = (0x088255B4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 180u, 0x08964DC8u>(ctx, &aot_mem) && ctx.pc == 0x088255B4u) goto L_088255B4;
    return;
L_088255B4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08825680;
      }
      goto L_088255C0;
    }
L_088255C0:
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 10u);
      if (branch_taken) {
          goto L_08825668;
      }
      goto L_088255CC;
    }
L_088255CC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2219u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(29480)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088255E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08825668;
      }
      goto L_088255F8;
    }
L_088255F8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08825604u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08825604u) goto L_08825604;
    return;
L_08825604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825668;
      }
      goto L_0882560C;
    }
L_0882560C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08825618u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08825618u) goto L_08825618;
    return;
L_08825618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825668;
      }
      goto L_08825620;
    }
L_08825620:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0882562Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x0882562Cu) goto L_0882562C;
    return;
L_0882562C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825668;
      }
      goto L_08825634;
    }
L_08825634:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08825640u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08825640u) goto L_08825640;
    return;
L_08825640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825668;
      }
      goto L_08825648;
    }
L_08825648:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08825654u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08825654u) goto L_08825654;
    return;
L_08825654:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08825668;
      }
      goto L_0882565C;
    }
L_0882565C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08825668u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08825668u) goto L_08825668;
    return;
L_08825668:
    ctx.gpr[31] = (0x08825670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 163u, 0x08964CC8u>(ctx, &aot_mem) && ctx.pc == 0x08825670u) goto L_08825670;
    return;
L_08825670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08825680;
      }
      goto L_0882567C;
    }
L_0882567C:
    ctx.gpr[30] = (ctx.gpr[23] | 0u);
    goto L_08825680;
L_08825680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
    goto L_08825684;
L_08825684:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08825690u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 739u, 0x0882B190u>(ctx, &aot_mem) && ctx.pc == 0x08825690u) goto L_08825690;
    return;
L_08825690:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
        goto L_088256D0;
    }
    goto L_088256A0;
L_088256A0:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[31] = (0x088256B0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 18u, 0x088100B8u>(ctx, &aot_mem) && ctx.pc == 0x088256B0u) goto L_088256B0;
    return;
L_088256B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088256C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 18u, 0x088100B8u>(ctx, &aot_mem) && ctx.pc == 0x088256C8u) goto L_088256C8;
    return;
L_088256C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    goto L_088256D0;
L_088256D0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_08825760;
      }
      goto L_088256E0;
    }
L_088256E0:
    ctx.gpr[31] = (0x088256E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 793u, 0x08823BE4u>(ctx, &aot_mem) && ctx.pc == 0x088256E8u) goto L_088256E8;
    return;
L_088256E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0882570C;
      }
      goto L_088256FC;
    }
L_088256FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08825718;
      }
      goto L_08825704;
    }
L_08825704:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0882573C;
      }
      goto L_0882570C;
    }
L_0882570C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0882573C;
      }
      goto L_08825718;
    }
L_08825718:
    ctx.gpr[31] = (0x08825720u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 384u, 0x088120B8u>(ctx, &aot_mem) && ctx.pc == 0x08825720u) goto L_08825720;
    return;
L_08825720:
    ctx.gpr[31] = (0x08825728u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 488u, 0x0881DD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08825728u) goto L_08825728;
    return;
L_08825728:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08825738u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 346u, 0x0881D37Cu>(ctx, &aot_mem) && ctx.pc == 0x08825738u) goto L_08825738;
    return;
L_08825738:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882573C;
L_0882573C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08825748u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881D31Cu>(ctx, &aot_mem) && ctx.pc == 0x08825748u) goto L_08825748;
    return;
L_08825748:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088256E0;
      }
      goto L_08825760;
    }
L_08825760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08825798;
      }
      goto L_08825770;
    }
L_08825770:
    ctx.gpr[31] = (0x08825778u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 240u, 0x08941114u>(ctx, &aot_mem) && ctx.pc == 0x08825778u) goto L_08825778;
    return;
L_08825778:
    ctx.gpr[31] = (0x08825780u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 275u, 0x08969F68u>(ctx, &aot_mem) && ctx.pc == 0x08825780u) goto L_08825780;
    return;
L_08825780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08825798;
      }
      goto L_08825790;
    }
L_08825790:
    ctx.gpr[31] = (0x08825798u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 443u, 0x0894AFC8u>(ctx, &aot_mem) && ctx.pc == 0x08825798u) goto L_08825798;
    return;
L_08825798:
    ctx.gpr[31] = (0x088257A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 13u, 0x08820118u>(ctx, &aot_mem) && ctx.pc == 0x088257A0u) goto L_088257A0;
    return;
L_088257A0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[23];
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_088257B0;
      }
      goto L_088257A8;
    }
L_088257A8:
    ctx.gpr[31] = (0x088257B0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 715u, 0x0894F358u>(ctx, &aot_mem) && ctx.pc == 0x088257B0u) goto L_088257B0;
    return;
L_088257B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(108)));
    ctx.gpr[16] = (0u | 8u);
    if (ctx.gpr[5] != ctx.gpr[19]) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_088257C8;
    }
    goto L_088257C8;
L_088257C8:
    ctx.gpr[31] = (0x088257D0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 12u, 0x0896C0CCu>(ctx, &aot_mem) && ctx.pc == 0x088257D0u) goto L_088257D0;
    return;
L_088257D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22344)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825930;
      }
      goto L_088257DC;
    }
L_088257DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 3001u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4001u);
      if (branch_taken) {
          goto L_088257F4;
      }
      goto L_088257EC;
    }
L_088257EC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08825930;
      }
      goto L_088257F4;
    }
L_088257F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08825838;
      }
      goto L_08825808;
    }
L_08825808:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08825838;
      }
      goto L_08825810;
    }
L_08825810:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08825838;
      }
      goto L_08825818;
    }
L_08825818:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_08825838;
      }
      goto L_08825820;
    }
L_08825820:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 7u);
      if (branch_taken) {
          goto L_08825838;
      }
      goto L_08825828;
    }
L_08825828:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08825838;
      }
      goto L_08825830;
    }
L_08825830:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08825930;
      }
      goto L_08825838;
    }
L_08825838:
    ctx.gpr[31] = (0x08825840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 206u, 0x088BD65Cu>(ctx, &aot_mem) && ctx.pc == 0x08825840u) goto L_08825840;
    return;
L_08825840:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (28672u << 16u);
      if (branch_taken) {
          goto L_08825858;
      }
      goto L_0882584C;
    }
L_0882584C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08825930;
      }
      goto L_08825858;
    }
L_08825858:
    ctx.gpr[31] = (0x08825860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 179u, 0x08964DBCu>(ctx, &aot_mem) && ctx.pc == 0x08825860u) goto L_08825860;
    return;
L_08825860:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08825930;
      }
      goto L_08825868;
    }
L_08825868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22344)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2848)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10584), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2848)));
    ctx.gpr[7] = (17150u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(10588), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2848)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(96)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2852)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10592), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2848)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10593), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(112)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
        goto L_088258F4;
    }
    goto L_088258D4;
L_088258D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(168)));
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(10540));
    ctx.gpr[6] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(10584));
      if (branch_taken) {
          goto L_08825928;
      }
      goto L_088258E8;
    }
L_088258E8:
    ctx.gpr[6] = (0u | 512u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10594), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08825928;
      }
      goto L_088258F4;
    }
L_088258F4:
    if (ctx.gpr[5] != ctx.gpr[16]) {
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10594), static_cast<std::uint16_t>(0u));
        goto L_08825920;
    }
    goto L_088258FC;
L_088258FC:
    ctx.gpr[31] = (0x08825904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 178u, 0x08964DB0u>(ctx, &aot_mem) && ctx.pc == 0x08825904u) goto L_08825904;
    return;
L_08825904:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(22344)));
    ctx.gpr[4] = (ctx.gpr[4] | 1024u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(10594), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(10540));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10584));
      if (branch_taken) {
          goto L_08825928;
      }
      goto L_08825920;
    }
L_08825920:
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(10540));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(10584));
    goto L_08825928;
L_08825928:
    ctx.gpr[31] = (0x08825930u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 410u, 0x0897F594u>(ctx, &aot_mem) && ctx.pc == 0x08825930u) goto L_08825930;
    return;
L_08825930:
    ctx.gpr[2] = (ctx.gpr[30] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882596C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882598Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08824070;
L_0882598C:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13800));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[17] = (2224u << 16u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1944));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22344)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[8] = (2221u << 16u);
      if (branch_taken) {
          goto L_08825C10;
      }
      goto L_088259C4;
    }
L_088259C4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (0u | 4001u);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    ctx.gpr[10] = (0u | 3001u);
      if (branch_taken) {
          goto L_08825AF0;
      }
      goto L_088259D4;
    }
L_088259D4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10540));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22344)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10556));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08825A6C;
      }
      goto L_08825A3C;
    }
L_08825A3C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[9] & ctx.gpr[5]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[10] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[11] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08825A6C;
L_08825A6C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (17150u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(41))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 8u);
      if (branch_taken) {
          goto L_08825C74;
      }
      goto L_08825AF0;
    }
L_08825AF0:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10540));
      if (branch_taken) {
          goto L_08825C10;
      }
      goto L_08825AF8;
    }
L_08825AF8:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22344)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10556));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08825B8C;
      }
      goto L_08825B5C;
    }
L_08825B5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[9]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[10] = (ctx.gpr[10] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_08825B8C;
L_08825B8C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (17150u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(72))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(73))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(57))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 8u);
      if (branch_taken) {
          goto L_08825C74;
      }
      goto L_08825C10;
    }
L_08825C10:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-14744)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08825C34;
      }
      goto L_08825C28;
    }
L_08825C28:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08825C34;
      }
      goto L_08825C34;
    }
L_08825C34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (ctx.gpr[6] & 8u);
    goto L_08825C74;
L_08825C74:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08825CC4;
      }
      goto L_08825C7C;
    }
L_08825C7C:
    ctx.gpr[31] = (0x08825C84u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 261u, 0x08A16758u>(ctx, &aot_mem) && ctx.pc == 0x08825C84u) goto L_08825C84;
    return;
L_08825C84:
    ctx.gpr[31] = (0x08825C8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 608u, 0x089FFEA4u>(ctx, &aot_mem) && ctx.pc == 0x08825C8Cu) goto L_08825C8C;
    return;
L_08825C8C:
    ctx.gpr[31] = (0x08825C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 302u, 0x08A16B28u>(ctx, &aot_mem) && ctx.pc == 0x08825C94u) goto L_08825C94;
    return;
L_08825C94:
    ctx.gpr[31] = (0x08825C9Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 584u, 0x089F7BE4u>(ctx, &aot_mem) && ctx.pc == 0x08825C9Cu) goto L_08825C9C;
    return;
L_08825C9C:
    ctx.gpr[31] = (0x08825CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 118u, 0x08A288E8u>(ctx, &aot_mem) && ctx.pc == 0x08825CA4u) goto L_08825CA4;
    return;
L_08825CA4:
    ctx.gpr[31] = (0x08825CACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 188u, 0x08A19250u>(ctx, &aot_mem) && ctx.pc == 0x08825CACu) goto L_08825CAC;
    return;
L_08825CAC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[31] = (0x08825CB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4596)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 338u, 0x0880F348u>(ctx, &aot_mem) && ctx.pc == 0x08825CB8u) goto L_08825CB8;
    return;
L_08825CB8:
    ctx.gpr[31] = (0x08825CC0u);
    // nop
    goto L_08825D00;
L_08825CC0:
    ctx.gpr[4] = (2224u << 16u);
    goto L_08825CC4;
L_08825CC4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08825CD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13456));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 206u, 0x08954FB4u>(ctx, &aot_mem) && ctx.pc == 0x08825CD8u) goto L_08825CD8;
    return;
L_08825CD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08825CE4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08824164;
L_08825CE4:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08825D00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2224u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-14744)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] & 512u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_08825D74;
      }
      goto L_08825D2C;
    }
L_08825D2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-14744));
      if (branch_taken) {
          goto L_08825D68;
      }
      goto L_08825D44;
    }
L_08825D44:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(260)));
    ctx.gpr[8] = (ctx.gpr[8] & 256u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_08825D5C;
    }
    goto L_08825D54;
L_08825D54:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08825D68;
      }
      goto L_08825D5C;
    }
L_08825D5C:
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(200));
      if (branch_taken) {
          goto L_08825D44;
      }
      goto L_08825D68;
    }
L_08825D68:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08825F14;
      }
      goto L_08825D74;
    }
L_08825D74:
    ctx.gpr[4] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 32768u);
      if (branch_taken) {
          goto L_08825EA4;
      }
      goto L_08825D80;
    }
L_08825D80:
    ctx.gpr[4] = (ctx.gpr[5] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (1u << 16u);
      if (branch_taken) {
          goto L_08825DA8;
      }
      goto L_08825D8C;
    }
L_08825D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08825F14;
      }
      goto L_08825DA8;
    }
L_08825DA8:
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-14744));
      if (branch_taken) {
          goto L_08825DD0;
      }
      goto L_08825DB4;
    }
L_08825DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08825F14;
      }
      goto L_08825DD0;
    }
L_08825DD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
      if (branch_taken) {
          goto L_08825DF0;
      }
      goto L_08825DE0;
    }
L_08825DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08825F14;
      }
      goto L_08825DF0;
    }
L_08825DF0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_08825E08;
      }
      goto L_08825DF8;
    }
L_08825DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08825F14;
      }
      goto L_08825E08;
    }
L_08825E08:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 32u);
      if (branch_taken) {
          goto L_08825E20;
      }
      goto L_08825E10;
    }
L_08825E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08825F14;
      }
      goto L_08825E20;
    }
L_08825E20:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
      if (branch_taken) {
          goto L_08825E38;
      }
      goto L_08825E28;
    }
L_08825E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08825F14;
      }
      goto L_08825E38;
    }
L_08825E38:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08825E5C;
      }
      goto L_08825E40;
    }
L_08825E40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] | 64u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08825F14;
      }
      goto L_08825E5C;
    }
L_08825E5C:
    ctx.gpr[31] = (0x08825E64u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08825E64u) goto L_08825E64;
    return;
L_08825E64:
    ctx.gpr[18] = (0u | 1u);
    if (ctx.gpr[2] != ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
        goto L_08825E98;
    }
    goto L_08825E70;
L_08825E70:
    ctx.gpr[31] = (0x08825E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 164u, 0x08934CACu>(ctx, &aot_mem) && ctx.pc == 0x08825E78u) goto L_08825E78;
    return;
L_08825E78:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08825E8C;
      }
      goto L_08825E80;
    }
L_08825E80:
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08825F14;
      }
      goto L_08825E8C;
    }
L_08825E8C:
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08825F14;
      }
      goto L_08825E98;
    }
L_08825E98:
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08825F14;
      }
      goto L_08825EA4;
    }
L_08825EA4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08825EB8;
      }
      goto L_08825EAC;
    }
L_08825EAC:
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08825F14;
      }
      goto L_08825EB8;
    }
L_08825EB8:
    ctx.gpr[6] = (ctx.gpr[5] & 16384u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (1u << 16u);
      if (branch_taken) {
          goto L_08825EDC;
      }
      goto L_08825EC4;
    }
L_08825EC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[5] | 32u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08825F14;
      }
      goto L_08825EDC;
    }
L_08825EDC:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(-14744));
      if (branch_taken) {
          goto L_08825F00;
      }
      goto L_08825EE8;
    }
L_08825EE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[5] | 32u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08825F14;
      }
      goto L_08825F00;
    }
L_08825F00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_08825F14;
      }
      goto L_08825F10;
    }
L_08825F10:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    goto L_08825F14;
L_08825F14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08825FEC;
      }
      goto L_08825F24;
    }
L_08825F24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08825FEC;
      }
      goto L_08825F4C;
    }
L_08825F4C:
    ctx.gpr[31] = (0x08825F54u);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08825F54u) goto L_08825F54;
    return;
L_08825F54:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08825F70u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 823u, 0x08823E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08825F70u) goto L_08825F70;
    return;
L_08825F70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.gpr[31] = (0x08825F88u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 823u, 0x08823E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08825F88u) goto L_08825F88;
    return;
L_08825F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[5] & 32u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08825FAC;
      }
      goto L_08825F9C;
    }
L_08825F9C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(-14744));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(916)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08825FE4;
      }
      goto L_08825FAC;
    }
L_08825FAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 4u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
        goto L_08825FE0;
    }
    goto L_08825FBC;
L_08825FBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (0u | 6u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
        goto L_08825FD8;
    }
    goto L_08825FCC;
L_08825FCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08825FE4;
      }
      goto L_08825FD8;
    }
L_08825FD8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08825FE4;
      }
      goto L_08825FE0;
    }
L_08825FE0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    goto L_08825FE4;
L_08825FE4:
    ctx.gpr[31] = (0x08825FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 35u, 0x08968324u>(ctx, &aot_mem) && ctx.pc == 0x08825FECu) goto L_08825FEC;
    return;
L_08825FEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826008:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    ctx.gpr[31] = (0x08826034u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08824070;
L_08826034:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_088260D8;
      }
      goto L_0882604C;
    }
L_0882604C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088260B4;
      }
      goto L_08826058;
    }
L_08826058:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08826090;
      }
      goto L_0882606C;
    }
L_0882606C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08826078u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 297u, 0x0881D0FCu>(ctx, &aot_mem) && ctx.pc == 0x08826078u) goto L_08826078;
    return;
L_08826078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_0882606C;
      }
      goto L_08826090;
    }
L_08826090:
    ctx.gpr[31] = (0x08826098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 166u, 0x08944BD8u>(ctx, &aot_mem) && ctx.pc == 0x08826098u) goto L_08826098;
    return;
L_08826098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (ctx.hi);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    goto L_088260B4;
L_088260B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x088260C8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 620u, 0x08946D84u>(ctx, &aot_mem) && ctx.pc == 0x088260C8u) goto L_088260C8;
    return;
L_088260C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    goto L_088260D8;
L_088260D8:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 15u);
    goto L_088260E4;
L_088260E4:
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[29] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088260E4;
      }
      goto L_08826108;
    }
L_08826108:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882616C;
      }
      goto L_08826118;
    }
L_08826118:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-961));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088261D0;
      }
      goto L_0882616C;
    }
L_0882616C:
    ctx.gpr[31] = (0x08826174u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08826174u) goto L_08826174;
    return;
L_08826174:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_088261D0;
      }
      goto L_08826180;
    }
L_08826180:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-961));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088261D0;
L_088261D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x088261E4u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 700u, 0x08947674u>(ctx, &aot_mem) && ctx.pc == 0x088261E4u) goto L_088261E4;
    return;
L_088261E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08826234;
      }
      goto L_088261F4;
    }
L_088261F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), 0u);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0882622Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 307u, 0x0891D260u>(ctx, &aot_mem) && ctx.pc == 0x0882622Cu) goto L_0882622C;
    return;
L_0882622C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08826294;
      }
      goto L_08826234;
    }
L_08826234:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08826294;
      }
      goto L_0882623C;
    }
L_0882623C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    ctx.gpr[31] = (0x0882625Cu);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 167u, 0x08944BE8u>(ctx, &aot_mem) && ctx.pc == 0x0882625Cu) goto L_0882625C;
    return;
L_0882625C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0882627C;
      }
      goto L_08826274;
    }
L_08826274:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08826290;
      }
      goto L_0882627C;
    }
L_0882627C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), 0u);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    goto L_08826290;
L_08826290:
    ctx.gpr[4] = (2224u << 16u);
    goto L_08826294;
L_08826294:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088262A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13456));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 206u, 0x08954FB4u>(ctx, &aot_mem) && ctx.pc == 0x088262A8u) goto L_088262A8;
    return;
L_088262A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088262B4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08824164;
L_088262B4:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088262DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[31]);
    ctx.gpr[31] = (0x08826310u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08824070;
L_08826310:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08826454;
      }
      goto L_08826328;
    }
L_08826328:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08826348u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1000u, 0x0881FF20u>(ctx, &aot_mem) && ctx.pc == 0x08826348u) goto L_08826348;
    return;
L_08826348:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08826354u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 287u, 0x0881D08Cu>(ctx, &aot_mem) && ctx.pc == 0x08826354u) goto L_08826354;
    return;
L_08826354:
    ctx.gpr[31] = (0x0882635Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 479u, 0x0881DCF4u>(ctx, &aot_mem) && ctx.pc == 0x0882635Cu) goto L_0882635C;
    return;
L_0882635C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0882638Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 620u, 0x08946D84u>(ctx, &aot_mem) && ctx.pc == 0x0882638Cu) goto L_0882638C;
    return;
L_0882638C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    ctx.gpr[31] = (0x088263A0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x088263A0u) goto L_088263A0;
    return;
L_088263A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(29384));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088263D0u);
    ctx.gpr[22] = (ctx.gpr[5] + static_cast<std::uint32_t>(29372));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088263D0u) goto L_088263D0;
    return;
L_088263D0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088263E0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x088263E0u) goto L_088263E0;
    return;
L_088263E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08826454;
      }
      goto L_088263E8;
    }
L_088263E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[31] = (0x08826408u);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(29396));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08826408u) goto L_08826408;
    return;
L_08826408:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08826418u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08826418u) goto L_08826418;
    return;
L_08826418:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08826454;
      }
      goto L_08826420;
    }
L_08826420:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_08826438;
    }
    goto L_08826438;
L_08826438:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08826450u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x08826450u) goto L_08826450;
    return;
L_08826450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    goto L_08826454;
L_08826454:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 15u);
    goto L_08826460;
L_08826460:
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[29] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08826460;
      }
      goto L_08826484;
    }
L_08826484:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088264E8;
      }
      goto L_08826494;
    }
L_08826494:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-961));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0882654C;
      }
      goto L_088264E8;
    }
L_088264E8:
    ctx.gpr[31] = (0x088264F0u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x088264F0u) goto L_088264F0;
    return;
L_088264F0:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_0882654C;
      }
      goto L_088264FC;
    }
L_088264FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-961));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0882654C;
L_0882654C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08826560u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 700u, 0x08947674u>(ctx, &aot_mem) && ctx.pc == 0x08826560u) goto L_08826560;
    return;
L_08826560:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0882657C;
      }
      goto L_0882656C;
    }
L_0882656C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_0882667C;
      }
      goto L_0882657C;
    }
L_0882657C:
    ctx.gpr[31] = (0x08826584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08826584u) goto L_08826584;
    return;
L_08826584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(29384));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088265B4u);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(29372));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088265B4u) goto L_088265B4;
    return;
L_088265B4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088265C4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x088265C4u) goto L_088265C4;
    return;
L_088265C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08826638;
      }
      goto L_088265CC;
    }
L_088265CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[31] = (0x088265ECu);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(29396));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x088265ECu) goto L_088265EC;
    return;
L_088265EC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088265FCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x088265FCu) goto L_088265FC;
    return;
L_088265FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08826638;
      }
      goto L_08826604;
    }
L_08826604:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0882661C;
    }
    goto L_0882661C;
L_0882661C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08826634u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x08826634u) goto L_08826634;
    return;
L_08826634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    goto L_08826638;
L_08826638:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08826660;
      }
      goto L_08826658;
    }
L_08826658:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08826678;
      }
      goto L_08826660;
    }
L_08826660:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 1024u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    goto L_08826678;
L_08826678:
    ctx.gpr[4] = (2224u << 16u);
    goto L_0882667C;
L_0882667C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08826690u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13456));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 206u, 0x08954FB4u>(ctx, &aot_mem) && ctx.pc == 0x08826690u) goto L_08826690;
    return;
L_08826690:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882669Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08824164;
L_0882669C:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088266CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[31]);
    ctx.gpr[31] = (0x08826704u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08824070;
L_08826704:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088268E0;
      }
      goto L_0882671C;
    }
L_0882671C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 7u);
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0882673Cu);
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 190u, 0x08A15824u>(ctx, &aot_mem) && ctx.pc == 0x0882673Cu) goto L_0882673C;
    return;
L_0882673C:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.gpr[31] = (0x08826758u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 369u, 0x0881D4E0u>(ctx, &aot_mem) && ctx.pc == 0x08826758u) goto L_08826758;
    return;
L_08826758:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.gpr[31] = (0x08826770u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 382u, 0x0881D5ECu>(ctx, &aot_mem) && ctx.pc == 0x08826770u) goto L_08826770;
    return;
L_08826770:
    ctx.gpr[31] = (0x08826778u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 479u, 0x0881DCF4u>(ctx, &aot_mem) && ctx.pc == 0x08826778u) goto L_08826778;
    return;
L_08826778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x088267A8u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 620u, 0x08946D84u>(ctx, &aot_mem) && ctx.pc == 0x088267A8u) goto L_088267A8;
    return;
L_088267A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (ctx.gpr[6] ^ 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] << 7u);
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088267D8u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 297u, 0x0881D0FCu>(ctx, &aot_mem) && ctx.pc == 0x088267D8u) goto L_088267D8;
    return;
L_088267D8:
    ctx.gpr[31] = (0x088267E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x088267E0u) goto L_088267E0;
    return;
L_088267E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(29384));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08826810u);
    ctx.gpr[22] = (ctx.gpr[5] + static_cast<std::uint32_t>(29372));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08826810u) goto L_08826810;
    return;
L_08826810:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08826820u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08826820u) goto L_08826820;
    return;
L_08826820:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08826894;
      }
      goto L_08826828;
    }
L_08826828:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[31] = (0x08826848u);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(29396));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08826848u) goto L_08826848;
    return;
L_08826848:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08826858u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08826858u) goto L_08826858;
    return;
L_08826858:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08826894;
      }
      goto L_08826860;
    }
L_08826860:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (0u | 4u);
        goto L_08826878;
    }
    goto L_08826878;
L_08826878:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08826890u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x08826890u) goto L_08826890;
    return;
L_08826890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    goto L_08826894;
L_08826894:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088268E4;
      }
      goto L_088268A8;
    }
L_088268A8:
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088268AC;
L_088268AC:
    ctx.gpr[31] = (0x088268B4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 374u, 0x08A463A4u>(ctx, &aot_mem) && ctx.pc == 0x088268B4u) goto L_088268B4;
    return;
L_088268B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == ctx.gpr[20]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
        goto L_088268CC;
    }
    goto L_088268C0;
L_088268C0:
    ctx.gpr[31] = (0x088268C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 72u, 0x089685F0u>(ctx, &aot_mem) && ctx.pc == 0x088268C8u) goto L_088268C8;
    return;
L_088268C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    goto L_088268CC;
L_088268CC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088268AC;
      }
      goto L_088268E0;
    }
L_088268E0:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088268E4;
L_088268E4:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 15u);
    goto L_088268EC;
L_088268EC:
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[29] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088268EC;
      }
      goto L_08826910;
    }
L_08826910:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826974;
      }
      goto L_08826920;
    }
L_08826920:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-961));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088269D8;
      }
      goto L_08826974;
    }
L_08826974:
    ctx.gpr[31] = (0x0882697Cu);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0882697Cu) goto L_0882697C;
    return;
L_0882697C:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_088269D8;
      }
      goto L_08826988;
    }
L_08826988:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-961));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[8] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088269D8;
L_088269D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x088269ECu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 700u, 0x08947674u>(ctx, &aot_mem) && ctx.pc == 0x088269ECu) goto L_088269EC;
    return;
L_088269EC:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08826A08;
      }
      goto L_088269F8;
    }
L_088269F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08826AD8;
      }
      goto L_08826A08;
    }
L_08826A08:
    ctx.gpr[31] = (0x08826A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08826A10u) goto L_08826A10;
    return;
L_08826A10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(29384));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08826A40u);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(29372));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08826A40u) goto L_08826A40;
    return;
L_08826A40:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08826A50u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08826A50u) goto L_08826A50;
    return;
L_08826A50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08826ABC;
      }
      goto L_08826A58;
    }
L_08826A58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[31] = (0x08826A78u);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(29396));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08826A78u) goto L_08826A78;
    return;
L_08826A78:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08826A88u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08826A88u) goto L_08826A88;
    return;
L_08826A88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08826ABC;
      }
      goto L_08826A90;
    }
L_08826A90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (0u | 4u);
        goto L_08826AA4;
    }
    goto L_08826AA4;
L_08826AA4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08826AB8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x08826AB8u) goto L_08826AB8;
    return;
L_08826AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    goto L_08826ABC;
L_08826ABC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    ctx.gpr[4] = (2224u << 16u);
    goto L_08826AD8;
L_08826AD8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08826AECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13456));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 206u, 0x08954FB4u>(ctx, &aot_mem) && ctx.pc == 0x08826AECu) goto L_08826AEC;
    return;
L_08826AEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08826AF8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08824164;
L_08826AF8:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826B2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[31] = (0x08826B5Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08824070;
L_08826B5C:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(168)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08826E7C;
      }
      goto L_08826B78;
    }
L_08826B78:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08826C58;
      }
      goto L_08826B84;
    }
L_08826B84:
    ctx.gpr[31] = (0x08826B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 14u, 0x08820128u>(ctx, &aot_mem) && ctx.pc == 0x08826B8Cu) goto L_08826B8C;
    return;
L_08826B8C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08826BC0;
      }
      goto L_08826B98;
    }
L_08826B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] << 7u);
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08826C38;
      }
      goto L_08826BC0;
    }
L_08826BC0:
    ctx.gpr[31] = (0x08826BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08826BC8u) goto L_08826BC8;
    return;
L_08826BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_08826BE0;
      }
      goto L_08826BD8;
    }
L_08826BD8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08826C04;
      }
      goto L_08826BE0;
    }
L_08826BE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 7u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08826C38;
      }
      goto L_08826C04;
    }
L_08826C04:
    ctx.gpr[31] = (0x08826C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 74u, 0x0896C71Cu>(ctx, &aot_mem) && ctx.pc == 0x08826C0Cu) goto L_08826C0C;
    return;
L_08826C0C:
    ctx.gpr[4] = (0u | 3u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.hi);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
    goto L_08826C38;
L_08826C38:
    ctx.gpr[31] = (0x08826C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 479u, 0x0881DCF4u>(ctx, &aot_mem) && ctx.pc == 0x08826C40u) goto L_08826C40;
    return;
L_08826C40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[31] = (0x08826C4Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 421u, 0x08A46AB4u>(ctx, &aot_mem) && ctx.pc == 0x08826C4Cu) goto L_08826C4C;
    return;
L_08826C4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    goto L_08826C58;
L_08826C58:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08826D3C;
      }
      goto L_08826C60;
    }
L_08826C60:
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08826C78u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 464u, 0x0881DBD0u>(ctx, &aot_mem) && ctx.pc == 0x08826C78u) goto L_08826C78;
    return;
L_08826C78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(2888));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(2888), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[15];
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08826CECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 656u, 0x089D3B5Cu>(ctx, &aot_mem) && ctx.pc == 0x08826CECu) goto L_08826CEC;
    return;
L_08826CEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08826CF8u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 495u, 0x08A967A8u>(ctx, &aot_mem) && ctx.pc == 0x08826CF8u) goto L_08826CF8;
    return;
L_08826CF8:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08826D2Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 382u, 0x0881D5ECu>(ctx, &aot_mem) && ctx.pc == 0x08826D2Cu) goto L_08826D2C;
    return;
L_08826D2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    goto L_08826D3C;
L_08826D3C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08826D54u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 620u, 0x08946D84u>(ctx, &aot_mem) && ctx.pc == 0x08826D54u) goto L_08826D54;
    return;
L_08826D54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.gpr[6] = (ctx.gpr[6] | 4u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (ctx.gpr[4] ^ 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(168), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 7u);
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08826DBC;
      }
      goto L_08826D88;
    }
L_08826D88:
    ctx.gpr[31] = (0x08826D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 646u, 0x08806AA0u>(ctx, &aot_mem) && ctx.pc == 0x08826D90u) goto L_08826D90;
    return;
L_08826D90:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08826DA8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x08826DA8u) goto L_08826DA8;
    return;
L_08826DA8:
    ctx.gpr[31] = (0x08826DB0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 297u, 0x0881D0FCu>(ctx, &aot_mem) && ctx.pc == 0x08826DB0u) goto L_08826DB0;
    return;
L_08826DB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08826E0C;
      }
      goto L_08826DBC;
    }
L_08826DBC:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    ctx.gpr[7] = (0u | 3u);
      if (branch_taken) {
          goto L_08826DE8;
      }
      goto L_08826DC4;
    }
L_08826DC4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08826DDCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x08826DDCu) goto L_08826DDC;
    return;
L_08826DDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08826E0C;
      }
      goto L_08826DE8;
    }
L_08826DE8:
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
        goto L_08826E10;
    }
    goto L_08826DF0;
L_08826DF0:
    ctx.gpr[31] = (0x08826DF8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1000u, 0x0881FF20u>(ctx, &aot_mem) && ctx.pc == 0x08826DF8u) goto L_08826DF8;
    return;
L_08826DF8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08826E04u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 287u, 0x0881D08Cu>(ctx, &aot_mem) && ctx.pc == 0x08826E04u) goto L_08826E04;
    return;
L_08826E04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    goto L_08826E0C;
L_08826E0C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    goto L_08826E10;
L_08826E10:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[19] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08826E7C;
      }
      goto L_08826E20;
    }
L_08826E20:
    if (ctx.gpr[19] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
        goto L_08826E6C;
    }
    goto L_08826E28;
L_08826E28:
    ctx.gpr[31] = (0x08826E30u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 374u, 0x08A463A4u>(ctx, &aot_mem) && ctx.pc == 0x08826E30u) goto L_08826E30;
    return;
L_08826E30:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08826E68;
      }
      goto L_08826E3C;
    }
L_08826E3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08826E5C;
      }
      goto L_08826E4C;
    }
L_08826E4C:
    ctx.gpr[31] = (0x08826E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 72u, 0x089685F0u>(ctx, &aot_mem) && ctx.pc == 0x08826E54u) goto L_08826E54;
    return;
L_08826E54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08826E68;
      }
      goto L_08826E5C;
    }
L_08826E5C:
    ctx.gpr[31] = (0x08826E64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 66u, 0x0896857Cu>(ctx, &aot_mem) && ctx.pc == 0x08826E64u) goto L_08826E64;
    return;
L_08826E64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    goto L_08826E68;
L_08826E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    goto L_08826E6C;
L_08826E6C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08826E20;
      }
      goto L_08826E7C;
    }
L_08826E7C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08826E94u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 700u, 0x08947674u>(ctx, &aot_mem) && ctx.pc == 0x08826E94u) goto L_08826E94;
    return;
L_08826E94:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08826F24;
      }
      goto L_08826EA0;
    }
L_08826EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08826ECC;
      }
      goto L_08826EC4;
    }
L_08826EC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08826F20;
      }
      goto L_08826ECC;
    }
L_08826ECC:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08826EE4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x08826EE4u) goto L_08826EE4;
    return;
L_08826EE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08826F00u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x08826F00u) goto L_08826F00;
    return;
L_08826F00:
    ctx.gpr[31] = (0x08826F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 650u, 0x08806AECu>(ctx, &aot_mem) && ctx.pc == 0x08826F08u) goto L_08826F08;
    return;
L_08826F08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] | 256u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    goto L_08826F20;
L_08826F20:
    ctx.gpr[4] = (2224u << 16u);
    goto L_08826F24;
L_08826F24:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08826F38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13456));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 206u, 0x08954FB4u>(ctx, &aot_mem) && ctx.pc == 0x08826F38u) goto L_08826F38;
    return;
L_08826F38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08826F44u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08824164;
L_08826F44:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08826F70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[31]);
    ctx.gpr[31] = (0x08826FC0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08824070;
L_08826FC0:
    ctx.gpr[31] = (0x08826FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08826FC8u) goto L_08826FC8;
    return;
L_08826FC8:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[7] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[20] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08827004;
      }
      goto L_08826FF8;
    }
L_08826FF8:
    ctx.gpr[5] = (ctx.gpr[6] & 32u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 4u);
      if (branch_taken) {
          goto L_0882700C;
      }
      goto L_08827004;
    }
L_08827004:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[6] & 4u);
    goto L_0882700C;
L_0882700C:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
        goto L_088275E4;
    }
    goto L_08827014;
L_08827014:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 32u);
      if (branch_taken) {
          goto L_08827470;
      }
      goto L_08827020;
    }
L_08827020:
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), 0u);
        goto L_0882704C;
    }
    goto L_08827028;
L_08827028:
    ctx.gpr[31] = (0x08827030u);
    ctx.gpr[4] = (0u | 8192u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 168u, 0x08944C04u>(ctx, &aot_mem) && ctx.pc == 0x08827030u) goto L_08827030;
    return;
L_08827030:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-14744));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(920)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08827050;
      }
      goto L_0882704C;
    }
L_0882704C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    goto L_08827050;
L_08827050:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08827268;
      }
      goto L_08827064;
    }
L_08827064:
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14744));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[5]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2900));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    ctx.gpr[5] = (49788u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16992u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (49804u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (16988u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (49744u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    goto L_088270C0;
L_088270C0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_088270D0;
      }
      goto L_088270C8;
    }
L_088270C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] ^ 1u);
      if (branch_taken) {
          goto L_088270D0;
      }
      goto L_088270D0;
    }
L_088270D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (ctx.gpr[16] << 7u);
    ctx.gpr[7] = (ctx.gpr[16] << 4u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[16] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[6] != ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
        goto L_0882715C;
    }
    goto L_088270F8;
L_088270F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(924)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08827134u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 369u, 0x0881D4E0u>(ctx, &aot_mem) && ctx.pc == 0x08827134u) goto L_08827134;
    return;
L_08827134:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08827154u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 382u, 0x0881D5ECu>(ctx, &aot_mem) && ctx.pc == 0x08827154u) goto L_08827154;
    return;
L_08827154:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_0882724C;
      }
      goto L_0882715C;
    }
L_0882715C:
    ctx.gpr[5] = (ctx.gpr[5] & 32u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08827214;
      }
      goto L_08827168;
    }
L_08827168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088271A4;
      }
      goto L_08827174;
    }
L_08827174:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (16968u << 16u);
      if (branch_taken) {
          goto L_088271F4;
      }
      goto L_0882717C;
    }
L_0882717C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08827198u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 369u, 0x0881D4E0u>(ctx, &aot_mem) && ctx.pc == 0x08827198u) goto L_08827198;
    return;
L_08827198:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088271F8;
      }
      goto L_088271A0;
    }
L_088271A0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    goto L_088271A4;
L_088271A4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088271BC;
      }
      goto L_088271AC;
    }
L_088271AC:
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_088271E0;
    }
    goto L_088271B4;
L_088271B4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088271F8;
      }
      goto L_088271BC;
    }
L_088271BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088271D4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 369u, 0x0881D4E0u>(ctx, &aot_mem) && ctx.pc == 0x088271D4u) goto L_088271D4;
    return;
L_088271D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088271F8;
      }
      goto L_088271DC;
    }
L_088271DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_088271E0;
L_088271E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088271F4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 369u, 0x0881D4E0u>(ctx, &aot_mem) && ctx.pc == 0x088271F4u) goto L_088271F4;
    return;
L_088271F4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088271F8;
L_088271F8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882720Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 382u, 0x0881D5ECu>(ctx, &aot_mem) && ctx.pc == 0x0882720Cu) goto L_0882720C;
    return;
L_0882720C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882724C;
      }
      goto L_08827214;
    }
L_08827214:
    ctx.gpr[31] = (0x0882721Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 190u, 0x08A15824u>(ctx, &aot_mem) && ctx.pc == 0x0882721Cu) goto L_0882721C;
    return;
L_0882721C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08827234u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 369u, 0x0881D4E0u>(ctx, &aot_mem) && ctx.pc == 0x08827234u) goto L_08827234;
    return;
L_08827234:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882724Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 382u, 0x0881D5ECu>(ctx, &aot_mem) && ctx.pc == 0x0882724Cu) goto L_0882724C;
    return;
L_0882724C:
    ctx.gpr[31] = (0x08827254u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 479u, 0x0881DCF4u>(ctx, &aot_mem) && ctx.pc == 0x08827254u) goto L_08827254;
    return;
L_08827254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_088270C0;
      }
      goto L_08827268;
    }
L_08827268:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[20] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[20];
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
      if (branch_taken) {
          goto L_0882729C;
      }
      goto L_08827278;
    }
L_08827278:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08827298u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 297u, 0x0881D0FCu>(ctx, &aot_mem) && ctx.pc == 0x08827298u) goto L_08827298;
    return;
L_08827298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    goto L_0882729C;
L_0882729C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[6] & 64u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 32u);
      if (branch_taken) {
          goto L_088272E8;
      }
      goto L_088272AC;
    }
L_088272AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088272D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 274u, 0x0893DC10u>(ctx, &aot_mem) && ctx.pc == 0x088272D0u) goto L_088272D0;
    return;
L_088272D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[6] & 32u);
    goto L_088272E8;
L_088272E8:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_08827308;
    }
    goto L_088272F0;
L_088272F0:
    ctx.gpr[31] = (0x088272F8u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 221u, 0x0894D1B8u>(ctx, &aot_mem) && ctx.pc == 0x088272F8u) goto L_088272F8;
    return;
L_088272F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 32u);
      if (branch_taken) {
          goto L_08827354;
      }
      goto L_08827308;
    }
L_08827308:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u | 21u);
      if (branch_taken) {
          goto L_08827338;
      }
      goto L_08827314;
    }
L_08827314:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08827354;
      }
      goto L_08827320;
    }
L_08827320:
    ctx.gpr[31] = (0x08827328u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 221u, 0x0894D1B8u>(ctx, &aot_mem) && ctx.pc == 0x08827328u) goto L_08827328;
    return;
L_08827328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 32u);
      if (branch_taken) {
          goto L_08827354;
      }
      goto L_08827338;
    }
L_08827338:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08827354;
      }
      goto L_08827340;
    }
L_08827340:
    ctx.gpr[31] = (0x08827348u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 221u, 0x0894D1B8u>(ctx, &aot_mem) && ctx.pc == 0x08827348u) goto L_08827348;
    return;
L_08827348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[6] & 32u);
    goto L_08827354;
L_08827354:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 64u);
      if (branch_taken) {
          goto L_08827374;
      }
      goto L_0882735C;
    }
L_0882735C:
    ctx.gpr[5] = (16166u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (2222u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(22348), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08827420;
      }
      goto L_08827374;
    }
L_08827374:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_0882739C;
    }
    goto L_0882737C;
L_0882737C:
    ctx.gpr[4] = (0u | 39u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08827394u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x08827394u) goto L_08827394;
    return;
L_08827394:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08827420;
      }
      goto L_0882739C;
    }
L_0882739C:
    ctx.gpr[6] = (0u | 21u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 13u);
      if (branch_taken) {
          goto L_08827404;
      }
      goto L_088273A8;
    }
L_088273A8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_088273E4;
      }
      goto L_088273B0;
    }
L_088273B0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[7] = (16656u << 16u);
      if (branch_taken) {
          goto L_08827420;
      }
      goto L_088273B8;
    }
L_088273B8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (0u | 36u);
    ctx.gpr[7] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(22348), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088273DCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x088273DCu) goto L_088273DC;
    return;
L_088273DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08827420;
      }
      goto L_088273E4;
    }
L_088273E4:
    ctx.gpr[4] = (0u | 40u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088273FCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x088273FCu) goto L_088273FC;
    return;
L_088273FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08827420;
      }
      goto L_08827404;
    }
L_08827404:
    ctx.gpr[4] = (0u | 41u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0882741Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x0882741Cu) goto L_0882741C;
    return;
L_0882741C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    goto L_08827420;
L_08827420:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08827570;
      }
      goto L_08827434;
    }
L_08827434:
    ctx.gpr[31] = (0x0882743Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 374u, 0x08A463A4u>(ctx, &aot_mem) && ctx.pc == 0x0882743Cu) goto L_0882743C;
    return;
L_0882743C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
        goto L_08827454;
    }
    goto L_08827448;
L_08827448:
    ctx.gpr[31] = (0x08827450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 72u, 0x089685F0u>(ctx, &aot_mem) && ctx.pc == 0x08827450u) goto L_08827450;
    return;
L_08827450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    goto L_08827454;
L_08827454:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08827434;
      }
      goto L_08827468;
    }
L_08827468:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
      if (branch_taken) {
          goto L_08827574;
      }
      goto L_08827470;
    }
L_08827470:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (0u | 7u);
      if (branch_taken) {
          goto L_0882749C;
      }
      goto L_08827478;
    }
L_08827478:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08827494u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 297u, 0x0881D0FCu>(ctx, &aot_mem) && ctx.pc == 0x08827494u) goto L_08827494;
    return;
L_08827494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    goto L_0882749C;
L_0882749C:
    if (ctx.gpr[5] != ctx.gpr[16]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_088274D0;
    }
    goto L_088274A4;
L_088274A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088274C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 274u, 0x0893DC10u>(ctx, &aot_mem) && ctx.pc == 0x088274C8u) goto L_088274C8;
    return;
L_088274C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_088274D0;
L_088274D0:
    ctx.gpr[6] = (0u | 3u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
        goto L_08827574;
    }
    goto L_088274DC;
L_088274DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08827534;
      }
      goto L_08827500;
    }
L_08827500:
    ctx.gpr[4] = (16992u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49812u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x0882752Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 369u, 0x0881D4E0u>(ctx, &aot_mem) && ctx.pc == 0x0882752Cu) goto L_0882752C;
    return;
L_0882752C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08827570;
      }
      goto L_08827534;
    }
L_08827534:
    ctx.gpr[7] = (0u | 8u);
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
        goto L_08827574;
    }
    goto L_08827540;
L_08827540:
    ctx.gpr[4] = (16736u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49804u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.gpr[31] = (0x0882756Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 369u, 0x0881D4E0u>(ctx, &aot_mem) && ctx.pc == 0x0882756Cu) goto L_0882756C;
    return;
L_0882756C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    goto L_08827570;
L_08827570:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    goto L_08827574;
L_08827574:
    ctx.gpr[6] = (ctx.gpr[6] & 64u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08827594;
      }
      goto L_08827580;
    }
L_08827580:
    ctx.gpr[31] = (0x08827588u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 259u, 0x0894D478u>(ctx, &aot_mem) && ctx.pc == 0x08827588u) goto L_08827588;
    return;
L_08827588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_088275B4;
      }
      goto L_08827594;
    }
L_08827594:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[7] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088275B8;
      }
      goto L_088275A4;
    }
L_088275A4:
    ctx.gpr[31] = (0x088275ACu);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 259u, 0x0894D478u>(ctx, &aot_mem) && ctx.pc == 0x088275ACu) goto L_088275AC;
    return;
L_088275AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    goto L_088275B4;
L_088275B4:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    goto L_088275B8;
L_088275B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x088275CCu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 620u, 0x08946D84u>(ctx, &aot_mem) && ctx.pc == 0x088275CCu) goto L_088275CC;
    return;
L_088275CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    goto L_088275E4;
L_088275E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088275FCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 700u, 0x08947674u>(ctx, &aot_mem) && ctx.pc == 0x088275FCu) goto L_088275FC;
    return;
L_088275FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_08827678;
      }
      goto L_08827610;
    }
L_08827610:
    ctx.gpr[4] = (2222u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22348)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088276D8;
      }
      goto L_0882762C;
    }
L_0882762C:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22348), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088276D8;
      }
      goto L_08827640;
    }
L_08827640:
    ctx.gpr[4] = (0u | 37u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08827658u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x08827658u) goto L_08827658;
    return;
L_08827658:
    ctx.gpr[4] = (0u | 38u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08827670u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x08827670u) goto L_08827670;
    return;
L_08827670:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088276D8;
      }
      goto L_08827678;
    }
L_08827678:
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088276D8;
      }
      goto L_08827684;
    }
L_08827684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_088276D8;
      }
      goto L_08827694;
    }
L_08827694:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22348)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088276D8;
      }
      goto L_088276AC;
    }
L_088276AC:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22348), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088276D8;
      }
      goto L_088276C0;
    }
L_088276C0:
    ctx.gpr[4] = (0u | 37u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088276D8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x088276D8u) goto L_088276D8;
    return;
L_088276D8:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[20];
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08827AF0;
      }
      goto L_088276E0;
    }
L_088276E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[31] = (0x088276F8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944A84u>(ctx, &aot_mem) && ctx.pc == 0x088276F8u) goto L_088276F8;
    return;
L_088276F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08827718;
      }
      goto L_08827710;
    }
L_08827710:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08827AEC;
      }
      goto L_08827718;
    }
L_08827718:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08827790;
      }
      goto L_0882772C;
    }
L_0882772C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0882773C;
      }
      goto L_08827734;
    }
L_08827734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
      if (branch_taken) {
          goto L_0882773C;
      }
      goto L_0882773C;
    }
L_0882773C:
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08827754u);
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1004u, 0x0881FF94u>(ctx, &aot_mem) && ctx.pc == 0x08827754u) goto L_08827754;
    return;
L_08827754:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[31] = (0x08827760u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 479u, 0x0881DCF4u>(ctx, &aot_mem) && ctx.pc == 0x08827760u) goto L_08827760;
    return;
L_08827760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    if (ctx.gpr[5] == ctx.gpr[20]) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08827784;
    }
    goto L_08827778;
L_08827778:
    ctx.gpr[31] = (0x08827780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 271u, 0x0893DBD0u>(ctx, &aot_mem) && ctx.pc == 0x08827780u) goto L_08827780;
    return;
L_08827780:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08827784;
L_08827784:
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_0882772C;
      }
      goto L_08827790;
    }
L_08827790:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[4] = (0u | 8192u);
    ctx.gpr[31] = (0x088277A4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(124), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 169u, 0x08944C1Cu>(ctx, &aot_mem) && ctx.pc == 0x088277A4u) goto L_088277A4;
    return;
L_088277A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
      if (branch_taken) {
          goto L_08827810;
      }
      goto L_088277B8;
    }
L_088277B8:
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088277FCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1000u, 0x0881FF20u>(ctx, &aot_mem) && ctx.pc == 0x088277FCu) goto L_088277FC;
    return;
L_088277FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08827808u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 287u, 0x0881D08Cu>(ctx, &aot_mem) && ctx.pc == 0x08827808u) goto L_08827808;
    return;
L_08827808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08827A1C;
      }
      goto L_08827810;
    }
L_08827810:
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-14744)));
    ctx.gpr[7] = (ctx.gpr[7] & 16384u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088278B4;
      }
      goto L_08827824;
    }
L_08827824:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    if (ctx.gpr[6] != ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
        goto L_08827890;
    }
    goto L_08827844;
L_08827844:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_08827884;
      }
      goto L_08827858;
    }
L_08827858:
    ctx.gpr[17] = (0u | 0u);
    goto L_0882785C;
L_0882785C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08827868u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 297u, 0x0881D0FCu>(ctx, &aot_mem) && ctx.pc == 0x08827868u) goto L_08827868;
    return;
L_08827868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_0882785C;
      }
      goto L_08827880;
    }
L_08827880:
    ctx.gpr[5] = (0u | 8u);
    goto L_08827884;
L_08827884:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_088278A8;
      }
      goto L_08827890;
    }
L_08827890:
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    goto L_088278A8;
L_088278A8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08827A1C;
      }
      goto L_088278B4;
    }
L_088278B4:
    ctx.gpr[7] = (ctx.gpr[5] & 32u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 21u);
      if (branch_taken) {
          goto L_0882797C;
      }
      goto L_088278C0;
    }
L_088278C0:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[31] = (0x088278E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 14u, 0x08820128u>(ctx, &aot_mem) && ctx.pc == 0x088278E4u) goto L_088278E4;
    return;
L_088278E4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_0882790C;
      }
      goto L_088278EC;
    }
L_088278EC:
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_0882790C;
      }
      goto L_08827900;
    }
L_08827900:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08827A1C;
      }
      goto L_0882790C;
    }
L_0882790C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08827A1C;
      }
      goto L_0882793C;
    }
L_0882793C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0882794Cu);
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1000u, 0x0881FF20u>(ctx, &aot_mem) && ctx.pc == 0x0882794Cu) goto L_0882794C;
    return;
L_0882794C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08827958u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 287u, 0x0881D08Cu>(ctx, &aot_mem) && ctx.pc == 0x08827958u) goto L_08827958;
    return;
L_08827958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_0882793C;
      }
      goto L_08827970;
    }
L_08827970:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
      if (branch_taken) {
          goto L_08827A20;
      }
      goto L_08827978;
    }
L_08827978:
    ctx.gpr[7] = (0u | 21u);
    goto L_0882797C;
L_0882797C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
      if (branch_taken) {
          goto L_0882799C;
      }
      goto L_08827984;
    }
L_08827984:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08827A1C;
      }
      goto L_0882799C;
    }
L_0882799C:
    ctx.gpr[31] = (0x088279A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 14u, 0x08820128u>(ctx, &aot_mem) && ctx.pc == 0x088279A4u) goto L_088279A4;
    return;
L_088279A4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_088279F8;
      }
      goto L_088279AC;
    }
L_088279AC:
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_088279F8;
      }
      goto L_088279C0;
    }
L_088279C0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08827A14;
      }
      goto L_088279D4;
    }
L_088279D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088279F0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 297u, 0x0881D0FCu>(ctx, &aot_mem) && ctx.pc == 0x088279F0u) goto L_088279F0;
    return;
L_088279F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
      if (branch_taken) {
          goto L_08827A14;
      }
      goto L_088279F8;
    }
L_088279F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(168), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    goto L_08827A14;
L_08827A14:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2852)));
    goto L_08827A1C;
L_08827A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    goto L_08827A20;
L_08827A20:
    ctx.gpr[5] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
      if (branch_taken) {
          goto L_08827A50;
      }
      goto L_08827A2C;
    }
L_08827A2C:
    ctx.gpr[4] = (0u | 37u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08827A44u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x08827A44u) goto L_08827A44;
    return;
L_08827A44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08827AF0;
      }
      goto L_08827A4C;
    }
L_08827A4C:
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    goto L_08827A50;
L_08827A50:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 39u);
      if (branch_taken) {
          goto L_08827A74;
      }
      goto L_08827A58;
    }
L_08827A58:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08827A6Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x08827A6Cu) goto L_08827A6C;
    return;
L_08827A6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08827AF0;
      }
      goto L_08827A74;
    }
L_08827A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (0u | 21u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 13u);
      if (branch_taken) {
          goto L_08827AD4;
      }
      goto L_08827A84;
    }
L_08827A84:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08827AB4;
      }
      goto L_08827A8C;
    }
L_08827A8C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08827AF0;
      }
      goto L_08827A94;
    }
L_08827A94:
    ctx.gpr[4] = (0u | 36u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08827AACu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x08827AACu) goto L_08827AAC;
    return;
L_08827AAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08827AF0;
      }
      goto L_08827AB4;
    }
L_08827AB4:
    ctx.gpr[4] = (0u | 40u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08827ACCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x08827ACCu) goto L_08827ACC;
    return;
L_08827ACC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08827AF0;
      }
      goto L_08827AD4;
    }
L_08827AD4:
    ctx.gpr[4] = (0u | 41u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08827AECu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 830u, 0x08807750u>(ctx, &aot_mem) && ctx.pc == 0x08827AECu) goto L_08827AEC;
    return;
L_08827AEC:
    ctx.gpr[4] = (2224u << 16u);
    goto L_08827AF0;
L_08827AF0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08827B00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13456));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 355u, 0x089559F8u>(ctx, &aot_mem) && ctx.pc == 0x08827B00u) goto L_08827B00;
    return;
L_08827B00:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08827B0Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08824164;
L_08827B0C:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08827B58:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2840)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2844), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08827B6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08827B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 956u, 0x0881FB7Cu>(ctx, &aot_mem) && ctx.pc == 0x08827B98u) goto L_08827B98;
    return;
L_08827B98:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[31] = (0x08827BD4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 350u, 0x0880F4F8u>(ctx, &aot_mem) && ctx.pc == 0x08827BD4u) goto L_08827BD4;
    return;
L_08827BD4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 152u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08827BECu);
    ctx.gpr[5] = (0u | 239u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08827BECu) goto L_08827BEC;
    return;
L_08827BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08827C34;
      }
      goto L_08827BFC;
    }
L_08827BFC:
    ctx.gpr[31] = (0x08827C04u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1000u, 0x0881FF20u>(ctx, &aot_mem) && ctx.pc == 0x08827C04u) goto L_08827C04;
    return;
L_08827C04:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08827C10u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 480u, 0x0880FF38u>(ctx, &aot_mem) && ctx.pc == 0x08827C10u) goto L_08827C10;
    return;
L_08827C10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08827C24u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1000u, 0x0881FF20u>(ctx, &aot_mem) && ctx.pc == 0x08827C24u) goto L_08827C24;
    return;
L_08827C24:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08827C30u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 480u, 0x0880FF38u>(ctx, &aot_mem) && ctx.pc == 0x08827C30u) goto L_08827C30;
    return;
L_08827C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    goto L_08827C34;
L_08827C34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08827C8C;
    }
    goto L_08827C40;
L_08827C40:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08827C70;
      }
      goto L_08827C4C;
    }
L_08827C4C:
    ctx.gpr[31] = (0x08827C54u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 373u, 0x0882D570u>(ctx, &aot_mem) && ctx.pc == 0x08827C54u) goto L_08827C54;
    return;
L_08827C54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08827C68u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 373u, 0x0882D570u>(ctx, &aot_mem) && ctx.pc == 0x08827C68u) goto L_08827C68;
    return;
L_08827C68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    goto L_08827C70;
L_08827C70:
    ctx.gpr[31] = (0x08827C78u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 808u, 0x0882B684u>(ctx, &aot_mem) && ctx.pc == 0x08827C78u) goto L_08827C78;
    return;
L_08827C78:
    ctx.gpr[31] = (0x08827C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 962u, 0x0881FBE0u>(ctx, &aot_mem) && ctx.pc == 0x08827C80u) goto L_08827C80;
    return;
L_08827C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_08827C8C;
L_08827C8C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08827D7C;
      }
      goto L_08827C94;
    }
L_08827C94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[20] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_08827D7C;
      }
      goto L_08827CA8;
    }
L_08827CA8:
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(3196));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3184));
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    goto L_08827CC4;
L_08827CC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08827CD4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 257u, 0x0881CE88u>(ctx, &aot_mem) && ctx.pc == 0x08827CD4u) goto L_08827CD4;
    return;
L_08827CD4:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08827CE0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 382u, 0x0881D5ECu>(ctx, &aot_mem) && ctx.pc == 0x08827CE0u) goto L_08827CE0;
    return;
L_08827CE0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08827CECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 369u, 0x0881D4E0u>(ctx, &aot_mem) && ctx.pc == 0x08827CECu) goto L_08827CEC;
    return;
L_08827CEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08827D00u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1001u, 0x0881FF38u>(ctx, &aot_mem) && ctx.pc == 0x08827D00u) goto L_08827D00;
    return;
L_08827D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x08827D20u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 428u, 0x0881D904u>(ctx, &aot_mem) && ctx.pc == 0x08827D20u) goto L_08827D20;
    return;
L_08827D20:
    ctx.gpr[31] = (0x08827D28u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 284u, 0x0881D05Cu>(ctx, &aot_mem) && ctx.pc == 0x08827D28u) goto L_08827D28;
    return;
L_08827D28:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08827D38u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881D31Cu>(ctx, &aot_mem) && ctx.pc == 0x08827D38u) goto L_08827D38;
    return;
L_08827D38:
    ctx.gpr[31] = (0x08827D40u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1000u, 0x0881FF20u>(ctx, &aot_mem) && ctx.pc == 0x08827D40u) goto L_08827D40;
    return;
L_08827D40:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08827D4Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 287u, 0x0881D08Cu>(ctx, &aot_mem) && ctx.pc == 0x08827D4Cu) goto L_08827D4C;
    return;
L_08827D4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08827D5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 631u, 0x0897AABCu>(ctx, &aot_mem) && ctx.pc == 0x08827D5Cu) goto L_08827D5C;
    return;
L_08827D5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(144));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[20] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08827CC4;
      }
      goto L_08827D7C;
    }
L_08827D7C:
    ctx.gpr[31] = (0x08827D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08827D84u) goto L_08827D84;
    return;
L_08827D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08827DB8;
      }
      goto L_08827D94;
    }
L_08827D94:
    ctx.gpr[31] = (0x08827D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 133u, 0x089408D0u>(ctx, &aot_mem) && ctx.pc == 0x08827D9Cu) goto L_08827D9C;
    return;
L_08827D9C:
    ctx.gpr[31] = (0x08827DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 185u, 0x08969A10u>(ctx, &aot_mem) && ctx.pc == 0x08827DA4u) goto L_08827DA4;
    return;
L_08827DA4:
    ctx.gpr[31] = (0x08827DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 151u, 0x08950DC4u>(ctx, &aot_mem) && ctx.pc == 0x08827DACu) goto L_08827DAC;
    return;
L_08827DAC:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[31] = (0x08827DB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13456));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 343u, 0x08955940u>(ctx, &aot_mem) && ctx.pc == 0x08827DB8u) goto L_08827DB8;
    return;
L_08827DB8:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08827DE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08827E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08827E0Cu) goto L_08827E0C;
    return;
L_08827E0C:
    ctx.gpr[31] = (0x08827E14u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 166u, 0x08814BCCu>(ctx, &aot_mem) && ctx.pc == 0x08827E14u) goto L_08827E14;
    return;
L_08827E14:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08827E94;
      }
      goto L_08827E30;
    }
L_08827E30:
    ctx.gpr[19] = (0u | 0u);
    goto L_08827E34;
L_08827E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x08827E64u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 488u, 0x0881DD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08827E64u) goto L_08827E64;
    return;
L_08827E64:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08827E74;
      }
      goto L_08827E6C;
    }
L_08827E6C:
    ctx.gpr[31] = (0x08827E74u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 479u, 0x0881DCF4u>(ctx, &aot_mem) && ctx.pc == 0x08827E74u) goto L_08827E74;
    return;
L_08827E74:
    ctx.gpr[31] = (0x08827E7Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 297u, 0x0881D0FCu>(ctx, &aot_mem) && ctx.pc == 0x08827E7Cu) goto L_08827E7C;
    return;
L_08827E7C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08827E34;
      }
      goto L_08827E94;
    }
L_08827E94:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_08827EF8;
    }
    goto L_08827EA0;
L_08827EA0:
    ctx.gpr[31] = (0x08827EA8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1000u, 0x0881FF20u>(ctx, &aot_mem) && ctx.pc == 0x08827EA8u) goto L_08827EA8;
    return;
L_08827EA8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08827EB4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 486u, 0x0880FFE0u>(ctx, &aot_mem) && ctx.pc == 0x08827EB4u) goto L_08827EB4;
    return;
L_08827EB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08827EC8u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1000u, 0x0881FF20u>(ctx, &aot_mem) && ctx.pc == 0x08827EC8u) goto L_08827EC8;
    return;
L_08827EC8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08827ED4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 486u, 0x0880FFE0u>(ctx, &aot_mem) && ctx.pc == 0x08827ED4u) goto L_08827ED4;
    return;
L_08827ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08827EECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08827EECu) goto L_08827EEC;
    return;
L_08827EEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_08827EF8;
L_08827EF8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08827F20;
      }
      goto L_08827F04;
    }
L_08827F04:
    ctx.gpr[31] = (0x08827F0Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 475u, 0x08806030u>(ctx, &aot_mem) && ctx.pc == 0x08827F0Cu) goto L_08827F0C;
    return;
L_08827F0C:
    ctx.gpr[31] = (0x08827F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 496u, 0x08806164u>(ctx, &aot_mem) && ctx.pc == 0x08827F14u) goto L_08827F14;
    return;
L_08827F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
      if (branch_taken) {
          goto L_08827F30;
      }
      goto L_08827F20;
    }
L_08827F20:
    ctx.gpr[31] = (0x08827F28u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 475u, 0x08806030u>(ctx, &aot_mem) && ctx.pc == 0x08827F28u) goto L_08827F28;
    return;
L_08827F28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
    goto L_08827F30;
L_08827F30:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08827F54;
      }
      goto L_08827F38;
    }
L_08827F38:
    ctx.gpr[31] = (0x08827F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 163u, 0x08964CC8u>(ctx, &aot_mem) && ctx.pc == 0x08827F40u) goto L_08827F40;
    return;
L_08827F40:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[31] = (0x08827F4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13456));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 189u, 0x08954EA4u>(ctx, &aot_mem) && ctx.pc == 0x08827F4Cu) goto L_08827F4C;
    return;
L_08827F4C:
    ctx.gpr[31] = (0x08827F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 9u, 0x088200D8u>(ctx, &aot_mem) && ctx.pc == 0x08827F54u) goto L_08827F54;
    return;
L_08827F54:
    ctx.gpr[31] = (0x08827F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 508u, 0x08946754u>(ctx, &aot_mem) && ctx.pc == 0x08827F5Cu) goto L_08827F5C;
    return;
L_08827F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
        goto L_08827F98;
    }
    goto L_08827F74;
L_08827F74:
    ctx.gpr[31] = (0x08827F7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 946u, 0x0881FAFCu>(ctx, &aot_mem) && ctx.pc == 0x08827F7Cu) goto L_08827F7C;
    return;
L_08827F7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08827F74;
      }
      goto L_08827F94;
    }
L_08827F94:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_08827F98;
L_08827F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3232)));
        goto L_08827FBC;
    }
    goto L_08827FA8;
L_08827FA8:
    ctx.gpr[31] = (0x08827FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 188u, 0x08940E4Cu>(ctx, &aot_mem) && ctx.pc == 0x08827FB0u) goto L_08827FB0;
    return;
L_08827FB0:
    ctx.gpr[31] = (0x08827FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 231u, 0x08969D34u>(ctx, &aot_mem) && ctx.pc == 0x08827FB8u) goto L_08827FB8;
    return;
L_08827FB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3232)));
    goto L_08827FBC;
L_08827FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08827FE8;
    }
    goto L_08827FC8;
L_08827FC8:
    ctx.gpr[31] = (0x08827FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 982u, 0x0881FDD0u>(ctx, &aot_mem) && ctx.pc == 0x08827FD0u) goto L_08827FD0;
    return;
L_08827FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08827FE8;
L_08827FE8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 7u, 0x08828048u>(ctx, &aot_mem); return;
      }
      goto L_08827FF0;
    }
L_08827FF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 5u, 0x08828030u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 1u, 0x08828004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0008(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0008_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_8(Runtime &runtime) {
    runtime.register_generated_unit(8u, 0x08824000u, 16384u, &recomp_unit_0008, &recomp_unit_0008_entry);
    runtime.register_function(0x08824000u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824004u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824018u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824040u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824050u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824060u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824070u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882408Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824098u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088240B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088240B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088240C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088240D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088240E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088240F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088240FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824104u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824118u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824120u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824128u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824130u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824150u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824164u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882418Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824194u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088241A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088241ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088241B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088241BCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088241D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088241DCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088241E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088241E8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088241F0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088241F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824200u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824208u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824214u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824220u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824228u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824230u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824234u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824250u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824258u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824260u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824268u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824274u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824298u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088242A0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088242A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088242CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088242D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088242D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088242E8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088242F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088242FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824310u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882432Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824344u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882434Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824354u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824364u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882436Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824374u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824388u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824398u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088243ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088243B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088243C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088243ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088243FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824410u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824424u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824438u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824440u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824448u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882445Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824474u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824498u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088244A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088244B0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088244B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088244C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088244C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088244D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088244D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088244F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882450Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882451Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824540u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824590u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882459Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245B0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245F0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088245F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824614u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882461Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824624u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882463Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824644u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882464Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824654u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882465Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824664u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882466Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824674u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882467Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824684u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824690u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824698u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246A0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246BCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246F0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088246F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824700u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824708u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824710u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824718u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824720u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824728u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882473Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824744u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824750u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824758u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824760u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824768u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824770u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824778u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824780u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824788u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824790u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824798u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088247A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088247ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088247C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088247E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882481Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824824u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824834u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824840u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824864u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882486Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824888u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824890u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088248B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088248C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088248CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088248D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088248E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088248F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824900u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824908u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824910u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824918u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824920u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824930u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824938u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824940u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824958u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824964u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882496Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824994u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249BCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249F0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088249F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A00u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A0Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A18u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A2Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A34u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A3Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A44u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A50u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A58u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A6Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A7Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A88u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A90u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824A9Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824ABCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824ACCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824AD4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824AE4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824AECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824AF8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B08u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B10u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B18u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B20u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B24u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B38u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B40u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B58u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B64u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B6Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B74u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824B7Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824BA4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824BD0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824BE0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824BF0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C00u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C08u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C10u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C18u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C20u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C28u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C38u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C40u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C44u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C4Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C54u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C5Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C68u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C78u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C84u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824C90u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824CA8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824CB0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824CB4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824CBCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824CC4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824CCCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824CDCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824CE0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824CECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824CF8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824CFCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D08u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D10u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D18u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D1Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D34u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D38u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D40u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D48u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D50u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D60u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D64u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D70u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D7Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D80u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D8Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D94u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824D98u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824DA0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824DB0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824DB8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824DC0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824DC8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824DD0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824DD8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824DE0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824DE8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824DF4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824E28u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824E94u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824EA0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824EA8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824EB0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824EB4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824EC0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824EC8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824ED0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824ED8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824EE0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824EE8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824EF0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824EF8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F00u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F08u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F10u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F18u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F20u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F28u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F30u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F38u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F40u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F50u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F58u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F60u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F68u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F74u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F7Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F8Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824F98u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FA8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FB0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FB8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FC0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FC8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FD0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FD8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FE0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08824FF8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825000u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825008u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825058u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825060u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825068u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825070u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825078u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825088u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825090u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825098u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088250A0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088250A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088250C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825128u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825130u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825138u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825144u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825158u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825160u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882517Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088251ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088251B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088251BCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088251C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088251CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088251D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088251DCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088251E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088251ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088251F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088251FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825204u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882520Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825214u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882521Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825224u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882522Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825234u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882523Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825244u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882524Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825254u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882525Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825260u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825270u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825278u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825280u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825288u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882528Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088252A0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088252A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088252B0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088252C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088252CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088252D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088252DCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088252E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088252ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088252F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088252FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825304u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825310u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825318u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825328u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825330u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825338u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825340u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825348u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825354u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825360u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825370u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825380u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882538Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825398u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088253A0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088253A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088253B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088253C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088253D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088253E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088253E8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088253ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825400u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825418u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825424u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882542Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825438u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825440u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825454u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825468u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825478u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825480u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825488u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825490u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825494u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882549Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088254A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088254A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088254B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088254C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088254C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088254CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088254D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088254E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088254ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088254F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088254FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825504u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882550Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825514u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882551Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825524u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882552Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825538u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825540u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882554Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825554u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825560u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825568u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825570u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882557Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825584u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825590u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825598u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088255A0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088255A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088255ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088255B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088255C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088255CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088255E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088255F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825604u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882560Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825618u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825620u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882562Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825634u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825640u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825648u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825654u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882565Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825668u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825670u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882567Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825680u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825684u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825690u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088256A0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088256B0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088256C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088256D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088256E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088256E8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088256FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825704u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882570Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825718u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825720u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825728u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825738u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882573Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825748u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825760u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825770u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825778u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825780u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825790u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825798u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088257A0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088257A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088257B0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088257C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088257D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088257DCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088257ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088257F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825808u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825810u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825818u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825820u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825828u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825830u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825838u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825840u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882584Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825858u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825860u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825868u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088258D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088258E8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088258F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088258FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825904u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825920u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825928u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825930u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882596Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882598Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088259C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088259D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825A3Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825A6Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825AF0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825AF8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825B5Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825B8Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825C10u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825C28u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825C34u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825C74u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825C7Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825C84u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825C8Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825C94u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825C9Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825CA4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825CACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825CB8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825CC0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825CC4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825CD8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825CE4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D00u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D2Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D44u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D54u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D5Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D68u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D74u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D80u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825D8Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825DA8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825DB4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825DD0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825DE0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825DF0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825DF8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E08u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E10u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E20u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E28u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E38u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E40u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E5Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E64u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E70u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E78u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E80u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E8Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825E98u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825EA4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825EACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825EB8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825EC4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825EDCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825EE8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F00u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F10u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F14u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F24u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F4Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F54u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F70u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F88u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825F9Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825FACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825FBCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825FCCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825FD8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825FE0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825FE4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08825FECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826008u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826034u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882604Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826058u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882606Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826078u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826090u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826098u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088260B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088260C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088260D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088260E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826108u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826118u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882616Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826174u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826180u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088261D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088261E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088261F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882622Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826234u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882623Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882625Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826274u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882627Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826290u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826294u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088262A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088262B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088262DCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826310u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826328u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826348u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826354u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882635Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882638Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088263A0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088263D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088263E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088263E8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826408u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826418u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826420u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826438u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826450u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826454u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826460u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826484u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826494u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088264E8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088264F0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088264FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882654Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826560u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882656Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882657Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826584u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088265B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088265C4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088265CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088265ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088265FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826604u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882661Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826634u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826638u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826658u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826660u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826678u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882667Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826690u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882669Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088266CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826704u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882671Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882673Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826758u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826770u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826778u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088267A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088267D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088267E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826810u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826820u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826828u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826848u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826858u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826860u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826878u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826890u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826894u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088268A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088268ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088268B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088268C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088268C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088268CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088268E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088268E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088268ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826910u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826920u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826974u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882697Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826988u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088269D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088269ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088269F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A08u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A10u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A40u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A50u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A58u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A78u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A88u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826A90u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826AA4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826AB8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826ABCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826AD8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826AECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826AF8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826B2Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826B5Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826B78u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826B84u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826B8Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826B98u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826BC0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826BC8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826BD8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826BE0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826C04u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826C0Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826C38u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826C40u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826C4Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826C58u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826C60u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826C78u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826CECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826CF8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D2Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D3Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D54u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D88u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826D90u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826DA8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826DB0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826DBCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826DC4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826DDCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826DE8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826DF0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826DF8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826E04u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826E0Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826E10u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826E20u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826E28u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826E30u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826E3Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826E4Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826E54u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826E5Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826E64u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826E68u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826E6Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826E7Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826E94u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826EA0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826EC4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826ECCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826EE4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826F00u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826F08u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826F20u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826F24u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826F38u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826F44u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826F70u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826FC0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826FC8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08826FF8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827004u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882700Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827014u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827020u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827028u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827030u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882704Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827050u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827064u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088270C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088270C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088270D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088270F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827134u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827154u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882715Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827168u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827174u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882717Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827198u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088271A0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088271A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088271ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088271B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088271BCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088271D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088271DCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088271E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088271F4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088271F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882720Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827214u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882721Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827234u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882724Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827254u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827268u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827278u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827298u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882729Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088272ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088272D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088272E8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088272F0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088272F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827308u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827314u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827320u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827328u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827338u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827340u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827348u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827354u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882735Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827374u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882737Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827394u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882739Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088273A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088273B0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088273B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088273DCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088273E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088273FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827404u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882741Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827420u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827434u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882743Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827448u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827450u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827454u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827468u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827470u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827478u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827494u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882749Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088274A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088274C8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088274D0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088274DCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827500u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882752Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827534u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827540u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882756Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827570u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827574u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827580u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827588u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827594u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088275A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088275ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088275B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088275B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088275CCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088275E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088275FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827610u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882762Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827640u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827658u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827670u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827678u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827684u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827694u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088276ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088276C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088276D8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088276E0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088276F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827710u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827718u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882772Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827734u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882773Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827754u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827760u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827778u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827780u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827784u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827790u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088277A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088277B8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088277FCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827808u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827810u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827824u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827844u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827858u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882785Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827868u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827880u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827884u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827890u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088278A8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088278B4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088278C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088278E4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088278ECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827900u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882790Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882793Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882794Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827958u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827970u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827978u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882797Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827984u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x0882799Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088279A4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088279ACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088279C0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088279D4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088279F0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x088279F8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A14u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A1Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A20u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A2Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A44u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A4Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A50u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A58u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A6Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A74u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A84u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A8Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827A94u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827AACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827AB4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827ACCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827AD4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827AECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827AF0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827B00u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827B0Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827B58u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827B6Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827B98u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827BD4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827BECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827BFCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C04u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C10u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C24u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C30u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C34u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C40u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C4Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C54u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C68u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C70u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C78u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C80u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C8Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827C94u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827CA8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827CC4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827CD4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827CE0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827CECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827D00u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827D20u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827D28u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827D38u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827D40u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827D4Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827D5Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827D7Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827D84u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827D94u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827D9Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827DA4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827DACu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827DB8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827DE4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E0Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E14u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E30u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E34u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E64u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E6Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E74u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E7Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827E94u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827EA0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827EA8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827EB4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827EC8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827ED4u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827EECu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827EF8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F04u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F0Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F14u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F20u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F28u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F30u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F38u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F40u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F4Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F54u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F5Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F74u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F7Cu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F94u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827F98u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827FA8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827FB0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827FB8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827FBCu, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827FC8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827FD0u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827FE8u, &recomp_unit_0008, "recomp_unit_0008");
    runtime.register_function(0x08827FF0u, &recomp_unit_0008, "recomp_unit_0008");
}
} // namespace psprecomp

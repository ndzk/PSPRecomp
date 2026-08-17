#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0005[4096] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 15, 0, 16, 17, 0, 0, 0, 18, 0, 0,
    19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 27, 0, 28, 0, 29, 0, 0, 0,
    0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 33, 0, 0, 34, 0, 35, 36, 0, 37, 0, 38, 0, 0, 39, 0, 40, 0, 41, 0, 0, 42,
    0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0,
    0, 48, 0, 49, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0,
    57, 58, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 62, 63, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0,
    73, 74, 0, 75, 0, 76, 0, 77, 0, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 0, 84, 0, 85,
    86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    88, 0, 0, 89, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 92, 93, 0, 94, 0, 95, 0, 96, 0, 0, 97, 0, 98, 0, 0, 99, 0,
    100, 0, 0, 101, 0, 102, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 105, 106, 0, 0, 0, 107, 0, 0, 108, 0, 0, 109,
    0, 0, 110, 0, 0, 0, 111, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 118, 0, 119, 0,
    120, 0, 0, 121, 0, 0, 122, 0, 123, 0, 124, 0, 0, 125, 0, 126, 0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 0, 133,
    0, 134, 0, 135, 0, 0, 0, 0, 0, 136, 137, 0, 138, 0, 139, 0, 140, 0, 0, 141, 0, 142, 0, 0, 143, 0, 144, 145, 0, 146, 0, 147,
    0, 0, 148, 0, 149, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163,
    0, 164, 0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0,
    0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 177, 0, 0, 178, 0, 179, 0, 180, 0, 0, 181, 0, 0, 182, 0,
    183, 0, 184, 0, 185, 0, 186, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 191, 0, 192, 0, 0, 0, 0, 193,
    0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0,
    0, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 205, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 212, 0, 0, 213, 0, 214, 0, 215,
    0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 222, 0, 223, 0,
    0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0,
    228, 0, 0, 229, 0, 0, 0, 230, 0, 231, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 0, 0, 236, 0,
    237, 0, 0, 0, 238, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0,
    243, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 248, 249, 0, 250, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0,
    254, 0, 255, 0, 256, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 259, 260, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0,
    0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 267, 0, 0, 0, 268, 0, 269, 0, 270, 0, 271, 0, 272, 0, 273,
    0, 274, 0, 275, 0, 0, 276, 277, 0, 278, 0, 0, 0, 279, 0, 280, 0, 281, 0, 282, 0, 283, 0, 284, 0, 285, 0, 286, 0, 287, 0, 288,
    0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 298, 0, 299,
    0, 0, 0, 0, 300, 301, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0,
    0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311,
    0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0,
    317, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0,
    0, 0, 0, 333, 0, 334, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0,
    0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 344, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 348, 0,
    0, 0, 0, 349, 0, 0, 350, 0, 351, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0,
    0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 358, 0, 0, 359, 0, 0, 0, 360, 0, 361, 0, 362,
    0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 368, 0, 369, 0, 0, 370, 0, 371, 0, 372, 0, 373, 374, 0, 375, 0, 0, 376, 0,
    0, 0, 377, 0, 0, 378, 0, 379, 0, 380, 381, 0, 382, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 388, 0, 389, 0, 0, 390, 391, 392, 0, 0, 0, 0,
    0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 400, 401, 0, 0,
    402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 406, 0, 407, 0, 0, 408, 0, 409, 0, 410, 0, 411, 412, 0, 0, 0, 0, 0, 413, 0,
    414, 0, 415, 0, 0, 0, 0, 0, 416, 0, 417, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0,
    0, 422, 0, 0, 423, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 427, 0, 0, 428, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 434, 0, 0, 435, 0, 436, 0, 437, 0, 0, 438,
    0, 0, 439, 0, 440, 0, 441, 0, 442, 443, 0, 444, 0, 445, 0, 446, 0, 447, 0, 448, 449, 0, 450, 0, 451, 452, 0, 453, 0, 0, 0, 0,
    0, 454, 0, 455, 456, 0, 457, 458, 459, 0, 460, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462,
    0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 465, 0, 0, 466, 0, 467, 0, 0, 468, 0, 0, 469, 0, 470, 0, 0, 471, 0, 472, 0,
    473, 0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 477, 0, 478, 0, 479, 0, 0, 480, 0, 481, 0, 482, 0, 0, 483, 0, 484, 0,
    485, 0, 486, 0, 487, 0, 488, 489, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 493, 494, 0, 495, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 497,
    0, 498, 0, 0, 0, 0, 499, 0, 0, 500, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 505, 0, 0, 506, 0,
    0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0,
    514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0,
    0, 0, 519, 0, 0, 0, 520, 521, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 525, 0, 526, 527, 0, 0, 528, 0, 529, 0,
    0, 530, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0, 0, 535, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0,
    0, 0, 538, 539, 0, 0, 0, 540, 541, 0, 542, 0, 0, 543, 0, 0, 0, 0, 544, 545, 0, 546, 0, 0, 0, 0, 0, 547, 548, 0, 0, 0,
    549, 0, 550, 0, 551, 0, 0, 0, 0, 552, 553, 0, 554, 0, 0, 0, 0, 0, 555, 556, 0, 0, 0, 557, 0, 558, 0, 559, 0, 560, 0, 0,
    0, 0, 561, 0, 562, 0, 563, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 567, 568, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 571,
    572, 0, 0, 573, 574, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 0, 577, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 583, 584, 0, 585, 586, 0, 587, 0, 588, 0, 0, 0, 589, 0, 0, 590, 0,
    591, 0, 592, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 597, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 0, 601, 0, 0, 602,
    0, 0, 603, 0, 0, 604, 0, 0, 605, 0, 0, 606, 0, 0, 607, 0, 0, 608, 0, 609, 0, 0, 610, 0, 0, 611, 0, 0, 612, 0, 0, 613,
    0, 0, 614, 0, 0, 615, 0, 0, 616, 0, 0, 617, 0, 0, 618, 0, 0, 619, 0, 0, 620, 0, 621, 0, 0, 0, 622, 0, 0, 0, 0, 0,
    623, 0, 0, 624, 0, 0, 625, 0, 626, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 630, 0, 0, 631, 0, 0, 632, 0, 0, 633, 0, 634, 0,
    0, 635, 0, 636, 0, 0, 637, 0, 638, 639, 0, 640, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0,
    643, 0, 0, 644, 0, 645, 646, 0, 647, 648, 0, 0, 649, 0, 650, 0, 0, 0, 651, 0, 0, 652, 0, 653, 0, 654, 0, 655, 0, 0, 0, 656,
    0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 664,
    0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 670, 0, 671, 0, 0, 0, 672, 0, 0,
    0, 673, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0,
    0, 681, 0, 0, 0, 682, 0, 683, 0, 0, 684, 0, 0, 0, 0, 685, 0, 686, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689, 0, 690, 0, 0,
    691, 0, 0, 0, 692, 0, 0, 0, 693, 0, 694, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 697, 0, 698, 0, 0, 699, 0, 700, 0, 701,
    0, 0, 0, 702, 0, 703, 0, 704, 0, 0, 705, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0,
    708, 0, 0, 709, 0, 710, 0, 0, 0, 711, 0, 0, 712, 0, 713, 0, 714, 0, 715, 0, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 718, 0,
    0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 721, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 724, 0, 0, 0, 725, 0, 0, 0, 726, 0,
    0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 729, 0, 0, 0, 730, 0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 0, 733, 0, 0, 0, 734, 0,
    0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 738, 0, 739, 0, 0, 0, 740, 0, 0, 741, 0, 742, 743, 0, 744, 0, 0, 0,
    745, 746, 0, 0, 747, 0, 748, 0, 0, 0, 749, 0, 750, 0, 0, 0, 751, 0, 0, 0, 752, 0, 0, 0, 753, 0, 0, 0, 754, 0, 0, 0,
    0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 758, 0, 759,
    0, 0, 0, 0, 0, 0, 0, 760, 0, 761, 0, 0, 0, 762, 0, 0, 0, 0, 0, 763, 0, 764, 0, 765, 766, 0, 767, 0, 0, 0, 768, 0,
    769, 0, 0, 0, 770, 0, 0, 771, 0, 0, 772, 0, 0, 773, 0, 774, 0, 0, 0, 775, 0, 776, 0, 0, 0, 777, 0, 778, 0, 0, 0, 779,
    0, 0, 780, 0, 0, 781, 0, 0, 782, 0, 783, 0, 0, 0, 0, 0, 0, 784, 0, 785, 0, 0, 0, 786, 0, 0, 0, 787, 0, 0, 788, 0,
    789, 790, 0, 0, 791, 0, 792, 0, 0, 793, 0, 0, 0, 794, 0, 795, 0, 0, 796, 0, 0, 0, 797, 0, 0, 0, 798, 0, 0, 799, 0, 800,
    0, 0, 0, 801, 0, 0, 802, 0, 0, 803, 0, 0, 804, 0, 0, 805, 0, 0, 0, 806, 0, 807, 0, 0, 808, 0, 809, 0, 810, 0, 0, 811,
    0, 0, 812, 0, 0, 813, 0, 0, 814, 0, 0, 0, 815, 0, 816, 0, 0, 817, 0, 0, 0, 818, 0, 0, 819, 0, 0, 820, 0, 0, 0, 0,
    821, 0, 0, 822, 0, 823, 0, 0, 0, 824, 0, 825, 0, 826, 0, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 0, 828, 0, 0, 829, 0,
    830, 0, 831, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 833, 0, 834, 0, 0, 835, 0, 836, 837, 0, 838, 0, 0, 839, 0, 840,
    0, 0, 0, 0, 0, 0, 841, 0, 842, 0, 0, 0, 0, 0, 843, 0, 0, 844, 0, 845, 0, 846, 0, 0, 0, 0, 847, 848, 0, 0, 849, 0,
    0, 850, 0, 0, 0, 851, 852, 853, 0, 0, 0, 0, 0, 0, 854, 0, 855, 0, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 0, 0, 0, 0, 0, 0, 858, 0, 0, 0, 859, 0, 0, 0, 0, 0, 860,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 861, 0, 0, 0, 0, 0, 862, 0, 0, 0, 0, 0, 0, 863, 0, 0, 0, 0, 0, 864, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 865, 0, 0, 866, 0, 0, 0, 0, 867, 0, 868, 0, 0, 0, 0, 869, 0, 0, 870, 0, 871, 0, 872, 0, 0, 0, 873, 0, 874,
    875, 0, 876, 0, 877, 0, 878, 879, 0, 0, 880, 0, 881, 0, 882, 0, 0, 0, 0, 883, 0, 884, 0, 885, 0, 0, 0, 0, 886, 887, 0, 0,
    0, 0, 0, 0, 888, 0, 0, 889, 0, 890, 0, 0, 0, 0, 0, 0, 0, 891, 0, 0, 0, 892, 0, 0, 0, 0, 0, 893, 0, 0, 0, 894,
    0, 0, 895, 0, 0, 0, 0, 896, 0, 0, 897, 0, 0, 898, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 899, 0, 0, 900, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 901, 0, 0, 0, 0, 0, 902, 0, 903, 0, 0, 0, 0, 0, 0, 904, 0, 0, 0, 0, 0, 905, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 906, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 907, 0, 0, 908, 0,
    0, 909, 0, 910, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 911, 0, 0, 0, 0, 912, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 913, 0, 914, 0, 0, 0, 0, 0, 915, 0, 0, 0, 0, 0, 916, 0, 0, 0, 0, 0, 0, 0, 0, 0, 917, 918, 0, 919,
    0, 0, 0, 920, 0, 921, 0, 0, 0, 0, 0, 0, 0, 922, 0, 923, 0, 0, 0, 0, 924, 0, 925, 0, 0, 0, 926, 0, 0, 927, 0, 0,
    0, 928, 0, 0, 0, 0, 0, 0, 0, 0, 0, 929, 0, 930, 0, 0, 0, 931, 0, 932, 0, 0, 0, 0, 0, 0, 0, 0, 933, 0, 934, 0,
    0, 0, 935, 0, 936, 0, 0, 0, 0, 0, 0, 937, 0, 938, 0, 939, 0, 0, 0, 940, 0, 0, 0, 0, 0, 0, 0, 0, 941, 0, 942, 0,
    0, 0, 943, 0, 944, 0, 0, 945, 0, 946, 0, 0, 0, 947, 0, 948, 0, 0, 0, 949, 0, 950, 0, 0, 0, 951, 0, 952, 953, 0, 954, 0,
    0, 0, 0, 0, 955, 0, 0, 956, 0, 0, 957, 0, 958, 0, 0, 959, 0, 960, 0, 961, 962, 0, 0, 0, 963, 0, 0, 0, 0, 964, 0, 0,
    0, 0, 965, 0, 0, 0, 0, 966, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 967, 0, 968, 0, 0, 0, 0, 0, 0, 969, 0, 970, 0,
    0, 0, 971, 0, 972, 0, 0, 973, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 974, 0, 975, 0, 0, 0, 976, 0, 977, 0, 0, 0, 0, 0,
    0, 0, 0, 978, 0, 979, 0, 0, 0, 980, 0, 981, 0, 0, 0, 0, 0, 0, 0, 0, 982, 983, 0, 984, 0, 0, 0, 985, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 986, 0, 0, 0, 0, 987, 0, 988, 0, 989, 0, 0, 990, 0, 991, 0, 0, 992, 0, 0, 0, 0, 0, 993, 0, 994, 0,
    995, 0, 996, 0, 0, 997, 0, 0, 0, 0, 0, 998, 0, 999, 0, 1000, 0, 1001, 0, 1002, 0, 0, 1003, 0, 0, 0, 0, 0, 1004, 0, 1005, 0,
    1006, 0, 0, 1007, 0, 0, 0, 0, 0, 1008, 1009, 0, 1010, 0, 0, 0, 0, 0, 1011, 0, 1012, 0, 1013, 0, 0, 1014, 0, 0, 0, 0, 0, 1015,
    0, 1016, 0, 0, 0, 1017, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1018, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 1019, 0, 0, 0, 1020, 0, 1021, 0, 1022, 0, 1023, 0, 0, 0, 1024, 0, 1025, 0, 0, 1026, 1027, 0, 1028, 0, 0, 1029, 0, 0, 1030, 0,
    0, 0, 1031, 0, 1032, 0, 0, 1033, 0, 0, 1034, 0, 1035, 1036, 0, 0, 1037, 0, 0, 0, 0, 1038, 0, 1039, 0, 0, 1040, 0, 0, 0, 0, 1041,
};
void recomp_unit_0005_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08818000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0005[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08818000;
    case 2u: goto L_0881800C;
    case 3u: goto L_08818028;
    case 4u: goto L_08818030;
    case 5u: goto L_08818038;
    case 6u: goto L_08818050;
    case 7u: goto L_0881805C;
    case 8u: goto L_08818070;
    case 9u: goto L_08818098;
    case 10u: goto L_088180A8;
    case 11u: goto L_088180CC;
    case 12u: goto L_08818114;
    case 13u: goto L_08818138;
    case 14u: goto L_08818144;
    case 15u: goto L_08818158;
    case 16u: goto L_08818160;
    case 17u: goto L_08818164;
    case 18u: goto L_08818174;
    case 19u: goto L_08818180;
    case 20u: goto L_08818198;
    case 21u: goto L_088181C0;
    case 22u: goto L_088181C8;
    case 23u: goto L_088181D8;
    case 24u: goto L_0881821C;
    case 25u: goto L_08818228;
    case 26u: goto L_0881825C;
    case 27u: goto L_08818260;
    case 28u: goto L_08818268;
    case 29u: goto L_08818270;
    case 30u: goto L_0881828C;
    case 31u: goto L_08818298;
    case 32u: goto L_088182A0;
    case 33u: goto L_088182AC;
    case 34u: goto L_088182B8;
    case 35u: goto L_088182C0;
    case 36u: goto L_088182C4;
    case 37u: goto L_088182CC;
    case 38u: goto L_088182D4;
    case 39u: goto L_088182E0;
    case 40u: goto L_088182E8;
    case 41u: goto L_088182F0;
    case 42u: goto L_088182FC;
    case 43u: goto L_08818304;
    case 44u: goto L_08818310;
    case 45u: goto L_08818354;
    case 46u: goto L_0881836C;
    case 47u: goto L_08818374;
    case 48u: goto L_08818384;
    case 49u: goto L_0881838C;
    case 50u: goto L_088183A0;
    case 51u: goto L_088183B4;
    case 52u: goto L_088183BC;
    case 53u: goto L_088183C4;
    case 54u: goto L_088183D0;
    case 55u: goto L_088183DC;
    case 56u: goto L_088183F8;
    case 57u: goto L_08818400;
    case 58u: goto L_08818404;
    case 59u: goto L_0881840C;
    case 60u: goto L_08818418;
    case 61u: goto L_08818450;
    case 62u: goto L_08818488;
    case 63u: goto L_0881848C;
    case 64u: goto L_08818490;
    case 65u: goto L_0881849C;
    case 66u: goto L_088184D0;
    case 67u: goto L_08818528;
    case 68u: goto L_08818538;
    case 69u: goto L_08818540;
    case 70u: goto L_08818554;
    case 71u: goto L_0881855C;
    case 72u: goto L_08818564;
    case 73u: goto L_08818580;
    case 74u: goto L_08818584;
    case 75u: goto L_0881858C;
    case 76u: goto L_08818594;
    case 77u: goto L_0881859C;
    case 78u: goto L_088185A8;
    case 79u: goto L_088185B0;
    case 80u: goto L_088185C4;
    case 81u: goto L_088185CC;
    case 82u: goto L_088185D8;
    case 83u: goto L_088185E4;
    case 84u: goto L_088185F4;
    case 85u: goto L_088185FC;
    case 86u: goto L_08818600;
    case 87u: goto L_08818630;
    case 88u: goto L_08818680;
    case 89u: goto L_0881868C;
    case 90u: goto L_0881869C;
    case 91u: goto L_088186A4;
    case 92u: goto L_088186BC;
    case 93u: goto L_088186C0;
    case 94u: goto L_088186C8;
    case 95u: goto L_088186D0;
    case 96u: goto L_088186D8;
    case 97u: goto L_088186E4;
    case 98u: goto L_088186EC;
    case 99u: goto L_088186F8;
    case 100u: goto L_08818700;
    case 101u: goto L_0881870C;
    case 102u: goto L_08818714;
    case 103u: goto L_08818718;
    case 104u: goto L_08818744;
    case 105u: goto L_08818750;
    case 106u: goto L_08818754;
    case 107u: goto L_08818764;
    case 108u: goto L_08818770;
    case 109u: goto L_0881877C;
    case 110u: goto L_08818788;
    case 111u: goto L_08818798;
    case 112u: goto L_088187A0;
    case 113u: goto L_088187A8;
    case 114u: goto L_08818804;
    case 115u: goto L_08818850;
    case 116u: goto L_08818860;
    case 117u: goto L_088188EC;
    case 118u: goto L_088188F0;
    case 119u: goto L_088188F8;
    case 120u: goto L_08818900;
    case 121u: goto L_0881890C;
    case 122u: goto L_08818918;
    case 123u: goto L_08818920;
    case 124u: goto L_08818928;
    case 125u: goto L_08818934;
    case 126u: goto L_0881893C;
    case 127u: goto L_08818944;
    case 128u: goto L_0881894C;
    case 129u: goto L_08818958;
    case 130u: goto L_08818960;
    case 131u: goto L_08818968;
    case 132u: goto L_08818970;
    case 133u: goto L_0881897C;
    case 134u: goto L_08818984;
    case 135u: goto L_0881898C;
    case 136u: goto L_088189A4;
    case 137u: goto L_088189A8;
    case 138u: goto L_088189B0;
    case 139u: goto L_088189B8;
    case 140u: goto L_088189C0;
    case 141u: goto L_088189CC;
    case 142u: goto L_088189D4;
    case 143u: goto L_088189E0;
    case 144u: goto L_088189E8;
    case 145u: goto L_088189EC;
    case 146u: goto L_088189F4;
    case 147u: goto L_088189FC;
    case 148u: goto L_08818A08;
    case 149u: goto L_08818A10;
    case 150u: goto L_08818A14;
    case 151u: goto L_08818A1C;
    case 152u: goto L_08818A24;
    case 153u: goto L_08818A2C;
    case 154u: goto L_08818A34;
    case 155u: goto L_08818A3C;
    case 156u: goto L_08818A44;
    case 157u: goto L_08818A4C;
    case 158u: goto L_08818A54;
    case 159u: goto L_08818A5C;
    case 160u: goto L_08818A64;
    case 161u: goto L_08818A6C;
    case 162u: goto L_08818A74;
    case 163u: goto L_08818A7C;
    case 164u: goto L_08818A84;
    case 165u: goto L_08818A8C;
    case 166u: goto L_08818A94;
    case 167u: goto L_08818AA4;
    case 168u: goto L_08818AB0;
    case 169u: goto L_08818ABC;
    case 170u: goto L_08818AF0;
    case 171u: goto L_08818B38;
    case 172u: goto L_08818B44;
    case 173u: goto L_08818B64;
    case 174u: goto L_08818B84;
    case 175u: goto L_08818BB4;
    case 176u: goto L_08818BC0;
    case 177u: goto L_08818BC4;
    case 178u: goto L_08818BD0;
    case 179u: goto L_08818BD8;
    case 180u: goto L_08818BE0;
    case 181u: goto L_08818BEC;
    case 182u: goto L_08818BF8;
    case 183u: goto L_08818C00;
    case 184u: goto L_08818C08;
    case 185u: goto L_08818C10;
    case 186u: goto L_08818C18;
    case 187u: goto L_08818C28;
    case 188u: goto L_08818C30;
    case 189u: goto L_08818C48;
    case 190u: goto L_08818C58;
    case 191u: goto L_08818C60;
    case 192u: goto L_08818C68;
    case 193u: goto L_08818C7C;
    case 194u: goto L_08818C84;
    case 195u: goto L_08818C98;
    case 196u: goto L_08818CB8;
    case 197u: goto L_08818CE4;
    case 198u: goto L_08818CF8;
    case 199u: goto L_08818D08;
    case 200u: goto L_08818D10;
    case 201u: goto L_08818D18;
    case 202u: goto L_08818D20;
    case 203u: goto L_08818D28;
    case 204u: goto L_08818D30;
    case 205u: goto L_08818D34;
    case 206u: goto L_08818D44;
    case 207u: goto L_08818D4C;
    case 208u: goto L_08818DA8;
    case 209u: goto L_08818DB0;
    case 210u: goto L_08818DB8;
    case 211u: goto L_08818DD8;
    case 212u: goto L_08818DE0;
    case 213u: goto L_08818DEC;
    case 214u: goto L_08818DF4;
    case 215u: goto L_08818DFC;
    case 216u: goto L_08818E1C;
    case 217u: goto L_08818E34;
    case 218u: goto L_08818E3C;
    case 219u: goto L_08818E50;
    case 220u: goto L_08818E58;
    case 221u: goto L_08818E60;
    case 222u: goto L_08818E70;
    case 223u: goto L_08818E78;
    case 224u: goto L_08818E8C;
    case 225u: goto L_08818EC8;
    case 226u: goto L_08818ED8;
    case 227u: goto L_08818EE4;
    case 228u: goto L_08818F00;
    case 229u: goto L_08818F0C;
    case 230u: goto L_08818F1C;
    case 231u: goto L_08818F24;
    case 232u: goto L_08818F34;
    case 233u: goto L_08818F40;
    case 234u: goto L_08818F5C;
    case 235u: goto L_08818F68;
    case 236u: goto L_08818F78;
    case 237u: goto L_08818F80;
    case 238u: goto L_08818F90;
    case 239u: goto L_08818F98;
    case 240u: goto L_08818FA4;
    case 241u: goto L_08818FE0;
    case 242u: goto L_08818FF4;
    case 243u: goto L_08819000;
    case 244u: goto L_08819010;
    case 245u: goto L_0881901C;
    case 246u: goto L_0881902C;
    case 247u: goto L_0881903C;
    case 248u: goto L_08819060;
    case 249u: goto L_08819064;
    case 250u: goto L_0881906C;
    case 251u: goto L_08819098;
    case 252u: goto L_088190D0;
    case 253u: goto L_088190DC;
    case 254u: goto L_08819100;
    case 255u: goto L_08819108;
    case 256u: goto L_08819110;
    case 257u: goto L_08819118;
    case 258u: goto L_08819128;
    case 259u: goto L_0881913C;
    case 260u: goto L_08819140;
    case 261u: goto L_08819144;
    case 262u: goto L_08819160;
    case 263u: goto L_08819178;
    case 264u: goto L_0881918C;
    case 265u: goto L_088191A0;
    case 266u: goto L_088191C0;
    case 267u: goto L_088191C4;
    case 268u: goto L_088191D4;
    case 269u: goto L_088191DC;
    case 270u: goto L_088191E4;
    case 271u: goto L_088191EC;
    case 272u: goto L_088191F4;
    case 273u: goto L_088191FC;
    case 274u: goto L_08819204;
    case 275u: goto L_0881920C;
    case 276u: goto L_08819218;
    case 277u: goto L_0881921C;
    case 278u: goto L_08819224;
    case 279u: goto L_08819234;
    case 280u: goto L_0881923C;
    case 281u: goto L_08819244;
    case 282u: goto L_0881924C;
    case 283u: goto L_08819254;
    case 284u: goto L_0881925C;
    case 285u: goto L_08819264;
    case 286u: goto L_0881926C;
    case 287u: goto L_08819274;
    case 288u: goto L_0881927C;
    case 289u: goto L_08819288;
    case 290u: goto L_088192B0;
    case 291u: goto L_088192B4;
    case 292u: goto L_088192E0;
    case 293u: goto L_08819320;
    case 294u: goto L_08819340;
    case 295u: goto L_08819344;
    case 296u: goto L_0881935C;
    case 297u: goto L_0881936C;
    case 298u: goto L_08819374;
    case 299u: goto L_0881937C;
    case 300u: goto L_08819390;
    case 301u: goto L_08819394;
    case 302u: goto L_088193AC;
    case 303u: goto L_088193B8;
    case 304u: goto L_088193C4;
    case 305u: goto L_088193F0;
    case 306u: goto L_08819414;
    case 307u: goto L_0881942C;
    case 308u: goto L_08819440;
    case 309u: goto L_08819448;
    case 310u: goto L_08819454;
    case 311u: goto L_0881947C;
    case 312u: goto L_08819490;
    case 313u: goto L_08819498;
    case 314u: goto L_088194A8;
    case 315u: goto L_088194C4;
    case 316u: goto L_088194EC;
    case 317u: goto L_08819500;
    case 318u: goto L_08819508;
    case 319u: goto L_08819518;
    case 320u: goto L_08819534;
    case 321u: goto L_08819550;
    case 322u: goto L_08819590;
    case 323u: goto L_0881959C;
    case 324u: goto L_088195A8;
    case 325u: goto L_088195C4;
    case 326u: goto L_08819604;
    case 327u: goto L_08819624;
    case 328u: goto L_08819638;
    case 329u: goto L_08819640;
    case 330u: goto L_08819648;
    case 331u: goto L_08819670;
    case 332u: goto L_08819678;
    case 333u: goto L_0881968C;
    case 334u: goto L_08819694;
    case 335u: goto L_0881969C;
    case 336u: goto L_088196B8;
    case 337u: goto L_088196C0;
    case 338u: goto L_088196C8;
    case 339u: goto L_088196E8;
    case 340u: goto L_088196F0;
    case 341u: goto L_08819704;
    case 342u: goto L_08819720;
    case 343u: goto L_08819730;
    case 344u: goto L_08819740;
    case 345u: goto L_0881974C;
    case 346u: goto L_08819754;
    case 347u: goto L_0881976C;
    case 348u: goto L_08819778;
    case 349u: goto L_0881978C;
    case 350u: goto L_08819798;
    case 351u: goto L_088197A0;
    case 352u: goto L_088197B0;
    case 353u: goto L_088197BC;
    case 354u: goto L_088197E4;
    case 355u: goto L_08819808;
    case 356u: goto L_08819838;
    case 357u: goto L_08819848;
    case 358u: goto L_08819850;
    case 359u: goto L_0881985C;
    case 360u: goto L_0881986C;
    case 361u: goto L_08819874;
    case 362u: goto L_0881987C;
    case 363u: goto L_08819894;
    case 364u: goto L_088198B0;
    case 365u: goto L_088198E8;
    case 366u: goto L_08819924;
    case 367u: goto L_0881992C;
    case 368u: goto L_08819934;
    case 369u: goto L_0881993C;
    case 370u: goto L_08819948;
    case 371u: goto L_08819950;
    case 372u: goto L_08819958;
    case 373u: goto L_08819960;
    case 374u: goto L_08819964;
    case 375u: goto L_0881996C;
    case 376u: goto L_08819978;
    case 377u: goto L_08819988;
    case 378u: goto L_08819994;
    case 379u: goto L_0881999C;
    case 380u: goto L_088199A4;
    case 381u: goto L_088199A8;
    case 382u: goto L_088199B0;
    case 383u: goto L_088199B4;
    case 384u: goto L_088199C4;
    case 385u: goto L_088199F0;
    case 386u: goto L_08819A40;
    case 387u: goto L_08819A48;
    case 388u: goto L_08819A50;
    case 389u: goto L_08819A58;
    case 390u: goto L_08819A64;
    case 391u: goto L_08819A68;
    case 392u: goto L_08819A6C;
    case 393u: goto L_08819A84;
    case 394u: goto L_08819A8C;
    case 395u: goto L_08819AA8;
    case 396u: goto L_08819AB8;
    case 397u: goto L_08819AC4;
    case 398u: goto L_08819AD8;
    case 399u: goto L_08819AE4;
    case 400u: goto L_08819AF0;
    case 401u: goto L_08819AF4;
    case 402u: goto L_08819B00;
    case 403u: goto L_08819B30;
    case 404u: goto L_08819BA0;
    case 405u: goto L_08819BA8;
    case 406u: goto L_08819BB0;
    case 407u: goto L_08819BB8;
    case 408u: goto L_08819BC4;
    case 409u: goto L_08819BCC;
    case 410u: goto L_08819BD4;
    case 411u: goto L_08819BDC;
    case 412u: goto L_08819BE0;
    case 413u: goto L_08819BF8;
    case 414u: goto L_08819C00;
    case 415u: goto L_08819C08;
    case 416u: goto L_08819C20;
    case 417u: goto L_08819C28;
    case 418u: goto L_08819C30;
    case 419u: goto L_08819C44;
    case 420u: goto L_08819C5C;
    case 421u: goto L_08819C6C;
    case 422u: goto L_08819C84;
    case 423u: goto L_08819C90;
    case 424u: goto L_08819C98;
    case 425u: goto L_08819CA4;
    case 426u: goto L_08819CBC;
    case 427u: goto L_08819CC8;
    case 428u: goto L_08819CD4;
    case 429u: goto L_08819CD8;
    case 430u: goto L_08819CE4;
    case 431u: goto L_08819D14;
    case 432u: goto L_08819D40;
    case 433u: goto L_08819D48;
    case 434u: goto L_08819D54;
    case 435u: goto L_08819D60;
    case 436u: goto L_08819D68;
    case 437u: goto L_08819D70;
    case 438u: goto L_08819D7C;
    case 439u: goto L_08819D88;
    case 440u: goto L_08819D90;
    case 441u: goto L_08819D98;
    case 442u: goto L_08819DA0;
    case 443u: goto L_08819DA4;
    case 444u: goto L_08819DAC;
    case 445u: goto L_08819DB4;
    case 446u: goto L_08819DBC;
    case 447u: goto L_08819DC4;
    case 448u: goto L_08819DCC;
    case 449u: goto L_08819DD0;
    case 450u: goto L_08819DD8;
    case 451u: goto L_08819DE0;
    case 452u: goto L_08819DE4;
    case 453u: goto L_08819DEC;
    case 454u: goto L_08819E04;
    case 455u: goto L_08819E0C;
    case 456u: goto L_08819E10;
    case 457u: goto L_08819E18;
    case 458u: goto L_08819E1C;
    case 459u: goto L_08819E20;
    case 460u: goto L_08819E28;
    case 461u: goto L_08819E44;
    case 462u: goto L_08819E7C;
    case 463u: goto L_08819E90;
    case 464u: goto L_08819EA4;
    case 465u: goto L_08819EB0;
    case 466u: goto L_08819EBC;
    case 467u: goto L_08819EC4;
    case 468u: goto L_08819ED0;
    case 469u: goto L_08819EDC;
    case 470u: goto L_08819EE4;
    case 471u: goto L_08819EF0;
    case 472u: goto L_08819EF8;
    case 473u: goto L_08819F00;
    case 474u: goto L_08819F08;
    case 475u: goto L_08819F14;
    case 476u: goto L_08819F2C;
    case 477u: goto L_08819F38;
    case 478u: goto L_08819F40;
    case 479u: goto L_08819F48;
    case 480u: goto L_08819F54;
    case 481u: goto L_08819F5C;
    case 482u: goto L_08819F64;
    case 483u: goto L_08819F70;
    case 484u: goto L_08819F78;
    case 485u: goto L_08819F80;
    case 486u: goto L_08819F88;
    case 487u: goto L_08819F90;
    case 488u: goto L_08819F98;
    case 489u: goto L_08819F9C;
    case 490u: goto L_08819FA4;
    case 491u: goto L_08819FC4;
    case 492u: goto L_08819FD4;
    case 493u: goto L_08819FE0;
    case 494u: goto L_08819FE4;
    case 495u: goto L_08819FEC;
    case 496u: goto L_0881A070;
    case 497u: goto L_0881A07C;
    case 498u: goto L_0881A084;
    case 499u: goto L_0881A098;
    case 500u: goto L_0881A0A4;
    case 501u: goto L_0881A0AC;
    case 502u: goto L_0881A0C0;
    case 503u: goto L_0881A0D8;
    case 504u: goto L_0881A0E4;
    case 505u: goto L_0881A0EC;
    case 506u: goto L_0881A0F8;
    case 507u: goto L_0881A108;
    case 508u: goto L_0881A110;
    case 509u: goto L_0881A12C;
    case 510u: goto L_0881A144;
    case 511u: goto L_0881A14C;
    case 512u: goto L_0881A160;
    case 513u: goto L_0881A16C;
    case 514u: goto L_0881A180;
    case 515u: goto L_0881A198;
    case 516u: goto L_0881A1B0;
    case 517u: goto L_0881A1B8;
    case 518u: goto L_0881A1E4;
    case 519u: goto L_0881A208;
    case 520u: goto L_0881A218;
    case 521u: goto L_0881A21C;
    case 522u: goto L_0881A228;
    case 523u: goto L_0881A238;
    case 524u: goto L_0881A248;
    case 525u: goto L_0881A258;
    case 526u: goto L_0881A260;
    case 527u: goto L_0881A264;
    case 528u: goto L_0881A270;
    case 529u: goto L_0881A278;
    case 530u: goto L_0881A284;
    case 531u: goto L_0881A290;
    case 532u: goto L_0881A2A0;
    case 533u: goto L_0881A2B0;
    case 534u: goto L_0881A2BC;
    case 535u: goto L_0881A2D4;
    case 536u: goto L_0881A2D8;
    case 537u: goto L_0881A2F0;
    case 538u: goto L_0881A308;
    case 539u: goto L_0881A30C;
    case 540u: goto L_0881A31C;
    case 541u: goto L_0881A320;
    case 542u: goto L_0881A328;
    case 543u: goto L_0881A334;
    case 544u: goto L_0881A348;
    case 545u: goto L_0881A34C;
    case 546u: goto L_0881A354;
    case 547u: goto L_0881A36C;
    case 548u: goto L_0881A370;
    case 549u: goto L_0881A380;
    case 550u: goto L_0881A388;
    case 551u: goto L_0881A390;
    case 552u: goto L_0881A3A4;
    case 553u: goto L_0881A3A8;
    case 554u: goto L_0881A3B0;
    case 555u: goto L_0881A3C8;
    case 556u: goto L_0881A3CC;
    case 557u: goto L_0881A3DC;
    case 558u: goto L_0881A3E4;
    case 559u: goto L_0881A3EC;
    case 560u: goto L_0881A3F4;
    case 561u: goto L_0881A408;
    case 562u: goto L_0881A410;
    case 563u: goto L_0881A418;
    case 564u: goto L_0881A420;
    case 565u: goto L_0881A434;
    case 566u: goto L_0881A444;
    case 567u: goto L_0881A44C;
    case 568u: goto L_0881A450;
    case 569u: goto L_0881A458;
    case 570u: goto L_0881A468;
    case 571u: goto L_0881A47C;
    case 572u: goto L_0881A480;
    case 573u: goto L_0881A48C;
    case 574u: goto L_0881A490;
    case 575u: goto L_0881A498;
    case 576u: goto L_0881A4AC;
    case 577u: goto L_0881A4C0;
    case 578u: goto L_0881A4C4;
    case 579u: goto L_0881A4E4;
    case 580u: goto L_0881A51C;
    case 581u: goto L_0881A528;
    case 582u: goto L_0881A534;
    case 583u: goto L_0881A53C;
    case 584u: goto L_0881A540;
    case 585u: goto L_0881A548;
    case 586u: goto L_0881A54C;
    case 587u: goto L_0881A554;
    case 588u: goto L_0881A55C;
    case 589u: goto L_0881A56C;
    case 590u: goto L_0881A578;
    case 591u: goto L_0881A580;
    case 592u: goto L_0881A588;
    case 593u: goto L_0881A590;
    case 594u: goto L_0881A59C;
    case 595u: goto L_0881A5A8;
    case 596u: goto L_0881A5B4;
    case 597u: goto L_0881A5C0;
    case 598u: goto L_0881A5CC;
    case 599u: goto L_0881A5D8;
    case 600u: goto L_0881A5E4;
    case 601u: goto L_0881A5F0;
    case 602u: goto L_0881A5FC;
    case 603u: goto L_0881A608;
    case 604u: goto L_0881A614;
    case 605u: goto L_0881A620;
    case 606u: goto L_0881A62C;
    case 607u: goto L_0881A638;
    case 608u: goto L_0881A644;
    case 609u: goto L_0881A64C;
    case 610u: goto L_0881A658;
    case 611u: goto L_0881A664;
    case 612u: goto L_0881A670;
    case 613u: goto L_0881A67C;
    case 614u: goto L_0881A688;
    case 615u: goto L_0881A694;
    case 616u: goto L_0881A6A0;
    case 617u: goto L_0881A6AC;
    case 618u: goto L_0881A6B8;
    case 619u: goto L_0881A6C4;
    case 620u: goto L_0881A6D0;
    case 621u: goto L_0881A6D8;
    case 622u: goto L_0881A6E8;
    case 623u: goto L_0881A700;
    case 624u: goto L_0881A70C;
    case 625u: goto L_0881A718;
    case 626u: goto L_0881A720;
    case 627u: goto L_0881A72C;
    case 628u: goto L_0881A738;
    case 629u: goto L_0881A744;
    case 630u: goto L_0881A74C;
    case 631u: goto L_0881A758;
    case 632u: goto L_0881A764;
    case 633u: goto L_0881A770;
    case 634u: goto L_0881A778;
    case 635u: goto L_0881A784;
    case 636u: goto L_0881A78C;
    case 637u: goto L_0881A798;
    case 638u: goto L_0881A7A0;
    case 639u: goto L_0881A7A4;
    case 640u: goto L_0881A7AC;
    case 641u: goto L_0881A7BC;
    case 642u: goto L_0881A7F4;
    case 643u: goto L_0881A800;
    case 644u: goto L_0881A80C;
    case 645u: goto L_0881A814;
    case 646u: goto L_0881A818;
    case 647u: goto L_0881A820;
    case 648u: goto L_0881A824;
    case 649u: goto L_0881A830;
    case 650u: goto L_0881A838;
    case 651u: goto L_0881A848;
    case 652u: goto L_0881A854;
    case 653u: goto L_0881A85C;
    case 654u: goto L_0881A864;
    case 655u: goto L_0881A86C;
    case 656u: goto L_0881A87C;
    case 657u: goto L_0881A88C;
    case 658u: goto L_0881A89C;
    case 659u: goto L_0881A8AC;
    case 660u: goto L_0881A8BC;
    case 661u: goto L_0881A8CC;
    case 662u: goto L_0881A8DC;
    case 663u: goto L_0881A8EC;
    case 664u: goto L_0881A8FC;
    case 665u: goto L_0881A90C;
    case 666u: goto L_0881A91C;
    case 667u: goto L_0881A92C;
    case 668u: goto L_0881A93C;
    case 669u: goto L_0881A94C;
    case 670u: goto L_0881A95C;
    case 671u: goto L_0881A964;
    case 672u: goto L_0881A974;
    case 673u: goto L_0881A984;
    case 674u: goto L_0881A994;
    case 675u: goto L_0881A9A4;
    case 676u: goto L_0881A9B4;
    case 677u: goto L_0881A9C4;
    case 678u: goto L_0881A9D4;
    case 679u: goto L_0881A9E4;
    case 680u: goto L_0881A9F4;
    case 681u: goto L_0881AA04;
    case 682u: goto L_0881AA14;
    case 683u: goto L_0881AA1C;
    case 684u: goto L_0881AA28;
    case 685u: goto L_0881AA3C;
    case 686u: goto L_0881AA44;
    case 687u: goto L_0881AA4C;
    case 688u: goto L_0881AA5C;
    case 689u: goto L_0881AA6C;
    case 690u: goto L_0881AA74;
    case 691u: goto L_0881AA80;
    case 692u: goto L_0881AA90;
    case 693u: goto L_0881AAA0;
    case 694u: goto L_0881AAA8;
    case 695u: goto L_0881AAB8;
    case 696u: goto L_0881AAC8;
    case 697u: goto L_0881AAD8;
    case 698u: goto L_0881AAE0;
    case 699u: goto L_0881AAEC;
    case 700u: goto L_0881AAF4;
    case 701u: goto L_0881AAFC;
    case 702u: goto L_0881AB0C;
    case 703u: goto L_0881AB14;
    case 704u: goto L_0881AB1C;
    case 705u: goto L_0881AB28;
    case 706u: goto L_0881AB38;
    case 707u: goto L_0881AB74;
    case 708u: goto L_0881AB80;
    case 709u: goto L_0881AB8C;
    case 710u: goto L_0881AB94;
    case 711u: goto L_0881ABA4;
    case 712u: goto L_0881ABB0;
    case 713u: goto L_0881ABB8;
    case 714u: goto L_0881ABC0;
    case 715u: goto L_0881ABC8;
    case 716u: goto L_0881ABD8;
    case 717u: goto L_0881ABE8;
    case 718u: goto L_0881ABF8;
    case 719u: goto L_0881AC08;
    case 720u: goto L_0881AC18;
    case 721u: goto L_0881AC28;
    case 722u: goto L_0881AC38;
    case 723u: goto L_0881AC48;
    case 724u: goto L_0881AC58;
    case 725u: goto L_0881AC68;
    case 726u: goto L_0881AC78;
    case 727u: goto L_0881AC88;
    case 728u: goto L_0881AC98;
    case 729u: goto L_0881ACA8;
    case 730u: goto L_0881ACB8;
    case 731u: goto L_0881ACC8;
    case 732u: goto L_0881ACD8;
    case 733u: goto L_0881ACE8;
    case 734u: goto L_0881ACF8;
    case 735u: goto L_0881AD08;
    case 736u: goto L_0881AD18;
    case 737u: goto L_0881AD28;
    case 738u: goto L_0881AD38;
    case 739u: goto L_0881AD40;
    case 740u: goto L_0881AD50;
    case 741u: goto L_0881AD5C;
    case 742u: goto L_0881AD64;
    case 743u: goto L_0881AD68;
    case 744u: goto L_0881AD70;
    case 745u: goto L_0881AD80;
    case 746u: goto L_0881AD84;
    case 747u: goto L_0881AD90;
    case 748u: goto L_0881AD98;
    case 749u: goto L_0881ADA8;
    case 750u: goto L_0881ADB0;
    case 751u: goto L_0881ADC0;
    case 752u: goto L_0881ADD0;
    case 753u: goto L_0881ADE0;
    case 754u: goto L_0881ADF0;
    case 755u: goto L_0881AE04;
    case 756u: goto L_0881AE3C;
    case 757u: goto L_0881AE64;
    case 758u: goto L_0881AE74;
    case 759u: goto L_0881AE7C;
    case 760u: goto L_0881AE9C;
    case 761u: goto L_0881AEA4;
    case 762u: goto L_0881AEB4;
    case 763u: goto L_0881AECC;
    case 764u: goto L_0881AED4;
    case 765u: goto L_0881AEDC;
    case 766u: goto L_0881AEE0;
    case 767u: goto L_0881AEE8;
    case 768u: goto L_0881AEF8;
    case 769u: goto L_0881AF00;
    case 770u: goto L_0881AF10;
    case 771u: goto L_0881AF1C;
    case 772u: goto L_0881AF28;
    case 773u: goto L_0881AF34;
    case 774u: goto L_0881AF3C;
    case 775u: goto L_0881AF4C;
    case 776u: goto L_0881AF54;
    case 777u: goto L_0881AF64;
    case 778u: goto L_0881AF6C;
    case 779u: goto L_0881AF7C;
    case 780u: goto L_0881AF88;
    case 781u: goto L_0881AF94;
    case 782u: goto L_0881AFA0;
    case 783u: goto L_0881AFA8;
    case 784u: goto L_0881AFC4;
    case 785u: goto L_0881AFCC;
    case 786u: goto L_0881AFDC;
    case 787u: goto L_0881AFEC;
    case 788u: goto L_0881AFF8;
    case 789u: goto L_0881B000;
    case 790u: goto L_0881B004;
    case 791u: goto L_0881B010;
    case 792u: goto L_0881B018;
    case 793u: goto L_0881B024;
    case 794u: goto L_0881B034;
    case 795u: goto L_0881B03C;
    case 796u: goto L_0881B048;
    case 797u: goto L_0881B058;
    case 798u: goto L_0881B068;
    case 799u: goto L_0881B074;
    case 800u: goto L_0881B07C;
    case 801u: goto L_0881B08C;
    case 802u: goto L_0881B098;
    case 803u: goto L_0881B0A4;
    case 804u: goto L_0881B0B0;
    case 805u: goto L_0881B0BC;
    case 806u: goto L_0881B0CC;
    case 807u: goto L_0881B0D4;
    case 808u: goto L_0881B0E0;
    case 809u: goto L_0881B0E8;
    case 810u: goto L_0881B0F0;
    case 811u: goto L_0881B0FC;
    case 812u: goto L_0881B108;
    case 813u: goto L_0881B114;
    case 814u: goto L_0881B120;
    case 815u: goto L_0881B130;
    case 816u: goto L_0881B138;
    case 817u: goto L_0881B144;
    case 818u: goto L_0881B154;
    case 819u: goto L_0881B160;
    case 820u: goto L_0881B16C;
    case 821u: goto L_0881B180;
    case 822u: goto L_0881B18C;
    case 823u: goto L_0881B194;
    case 824u: goto L_0881B1A4;
    case 825u: goto L_0881B1AC;
    case 826u: goto L_0881B1B4;
    case 827u: goto L_0881B1D0;
    case 828u: goto L_0881B1EC;
    case 829u: goto L_0881B1F8;
    case 830u: goto L_0881B200;
    case 831u: goto L_0881B208;
    case 832u: goto L_0881B224;
    case 833u: goto L_0881B240;
    case 834u: goto L_0881B248;
    case 835u: goto L_0881B254;
    case 836u: goto L_0881B25C;
    case 837u: goto L_0881B260;
    case 838u: goto L_0881B268;
    case 839u: goto L_0881B274;
    case 840u: goto L_0881B27C;
    case 841u: goto L_0881B298;
    case 842u: goto L_0881B2A0;
    case 843u: goto L_0881B2B8;
    case 844u: goto L_0881B2C4;
    case 845u: goto L_0881B2CC;
    case 846u: goto L_0881B2D4;
    case 847u: goto L_0881B2E8;
    case 848u: goto L_0881B2EC;
    case 849u: goto L_0881B2F8;
    case 850u: goto L_0881B304;
    case 851u: goto L_0881B314;
    case 852u: goto L_0881B318;
    case 853u: goto L_0881B31C;
    case 854u: goto L_0881B338;
    case 855u: goto L_0881B340;
    case 856u: goto L_0881B364;
    case 857u: goto L_0881B3B4;
    case 858u: goto L_0881B3D4;
    case 859u: goto L_0881B3E4;
    case 860u: goto L_0881B3FC;
    case 861u: goto L_0881B42C;
    case 862u: goto L_0881B444;
    case 863u: goto L_0881B460;
    case 864u: goto L_0881B478;
    case 865u: goto L_0881B50C;
    case 866u: goto L_0881B518;
    case 867u: goto L_0881B52C;
    case 868u: goto L_0881B534;
    case 869u: goto L_0881B548;
    case 870u: goto L_0881B554;
    case 871u: goto L_0881B55C;
    case 872u: goto L_0881B564;
    case 873u: goto L_0881B574;
    case 874u: goto L_0881B57C;
    case 875u: goto L_0881B580;
    case 876u: goto L_0881B588;
    case 877u: goto L_0881B590;
    case 878u: goto L_0881B598;
    case 879u: goto L_0881B59C;
    case 880u: goto L_0881B5A8;
    case 881u: goto L_0881B5B0;
    case 882u: goto L_0881B5B8;
    case 883u: goto L_0881B5CC;
    case 884u: goto L_0881B5D4;
    case 885u: goto L_0881B5DC;
    case 886u: goto L_0881B5F0;
    case 887u: goto L_0881B5F4;
    case 888u: goto L_0881B610;
    case 889u: goto L_0881B61C;
    case 890u: goto L_0881B624;
    case 891u: goto L_0881B644;
    case 892u: goto L_0881B654;
    case 893u: goto L_0881B66C;
    case 894u: goto L_0881B67C;
    case 895u: goto L_0881B688;
    case 896u: goto L_0881B69C;
    case 897u: goto L_0881B6A8;
    case 898u: goto L_0881B6B4;
    case 899u: goto L_0881B6E0;
    case 900u: goto L_0881B6EC;
    case 901u: goto L_0881B718;
    case 902u: goto L_0881B730;
    case 903u: goto L_0881B738;
    case 904u: goto L_0881B754;
    case 905u: goto L_0881B76C;
    case 906u: goto L_0881B7A8;
    case 907u: goto L_0881B7EC;
    case 908u: goto L_0881B7F8;
    case 909u: goto L_0881B804;
    case 910u: goto L_0881B80C;
    case 911u: goto L_0881B84C;
    case 912u: goto L_0881B860;
    case 913u: goto L_0881B890;
    case 914u: goto L_0881B898;
    case 915u: goto L_0881B8B0;
    case 916u: goto L_0881B8C8;
    case 917u: goto L_0881B8F0;
    case 918u: goto L_0881B8F4;
    case 919u: goto L_0881B8FC;
    case 920u: goto L_0881B90C;
    case 921u: goto L_0881B914;
    case 922u: goto L_0881B934;
    case 923u: goto L_0881B93C;
    case 924u: goto L_0881B950;
    case 925u: goto L_0881B958;
    case 926u: goto L_0881B968;
    case 927u: goto L_0881B974;
    case 928u: goto L_0881B984;
    case 929u: goto L_0881B9AC;
    case 930u: goto L_0881B9B4;
    case 931u: goto L_0881B9C4;
    case 932u: goto L_0881B9CC;
    case 933u: goto L_0881B9F0;
    case 934u: goto L_0881B9F8;
    case 935u: goto L_0881BA08;
    case 936u: goto L_0881BA10;
    case 937u: goto L_0881BA2C;
    case 938u: goto L_0881BA34;
    case 939u: goto L_0881BA3C;
    case 940u: goto L_0881BA4C;
    case 941u: goto L_0881BA70;
    case 942u: goto L_0881BA78;
    case 943u: goto L_0881BA88;
    case 944u: goto L_0881BA90;
    case 945u: goto L_0881BA9C;
    case 946u: goto L_0881BAA4;
    case 947u: goto L_0881BAB4;
    case 948u: goto L_0881BABC;
    case 949u: goto L_0881BACC;
    case 950u: goto L_0881BAD4;
    case 951u: goto L_0881BAE4;
    case 952u: goto L_0881BAEC;
    case 953u: goto L_0881BAF0;
    case 954u: goto L_0881BAF8;
    case 955u: goto L_0881BB10;
    case 956u: goto L_0881BB1C;
    case 957u: goto L_0881BB28;
    case 958u: goto L_0881BB30;
    case 959u: goto L_0881BB3C;
    case 960u: goto L_0881BB44;
    case 961u: goto L_0881BB4C;
    case 962u: goto L_0881BB50;
    case 963u: goto L_0881BB60;
    case 964u: goto L_0881BB74;
    case 965u: goto L_0881BB88;
    case 966u: goto L_0881BB9C;
    case 967u: goto L_0881BBCC;
    case 968u: goto L_0881BBD4;
    case 969u: goto L_0881BBF0;
    case 970u: goto L_0881BBF8;
    case 971u: goto L_0881BC08;
    case 972u: goto L_0881BC10;
    case 973u: goto L_0881BC1C;
    case 974u: goto L_0881BC48;
    case 975u: goto L_0881BC50;
    case 976u: goto L_0881BC60;
    case 977u: goto L_0881BC68;
    case 978u: goto L_0881BC8C;
    case 979u: goto L_0881BC94;
    case 980u: goto L_0881BCA4;
    case 981u: goto L_0881BCAC;
    case 982u: goto L_0881BCD0;
    case 983u: goto L_0881BCD4;
    case 984u: goto L_0881BCDC;
    case 985u: goto L_0881BCEC;
    case 986u: goto L_0881BD14;
    case 987u: goto L_0881BD28;
    case 988u: goto L_0881BD30;
    case 989u: goto L_0881BD38;
    case 990u: goto L_0881BD44;
    case 991u: goto L_0881BD4C;
    case 992u: goto L_0881BD58;
    case 993u: goto L_0881BD70;
    case 994u: goto L_0881BD78;
    case 995u: goto L_0881BD80;
    case 996u: goto L_0881BD88;
    case 997u: goto L_0881BD94;
    case 998u: goto L_0881BDAC;
    case 999u: goto L_0881BDB4;
    case 1000u: goto L_0881BDBC;
    case 1001u: goto L_0881BDC4;
    case 1002u: goto L_0881BDCC;
    case 1003u: goto L_0881BDD8;
    case 1004u: goto L_0881BDF0;
    case 1005u: goto L_0881BDF8;
    case 1006u: goto L_0881BE00;
    case 1007u: goto L_0881BE0C;
    case 1008u: goto L_0881BE24;
    case 1009u: goto L_0881BE28;
    case 1010u: goto L_0881BE30;
    case 1011u: goto L_0881BE48;
    case 1012u: goto L_0881BE50;
    case 1013u: goto L_0881BE58;
    case 1014u: goto L_0881BE64;
    case 1015u: goto L_0881BE7C;
    case 1016u: goto L_0881BE84;
    case 1017u: goto L_0881BE94;
    case 1018u: goto L_0881BEC4;
    case 1019u: goto L_0881BF08;
    case 1020u: goto L_0881BF18;
    case 1021u: goto L_0881BF20;
    case 1022u: goto L_0881BF28;
    case 1023u: goto L_0881BF30;
    case 1024u: goto L_0881BF40;
    case 1025u: goto L_0881BF48;
    case 1026u: goto L_0881BF54;
    case 1027u: goto L_0881BF58;
    case 1028u: goto L_0881BF60;
    case 1029u: goto L_0881BF6C;
    case 1030u: goto L_0881BF78;
    case 1031u: goto L_0881BF88;
    case 1032u: goto L_0881BF90;
    case 1033u: goto L_0881BF9C;
    case 1034u: goto L_0881BFA8;
    case 1035u: goto L_0881BFB0;
    case 1036u: goto L_0881BFB4;
    case 1037u: goto L_0881BFC0;
    case 1038u: goto L_0881BFD4;
    case 1039u: goto L_0881BFDC;
    case 1040u: goto L_0881BFE8;
    case 1041u: goto L_0881BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08818000:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881800Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26660));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881800Cu) goto L_0881800C;
    return;
L_0881800C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1632)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1280));
    ctx.gpr[31] = (0x08818028u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08818028u) goto L_08818028;
    return;
L_08818028:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_0881805C;
      }
      goto L_08818030;
    }
L_08818030:
    ctx.gpr[31] = (0x08818038u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26724));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08818038u) goto L_08818038;
    return;
L_08818038:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2219u << 16u);
      if (branch_taken) {
          goto L_0881805C;
      }
      goto L_08818050;
    }
L_08818050:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881805Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26668));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x0881805Cu) goto L_0881805C;
    return;
L_0881805C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818070:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08818098u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-1632)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08818098u) goto L_08818098;
    return;
L_08818098:
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088180A8:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1360));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088180CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08818198;
      }
      goto L_08818114;
    }
L_08818114:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.gpr[21] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.gpr[19] = (0u | 3u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1360));
    goto L_08818138;
L_08818138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08818164;
    }
    goto L_08818144;
L_08818144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08818164;
    }
    goto L_08818158;
L_08818158:
    ctx.gpr[31] = (0x08818160u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 419u, 0x0881259Cu>(ctx, &aot_mem) && ctx.pc == 0x08818160u) goto L_08818160;
    return;
L_08818160:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08818164;
L_08818164:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08818138;
      }
      goto L_08818174;
    }
L_08818174:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08818198;
      }
      goto L_08818180;
    }
L_08818180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9628));
    ctx.gpr[31] = (0x08818198u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 174u, 0x089B100Cu>(ctx, &aot_mem) && ctx.pc == 0x08818198u) goto L_08818198;
    return;
L_08818198:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088181C0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088181C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088181D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[18]);
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881821Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26732));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 821u, 0x0880B8BCu>(ctx, &aot_mem) && ctx.pc == 0x0881821Cu) goto L_0881821C;
    return;
L_0881821C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_0881849C;
      }
      goto L_08818228;
    }
L_08818228:
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26744));
    ctx.gpr[19] = (2219u << 16u);
    ctx.gpr[30] = (2219u << 16u);
    ctx.gpr[22] = (2219u << 16u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[21] = (0u | 64u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(26776));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(26756));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(26764));
    goto L_0881825C;
L_0881825C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    goto L_08818260;
L_08818260:
    ctx.gpr[31] = (0x08818268u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08818268u) goto L_08818268;
    return;
L_08818268:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_08818310;
      }
      goto L_08818270;
    }
L_08818270:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881828Cu);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0881828Cu) goto L_0881828C;
    return;
L_0881828C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08818298u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08818298u) goto L_08818298;
    return;
L_08818298:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088182C4;
      }
      goto L_088182A0;
    }
L_088182A0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088182ACu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x088182ACu) goto L_088182AC;
    return;
L_088182AC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088182B8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x088182B8u) goto L_088182B8;
    return;
L_088182B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
      if (branch_taken) {
          goto L_08818260;
      }
      goto L_088182C0;
    }
L_088182C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088182C4;
L_088182C4:
    ctx.gpr[31] = (0x088182CCu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088182CCu) goto L_088182CC;
    return;
L_088182CC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
        goto L_08818260;
    }
    goto L_088182D4;
L_088182D4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088182E0;
L_088182E0:
    ctx.gpr[31] = (0x088182E8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088182E8u) goto L_088182E8;
    return;
L_088182E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08818304;
      }
      goto L_088182F0;
    }
L_088182F0:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088182FCu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_088184D0;
L_088182FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088182E0;
      }
      goto L_08818304;
    }
L_08818304:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0881825C;
      }
      goto L_08818310;
    }
L_08818310:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26788));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26800));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.gpr[23] = (2219u << 16u);
    ctx.gpr[22] = (2219u << 16u);
    ctx.gpr[21] = (2219u << 16u);
    ctx.gpr[20] = (2219u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[30] = (0u | 22u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
    ctx.gpr[18] = (0u | 10u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(26816));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(26828));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(26848));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(26860));
    goto L_08818354;
L_08818354:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0881836Cu);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[19]);
    goto L_088180A8;
L_0881836C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 21u);
      if (branch_taken) {
          goto L_08818384;
      }
      goto L_08818374;
    }
L_08818374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 21u);
    goto L_08818384;
L_08818384:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088183BC;
      }
      goto L_0881838C;
    }
L_0881838C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x088183A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088183A0u) goto L_088183A0;
    return;
L_088183A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (0x088183B4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088183B4u) goto L_088183B4;
    return;
L_088183B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08818490;
      }
      goto L_088183BC;
    }
L_088183BC:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[30];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 23 ? 1u : 0u);
      if (branch_taken) {
          goto L_08818404;
      }
      goto L_088183C4;
    }
L_088183C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881848C;
      }
      goto L_088183D0;
    }
L_088183D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088183DCu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088183DCu) goto L_088183DC;
    return;
L_088183DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x088183F8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088183F8u) goto L_088183F8;
    return;
L_088183F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08818490;
      }
      goto L_08818400;
    }
L_08818400:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 23 ? 1u : 0u);
    goto L_08818404;
L_08818404:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08818490;
    }
    goto L_0881840C;
L_0881840C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881848C;
      }
      goto L_08818418;
    }
L_08818418:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(-22));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.hi);
    ctx.gpr[31] = (0x08818450u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08818450u) goto L_08818450;
    return;
L_08818450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[18]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.hi);
    ctx.gpr[31] = (0x08818488u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08818488u) goto L_08818488;
    return;
L_08818488:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    goto L_0881848C;
L_0881848C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08818490;
L_08818490:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08818354;
      }
      goto L_0881849C;
    }
L_0881849C:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088184D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[17] << 6u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[31] = (0x08818528u);
    ctx.gpr[20] = (ctx.gpr[6] + ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08818528u) goto L_08818528;
    return;
L_08818528:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08818538u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26880));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08818538u) goto L_08818538;
    return;
L_08818538:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08818600;
      }
      goto L_08818540;
    }
L_08818540:
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08818554u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    goto L_088180A8;
L_08818554:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[30] = (2219u << 16u);
      if (branch_taken) {
          goto L_08818564;
      }
      goto L_0881855C;
    }
L_0881855C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_08818564;
L_08818564:
    ctx.gpr[23] = (2219u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(26888));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(26896));
    ctx.gpr[21] = (2221u << 16u);
    goto L_08818580;
L_08818580:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08818584;
L_08818584:
    ctx.gpr[31] = (0x0881858Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881858Cu) goto L_0881858C;
    return;
L_0881858C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088185FC;
      }
      goto L_08818594;
    }
L_08818594:
    ctx.gpr[31] = (0x0881859Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0881859Cu) goto L_0881859C;
    return;
L_0881859C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088185A8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088185A8u) goto L_088185A8;
    return;
L_088185A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08818584;
      }
      goto L_088185B0;
    }
L_088185B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088185F4;
      }
      goto L_088185C4;
    }
L_088185C4:
    ctx.gpr[31] = (0x088185CCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x088185CCu) goto L_088185CC;
    return;
L_088185CC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088185D8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088185D8u) goto L_088185D8;
    return;
L_088185D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-1628)));
    ctx.gpr[31] = (0x088185E4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088185E4u) goto L_088185E4;
    return;
L_088185E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088185F4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08818630;
L_088185F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08818580;
      }
      goto L_088185FC;
    }
L_088185FC:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    goto L_08818600;
L_08818600:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818630:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x08818680u);
    ctx.gpr[23] = (ctx.gpr[6] + ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08818680u) goto L_08818680;
    return;
L_08818680:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881868Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0881868Cu) goto L_0881868C;
    return;
L_0881868C:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881869Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26904));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881869Cu) goto L_0881869C;
    return;
L_0881869C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[21] = (2219u << 16u);
      if (branch_taken) {
          goto L_08818718;
      }
      goto L_088186A4;
    }
L_088186A4:
    ctx.gpr[20] = (2219u << 16u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(26912));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(26924));
    goto L_088186BC;
L_088186BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088186C0;
L_088186C0:
    ctx.gpr[31] = (0x088186C8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088186C8u) goto L_088186C8;
    return;
L_088186C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08818714;
      }
      goto L_088186D0;
    }
L_088186D0:
    ctx.gpr[31] = (0x088186D8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x088186D8u) goto L_088186D8;
    return;
L_088186D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088186E4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088186E4u) goto L_088186E4;
    return;
L_088186E4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088186C0;
      }
      goto L_088186EC;
    }
L_088186EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0881870C;
      }
      goto L_088186F8;
    }
L_088186F8:
    ctx.gpr[31] = (0x08818700u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08818700u) goto L_08818700;
    return;
L_08818700:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881870Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0881870Cu) goto L_0881870C;
    return;
L_0881870C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088186BC;
      }
      goto L_08818714;
    }
L_08818714:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    goto L_08818718;
L_08818718:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818744:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(172));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08818798;
      }
      goto L_08818750;
    }
L_08818750:
    ctx.gpr[5] = (0u | 0u);
    goto L_08818754;
L_08818754:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_08818764;
L_08818764:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_0881877C;
    }
    goto L_08818770;
L_08818770:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_0881877C;
L_0881877C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[8]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08818764;
      }
      goto L_08818788;
    }
L_08818788:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08818754;
      }
      goto L_08818798;
    }
L_08818798:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088187A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088187A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-432));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1596)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(312)));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1652)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[31]);
    ctx.gpr[31] = (0x08818804u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26932));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08818804u) goto L_08818804;
    return;
L_08818804:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19864));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08818850u);
    ctx.gpr[16] = (ctx.gpr[6] + static_cast<std::uint32_t>(19848));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 615u, 0x0880AB14u>(ctx, &aot_mem) && ctx.pc == 0x08818850u) goto L_08818850;
    return;
L_08818850:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(372), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08818AA4;
      }
      goto L_08818860;
    }
L_08818860:
    ctx.gpr[4] = (2219u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27004));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27012));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[5]);
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26948));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[4]);
    ctx.gpr[4] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26972));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26984));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(26996));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[4]);
    ctx.gpr[30] = (2219u << 16u);
    ctx.gpr[23] = (2219u << 16u);
    ctx.gpr[22] = (2219u << 16u);
    ctx.gpr[21] = (2219u << 16u);
    ctx.gpr[20] = (2219u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(212));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[6]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(27024));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(27040));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(26880));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(27052));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(26904));
    goto L_088188EC;
L_088188EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    goto L_088188F0;
L_088188F0:
    ctx.gpr[31] = (0x088188F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088188F8u) goto L_088188F8;
    return;
L_088188F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_08818AA4;
      }
      goto L_08818900;
    }
L_08818900:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881890Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0881890Cu) goto L_0881890C;
    return;
L_0881890C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[31] = (0x08818918u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08818918u) goto L_08818918;
    return;
L_08818918:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
        goto L_08818934;
    }
    goto L_08818920;
L_08818920:
    ctx.gpr[31] = (0x08818928u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 656u, 0x0880AD80u>(ctx, &aot_mem) && ctx.pc == 0x08818928u) goto L_08818928;
    return;
L_08818928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-464)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088188EC;
      }
      goto L_08818934;
    }
L_08818934:
    ctx.gpr[31] = (0x0881893Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881893Cu) goto L_0881893C;
    return;
L_0881893C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
        goto L_08818958;
    }
    goto L_08818944;
L_08818944:
    ctx.gpr[31] = (0x0881894Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 656u, 0x0880AD80u>(ctx, &aot_mem) && ctx.pc == 0x0881894Cu) goto L_0881894C;
    return;
L_0881894C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-464)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088188EC;
      }
      goto L_08818958;
    }
L_08818958:
    ctx.gpr[31] = (0x08818960u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08818960u) goto L_08818960;
    return;
L_08818960:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
        goto L_0881897C;
    }
    goto L_08818968;
L_08818968:
    ctx.gpr[31] = (0x08818970u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 656u, 0x0880AD80u>(ctx, &aot_mem) && ctx.pc == 0x08818970u) goto L_08818970;
    return;
L_08818970:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-464)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088188EC;
      }
      goto L_0881897C;
    }
L_0881897C:
    ctx.gpr[31] = (0x08818984u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08818984u) goto L_08818984;
    return;
L_08818984:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
        goto L_088188F0;
    }
    goto L_0881898C;
L_0881898C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_088189A4;
L_088189A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    goto L_088189A8;
L_088189A8:
    ctx.gpr[31] = (0x088189B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088189B0u) goto L_088189B0;
    return;
L_088189B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08818A94;
      }
      goto L_088189B8;
    }
L_088189B8:
    ctx.gpr[31] = (0x088189C0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x088189C0u) goto L_088189C0;
    return;
L_088189C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[31] = (0x088189CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088189CCu) goto L_088189CC;
    return;
L_088189CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_088189EC;
      }
      goto L_088189D4;
    }
L_088189D4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088189E0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x088189E0u) goto L_088189E0;
    return;
L_088189E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
      if (branch_taken) {
          goto L_088189A8;
      }
      goto L_088189E8;
    }
L_088189E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088189EC;
L_088189EC:
    ctx.gpr[31] = (0x088189F4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x088189F4u) goto L_088189F4;
    return;
L_088189F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08818A14;
      }
      goto L_088189FC;
    }
L_088189FC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08818A08u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08818A08u) goto L_08818A08;
    return;
L_08818A08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
      if (branch_taken) {
          goto L_088189A8;
      }
      goto L_08818A10;
    }
L_08818A10:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08818A14;
L_08818A14:
    ctx.gpr[31] = (0x08818A1Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08818A1Cu) goto L_08818A1C;
    return;
L_08818A1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08818A34;
      }
      goto L_08818A24;
    }
L_08818A24:
    ctx.gpr[31] = (0x08818A2Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 656u, 0x0880AD80u>(ctx, &aot_mem) && ctx.pc == 0x08818A2Cu) goto L_08818A2C;
    return;
L_08818A2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088189A4;
      }
      goto L_08818A34;
    }
L_08818A34:
    ctx.gpr[31] = (0x08818A3Cu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08818A3Cu) goto L_08818A3C;
    return;
L_08818A3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08818A54;
      }
      goto L_08818A44;
    }
L_08818A44:
    ctx.gpr[31] = (0x08818A4Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 656u, 0x0880AD80u>(ctx, &aot_mem) && ctx.pc == 0x08818A4Cu) goto L_08818A4C;
    return;
L_08818A4C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088189A4;
      }
      goto L_08818A54;
    }
L_08818A54:
    ctx.gpr[31] = (0x08818A5Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08818A5Cu) goto L_08818A5C;
    return;
L_08818A5C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08818A74;
      }
      goto L_08818A64;
    }
L_08818A64:
    ctx.gpr[31] = (0x08818A6Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 656u, 0x0880AD80u>(ctx, &aot_mem) && ctx.pc == 0x08818A6Cu) goto L_08818A6C;
    return;
L_08818A6C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088189A4;
      }
      goto L_08818A74;
    }
L_08818A74:
    ctx.gpr[31] = (0x08818A7Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08818A7Cu) goto L_08818A7C;
    return;
L_08818A7C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
        goto L_088189A8;
    }
    goto L_08818A84;
L_08818A84:
    ctx.gpr[31] = (0x08818A8Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 656u, 0x0880AD80u>(ctx, &aot_mem) && ctx.pc == 0x08818A8Cu) goto L_08818A8C;
    return;
L_08818A8C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088189A4;
      }
      goto L_08818A94;
    }
L_08818A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088188EC;
      }
      goto L_08818AA4;
    }
L_08818AA4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[31] = (0x08818AB0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08818AB0u) goto L_08818AB0;
    return;
L_08818AB0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    ctx.gpr[31] = (0x08818ABCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08818ABCu) goto L_08818ABC;
    return;
L_08818ABC:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818AF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08818B38u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08818B38u) goto L_08818B38;
    return;
L_08818B38:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08818B44u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08818B44u) goto L_08818B44;
    return;
L_08818B44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08818B64u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 712u, 0x08817360u>(ctx, &aot_mem) && ctx.pc == 0x08818B64u) goto L_08818B64;
    return;
L_08818B64:
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
L_08818B84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(200));
      if (branch_taken) {
          goto L_08818BC0;
      }
      goto L_08818BB4;
    }
L_08818BB4:
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(328));
      if (branch_taken) {
          goto L_08818BC4;
      }
      goto L_08818BC0;
    }
L_08818BC0:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    goto L_08818BC4;
L_08818BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08818BEC;
      }
      goto L_08818BD0;
    }
L_08818BD0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08818C98;
      }
      goto L_08818BD8;
    }
L_08818BD8:
    ctx.gpr[31] = (0x08818BE0u);
    ctx.gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x08818BE0u) goto L_08818BE0;
    return;
L_08818BE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08818C98;
      }
      goto L_08818BEC;
    }
L_08818BEC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08818C08;
      }
      goto L_08818BF8;
    }
L_08818BF8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08818C98;
    }
    goto L_08818C00;
L_08818C00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08818C98;
      }
      goto L_08818C08;
    }
L_08818C08:
    ctx.gpr[31] = (0x08818C10u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 487u, 0x08809EA8u>(ctx, &aot_mem) && ctx.pc == 0x08818C10u) goto L_08818C10;
    return;
L_08818C10:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08818C98;
      }
      goto L_08818C18;
    }
L_08818C18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08818C48;
      }
      goto L_08818C28;
    }
L_08818C28:
    ctx.gpr[31] = (0x08818C30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x08818C30u) goto L_08818C30;
    return;
L_08818C30:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08818C7C;
      }
      goto L_08818C48;
    }
L_08818C48:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1636)));
    ctx.gpr[31] = (0x08818C58u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(328));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x08818C58u) goto L_08818C58;
    return;
L_08818C58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08818C7C;
      }
      goto L_08818C60;
    }
L_08818C60:
    ctx.gpr[31] = (0x08818C68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x08818C68u) goto L_08818C68;
    return;
L_08818C68:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08818C7C;
L_08818C7C:
    ctx.gpr[31] = (0x08818C84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 522u, 0x0880A0E8u>(ctx, &aot_mem) && ctx.pc == 0x08818C84u) goto L_08818C84;
    return;
L_08818C84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08818C98;
      }
      goto L_08818C98;
    }
L_08818C98:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08818CB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08818DFC;
      }
      goto L_08818CE4;
    }
L_08818CE4:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-460)));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_08818D10;
      }
      goto L_08818CF8;
    }
L_08818CF8:
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-460), ctx.gpr[4]);
    ctx.gpr[31] = (0x08818D08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08818E1C;
L_08818D08:
    ctx.gpr[31] = (0x08818D10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881B7A8;
L_08818D10:
    ctx.gpr[31] = (0x08818D18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08818B84;
L_08818D18:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
        goto L_08818D34;
    }
    goto L_08818D20;
L_08818D20:
    ctx.gpr[31] = (0x08818D28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08819D14;
L_08818D28:
    ctx.gpr[31] = (0x08818D30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08819E44;
L_08818D30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    goto L_08818D34;
L_08818D34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 33 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08818DB8;
      }
      goto L_08818D44;
    }
L_08818D44:
    ctx.gpr[31] = (0x08818D4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08819098;
L_08818D4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-460)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-460), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(320), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(324), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(472), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(476), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[31] = (0x08818DA8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(480), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08818DA8u) goto L_08818DA8;
    return;
L_08818DA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08818DD8;
      }
      goto L_08818DB0;
    }
L_08818DB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08818DFC;
      }
      goto L_08818DB8;
    }
L_08818DB8:
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
L_08818DD8:
    ctx.gpr[31] = (0x08818DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 859u, 0x0881F488u>(ctx, &aot_mem) && ctx.pc == 0x08818DE0u) goto L_08818DE0;
    return;
L_08818DE0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08818DFC;
      }
      goto L_08818DEC;
    }
L_08818DEC:
    ctx.gpr[31] = (0x08818DF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 467u, 0x088161F8u>(ctx, &aot_mem) && ctx.pc == 0x08818DF4u) goto L_08818DF4;
    return;
L_08818DF4:
    ctx.gpr[31] = (0x08818DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 395u, 0x08815DE0u>(ctx, &aot_mem) && ctx.pc == 0x08818DFCu) goto L_08818DFC;
    return;
L_08818DFC:
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
L_08818E1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08818E34u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 395u, 0x08815DE0u>(ctx, &aot_mem) && ctx.pc == 0x08818E34u) goto L_08818E34;
    return;
L_08818E34:
    ctx.gpr[31] = (0x08818E3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 351u, 0x088159E4u>(ctx, &aot_mem) && ctx.pc == 0x08818E3Cu) goto L_08818E3C;
    return;
L_08818E3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    ctx.gpr[31] = (0x08818E50u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 402u, 0x08815E54u>(ctx, &aot_mem) && ctx.pc == 0x08818E50u) goto L_08818E50;
    return;
L_08818E50:
    ctx.gpr[17] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08818E58;
L_08818E58:
    ctx.gpr[31] = (0x08818E60u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 760u, 0x088175ACu>(ctx, &aot_mem) && ctx.pc == 0x08818E60u) goto L_08818E60;
    return;
L_08818E60:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08818E58;
      }
      goto L_08818E70;
    }
L_08818E70:
    ctx.gpr[31] = (0x08818E78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 784u, 0x088177ACu>(ctx, &aot_mem) && ctx.pc == 0x08818E78u) goto L_08818E78;
    return;
L_08818E78:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08818E8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    ctx.gpr[20] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    ctx.gpr[31] = (0x08818EC8u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(264));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 334u, 0x089DE2ACu>(ctx, &aot_mem) && ctx.pc == 0x08818EC8u) goto L_08818EC8;
    return;
L_08818EC8:
    ctx.gpr[4] = (2177u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08818ED8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9620));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 333u, 0x089DE28Cu>(ctx, &aot_mem) && ctx.pc == 0x08818ED8u) goto L_08818ED8;
    return;
L_08818ED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08818F34;
      }
      goto L_08818EE4;
    }
L_08818EE4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1664)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08818F00u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26480));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 173u, 0x08814C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08818F00u) goto L_08818F00;
    return;
L_08818F00:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08818F0Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08818F0Cu) goto L_08818F0C;
    return;
L_08818F0C:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08818F1Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08818F1Cu) goto L_08818F1C;
    return;
L_08818F1C:
    ctx.gpr[31] = (0x08818F24u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 411u, 0x08812510u>(ctx, &aot_mem) && ctx.pc == 0x08818F24u) goto L_08818F24;
    return;
L_08818F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    goto L_08818F34;
L_08818F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08818F90;
      }
      goto L_08818F40;
    }
L_08818F40:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1668)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08818F5Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26492));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 173u, 0x08814C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08818F5Cu) goto L_08818F5C;
    return;
L_08818F5C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08818F68u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08818F68u) goto L_08818F68;
    return;
L_08818F68:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08818F78u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08818F78u) goto L_08818F78;
    return;
L_08818F78:
    ctx.gpr[31] = (0x08818F80u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 411u, 0x08812510u>(ctx, &aot_mem) && ctx.pc == 0x08818F80u) goto L_08818F80;
    return;
L_08818F80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    goto L_08818F90;
L_08818F90:
    ctx.gpr[31] = (0x08818F98u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 333u, 0x089DE28Cu>(ctx, &aot_mem) && ctx.pc == 0x08818F98u) goto L_08818F98;
    return;
L_08818F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_08819064;
    }
    goto L_08818FA4;
L_08818FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1524));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1644)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08818FE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27068));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08818FE0u) goto L_08818FE0;
    return;
L_08818FE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08819060;
      }
      goto L_08818FF4;
    }
L_08818FF4:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (2221u << 16u);
    goto L_08819000;
L_08819000:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-1656)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08819010u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 173u, 0x08814C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08819010u) goto L_08819010;
    return;
L_08819010:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881901Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x0881901Cu) goto L_0881901C;
    return;
L_0881901C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881902Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x0881902Cu) goto L_0881902C;
    return;
L_0881902C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0881903Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 700u, 0x0893AE04u>(ctx, &aot_mem) && ctx.pc == 0x0881903Cu) goto L_0881903C;
    return;
L_0881903C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08819000;
      }
      goto L_08819060;
    }
L_08819060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_08819064;
L_08819064:
    ctx.gpr[31] = (0x0881906Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 250u, 0x089454B0u>(ctx, &aot_mem) && ctx.pc == 0x0881906Cu) goto L_0881906C;
    return;
L_0881906C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08819098:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (2221u << 16u);
        goto L_088192B4;
    }
    goto L_088190D0;
L_088190D0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 3u);
      if (branch_taken) {
          goto L_08819140;
      }
      goto L_088190DC;
    }
L_088190DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_08819144;
    }
    goto L_08819100;
L_08819100:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08819108;
L_08819108:
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08819118;
    }
    goto L_08819110;
L_08819110:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08819118;
      }
      goto L_08819118;
    }
L_08819118:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08819128u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 466u, 0x08812C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08819128u) goto L_08819128;
    return;
L_08819128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08819108;
      }
      goto L_0881913C;
    }
L_0881913C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08819140;
L_08819140:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_08819144;
L_08819144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08819160u);
    ctx.gpr[5] = (0u | 144u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08819160u) goto L_08819160;
    return;
L_08819160:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088191D4;
      }
      goto L_08819178;
    }
L_08819178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
        goto L_088191C4;
    }
    goto L_0881918C;
L_0881918C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088191A0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 262u, 0x089B1834u>(ctx, &aot_mem) && ctx.pc == 0x088191A0u) goto L_088191A0;
    return;
L_088191A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088191C0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 662u, 0x08817074u>(ctx, &aot_mem) && ctx.pc == 0x088191C0u) goto L_088191C0;
    return;
L_088191C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_088191C4;
L_088191C4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08819178;
      }
      goto L_088191D4;
    }
L_088191D4:
    ctx.gpr[31] = (0x088191DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 534u, 0x08816714u>(ctx, &aot_mem) && ctx.pc == 0x088191DCu) goto L_088191DC;
    return;
L_088191DC:
    ctx.gpr[31] = (0x088191E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 859u, 0x0881F488u>(ctx, &aot_mem) && ctx.pc == 0x088191E4u) goto L_088191E4;
    return;
L_088191E4:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08819204;
      }
      goto L_088191EC;
    }
L_088191EC:
    ctx.gpr[31] = (0x088191F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 548u, 0x08816858u>(ctx, &aot_mem) && ctx.pc == 0x088191F4u) goto L_088191F4;
    return;
L_088191F4:
    ctx.gpr[31] = (0x088191FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 291u, 0x08835694u>(ctx, &aot_mem) && ctx.pc == 0x088191FCu) goto L_088191FC;
    return;
L_088191FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08819264;
      }
      goto L_08819204;
    }
L_08819204:
    ctx.gpr[31] = (0x0881920Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 302u, 0x088357C8u>(ctx, &aot_mem) && ctx.pc == 0x0881920Cu) goto L_0881920C;
    return;
L_0881920C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08819244;
      }
      goto L_08819218;
    }
L_08819218:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881921C;
L_0881921C:
    ctx.gpr[31] = (0x08819224u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 707u, 0x088172F0u>(ctx, &aot_mem) && ctx.pc == 0x08819224u) goto L_08819224;
    return;
L_08819224:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0881921C;
      }
      goto L_08819234;
    }
L_08819234:
    ctx.gpr[31] = (0x0881923Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 298u, 0x0883574Cu>(ctx, &aot_mem) && ctx.pc == 0x0881923Cu) goto L_0881923C;
    return;
L_0881923C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08819264;
      }
      goto L_08819244;
    }
L_08819244:
    ctx.gpr[31] = (0x0881924Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 548u, 0x08816858u>(ctx, &aot_mem) && ctx.pc == 0x0881924Cu) goto L_0881924C;
    return;
L_0881924C:
    ctx.gpr[31] = (0x08819254u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08819254u) goto L_08819254;
    return;
L_08819254:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08819264;
      }
      goto L_0881925C;
    }
L_0881925C:
    ctx.gpr[31] = (0x08819264u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 291u, 0x08835694u>(ctx, &aot_mem) && ctx.pc == 0x08819264u) goto L_08819264;
    return;
L_08819264:
    ctx.gpr[31] = (0x0881926Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 319u, 0x08815724u>(ctx, &aot_mem) && ctx.pc == 0x0881926Cu) goto L_0881926C;
    return;
L_0881926C:
    ctx.gpr[31] = (0x08819274u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816A80u>(ctx, &aot_mem) && ctx.pc == 0x08819274u) goto L_08819274;
    return;
L_08819274:
    ctx.gpr[31] = (0x0881927Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 586u, 0x08816BA4u>(ctx, &aot_mem) && ctx.pc == 0x0881927Cu) goto L_0881927C;
    return;
L_0881927C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2221u << 16u);
        goto L_088192B4;
    }
    goto L_08819288;
L_08819288:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088192B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9628));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 174u, 0x089B100Cu>(ctx, &aot_mem) && ctx.pc == 0x088192B0u) goto L_088192B0;
    return;
L_088192B0:
    ctx.gpr[4] = (2221u << 16u);
    goto L_088192B4;
L_088192B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088192E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08819320u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088197E4;
L_08819320:
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[21] << (ctx.gpr[2] & 31u));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
      if (branch_taken) {
          goto L_08819344;
      }
      goto L_08819340;
    }
L_08819340:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08819344;
L_08819344:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[17] << 6u);
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08819390;
      }
      goto L_0881935C;
    }
L_0881935C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1628)));
    ctx.gpr[31] = (0x0881936Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881936Cu) goto L_0881936C;
    return;
L_0881936C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-464)));
        goto L_08819394;
    }
    goto L_08819374;
L_08819374:
    ctx.gpr[31] = (0x0881937Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_088197E4;
L_0881937C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (ctx.gpr[21] << (ctx.gpr[2] & 31u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_08819390;
L_08819390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-464)));
    goto L_08819394;
L_08819394:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088193ACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 58u, 0x0881C2E8u>(ctx, &aot_mem) && ctx.pc == 0x088193ACu) goto L_088193AC;
    return;
L_088193AC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088193B8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088193B8u) goto L_088193B8;
    return;
L_088193B8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088193C4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088193C4u) goto L_088193C4;
    return;
L_088193C4:
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
L_088193F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0881942C;
      }
      goto L_08819414;
    }
L_08819414:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881942C:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08819448;
      }
      goto L_08819440;
    }
L_08819440:
    ctx.gpr[31] = (0x08819448u);
    // nop
    goto L_0881B7A8;
L_08819448:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08819454:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0881947C;
L_0881947C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08819498;
      }
      goto L_08819490;
    }
L_08819490:
    ctx.gpr[31] = (0x08819498u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_0881A4E4;
L_08819498:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881947C;
      }
      goto L_088194A8;
    }
L_088194A8:
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
L_088194C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_088194EC;
L_088194EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08819508;
      }
      goto L_08819500;
    }
L_08819500:
    ctx.gpr[31] = (0x08819508u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_0881A7BC;
L_08819508:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088194EC;
      }
      goto L_08819518;
    }
L_08819518:
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
L_08819534:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08819550:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08819590u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 504u, 0x0881645Cu>(ctx, &aot_mem) && ctx.pc == 0x08819590u) goto L_08819590;
    return;
L_08819590:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881959Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 121u, 0x0881C5A8u>(ctx, &aot_mem) && ctx.pc == 0x0881959Cu) goto L_0881959C;
    return;
L_0881959C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088195A8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_088195C4;
L_088195A8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), 0u);
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
L_088195C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08819648;
      }
      goto L_08819604;
    }
L_08819604:
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[20] = (ctx.gpr[16] << 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[31] = (0x08819624u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(26596));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08819624u) goto L_08819624;
    return;
L_08819624:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[2]);
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08819638u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26608));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08819638u) goto L_08819638;
    return;
L_08819638:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_08819670;
      }
      goto L_08819640;
    }
L_08819640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088196C0;
      }
      goto L_08819648;
    }
L_08819648:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08819670:
    ctx.gpr[31] = (0x08819678u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26688));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08819678u) goto L_08819678;
    return;
L_08819678:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[2]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0881968Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27084));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x0881968Cu) goto L_0881968C;
    return;
L_0881968C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088197BC;
      }
      goto L_08819694;
    }
L_08819694:
    ctx.gpr[31] = (0x0881969Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088197E4;
L_0881969C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (ctx.gpr[16] << (ctx.gpr[2] & 31u));
    ctx.gpr[6] = (ctx.gpr[4] & ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[16]);
      if (branch_taken) {
          goto L_088197BC;
      }
      goto L_088196B8;
    }
L_088196B8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088197BC;
      }
      goto L_088196C0;
    }
L_088196C0:
    ctx.gpr[31] = (0x088196C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088197E4;
L_088196C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] << (ctx.gpr[2] & 31u));
    ctx.gpr[7] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_088196F0;
      }
      goto L_088196E8;
    }
L_088196E8:
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_088196F0;
L_088196F0:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08819704u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27088));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08819704u) goto L_08819704;
    return;
L_08819704:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088197A0;
      }
      goto L_08819720;
    }
L_08819720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (2221u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-1640)));
      if (branch_taken) {
          goto L_08819754;
      }
      goto L_08819730;
    }
L_08819730:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08819740u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 168u, 0x08814BECu>(ctx, &aot_mem) && ctx.pc == 0x08819740u) goto L_08819740;
    return;
L_08819740:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881974Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 720u, 0x0882ED10u>(ctx, &aot_mem) && ctx.pc == 0x0881974Cu) goto L_0881974C;
    return;
L_0881974C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088197BC;
      }
      goto L_08819754;
    }
L_08819754:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(264));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881976Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 173u, 0x08814C5Cu>(ctx, &aot_mem) && ctx.pc == 0x0881976Cu) goto L_0881976C;
    return;
L_0881976C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08819778u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08819778u) goto L_08819778;
    return;
L_08819778:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881978Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x0881978Cu) goto L_0881978C;
    return;
L_0881978C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08819798u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x08819798u) goto L_08819798;
    return;
L_08819798:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088197BC;
      }
      goto L_088197A0;
    }
L_088197A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1660)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088197B0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 168u, 0x08814BECu>(ctx, &aot_mem) && ctx.pc == 0x088197B0u) goto L_088197B0;
    return;
L_088197B0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088197BCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 720u, 0x0882ED10u>(ctx, &aot_mem) && ctx.pc == 0x088197BCu) goto L_088197BC;
    return;
L_088197BC:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088197E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088198B0;
      }
      goto L_08819808;
    }
L_08819808:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (2219u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(27104));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08819838u);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(27092));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08819838u) goto L_08819838;
    return;
L_08819838:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08819848u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x08819848u) goto L_08819848;
    return;
L_08819848:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08819874;
      }
      goto L_08819850;
    }
L_08819850:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[31] = (0x0881985Cu);
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(27116));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0881985Cu) goto L_0881985C;
    return;
L_0881985C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881986Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x0881986Cu) goto L_0881986C;
    return;
L_0881986C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_0881987C;
      }
      goto L_08819874;
    }
L_08819874:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08819894;
      }
      goto L_0881987C;
    }
L_0881987C:
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1360));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_08819894;
L_08819894:
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
L_088198B0:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1360));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
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
L_088198E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[18] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(252));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    goto L_08819924;
L_08819924:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0881993C;
      }
      goto L_0881992C;
    }
L_0881992C:
    if (static_cast<std::int32_t>(ctx.gpr[21]) < 0) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
        goto L_08819964;
    }
    goto L_08819934;
L_08819934:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08819960;
      }
      goto L_0881993C;
    }
L_0881993C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08819958;
      }
      goto L_08819948;
    }
L_08819948:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (0u | 15u);
        goto L_08819960;
    }
    goto L_08819950;
L_08819950:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08819964;
      }
      goto L_08819958;
    }
L_08819958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 14u);
      if (branch_taken) {
          goto L_08819960;
      }
      goto L_08819960;
    }
L_08819960:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_08819964;
L_08819964:
    ctx.gpr[31] = (0x0881996Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(424));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x0881996Cu) goto L_0881996C;
    return;
L_0881996C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_088199B4;
      }
      goto L_08819978;
    }
L_08819978:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(424));
    ctx.gpr[31] = (0x08819988u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(264));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08819988u) goto L_08819988;
    return;
L_08819988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[31] = (0x08819994u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(264));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 522u, 0x0880A0E8u>(ctx, &aot_mem) && ctx.pc == 0x08819994u) goto L_08819994;
    return;
L_08819994:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088199A8;
      }
      goto L_0881999C;
    }
L_0881999C:
    ctx.gpr[31] = (0x088199A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08818E8C;
L_088199A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088199A8;
L_088199A8:
    ctx.gpr[31] = (0x088199B0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08819550;
L_088199B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    goto L_088199B4;
L_088199B4:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08819924;
      }
      goto L_088199C4;
    }
L_088199C4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(320), 0u);
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
L_088199F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    ctx.gpr[23] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(27188));
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[30] = (2221u << 16u);
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[21] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    goto L_08819A40;
L_08819A40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08819A58;
      }
      goto L_08819A48;
    }
L_08819A48:
    if (static_cast<std::int32_t>(ctx.gpr[18]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
        goto L_08819A6C;
    }
    goto L_08819A50;
L_08819A50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 5u);
      if (branch_taken) {
          goto L_08819A68;
      }
      goto L_08819A58;
    }
L_08819A58:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
        goto L_08819A6C;
    }
    goto L_08819A64;
L_08819A64:
    ctx.gpr[17] = (0u | 7u);
    goto L_08819A68;
L_08819A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    goto L_08819A6C;
L_08819A6C:
    ctx.gpr[16] = (ctx.gpr[17] << 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-1632)));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08819A84u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08819A84u) goto L_08819A84;
    return;
L_08819A84:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08819AF4;
    }
    goto L_08819A8C;
L_08819A8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-1600)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-1648)));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08819AA8u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08819AA8u) goto L_08819AA8;
    return;
L_08819AA8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(424));
    ctx.gpr[31] = (0x08819AB8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08819AB8u) goto L_08819AB8;
    return;
L_08819AB8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[16] == ctx.gpr[20]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08819AF4;
    }
    goto L_08819AC4;
L_08819AC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(264));
    ctx.gpr[31] = (0x08819AD8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(424));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08819AD8u) goto L_08819AD8;
    return;
L_08819AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[31] = (0x08819AE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(264));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 522u, 0x0880A0E8u>(ctx, &aot_mem) && ctx.pc == 0x08819AE4u) goto L_08819AE4;
    return;
L_08819AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08819AF0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08819550;
L_08819AF0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08819AF4;
L_08819AF4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08819A40;
      }
      goto L_08819B00;
    }
L_08819B00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08819B30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26724));
    ctx.gpr[6] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(27200));
    ctx.gpr[5] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27188));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[23] = (2221u << 16u);
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[21] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[18] = (0u | 0u);
    goto L_08819BA0;
L_08819BA0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) > 0;
    ctx.gpr[17] = (0u | 13u);
      if (branch_taken) {
          goto L_08819BB8;
      }
      goto L_08819BA8;
    }
L_08819BA8:
    if (static_cast<std::int32_t>(ctx.gpr[20]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
        goto L_08819BE0;
    }
    goto L_08819BB0;
L_08819BB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 11u);
      if (branch_taken) {
          goto L_08819BDC;
      }
      goto L_08819BB8;
    }
L_08819BB8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08819BD4;
      }
      goto L_08819BC4;
    }
L_08819BC4:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
        goto L_08819BDC;
    }
    goto L_08819BCC;
L_08819BCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_08819BE0;
      }
      goto L_08819BD4;
    }
L_08819BD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 12u);
      if (branch_taken) {
          goto L_08819BDC;
      }
      goto L_08819BDC;
    }
L_08819BDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    goto L_08819BE0;
L_08819BE0:
    ctx.gpr[16] = (ctx.gpr[18] << 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-1632)));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08819BF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08819BF8u) goto L_08819BF8;
    return;
L_08819BF8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08819CD8;
    }
    goto L_08819C00;
L_08819C00:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_08819C6C;
      }
      goto L_08819C08;
    }
L_08819C08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1280));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-1632)));
    ctx.gpr[31] = (0x08819C20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08819C20u) goto L_08819C20;
    return;
L_08819C20:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
        goto L_08819C44;
    }
    goto L_08819C28;
L_08819C28:
    ctx.gpr[31] = (0x08819C30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08819C30u) goto L_08819C30;
    return;
L_08819C30:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[17] = (ctx.gpr[17] & 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    goto L_08819C44;
L_08819C44:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-1600)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-1648)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08819C5Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08819C5Cu) goto L_08819C5C;
    return;
L_08819C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(424));
      if (branch_taken) {
          goto L_08819C90;
      }
      goto L_08819C6C;
    }
L_08819C6C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-1600)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-1648)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08819C84u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08819C84u) goto L_08819C84;
    return;
L_08819C84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(424));
    goto L_08819C90;
L_08819C90:
    ctx.gpr[31] = (0x08819C98u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08819C98u) goto L_08819C98;
    return;
L_08819C98:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[17] == ctx.gpr[30]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08819CD8;
    }
    goto L_08819CA4;
L_08819CA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(264));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(424));
    ctx.gpr[31] = (0x08819CBCu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08819CBCu) goto L_08819CBC;
    return;
L_08819CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[31] = (0x08819CC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(264));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 522u, 0x0880A0E8u>(ctx, &aot_mem) && ctx.pc == 0x08819CC8u) goto L_08819CC8;
    return;
L_08819CC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08819CD4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08819550;
L_08819CD4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08819CD8;
L_08819CD8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08819BA0;
      }
      goto L_08819CE4;
    }
L_08819CE4:
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
L_08819D14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08819D54;
      }
      goto L_08819D40;
    }
L_08819D40:
    ctx.gpr[31] = (0x08819D48u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 504u, 0x0881645Cu>(ctx, &aot_mem) && ctx.pc == 0x08819D48u) goto L_08819D48;
    return;
L_08819D48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
      if (branch_taken) {
          goto L_08819E20;
      }
      goto L_08819D54;
    }
L_08819D54:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08819D70;
      }
      goto L_08819D60;
    }
L_08819D60:
    ctx.gpr[31] = (0x08819D68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088198E8;
L_08819D68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08819E20;
      }
      goto L_08819D70;
    }
L_08819D70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_08819DE0;
      }
      goto L_08819D7C;
    }
L_08819D7C:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 7u);
      if (branch_taken) {
          goto L_08819D90;
      }
      goto L_08819D88;
    }
L_08819D88:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 11u);
      if (branch_taken) {
          goto L_08819DA4;
      }
      goto L_08819D90;
    }
L_08819D90:
    ctx.gpr[31] = (0x08819D98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088199F0;
L_08819D98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(27) ? 1u : 0u);
      if (branch_taken) {
          goto L_08819DE4;
      }
      goto L_08819DA0;
    }
L_08819DA0:
    ctx.gpr[4] = (0u | 11u);
    goto L_08819DA4;
L_08819DA4:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 12u);
      if (branch_taken) {
          goto L_08819DBC;
      }
      goto L_08819DAC;
    }
L_08819DAC:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 13u);
      if (branch_taken) {
          goto L_08819DBC;
      }
      goto L_08819DB4;
    }
L_08819DB4:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08819DD0;
      }
      goto L_08819DBC;
    }
L_08819DBC:
    ctx.gpr[31] = (0x08819DC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08819B30;
L_08819DC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(27) ? 1u : 0u);
      if (branch_taken) {
          goto L_08819DE4;
      }
      goto L_08819DCC;
    }
L_08819DCC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    goto L_08819DD0;
L_08819DD0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(27) ? 1u : 0u);
      if (branch_taken) {
          goto L_08819DE4;
      }
      goto L_08819DD8;
    }
L_08819DD8:
    ctx.gpr[31] = (0x08819DE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 184u, 0x0881C980u>(ctx, &aot_mem) && ctx.pc == 0x08819DE0u) goto L_08819DE0;
    return;
L_08819DE0:
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(27) ? 1u : 0u);
    goto L_08819DE4;
L_08819DE4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08819E10;
      }
      goto L_08819DEC;
    }
L_08819DEC:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2219u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27776)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08819E04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_08819E1C;
      }
      goto L_08819E0C;
    }
L_08819E0C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08819E10;
L_08819E10:
    ctx.gpr[31] = (0x08819E18u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08819550;
L_08819E18:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    goto L_08819E1C;
L_08819E1C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    goto L_08819E20;
L_08819E20:
    ctx.gpr[31] = (0x08819E28u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 555u, 0x0880A5E8u>(ctx, &aot_mem) && ctx.pc == 0x08819E28u) goto L_08819E28;
    return;
L_08819E28:
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
L_08819E44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (0u | 14u);
    ctx.gpr[17] = (0u | 15u);
    ctx.gpr[20] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-464)));
    goto L_08819E7C;
L_08819E7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(324)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[19];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08819F90;
      }
      goto L_08819E90;
    }
L_08819E90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_08819EBC;
      }
      goto L_08819EA4;
    }
L_08819EA4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(472)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[19];
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 14 ? 1u : 0u);
      if (branch_taken) {
          goto L_08819EBC;
      }
      goto L_08819EB0;
    }
L_08819EB0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(472), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(320), 0u);
      if (branch_taken) {
          goto L_08819EF8;
      }
      goto L_08819EBC;
    }
L_08819EBC:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08819EDC;
      }
      goto L_08819EC4;
    }
L_08819EC4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(476)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[19];
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08819EDC;
      }
      goto L_08819ED0;
    }
L_08819ED0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(476), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(320), 0u);
      if (branch_taken) {
          goto L_08819EF8;
      }
      goto L_08819EDC;
    }
L_08819EDC:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08819EF8;
      }
      goto L_08819EE4;
    }
L_08819EE4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(480)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08819EF8;
      }
      goto L_08819EF0;
    }
L_08819EF0:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(480), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(320), 0u);
    goto L_08819EF8;
L_08819EF8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08819F9C;
      }
      goto L_08819F00;
    }
L_08819F00:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_08819F9C;
      }
      goto L_08819F08;
    }
L_08819F08:
    ctx.gpr[7] = (ctx.gpr[5] < static_cast<std::uint32_t>(27) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08819F80;
      }
      goto L_08819F14;
    }
L_08819F14:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2219u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27888)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08819F2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(472)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08819F9C;
      }
      goto L_08819F38;
    }
L_08819F38:
    ctx.gpr[31] = (0x08819F40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881B7A8;
L_08819F40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08819F9C;
      }
      goto L_08819F48;
    }
L_08819F48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(476)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08819F9C;
      }
      goto L_08819F54;
    }
L_08819F54:
    ctx.gpr[31] = (0x08819F5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881B7A8;
L_08819F5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08819F9C;
      }
      goto L_08819F64;
    }
L_08819F64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(480)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08819F9C;
      }
      goto L_08819F70;
    }
L_08819F70:
    ctx.gpr[31] = (0x08819F78u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881B7A8;
L_08819F78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08819F9C;
      }
      goto L_08819F80;
    }
L_08819F80:
    ctx.gpr[31] = (0x08819F88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881B7A8;
L_08819F88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08819F9C;
      }
      goto L_08819F90;
    }
L_08819F90:
    ctx.gpr[31] = (0x08819F98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881B7A8;
L_08819F98:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08819F9C;
L_08819F9C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-464)));
        goto L_08819E7C;
    }
    goto L_08819FA4;
L_08819FA4:
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
L_08819FC4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-464)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08819FE4;
      }
      goto L_08819FD4;
    }
L_08819FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08819FE4;
      }
      goto L_08819FE0;
    }
L_08819FE0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08819FE4;
L_08819FE4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08819FEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), 0u);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), 0u);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 152u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881A070u);
    ctx.gpr[5] = (0u | 144u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881A070u) goto L_0881A070;
    return;
L_0881A070:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0881A084;
      }
      goto L_0881A07C;
    }
L_0881A07C:
    ctx.gpr[31] = (0x0881A084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 273u, 0x08811604u>(ctx, &aot_mem) && ctx.pc == 0x0881A084u) goto L_0881A084;
    return;
L_0881A084:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 152u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881A098u);
    ctx.gpr[5] = (0u | 144u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881A098u) goto L_0881A098;
    return;
L_0881A098:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0881A0AC;
      }
      goto L_0881A0A4;
    }
L_0881A0A4:
    ctx.gpr[31] = (0x0881A0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 273u, 0x08811604u>(ctx, &aot_mem) && ctx.pc == 0x0881A0ACu) goto L_0881A0AC;
    return;
L_0881A0AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 64u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881A0C0u);
    ctx.gpr[5] = (0u | 144u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881A0C0u) goto L_0881A0C0;
    return;
L_0881A0C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881A0D8u);
    ctx.gpr[5] = (0u | 144u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881A0D8u) goto L_0881A0D8;
    return;
L_0881A0D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0881A12C;
      }
      goto L_0881A0E4;
    }
L_0881A0E4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    goto L_0881A0EC;
L_0881A0EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    ctx.gpr[31] = (0x0881A0F8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 741u, 0x0882EE90u>(ctx, &aot_mem) && ctx.pc == 0x0881A0F8u) goto L_0881A0F8;
    return;
L_0881A0F8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0881A0EC;
      }
      goto L_0881A108;
    }
L_0881A108:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0881A110;
L_0881A110:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881A110;
      }
      goto L_0881A12C;
    }
L_0881A12C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881A144u);
    ctx.gpr[5] = (0u | 144u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881A144u) goto L_0881A144;
    return;
L_0881A144:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0881A180;
      }
      goto L_0881A14C;
    }
L_0881A14C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0881A180;
      }
      goto L_0881A160;
    }
L_0881A160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0881A16Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 688u, 0x0893AD1Cu>(ctx, &aot_mem) && ctx.pc == 0x0881A16Cu) goto L_0881A16C;
    return;
L_0881A16C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0881A160;
      }
      goto L_0881A180;
    }
L_0881A180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881A198u);
    ctx.gpr[5] = (0u | 144u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881A198u) goto L_0881A198;
    return;
L_0881A198:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881A1B0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0881A1B0u) goto L_0881A1B0;
    return;
L_0881A1B0:
    ctx.gpr[31] = (0x0881A1B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 433u, 0x08815FCCu>(ctx, &aot_mem) && ctx.pc == 0x0881A1B8u) goto L_0881A1B8;
    return;
L_0881A1B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
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
L_0881A1E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881A208u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 395u, 0x08815DE0u>(ctx, &aot_mem) && ctx.pc == 0x0881A208u) goto L_0881A208;
    return;
L_0881A208:
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1360));
    ctx.gpr[18] = (0u | 0u);
    goto L_0881A218;
L_0881A218:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    goto L_0881A21C;
L_0881A21C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0881A238;
      }
      goto L_0881A228;
    }
L_0881A228:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0881A238u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 662u, 0x08817074u>(ctx, &aot_mem) && ctx.pc == 0x0881A238u) goto L_0881A238;
    return;
L_0881A238:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0881A21C;
      }
      goto L_0881A248;
    }
L_0881A248:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0881A218;
      }
      goto L_0881A258;
    }
L_0881A258:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_0881A260;
L_0881A260:
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
    goto L_0881A264;
L_0881A264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0881A290;
      }
      goto L_0881A270;
    }
L_0881A270:
    ctx.gpr[31] = (0x0881A278u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 200u, 0x08814EA4u>(ctx, &aot_mem) && ctx.pc == 0x0881A278u) goto L_0881A278;
    return;
L_0881A278:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A284u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A284u) goto L_0881A284;
    return;
L_0881A284:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A290u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 200u, 0x08814EA4u>(ctx, &aot_mem) && ctx.pc == 0x0881A290u) goto L_0881A290;
    return;
L_0881A290:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_0881A264;
      }
      goto L_0881A2A0;
    }
L_0881A2A0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0881A260;
      }
      goto L_0881A2B0;
    }
L_0881A2B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A320;
      }
      goto L_0881A2BC;
    }
L_0881A2BC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0881A30C;
      }
      goto L_0881A2D4;
    }
L_0881A2D4:
    ctx.gpr[19] = (0u | 0u);
    goto L_0881A2D8;
L_0881A2D8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0881A2F0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 261u, 0x089B1808u>(ctx, &aot_mem) && ctx.pc == 0x0881A2F0u) goto L_0881A2F0;
    return;
L_0881A2F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
      if (branch_taken) {
          goto L_0881A2D8;
      }
      goto L_0881A308;
    }
L_0881A308:
    ctx.gpr[5] = (2222u << 16u);
    goto L_0881A30C;
L_0881A30C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881A31Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881A31Cu) goto L_0881A31C;
    return;
L_0881A31C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), 0u);
    goto L_0881A320;
L_0881A320:
    ctx.gpr[31] = (0x0881A328u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 450u, 0x088160F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A328u) goto L_0881A328;
    return;
L_0881A328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_0881A388;
    }
    goto L_0881A334;
L_0881A334:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0881A370;
      }
      goto L_0881A348;
    }
L_0881A348:
    ctx.gpr[18] = (0u | 0u);
    goto L_0881A34C;
L_0881A34C:
    ctx.gpr[31] = (0x0881A354u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 469u, 0x08812CC4u>(ctx, &aot_mem) && ctx.pc == 0x0881A354u) goto L_0881A354;
    return;
L_0881A354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
      if (branch_taken) {
          goto L_0881A34C;
      }
      goto L_0881A36C;
    }
L_0881A36C:
    ctx.gpr[5] = (2222u << 16u);
    goto L_0881A370;
L_0881A370:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881A380u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881A380u) goto L_0881A380;
    return;
L_0881A380:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0881A388;
L_0881A388:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_0881A3E4;
    }
    goto L_0881A390;
L_0881A390:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0881A3CC;
      }
      goto L_0881A3A4;
    }
L_0881A3A4:
    ctx.gpr[18] = (0u | 0u);
    goto L_0881A3A8;
L_0881A3A8:
    ctx.gpr[31] = (0x0881A3B0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 689u, 0x0893AD34u>(ctx, &aot_mem) && ctx.pc == 0x0881A3B0u) goto L_0881A3B0;
    return;
L_0881A3B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0881A3A8;
      }
      goto L_0881A3C8;
    }
L_0881A3C8:
    ctx.gpr[5] = (2222u << 16u);
    goto L_0881A3CC;
L_0881A3CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881A3DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881A3DCu) goto L_0881A3DC;
    return;
L_0881A3DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0881A3E4;
L_0881A3E4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_0881A410;
    }
    goto L_0881A3EC;
L_0881A3EC:
    ctx.gpr[31] = (0x0881A3F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 304u, 0x088118E0u>(ctx, &aot_mem) && ctx.pc == 0x0881A3F4u) goto L_0881A3F4;
    return;
L_0881A3F4:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881A408u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881A408u) goto L_0881A408;
    return;
L_0881A408:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_0881A410;
L_0881A410:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_0881A444;
    }
    goto L_0881A418;
L_0881A418:
    ctx.gpr[31] = (0x0881A420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 304u, 0x088118E0u>(ctx, &aot_mem) && ctx.pc == 0x0881A420u) goto L_0881A420;
    return;
L_0881A420:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881A434u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881A434u) goto L_0881A434;
    return;
L_0881A434:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0881A444;
L_0881A444:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0881A480;
      }
      goto L_0881A44C;
    }
L_0881A44C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881A450;
L_0881A450:
    ctx.gpr[31] = (0x0881A458u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 707u, 0x088172F0u>(ctx, &aot_mem) && ctx.pc == 0x0881A458u) goto L_0881A458;
    return;
L_0881A458:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0881A450;
      }
      goto L_0881A468;
    }
L_0881A468:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881A47Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881A47Cu) goto L_0881A47C;
    return;
L_0881A47C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    goto L_0881A480;
L_0881A480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0881A4C4;
      }
      goto L_0881A48C;
    }
L_0881A48C:
    ctx.gpr[18] = (0u | 0u);
    goto L_0881A490;
L_0881A490:
    ctx.gpr[31] = (0x0881A498u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 742u, 0x0882EEA8u>(ctx, &aot_mem) && ctx.pc == 0x0881A498u) goto L_0881A498;
    return;
L_0881A498:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
      if (branch_taken) {
          goto L_0881A490;
      }
      goto L_0881A4AC;
    }
L_0881A4AC:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881A4C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881A4C0u) goto L_0881A4C0;
    return;
L_0881A4C0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), 0u);
    goto L_0881A4C4;
L_0881A4C4:
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
L_0881A4E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 32u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0881A55C;
      }
      goto L_0881A51C;
    }
L_0881A51C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 6u);
      if (branch_taken) {
          goto L_0881A540;
      }
      goto L_0881A528;
    }
L_0881A528:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0881A54C;
      }
      goto L_0881A534;
    }
L_0881A534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A7AC;
      }
      goto L_0881A53C;
    }
L_0881A53C:
    ctx.gpr[6] = (0u | 6u);
    goto L_0881A540;
L_0881A540:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0881A7AC;
      }
      goto L_0881A548;
    }
L_0881A548:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_0881A54C;
L_0881A54C:
    ctx.gpr[31] = (0x0881A554u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A554u) goto L_0881A554;
    return;
L_0881A554:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A7AC;
      }
      goto L_0881A55C;
    }
L_0881A55C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A7AC;
      }
      goto L_0881A56C;
    }
L_0881A56C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0881A6D8;
      }
      goto L_0881A578;
    }
L_0881A578:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0881A7AC;
      }
      goto L_0881A580;
    }
L_0881A580:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0881A64C;
      }
      goto L_0881A588;
    }
L_0881A588:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0881A7AC;
      }
      goto L_0881A590;
    }
L_0881A590:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A59Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A59Cu) goto L_0881A59C;
    return;
L_0881A59C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A5A8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A5A8u) goto L_0881A5A8;
    return;
L_0881A5A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A5B4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A5B4u) goto L_0881A5B4;
    return;
L_0881A5B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A5C0u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A5C0u) goto L_0881A5C0;
    return;
L_0881A5C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A5CCu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A5CCu) goto L_0881A5CC;
    return;
L_0881A5CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A5D8u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A5D8u) goto L_0881A5D8;
    return;
L_0881A5D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A5E4u);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A5E4u) goto L_0881A5E4;
    return;
L_0881A5E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A5F0u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A5F0u) goto L_0881A5F0;
    return;
L_0881A5F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A5FCu);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A5FCu) goto L_0881A5FC;
    return;
L_0881A5FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A608u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A608u) goto L_0881A608;
    return;
L_0881A608:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A614u);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A614u) goto L_0881A614;
    return;
L_0881A614:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A620u);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A620u) goto L_0881A620;
    return;
L_0881A620:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A62Cu);
    ctx.gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A62Cu) goto L_0881A62C;
    return;
L_0881A62C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A638u);
    ctx.gpr[5] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A638u) goto L_0881A638;
    return;
L_0881A638:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A644u);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A644u) goto L_0881A644;
    return;
L_0881A644:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A7AC;
      }
      goto L_0881A64C;
    }
L_0881A64C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A658u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A658u) goto L_0881A658;
    return;
L_0881A658:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A664u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A664u) goto L_0881A664;
    return;
L_0881A664:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A670u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A670u) goto L_0881A670;
    return;
L_0881A670:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A67Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A67Cu) goto L_0881A67C;
    return;
L_0881A67C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A688u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A688u) goto L_0881A688;
    return;
L_0881A688:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A694u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A694u) goto L_0881A694;
    return;
L_0881A694:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A6A0u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A6A0u) goto L_0881A6A0;
    return;
L_0881A6A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A6ACu);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A6ACu) goto L_0881A6AC;
    return;
L_0881A6AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A6B8u);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A6B8u) goto L_0881A6B8;
    return;
L_0881A6B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A6C4u);
    ctx.gpr[5] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A6C4u) goto L_0881A6C4;
    return;
L_0881A6C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A6D0u);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A6D0u) goto L_0881A6D0;
    return;
L_0881A6D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A7AC;
      }
      goto L_0881A6D8;
    }
L_0881A6D8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_0881A7A4;
    }
    goto L_0881A6E8;
L_0881A6E8:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2219u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28000)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881A700:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A70Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A70Cu) goto L_0881A70C;
    return;
L_0881A70C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A718u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A718u) goto L_0881A718;
    return;
L_0881A718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A7AC;
      }
      goto L_0881A720;
    }
L_0881A720:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A72Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A72Cu) goto L_0881A72C;
    return;
L_0881A72C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A738u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A738u) goto L_0881A738;
    return;
L_0881A738:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A744u);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A744u) goto L_0881A744;
    return;
L_0881A744:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A7AC;
      }
      goto L_0881A74C;
    }
L_0881A74C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A758u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A758u) goto L_0881A758;
    return;
L_0881A758:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A764u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A764u) goto L_0881A764;
    return;
L_0881A764:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A770u);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A770u) goto L_0881A770;
    return;
L_0881A770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A7AC;
      }
      goto L_0881A778;
    }
L_0881A778:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A784u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A784u) goto L_0881A784;
    return;
L_0881A784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A7AC;
      }
      goto L_0881A78C;
    }
L_0881A78C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A798u);
    ctx.gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A798u) goto L_0881A798;
    return;
L_0881A798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881A7AC;
      }
      goto L_0881A7A0;
    }
L_0881A7A0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_0881A7A4;
L_0881A7A4:
    ctx.gpr[31] = (0x0881A7ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 759u, 0x08817594u>(ctx, &aot_mem) && ctx.pc == 0x0881A7ACu) goto L_0881A7AC;
    return;
L_0881A7AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881A7BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2224u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 32u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0881A838;
      }
      goto L_0881A7F4;
    }
L_0881A7F4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 6u);
      if (branch_taken) {
          goto L_0881A818;
      }
      goto L_0881A800;
    }
L_0881A800:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0881A824;
      }
      goto L_0881A80C;
    }
L_0881A80C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881AB28;
      }
      goto L_0881A814;
    }
L_0881A814:
    ctx.gpr[6] = (0u | 6u);
    goto L_0881A818;
L_0881A818:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0881AB28;
      }
      goto L_0881A820;
    }
L_0881A820:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_0881A824;
L_0881A824:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881A830u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A830u) goto L_0881A830;
    return;
L_0881A830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881AB28;
      }
      goto L_0881A838;
    }
L_0881A838:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881AB28;
      }
      goto L_0881A848;
    }
L_0881A848:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0881AA1C;
      }
      goto L_0881A854;
    }
L_0881A854:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0881AB28;
      }
      goto L_0881A85C;
    }
L_0881A85C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0881A964;
      }
      goto L_0881A864;
    }
L_0881A864:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0881AB28;
      }
      goto L_0881A86C;
    }
L_0881A86C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0881A87Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A87Cu) goto L_0881A87C;
    return;
L_0881A87C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0881A88Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A88Cu) goto L_0881A88C;
    return;
L_0881A88C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x0881A89Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A89Cu) goto L_0881A89C;
    return;
L_0881A89C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x0881A8ACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A8ACu) goto L_0881A8AC;
    return;
L_0881A8AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x0881A8BCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A8BCu) goto L_0881A8BC;
    return;
L_0881A8BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x0881A8CCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A8CCu) goto L_0881A8CC;
    return;
L_0881A8CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x0881A8DCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A8DCu) goto L_0881A8DC;
    return;
L_0881A8DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x0881A8ECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A8ECu) goto L_0881A8EC;
    return;
L_0881A8EC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x0881A8FCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A8FCu) goto L_0881A8FC;
    return;
L_0881A8FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x0881A90Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A90Cu) goto L_0881A90C;
    return;
L_0881A90C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[31] = (0x0881A91Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A91Cu) goto L_0881A91C;
    return;
L_0881A91C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[31] = (0x0881A92Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A92Cu) goto L_0881A92C;
    return;
L_0881A92C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[31] = (0x0881A93Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A93Cu) goto L_0881A93C;
    return;
L_0881A93C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[31] = (0x0881A94Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A94Cu) goto L_0881A94C;
    return;
L_0881A94C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[31] = (0x0881A95Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A95Cu) goto L_0881A95C;
    return;
L_0881A95C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881AB28;
      }
      goto L_0881A964;
    }
L_0881A964:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0881A974u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A974u) goto L_0881A974;
    return;
L_0881A974:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0881A984u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A984u) goto L_0881A984;
    return;
L_0881A984:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x0881A994u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A994u) goto L_0881A994;
    return;
L_0881A994:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x0881A9A4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A9A4u) goto L_0881A9A4;
    return;
L_0881A9A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x0881A9B4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A9B4u) goto L_0881A9B4;
    return;
L_0881A9B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x0881A9C4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A9C4u) goto L_0881A9C4;
    return;
L_0881A9C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x0881A9D4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A9D4u) goto L_0881A9D4;
    return;
L_0881A9D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[31] = (0x0881A9E4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A9E4u) goto L_0881A9E4;
    return;
L_0881A9E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[31] = (0x0881A9F4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881A9F4u) goto L_0881A9F4;
    return;
L_0881A9F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[31] = (0x0881AA04u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AA04u) goto L_0881AA04;
    return;
L_0881AA04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[31] = (0x0881AA14u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AA14u) goto L_0881AA14;
    return;
L_0881AA14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881AB28;
      }
      goto L_0881AA1C;
    }
L_0881AA1C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_0881AAF4;
      }
      goto L_0881AA28;
    }
L_0881AA28:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (0u | 8u);
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[8];
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_0881AAA8;
      }
      goto L_0881AA3C;
    }
L_0881AA3C:
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_0881AA74;
    }
    goto L_0881AA44;
L_0881AA44:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0881AAE0;
      }
      goto L_0881AA4C;
    }
L_0881AA4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0881AA5Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AA5Cu) goto L_0881AA5C;
    return;
L_0881AA5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x0881AA6Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AA6Cu) goto L_0881AA6C;
    return;
L_0881AA6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881AB28;
      }
      goto L_0881AA74;
    }
L_0881AA74:
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x0881AA80u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AA80u) goto L_0881AA80;
    return;
L_0881AA80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x0881AA90u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AA90u) goto L_0881AA90;
    return;
L_0881AA90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[31] = (0x0881AAA0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AAA0u) goto L_0881AAA0;
    return;
L_0881AAA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881AB28;
      }
      goto L_0881AAA8;
    }
L_0881AAA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x0881AAB8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AAB8u) goto L_0881AAB8;
    return;
L_0881AAB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x0881AAC8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AAC8u) goto L_0881AAC8;
    return;
L_0881AAC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[31] = (0x0881AAD8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AAD8u) goto L_0881AAD8;
    return;
L_0881AAD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881AB28;
      }
      goto L_0881AAE0;
    }
L_0881AAE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881AAECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AAECu) goto L_0881AAEC;
    return;
L_0881AAEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881AB28;
      }
      goto L_0881AAF4;
    }
L_0881AAF4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 20u);
      if (branch_taken) {
          goto L_0881AB14;
      }
      goto L_0881AAFC;
    }
L_0881AAFC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x0881AB0Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AB0Cu) goto L_0881AB0C;
    return;
L_0881AB0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881AB28;
      }
      goto L_0881AB14;
    }
L_0881AB14:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0881AB28;
      }
      goto L_0881AB1C;
    }
L_0881AB1C:
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[31] = (0x0881AB28u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AB28u) goto L_0881AB28;
    return;
L_0881AB28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881AB38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17320)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0881AB94;
      }
      goto L_0881AB74;
    }
L_0881AB74:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0881ADF0;
      }
      goto L_0881AB80;
    }
L_0881AB80:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881AB8Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AB8Cu) goto L_0881AB8C;
    return;
L_0881AB8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881ADF0;
      }
      goto L_0881AB94;
    }
L_0881AB94:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881ADF0;
      }
      goto L_0881ABA4;
    }
L_0881ABA4:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0881AD40;
      }
      goto L_0881ABB0;
    }
L_0881ABB0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0881AD98;
      }
      goto L_0881ABB8;
    }
L_0881ABB8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0881AD38;
      }
      goto L_0881ABC0;
    }
L_0881ABC0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0881ADB0;
      }
      goto L_0881ABC8;
    }
L_0881ABC8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0881ABD8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881ABD8u) goto L_0881ABD8;
    return;
L_0881ABD8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0881ABE8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881ABE8u) goto L_0881ABE8;
    return;
L_0881ABE8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x0881ABF8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881ABF8u) goto L_0881ABF8;
    return;
L_0881ABF8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x0881AC08u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AC08u) goto L_0881AC08;
    return;
L_0881AC08:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x0881AC18u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AC18u) goto L_0881AC18;
    return;
L_0881AC18:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x0881AC28u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AC28u) goto L_0881AC28;
    return;
L_0881AC28:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x0881AC38u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AC38u) goto L_0881AC38;
    return;
L_0881AC38:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x0881AC48u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AC48u) goto L_0881AC48;
    return;
L_0881AC48:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x0881AC58u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AC58u) goto L_0881AC58;
    return;
L_0881AC58:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x0881AC68u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AC68u) goto L_0881AC68;
    return;
L_0881AC68:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[31] = (0x0881AC78u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AC78u) goto L_0881AC78;
    return;
L_0881AC78:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[31] = (0x0881AC88u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AC88u) goto L_0881AC88;
    return;
L_0881AC88:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[31] = (0x0881AC98u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AC98u) goto L_0881AC98;
    return;
L_0881AC98:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[31] = (0x0881ACA8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881ACA8u) goto L_0881ACA8;
    return;
L_0881ACA8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 23u);
    ctx.gpr[31] = (0x0881ACB8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881ACB8u) goto L_0881ACB8;
    return;
L_0881ACB8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[31] = (0x0881ACC8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881ACC8u) goto L_0881ACC8;
    return;
L_0881ACC8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[31] = (0x0881ACD8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881ACD8u) goto L_0881ACD8;
    return;
L_0881ACD8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 26u);
    ctx.gpr[31] = (0x0881ACE8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881ACE8u) goto L_0881ACE8;
    return;
L_0881ACE8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 27u);
    ctx.gpr[31] = (0x0881ACF8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881ACF8u) goto L_0881ACF8;
    return;
L_0881ACF8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[31] = (0x0881AD08u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AD08u) goto L_0881AD08;
    return;
L_0881AD08:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[31] = (0x0881AD18u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AD18u) goto L_0881AD18;
    return;
L_0881AD18:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[31] = (0x0881AD28u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AD28u) goto L_0881AD28;
    return;
L_0881AD28:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 31u);
    ctx.gpr[31] = (0x0881AD38u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AD38u) goto L_0881AD38;
    return;
L_0881AD38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881ADF0;
      }
      goto L_0881AD40;
    }
L_0881AD40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 20u);
      if (branch_taken) {
          goto L_0881AD68;
      }
      goto L_0881AD50;
    }
L_0881AD50:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0881AD84;
      }
      goto L_0881AD5C;
    }
L_0881AD5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881ADF0;
      }
      goto L_0881AD64;
    }
L_0881AD64:
    ctx.gpr[5] = (0u | 20u);
    goto L_0881AD68;
L_0881AD68:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0881AD84;
      }
      goto L_0881AD70;
    }
L_0881AD70:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[31] = (0x0881AD80u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AD80u) goto L_0881AD80;
    return;
L_0881AD80:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0881AD84;
L_0881AD84:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881AD90u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881AD90u) goto L_0881AD90;
    return;
L_0881AD90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881ADF0;
      }
      goto L_0881AD98;
    }
L_0881AD98:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881ADA8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881ADA8u) goto L_0881ADA8;
    return;
L_0881ADA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881ADF0;
      }
      goto L_0881ADB0;
    }
L_0881ADB0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x0881ADC0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881ADC0u) goto L_0881ADC0;
    return;
L_0881ADC0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x0881ADD0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881ADD0u) goto L_0881ADD0;
    return;
L_0881ADD0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[31] = (0x0881ADE0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881ADE0u) goto L_0881ADE0;
    return;
L_0881ADE0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[31] = (0x0881ADF0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 483u, 0x088162F8u>(ctx, &aot_mem) && ctx.pc == 0x0881ADF0u) goto L_0881ADF0;
    return;
L_0881ADF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881AE04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881B340;
      }
      goto L_0881AE3C;
    }
L_0881AE3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(316)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] << 6u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] & 32u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] & 64u);
      if (branch_taken) {
          goto L_0881AE9C;
      }
      goto L_0881AE64;
    }
L_0881AE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
        goto L_0881B260;
    }
    goto L_0881AE74;
L_0881AE74:
    ctx.gpr[31] = (0x0881AE7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 358u, 0x08815AD4u>(ctx, &aot_mem) && ctx.pc == 0x0881AE7Cu) goto L_0881AE7C;
    return;
L_0881AE7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B25C;
      }
      goto L_0881AE9C;
    }
L_0881AE9C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] & 2048u);
      if (branch_taken) {
          goto L_0881AEE0;
      }
      goto L_0881AEA4;
    }
L_0881AEA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0881AECC;
      }
      goto L_0881AEB4;
    }
L_0881AEB4:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B25C;
      }
      goto L_0881AECC;
    }
L_0881AECC:
    ctx.gpr[31] = (0x0881AED4u);
    // nop
    goto L_088187A0;
L_0881AED4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0881B260;
      }
      goto L_0881AEDC;
    }
L_0881AEDC:
    ctx.gpr[7] = (ctx.gpr[6] & 2048u);
    goto L_0881AEE0;
L_0881AEE0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] & 128u);
      if (branch_taken) {
          goto L_0881AF4C;
      }
      goto L_0881AEE8;
    }
L_0881AEE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 1024u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881AF1C;
      }
      goto L_0881AEF8;
    }
L_0881AEF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881AF10;
      }
      goto L_0881AF00;
    }
L_0881AF00:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881AF3C;
      }
      goto L_0881AF10;
    }
L_0881AF10:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881AF3C;
      }
      goto L_0881AF1C;
    }
L_0881AF1C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881AF34;
      }
      goto L_0881AF28;
    }
L_0881AF28:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881AF3C;
      }
      goto L_0881AF34;
    }
L_0881AF34:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    goto L_0881AF3C;
L_0881AF3C:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B25C;
      }
      goto L_0881AF4C;
    }
L_0881AF4C:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_0881AFC4;
      }
      goto L_0881AF54;
    }
L_0881AF54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 1024u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0881AF88;
      }
      goto L_0881AF64;
    }
L_0881AF64:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881AF7C;
      }
      goto L_0881AF6C;
    }
L_0881AF6C:
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881AFA8;
      }
      goto L_0881AF7C;
    }
L_0881AF7C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881AFA8;
      }
      goto L_0881AF88;
    }
L_0881AF88:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881AFA0;
      }
      goto L_0881AF94;
    }
L_0881AF94:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881AFA8;
      }
      goto L_0881AFA0;
    }
L_0881AFA0:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    goto L_0881AFA8;
L_0881AFA8:
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B25C;
      }
      goto L_0881AFC4;
    }
L_0881AFC4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 256u);
      if (branch_taken) {
          goto L_0881B010;
      }
      goto L_0881AFCC;
    }
L_0881AFCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 7u);
      if (branch_taken) {
          goto L_0881B004;
      }
      goto L_0881AFDC;
    }
L_0881AFDC:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881AFF8;
      }
      goto L_0881AFEC;
    }
L_0881AFEC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B000;
      }
      goto L_0881AFF8;
    }
L_0881AFF8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    goto L_0881B000;
L_0881B000:
    ctx.gpr[4] = (0u | 7u);
    goto L_0881B004;
L_0881B004:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B25C;
      }
      goto L_0881B010;
    }
L_0881B010:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
        goto L_0881B08C;
    }
    goto L_0881B018;
L_0881B018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
        goto L_0881B260;
    }
    goto L_0881B024;
L_0881B024:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 1024u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0881B058;
      }
      goto L_0881B034;
    }
L_0881B034:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881B048;
      }
      goto L_0881B03C;
    }
L_0881B03C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B07C;
      }
      goto L_0881B048;
    }
L_0881B048:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B07C;
      }
      goto L_0881B058;
    }
L_0881B058:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881B074;
      }
      goto L_0881B068;
    }
L_0881B068:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B07C;
      }
      goto L_0881B074;
    }
L_0881B074:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    goto L_0881B07C;
L_0881B07C:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B25C;
      }
      goto L_0881B08C;
    }
L_0881B08C:
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 2u);
      if (branch_taken) {
          goto L_0881B130;
      }
      goto L_0881B098;
    }
L_0881B098:
    ctx.gpr[5] = (0u | 31u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
        goto L_0881B0CC;
    }
    goto L_0881B0A4;
L_0881B0A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(312)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881B0BC;
      }
      goto L_0881B0B0;
    }
L_0881B0B0:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(312), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B25C;
      }
      goto L_0881B0BC;
    }
L_0881B0BC:
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(312), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B25C;
      }
      goto L_0881B0CC;
    }
L_0881B0CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881B0E0;
      }
      goto L_0881B0D4;
    }
L_0881B0D4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B120;
      }
      goto L_0881B0E0;
    }
L_0881B0E0:
    ctx.gpr[31] = (0x0881B0E8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088180A8;
L_0881B0E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_0881B114;
      }
      goto L_0881B0F0;
    }
L_0881B0F0:
    ctx.gpr[4] = (0u | 21u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881B108;
      }
      goto L_0881B0FC;
    }
L_0881B0FC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B120;
      }
      goto L_0881B108;
    }
L_0881B108:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B120;
      }
      goto L_0881B114;
    }
L_0881B114:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    goto L_0881B120;
L_0881B120:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B25C;
      }
      goto L_0881B130;
    }
L_0881B130:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 4u);
      if (branch_taken) {
          goto L_0881B1A4;
      }
      goto L_0881B138;
    }
L_0881B138:
    ctx.gpr[5] = (0u | 31u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
        goto L_0881B16C;
    }
    goto L_0881B144;
L_0881B144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(312)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881B160;
      }
      goto L_0881B154;
    }
L_0881B154:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(312), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B25C;
      }
      goto L_0881B160;
    }
L_0881B160:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(312), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B25C;
      }
      goto L_0881B16C;
    }
L_0881B16C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881B18C;
      }
      goto L_0881B180;
    }
L_0881B180:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B194;
      }
      goto L_0881B18C;
    }
L_0881B18C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    goto L_0881B194;
L_0881B194:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B25C;
      }
      goto L_0881B1A4;
    }
L_0881B1A4:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[5] & 8u);
        goto L_0881B1F8;
    }
    goto L_0881B1AC;
L_0881B1AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881B1EC;
      }
      goto L_0881B1B4;
    }
L_0881B1B4:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(316), ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(316)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881B25C;
      }
      goto L_0881B1D0;
    }
L_0881B1D0:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(316), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(316)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(316), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B25C;
      }
      goto L_0881B1EC;
    }
L_0881B1EC:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(316), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B25C;
      }
      goto L_0881B1F8;
    }
L_0881B1F8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 30 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881B25C;
      }
      goto L_0881B200;
    }
L_0881B200:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 31 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881B240;
      }
      goto L_0881B208;
    }
L_0881B208:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(316), ctx.gpr[20]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(316)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[20] != ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
        goto L_0881B260;
    }
    goto L_0881B224;
L_0881B224:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(316), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(316)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(316), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B25C;
      }
      goto L_0881B240;
    }
L_0881B240:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 31u);
      if (branch_taken) {
          goto L_0881B254;
      }
      goto L_0881B248;
    }
L_0881B248:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(316), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B25C;
      }
      goto L_0881B254;
    }
L_0881B254:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(316), ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    goto L_0881B25C;
L_0881B25C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    goto L_0881B260;
L_0881B260:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881B340;
      }
      goto L_0881B268;
    }
L_0881B268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0881B340;
      }
      goto L_0881B274;
    }
L_0881B274:
    ctx.gpr[31] = (0x0881B27Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_088197E4;
L_0881B27C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[20] << (ctx.gpr[2] & 31u));
    ctx.gpr[7] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
      if (branch_taken) {
          goto L_0881B2A0;
      }
      goto L_0881B298;
    }
L_0881B298:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    goto L_0881B2A0;
L_0881B2A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[18] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_0881B2E8;
      }
      goto L_0881B2B8;
    }
L_0881B2B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1628)));
    ctx.gpr[31] = (0x0881B2C4u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881B2C4u) goto L_0881B2C4;
    return;
L_0881B2C4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
        goto L_0881B2EC;
    }
    goto L_0881B2CC;
L_0881B2CC:
    ctx.gpr[31] = (0x0881B2D4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_088197E4;
L_0881B2D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (ctx.gpr[20] << (ctx.gpr[2] & 31u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_0881B2E8;
L_0881B2E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    goto L_0881B2EC;
L_0881B2EC:
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
      if (branch_taken) {
          goto L_0881B31C;
      }
      goto L_0881B2F8;
    }
L_0881B2F8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881B314;
      }
      goto L_0881B304;
    }
L_0881B304:
    ctx.gpr[4] = (0u - ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u - ctx.gpr[19]);
      if (branch_taken) {
          goto L_0881B318;
      }
      goto L_0881B314;
    }
L_0881B314:
    ctx.gpr[19] = (ctx.gpr[19] & 3u);
    goto L_0881B318;
L_0881B318:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    goto L_0881B31C;
L_0881B31C:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0881B340;
      }
      goto L_0881B338;
    }
L_0881B338:
    ctx.gpr[31] = (0x0881B340u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 58u, 0x0881C2E8u>(ctx, &aot_mem) && ctx.pc == 0x0881B340u) goto L_0881B340;
    return;
L_0881B340:
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
L_0881B364:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-656));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881B3B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27240));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881B3B4u) goto L_0881B3B4;
    return;
L_0881B3B4:
    ctx.gpr[6] = (16800u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (16896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881B3D4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x0881B3D4u) goto L_0881B3D4;
    return;
L_0881B3D4:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881B3E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27264));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881B3E4u) goto L_0881B3E4;
    return;
L_0881B3E4:
    ctx.gpr[6] = (16960u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0881B3FCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x0881B3FCu) goto L_0881B3FC;
    return;
L_0881B3FC:
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(264));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881B42Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27312));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881B42Cu) goto L_0881B42C;
    return;
L_0881B42C:
    ctx.gpr[6] = (16992u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0881B444u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x0881B444u) goto L_0881B444;
    return;
L_0881B444:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27328));
    ctx.gpr[31] = (0x0881B460u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881B460u) goto L_0881B460;
    return;
L_0881B460:
    ctx.gpr[6] = (17024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0881B478u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x0881B478u) goto L_0881B478;
    return;
L_0881B478:
    ctx.gpr[5] = (0u | 72u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), 0u);
    ctx.gpr[4] = (0u | 164u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 248u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 40u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[6]);
    ctx.gpr[6] = (0u | 136u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 224u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[4]);
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(316)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[5]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[23] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1360));
    ctx.gpr[20] = (2219u << 16u);
    ctx.gpr[22] = (2219u << 16u);
    ctx.gpr[30] = (2219u << 16u);
    ctx.gpr[5] = (17008u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[16]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(28));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(27088));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(26596));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(27348));
    goto L_0881B50C;
L_0881B50C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
        goto L_0881B6B4;
    }
    goto L_0881B518;
L_0881B518:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
      if (branch_taken) {
          goto L_0881B534;
      }
      goto L_0881B52C;
    }
L_0881B52C:
    ctx.gpr[21] = (65535u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(255));
    goto L_0881B534;
L_0881B534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
    goto L_0881B548;
L_0881B548:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881B580;
      }
      goto L_0881B554;
    }
L_0881B554:
    if (static_cast<std::int32_t>(ctx.gpr[16]) < 0) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
        goto L_0881B5F4;
    }
    goto L_0881B55C;
L_0881B55C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0881B59C;
      }
      goto L_0881B564;
    }
L_0881B564:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881B574u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881B574u) goto L_0881B574;
    return;
L_0881B574:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
      if (branch_taken) {
          goto L_0881B5F4;
      }
      goto L_0881B57C;
    }
L_0881B57C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    goto L_0881B580;
L_0881B580:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881B5B0;
      }
      goto L_0881B588;
    }
L_0881B588:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881B5D4;
      }
      goto L_0881B590;
    }
L_0881B590:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
      if (branch_taken) {
          goto L_0881B5F4;
      }
      goto L_0881B598;
    }
L_0881B598:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0881B59C;
L_0881B59C:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0881B5A8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881B5A8u) goto L_0881B5A8;
    return;
L_0881B5A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
      if (branch_taken) {
          goto L_0881B5F4;
      }
      goto L_0881B5B0;
    }
L_0881B5B0:
    ctx.gpr[31] = (0x0881B5B8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0881B5B8u) goto L_0881B5B8;
    return;
L_0881B5B8:
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881B5CCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881B5CCu) goto L_0881B5CC;
    return;
L_0881B5CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
      if (branch_taken) {
          goto L_0881B5F4;
      }
      goto L_0881B5D4;
    }
L_0881B5D4:
    ctx.gpr[31] = (0x0881B5DCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0881B5DCu) goto L_0881B5DC;
    return;
L_0881B5DC:
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881B5F0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881B5F0u) goto L_0881B5F0;
    return;
L_0881B5F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    goto L_0881B5F4;
L_0881B5F4:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(84));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881B610u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x0881B610u) goto L_0881B610;
    return;
L_0881B610:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0881B644;
      }
      goto L_0881B61C;
    }
L_0881B61C:
    ctx.gpr[31] = (0x0881B624u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881B624u) goto L_0881B624;
    return;
L_0881B624:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(560)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(84));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881B644u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x0881B644u) goto L_0881B644;
    return;
L_0881B644:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881B548;
      }
      goto L_0881B654;
    }
L_0881B654:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(316)));
    if (ctx.gpr[5] != ctx.gpr[4]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
        goto L_0881B6A8;
    }
    goto L_0881B66C;
L_0881B66C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0881B67Cu);
    ctx.gpr[6] = (0u | 512u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0881B67Cu) goto L_0881B67C;
    return;
L_0881B67C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.gpr[31] = (0x0881B688u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881B688u) goto L_0881B688;
    return;
L_0881B688:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-256));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0881B69Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x0881B69Cu) goto L_0881B69C;
    return;
L_0881B69C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(316)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    goto L_0881B6A8;
L_0881B6A8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    goto L_0881B6B4;
L_0881B6B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[6]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0881B50C;
      }
      goto L_0881B6E0;
    }
L_0881B6E0:
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881B730;
      }
      goto L_0881B6EC;
    }
L_0881B6EC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(312)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1596)));
    ctx.gpr[5] = (65409u << 16u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1652)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881B718u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27356));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881B718u) goto L_0881B718;
    return;
L_0881B718:
    ctx.gpr[6] = (17040u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0881B730u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x0881B730u) goto L_0881B730;
    return;
L_0881B730:
    ctx.gpr[31] = (0x0881B738u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    goto L_08818744;
L_0881B738:
    ctx.gpr[5] = (65281u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32640));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881B754u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27376));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881B754u) goto L_0881B754;
    return;
L_0881B754:
    ctx.gpr[6] = (17072u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0881B76Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x0881B76Cu) goto L_0881B76C;
    return;
L_0881B76C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881B7A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < 33 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0881B860;
      }
      goto L_0881B7EC;
    }
L_0881B7EC:
    ctx.gpr[19] = (2221u << 16u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-1608)));
      if (branch_taken) {
          goto L_0881B80C;
      }
      goto L_0881B7F8;
    }
L_0881B7F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_0881B890;
      }
      goto L_0881B804;
    }
L_0881B804:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881B898;
      }
      goto L_0881B80C;
    }
L_0881B80C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1560));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1636)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0881B84Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27400));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881B84Cu) goto L_0881B84C;
    return;
L_0881B84C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(164), 0u);
    ctx.gpr[31] = (0x0881B860u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    goto L_08818B84;
L_0881B860:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881B890:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1600)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_0881B898;
L_0881B898:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[22] << 6u);
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[22] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0881BC94;
      }
      goto L_0881B8B0;
    }
L_0881B8B0:
    ctx.gpr[22] = (ctx.gpr[22] << 2u);
    ctx.gpr[1] = (2219u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[22]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28080)));
    jump_target = ctx.gpr[1];
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881B8C8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1636)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0881B8F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27416));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881B8F0u) goto L_0881B8F0;
    return;
L_0881B8F0:
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    goto L_0881B8F4;
L_0881B8F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BCD4;
      }
      goto L_0881B8FC;
    }
L_0881B8FC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1628)));
    ctx.gpr[31] = (0x0881B90Cu);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881B90Cu) goto L_0881B90C;
    return;
L_0881B90C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BCD4;
      }
      goto L_0881B914;
    }
L_0881B914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1636)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0881B934u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27432));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881B934u) goto L_0881B934;
    return;
L_0881B934:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0881BCD4;
      }
      goto L_0881B93C;
    }
L_0881B93C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1628)));
    ctx.gpr[31] = (0x0881B950u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881B950u) goto L_0881B950;
    return;
L_0881B950:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0881BCD4;
      }
      goto L_0881B958;
    }
L_0881B958:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0881B968u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0881B968u) goto L_0881B968;
    return;
L_0881B968:
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[31] = (0x0881B974u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27104));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0881B974u) goto L_0881B974;
    return;
L_0881B974:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0881B984u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0881B984u) goto L_0881B984;
    return;
L_0881B984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1604)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1636)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0881B9ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27188));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881B9ACu) goto L_0881B9AC;
    return;
L_0881B9AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0881BCD4;
      }
      goto L_0881B9B4;
    }
L_0881B9B4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1628)));
    ctx.gpr[31] = (0x0881B9C4u);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881B9C4u) goto L_0881B9C4;
    return;
L_0881B9C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BCD4;
      }
      goto L_0881B9CC;
    }
L_0881B9CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1636)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[7] = (ctx.gpr[22] + static_cast<std::uint32_t>(-22));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0881B9F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27448));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881B9F0u) goto L_0881B9F0;
    return;
L_0881B9F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0881BCD4;
      }
      goto L_0881B9F8;
    }
L_0881B9F8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[23] = (2221u << 16u);
    ctx.gpr[31] = (0x0881BA08u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-1632)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881BA08u) goto L_0881BA08;
    return;
L_0881BA08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BCD4;
      }
      goto L_0881BA10;
    }
L_0881BA10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-1632)));
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(1280));
    ctx.gpr[31] = (0x0881BA2Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881BA2Cu) goto L_0881BA2C;
    return;
L_0881BA2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_0881BA4C;
      }
      goto L_0881BA34;
    }
L_0881BA34:
    ctx.gpr[31] = (0x0881BA3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26724));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0881BA3Cu) goto L_0881BA3C;
    return;
L_0881BA3C:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[2]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[21] = (ctx.gpr[21] & 1u);
    goto L_0881BA4C;
L_0881BA4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1636)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0881BA70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27200));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881BA70u) goto L_0881BA70;
    return;
L_0881BA70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0881BCD4;
      }
      goto L_0881BA78;
    }
L_0881BA78:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1632)));
    ctx.gpr[31] = (0x0881BA88u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881BA88u) goto L_0881BA88;
    return;
L_0881BA88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2219u << 16u);
      if (branch_taken) {
          goto L_0881BCD4;
      }
      goto L_0881BA90;
    }
L_0881BA90:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0881BA9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27464));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881BA9Cu) goto L_0881BA9C;
    return;
L_0881BA9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[20] = (2221u << 16u);
      if (branch_taken) {
          goto L_0881BAEC;
      }
      goto L_0881BAA4;
    }
L_0881BAA4:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0881BAB4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27476));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881BAB4u) goto L_0881BAB4;
    return;
L_0881BAB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_0881BAF0;
      }
      goto L_0881BABC;
    }
L_0881BABC:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0881BACCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27488));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881BACCu) goto L_0881BACC;
    return;
L_0881BACC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_0881BAF0;
      }
      goto L_0881BAD4;
    }
L_0881BAD4:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0881BAE4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27500));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881BAE4u) goto L_0881BAE4;
    return;
L_0881BAE4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
        goto L_0881BBD4;
    }
    goto L_0881BAEC;
L_0881BAEC:
    ctx.gpr[4] = (2219u << 16u);
    goto L_0881BAF0;
L_0881BAF0:
    ctx.gpr[31] = (0x0881BAF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26596));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0881BAF8u) goto L_0881BAF8;
    return;
L_0881BAF8:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 67 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0881BB30;
      }
      goto L_0881BB10;
    }
L_0881BB10:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2219u << 16u);
      if (branch_taken) {
          goto L_0881BB50;
      }
      goto L_0881BB1C;
    }
L_0881BB1C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 66 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BB44;
      }
      goto L_0881BB28;
    }
L_0881BB28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0881BB4C;
      }
      goto L_0881BB30;
    }
L_0881BB30:
    ctx.gpr[5] = (0u | 70u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[21] = (0u | 3u);
        goto L_0881BB4C;
    }
    goto L_0881BB3C;
L_0881BB3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (2219u << 16u);
      if (branch_taken) {
          goto L_0881BB50;
      }
      goto L_0881BB44;
    }
L_0881BB44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 2u);
      if (branch_taken) {
          goto L_0881BB4C;
      }
      goto L_0881BB4C;
    }
L_0881BB4C:
    ctx.gpr[5] = (2219u << 16u);
    goto L_0881BB50;
L_0881BB50:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x0881BB60u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27512));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0881BB60u) goto L_0881BB60;
    return;
L_0881BB60:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(67));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x0881BB74u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27516));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0881BB74u) goto L_0881BB74;
    return;
L_0881BB74:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(70));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x0881BB88u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27520));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0881BB88u) goto L_0881BB88;
    return;
L_0881BB88:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(73));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x0881BB9Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27524));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0881BB9Cu) goto L_0881BB9C;
    return;
L_0881BB9C:
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[8] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-1608)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-1636)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(64));
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0881BBCCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27528));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881BBCCu) goto L_0881BBCC;
    return;
L_0881BBCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BBF0;
      }
      goto L_0881BBD4;
    }
L_0881BBD4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-1608)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-1636)));
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0881BBF0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27188));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881BBF0u) goto L_0881BBF0;
    return;
L_0881BBF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0881BCD4;
      }
      goto L_0881BBF8;
    }
L_0881BBF8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1632)));
    ctx.gpr[31] = (0x0881BC08u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881BC08u) goto L_0881BC08;
    return;
L_0881BC08:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2219u << 16u);
      if (branch_taken) {
          goto L_0881BCD4;
      }
      goto L_0881BC10;
    }
L_0881BC10:
    ctx.gpr[20] = (0u | 49u);
    ctx.gpr[31] = (0x0881BC1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27540));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0881BC1Cu) goto L_0881BC1C;
    return;
L_0881BC1C:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-1608)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1636)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0881BC48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27188));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881BC48u) goto L_0881BC48;
    return;
L_0881BC48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0881BCD4;
      }
      goto L_0881BC50;
    }
L_0881BC50:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1632)));
    ctx.gpr[31] = (0x0881BC60u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881BC60u) goto L_0881BC60;
    return;
L_0881BC60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BCD4;
      }
      goto L_0881BC68;
    }
L_0881BC68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1636)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0881BC8Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27188));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881BC8Cu) goto L_0881BC8C;
    return;
L_0881BC8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0881BCD4;
      }
      goto L_0881BC94;
    }
L_0881BC94:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1632)));
    ctx.gpr[31] = (0x0881BCA4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881BCA4u) goto L_0881BCA4;
    return;
L_0881BCA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BCD4;
      }
      goto L_0881BCAC;
    }
L_0881BCAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-1608)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1636)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0881BCD0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27188));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881BCD0u) goto L_0881BCD0;
    return;
L_0881BCD0:
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    goto L_0881BCD4;
L_0881BCD4:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BE94;
      }
      goto L_0881BCDC;
    }
L_0881BCDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    ctx.gpr[5] = (0u | 22u);
      if (branch_taken) {
          goto L_0881BE50;
      }
      goto L_0881BCEC;
    }
L_0881BCEC:
    ctx.gpr[5] = (ctx.gpr[22] << 5u);
    ctx.gpr[6] = (ctx.gpr[22] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1360));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0881BD30;
      }
      goto L_0881BD14;
    }
L_0881BD14:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(320), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[31] = (0x0881BD28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08818B84;
L_0881BD28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BE94;
      }
      goto L_0881BD30;
    }
L_0881BD30:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0881BD4C;
      }
      goto L_0881BD38;
    }
L_0881BD38:
    ctx.gpr[6] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 15u);
      if (branch_taken) {
          goto L_0881BD4C;
      }
      goto L_0881BD44;
    }
L_0881BD44:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 5u);
      if (branch_taken) {
          goto L_0881BD78;
      }
      goto L_0881BD4C;
    }
L_0881BD4C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0881BE28;
      }
      goto L_0881BD58;
    }
L_0881BD58:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), ctx.gpr[18]);
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(328));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-1608)));
    ctx.gpr[31] = (0x0881BD70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27544));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881BD70u) goto L_0881BD70;
    return;
L_0881BD70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0881BE28;
      }
      goto L_0881BD78;
    }
L_0881BD78:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 7u);
      if (branch_taken) {
          goto L_0881BD88;
      }
      goto L_0881BD80;
    }
L_0881BD80:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_0881BDB4;
      }
      goto L_0881BD88;
    }
L_0881BD88:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(472)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0881BE28;
      }
      goto L_0881BD94;
    }
L_0881BD94:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(472), ctx.gpr[18]);
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(328));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-1608)));
    ctx.gpr[31] = (0x0881BDACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27560));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881BDACu) goto L_0881BDAC;
    return;
L_0881BDAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0881BE28;
      }
      goto L_0881BDB4;
    }
L_0881BDB4:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 12u);
      if (branch_taken) {
          goto L_0881BDCC;
      }
      goto L_0881BDBC;
    }
L_0881BDBC:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 13u);
      if (branch_taken) {
          goto L_0881BDCC;
      }
      goto L_0881BDC4;
    }
L_0881BDC4:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[6];
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[22]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881BDF8;
      }
      goto L_0881BDCC;
    }
L_0881BDCC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(476)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0881BE28;
      }
      goto L_0881BDD8;
    }
L_0881BDD8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(476), ctx.gpr[18]);
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(328));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-1608)));
    ctx.gpr[31] = (0x0881BDF0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27576));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881BDF0u) goto L_0881BDF0;
    return;
L_0881BDF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0881BE28;
      }
      goto L_0881BDF8;
    }
L_0881BDF8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881BE28;
      }
      goto L_0881BE00;
    }
L_0881BE00:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(480)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0881BE28;
      }
      goto L_0881BE0C;
    }
L_0881BE0C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(480), ctx.gpr[18]);
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(328));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-1608)));
    ctx.gpr[31] = (0x0881BE24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27592));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881BE24u) goto L_0881BE24;
    return;
L_0881BE24:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_0881BE28;
L_0881BE28:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0881BE94;
      }
      goto L_0881BE30;
    }
L_0881BE30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(320), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(164), 0u);
    ctx.gpr[31] = (0x0881BE48u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    goto L_08818B84;
L_0881BE48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881BE94;
      }
      goto L_0881BE50;
    }
L_0881BE50:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(320), 0u);
      if (branch_taken) {
          goto L_0881BE84;
      }
      goto L_0881BE58;
    }
L_0881BE58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(480)));
    if (ctx.gpr[5] == ctx.gpr[18]) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(320), ctx.gpr[18]);
        goto L_0881BE84;
    }
    goto L_0881BE64;
L_0881BE64:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(480), ctx.gpr[18]);
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(328));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-1608)));
    ctx.gpr[31] = (0x0881BE7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27592));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881BE7Cu) goto L_0881BE7C;
    return;
L_0881BE7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(320), ctx.gpr[18]);
    goto L_0881BE84;
L_0881BE84:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(164), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[31] = (0x0881BE94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08818B84;
L_0881BE94:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881BEC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-460)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (2221u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 3u, 0x0881C010u>(ctx, &aot_mem); return;
      }
      goto L_0881BF08;
    }
L_0881BF08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0881BF28;
      }
      goto L_0881BF18;
    }
L_0881BF18:
    ctx.gpr[31] = (0x0881BF20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 402u, 0x08815E54u>(ctx, &aot_mem) && ctx.pc == 0x0881BF20u) goto L_0881BF20;
    return;
L_0881BF20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[20] = (0u | 0u);
    goto L_0881BF28;
L_0881BF28:
    ctx.gpr[22] = (0u | 16u);
    ctx.gpr[21] = (0u | 0u);
    goto L_0881BF30;
L_0881BF30:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_0881BFB4;
    }
    goto L_0881BF40;
L_0881BF40:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[22];
    ctx.gpr[23] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0881BF90;
      }
      goto L_0881BF48;
    }
L_0881BF48:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < 21 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_0881BFB4;
    }
    goto L_0881BF54;
L_0881BF54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881BF58;
L_0881BF58:
    ctx.gpr[31] = (0x0881BF60u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 760u, 0x088175ACu>(ctx, &aot_mem) && ctx.pc == 0x0881BF60u) goto L_0881BF60;
    return;
L_0881BF60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881BF6Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_0881AB38;
L_0881BF6C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881BF78u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_0881A4E4;
L_0881BF78:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0881BF58;
      }
      goto L_0881BF88;
    }
L_0881BF88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881BFB0;
      }
      goto L_0881BF90;
    }
L_0881BF90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881BF9Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_0881AB38;
L_0881BF9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881BFA8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_0881A4E4;
L_0881BFA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881BFB0;
      }
      goto L_0881BFB0;
    }
L_0881BFB0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0881BFB4;
L_0881BFB4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881BF30;
      }
      goto L_0881BFC0;
    }
L_0881BFC0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
        goto L_0881BFE8;
    }
    goto L_0881BFD4;
L_0881BFD4:
    ctx.gpr[31] = (0x0881BFDCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881B7A8;
L_0881BFDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-460)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 2u, 0x0881C00Cu>(ctx, &aot_mem); return;
      }
      goto L_0881BFE8;
    }
L_0881BFE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0881BFFCu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_088193F0;
L_0881BFFC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
        goto L_0881BFE8;
    }
    (void)rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1u, 0x0881C004u>(ctx, &aot_mem); return;
}

void recomp_unit_0005(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0005_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_5(Runtime &runtime) {
    runtime.register_generated_unit(5u, 0x08818000u, 16384u, &recomp_unit_0005, &recomp_unit_0005_entry);
    runtime.register_function(0x08818000u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881800Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818028u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818030u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818038u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818050u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881805Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818070u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818098u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088180A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088180CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818114u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818138u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818144u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818158u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818160u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818164u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818174u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818180u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818198u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088181D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881821Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818228u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881825Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818260u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818268u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818270u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881828Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818298u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088182A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088182ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088182B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088182C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088182C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088182CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088182D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088182E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088182E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088182F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088182FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818304u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818310u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818354u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881836Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818374u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818384u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881838Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088183A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088183B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088183BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088183C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088183D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088183DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088183F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818400u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818404u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881840Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818418u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818450u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818488u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881848Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818490u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881849Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088184D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818528u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818538u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818540u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818554u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881855Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818564u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818580u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818584u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881858Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818594u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881859Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088185A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088185B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088185C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088185CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088185D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088185E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088185F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088185FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818600u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818630u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818680u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881868Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881869Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088186F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818700u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881870Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818714u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818718u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818744u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818750u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818754u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818764u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818770u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881877Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818788u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818798u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088187A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088187A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818804u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818850u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818860u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088188ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088188F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088188F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818900u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881890Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818918u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818920u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818928u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818934u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881893Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818944u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881894Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818958u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818960u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818968u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818970u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881897Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818984u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881898Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088189FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A10u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A14u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A2Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A34u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A44u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A4Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A64u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A84u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A8Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818A94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818AA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818AB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818ABCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818AF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B38u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B44u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B64u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818B84u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BC0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BD0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818BF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C10u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C84u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818C98u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CB8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818CF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D10u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D20u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D34u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D44u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818D4Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DA8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DB8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DF4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818DFCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E34u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818E8Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818EC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818ED8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818EE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F0Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F34u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818F98u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818FA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818FE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08818FF4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819000u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819010u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881901Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881902Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881903Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819060u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819064u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881906Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819098u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088190D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088190DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819100u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819108u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819110u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819118u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819128u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881913Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819140u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819144u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819160u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819178u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881918Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088191FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819204u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881920Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819218u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881921Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819224u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819234u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881923Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819244u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881924Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819254u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881925Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819264u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881926Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819274u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881927Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819288u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088192E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819320u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819340u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819344u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881935Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881936Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819374u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881937Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819390u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819394u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088193ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088193B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088193C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088193F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819414u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881942Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819440u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819448u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819454u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881947Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819490u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819498u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088194A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088194C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088194ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819500u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819508u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819518u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819534u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819550u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819590u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881959Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088195A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088195C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819604u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819624u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819638u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819640u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819648u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819670u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819678u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881968Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819694u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881969Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088196F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819704u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819720u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819730u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819740u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881974Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819754u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881976Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819778u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881978Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819798u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088197E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819808u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819838u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819848u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819850u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881985Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881986Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819874u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881987Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819894u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088198B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088198E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819924u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881992Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819934u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881993Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819948u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819950u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819958u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819960u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819964u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881996Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819978u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819988u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819994u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881999Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088199A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088199A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088199B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088199B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088199C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x088199F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A64u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A84u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819A8Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819AA8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819AB8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819AC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819AD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819AE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819AF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819AF4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819B30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819BA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819BA8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819BB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819BB8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819BC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819BCCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819BD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819BDCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819BE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819BF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C20u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C44u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C84u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819C98u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CBCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819CE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D14u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819D98u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DBCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DCCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DD0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819DECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E04u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E0Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E10u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E20u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E44u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819E90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819EA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819EB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819EBCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819EC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819ED0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819EDCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819EE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819EF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819EF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F14u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F2Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F38u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F64u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F98u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819F9Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819FA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819FC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819FD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819FE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819FE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x08819FECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A070u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A07Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A084u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A098u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A0A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A0ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A0C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A0D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A0E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A0ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A0F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A108u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A110u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A12Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A144u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A14Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A160u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A16Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A180u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A198u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A1B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A1B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A1E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A208u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A218u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A21Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A228u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A238u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A248u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A258u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A260u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A264u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A270u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A278u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A284u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A290u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A2F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A308u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A30Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A31Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A320u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A328u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A334u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A348u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A34Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A354u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A36Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A370u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A380u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A388u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A390u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A3F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A408u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A410u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A418u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A420u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A434u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A444u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A44Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A450u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A458u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A468u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A47Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A480u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A48Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A490u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A498u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A4ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A4C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A4C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A4E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A51Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A528u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A534u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A53Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A540u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A548u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A54Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A554u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A55Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A56Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A578u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A580u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A588u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A590u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A59Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A5A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A5B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A5C0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A5CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A5D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A5E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A5F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A5FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A608u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A614u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A620u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A62Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A638u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A644u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A64Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A658u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A664u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A670u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A67Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A688u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A694u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6D8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A6E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A700u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A70Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A718u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A720u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A72Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A738u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A744u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A74Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A758u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A764u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A770u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A778u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A784u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A78Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A798u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A7A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A7A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A7ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A7BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A7F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A800u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A80Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A814u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A818u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A820u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A824u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A830u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A838u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A848u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A854u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A85Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A864u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A86Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A87Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A88Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A89Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A8FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A90Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A91Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A92Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A93Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A94Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A95Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A964u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A974u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A984u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A994u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881A9F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA04u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA14u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA44u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA4Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AA90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAA8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAB8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAF4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AAFCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB0Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB14u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB38u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB8Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AB94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ABA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ABB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ABB8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ABC0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ABC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ABD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ABE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ABF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC38u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AC98u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACA8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACB8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACC8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ACF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD38u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD5Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD64u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD84u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AD98u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ADA8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ADB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ADC0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ADD0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ADE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881ADF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE04u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE64u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AE9Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AEA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AEB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AECCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AED4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AEDCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AEE0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AEE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AEF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF10u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF34u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF4Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF64u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AF94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFA0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFA8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFCCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFDCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881AFF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B000u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B004u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B010u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B018u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B024u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B034u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B03Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B048u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B058u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B068u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B074u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B07Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B08Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B098u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0BCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B0FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B108u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B114u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B120u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B130u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B138u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B144u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B154u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B160u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B16Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B180u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B18Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B194u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1A4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1D0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B1F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B200u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B208u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B224u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B240u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B248u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B254u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B25Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B260u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B268u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B274u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B27Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B298u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2A0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2E8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B2F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B304u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B314u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B318u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B31Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B338u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B340u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B364u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B3B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B3D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B3E4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B3FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B42Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B444u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B460u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B478u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B50Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B518u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B52Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B534u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B548u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B554u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B55Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B564u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B574u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B57Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B580u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B588u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B590u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B598u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B59Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5B8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5D4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5DCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B5F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B610u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B61Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B624u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B644u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B654u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B66Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B67Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B688u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B69Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B6A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B6B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B6E0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B6ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B718u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B730u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B738u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B754u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B76Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B7A8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B7ECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B7F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B804u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B80Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B84Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B860u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B890u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B898u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8B0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8C8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8F4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B8FCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B90Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B914u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B934u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B93Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B950u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B958u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B968u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B974u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B984u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9ACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9B4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9C4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9CCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9F0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881B9F8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA10u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA2Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA34u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA4Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BA9Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BABCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BACCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAE4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BAF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB10u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB3Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB44u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB4Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB74u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BB9Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BBCCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BBD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BBF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BBF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC10u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC1Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC68u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC8Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BC94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCA4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCD0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCDCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BCECu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD14u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD38u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD44u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD4Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD70u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD80u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BD94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDACu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDBCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDCCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDD8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDF0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BDF8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE00u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE0Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE24u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE50u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE64u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE7Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE84u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BE94u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BEC4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF08u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF18u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF20u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF28u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF30u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF40u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF48u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF54u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF58u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF60u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF6Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF78u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF88u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF90u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BF9Cu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BFA8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BFB0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BFB4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BFC0u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BFD4u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BFDCu, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BFE8u, &recomp_unit_0005, "recomp_unit_0005");
    runtime.register_function(0x0881BFFCu, &recomp_unit_0005, "recomp_unit_0005");
}
} // namespace psprecomp

#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0077[4090] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 3, 0, 0, 4, 0, 5, 0, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0,
    11, 0, 12, 0, 13, 0, 14, 0, 15, 16, 0, 17, 0, 0, 0, 0, 18, 0, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 0,
    25, 26, 27, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 0, 0, 37, 0,
    38, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 43, 0, 44, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 47,
    0, 0, 48, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 53, 0, 0, 54, 0, 0, 55, 0, 56, 0, 57, 0, 0, 58, 0, 0,
    59, 0, 60, 61, 0, 62, 0, 63, 0, 64, 0, 0, 65, 66, 0, 67, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0,
    0, 0, 0, 72, 0, 73, 0, 0, 74, 0, 75, 0, 76, 0, 0, 77, 0, 78, 79, 0, 0, 80, 0, 81, 0, 82, 0, 0, 83, 84, 85, 0,
    86, 0, 87, 0, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 0, 0, 91, 0, 92, 0, 93, 0, 94, 0, 0, 0, 95, 0, 96, 0, 97, 0,
    98, 0, 99, 0, 0, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 0, 106, 0, 107, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0,
    111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 119, 0, 120,
    0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 127, 0, 128, 0, 129, 0, 130, 0, 0, 131, 0, 0, 0,
    132, 0, 133, 0, 134, 0, 0, 135, 0, 136, 0, 137, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 0, 145, 0, 146, 0, 147, 0, 0, 0, 0, 0, 148, 0, 149,
    0, 150, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 159, 0, 160, 0,
    0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 166, 0, 167, 0, 0, 0, 168, 0, 0, 169, 170, 0, 0, 171, 0, 172,
    0, 173, 0, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 177, 0, 178, 0, 0, 0, 0, 179, 0, 180, 0, 0, 0, 0, 181, 0, 182, 0,
    0, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0,
    0, 191, 0, 192, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 199, 0, 200,
    0, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 209,
    0, 210, 0, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 0, 217, 0, 0, 218, 0, 219, 0, 0, 0, 220, 0,
    0, 221, 0, 222, 0, 223, 0, 224, 0, 225, 0, 0, 0, 226, 0, 0, 227, 228, 0, 0, 229, 0, 230, 0, 231, 0, 0, 232, 0, 0, 233, 0,
    234, 0, 235, 0, 0, 0, 0, 236, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 240, 0, 241, 0, 0, 0, 242, 0, 243, 0, 244, 0, 245, 0, 0, 0, 246, 0, 0, 247, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0,
    250, 0, 0, 251, 0, 252, 0, 0, 253, 0, 254, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 0, 258, 0, 0, 259,
    0, 0, 0, 260, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 0, 266, 0, 267, 0, 268, 0, 269, 0, 270, 0, 0, 0, 0, 0, 271, 0,
    0, 272, 0, 273, 0, 274, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 280, 0, 0, 0, 281, 0, 282, 0, 283, 0, 284,
    0, 285, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 292, 293, 0, 294, 0, 295, 296, 297, 0,
    0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 308, 309, 0,
    310, 311, 312, 0, 0, 313, 0, 314, 0, 315, 0, 316, 0, 317, 0, 0, 0, 0, 0, 318, 0, 319, 320, 0, 0, 321, 0, 322, 0, 323, 0, 0,
    0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 326, 0, 0, 0, 327, 0, 328, 0, 329, 0, 0, 330, 0, 0, 331, 0, 332, 0, 333, 0, 334, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 340, 0, 341, 0, 342, 0, 343, 0, 344, 0, 345, 0, 0, 0, 0, 0, 346, 0, 347,
    0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 354, 0,
    0, 355, 0, 0, 356, 0, 0, 357, 358, 359, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 363, 0, 0, 0, 0, 0, 364,
    0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 369, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0,
    373, 0, 374, 0, 0, 0, 375, 0, 0, 376, 0, 0, 377, 0, 378, 0, 379, 380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0,
    383, 384, 385, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0,
    0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0,
    0, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0,
    407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0,
    0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 415, 0, 416, 0, 417, 0, 418, 0, 0, 419, 420, 0, 421, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0,
    0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0,
    0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 433, 0, 434, 0, 435, 0, 0,
    0, 436, 0, 437, 0, 0, 438, 0, 0, 439, 0, 440, 0, 441, 0, 0, 0, 442, 0, 443, 0, 0, 444, 0, 0, 445, 0, 446, 0, 447, 0, 0,
    0, 448, 0, 449, 0, 450, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 455, 0, 456, 0, 0, 457, 0, 0, 0,
    0, 0, 458, 0, 459, 0, 460, 0, 0, 0, 0, 0, 461, 0, 462, 0, 463, 0, 0, 0, 0, 0, 464, 0, 465, 0, 466, 0, 0, 0, 0, 0,
    467, 0, 468, 0, 469, 0, 470, 0, 0, 0, 0, 0, 471, 0, 472, 0, 473, 0, 0, 474, 0, 475, 0, 476, 477, 0, 0, 478, 0, 0, 0, 479,
    0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0,
    0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0,
    0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0,
    497, 0, 498, 0, 499, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 504, 0, 0, 0, 0, 505, 506, 0, 0, 0, 507, 0,
    0, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 511, 0, 512, 0, 513, 0, 0, 0, 0, 514, 0, 515,
    0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 518, 0, 519, 0, 0, 520, 0, 521, 0, 522, 0, 523, 0, 524, 0, 525, 0, 526, 0, 0, 0, 0,
    0, 0, 527, 0, 528, 0, 0, 529, 0, 530, 0, 531, 0, 532, 0, 533, 0, 534, 0, 535, 0, 0, 536, 0, 537, 0, 0, 538, 0, 539, 0, 540,
    0, 541, 0, 542, 0, 0, 0, 543, 0, 0, 544, 0, 545, 0, 546, 0, 547, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0, 551,
    0, 552, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 558, 0, 0,
    0, 559, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0,
    0, 0, 0, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 572, 0, 0, 0, 573, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0,
    576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 579, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 581, 0, 0,
    0, 0, 0, 0, 0, 582, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0, 587, 0,
    588, 589, 0, 590, 0, 591, 0, 0, 0, 0, 0, 592, 0, 593, 0, 594, 0, 595, 0, 0, 0, 0, 0, 596, 597, 0, 598, 0, 0, 0, 599, 600,
    0, 0, 601, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0,
    605, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0,
    611, 0, 612, 0, 613, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 616, 0, 617, 0, 0,
    0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 630, 0, 0, 631, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0,
    0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0,
    649, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 657, 658, 0, 659, 0, 660, 0, 0, 661,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 0, 664, 0, 665, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 670, 671, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 679,
    0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 683, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 686, 0,
    0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 691, 692, 0, 0,
    693, 0, 0, 0, 0, 0, 0, 694, 695, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 698, 0, 699, 0, 0, 0, 0, 0, 0,
    0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 704, 0,
    0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0, 710,
    0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 714, 0, 0, 715, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 719, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 721,
    0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 724, 0, 0, 725, 0, 726, 0, 0, 727, 0, 0, 728, 0, 0, 0,
    0, 0, 0, 0, 729, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 732, 0, 0, 733, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 735, 736, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 738, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 742, 0, 0, 0, 0, 0, 743, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    746, 0, 0, 0, 747, 0, 748, 0, 749, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0,
    0, 755, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 758, 0, 0, 759, 0, 0, 0, 0, 0, 760, 0, 0, 761, 0, 0, 0, 762, 0,
    0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 770, 0, 771, 0, 772, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 777,
    0, 778, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 780, 0, 0, 0, 781, 0, 0, 0, 782, 0, 0, 783, 0, 0, 784,
    0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 787, 0, 0, 788, 0, 0, 0, 0, 0, 789, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 791, 0, 0, 0, 792, 0, 0, 793, 0, 0, 794, 0, 795, 0, 796, 0, 0, 0, 0, 0, 0, 797,
    0, 0, 798, 0, 0, 0, 0, 0, 799, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 803, 0, 804,
    0, 0, 0, 805, 0, 0, 0, 806, 0, 0, 0, 807, 0, 0, 0, 808, 0, 809, 0, 0, 0, 0, 810, 0, 811, 0, 0, 0, 0, 0, 0, 0,
    812, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 816, 0, 0, 817, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 818, 819, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 822, 0, 0, 823, 0, 824, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 826, 0, 0, 0, 827, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 831, 0, 832,
};
void recomp_unit_0077_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08938000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0077[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08938000;
    case 2u: goto L_08938034;
    case 3u: goto L_08938038;
    case 4u: goto L_08938044;
    case 5u: goto L_0893804C;
    case 6u: goto L_08938058;
    case 7u: goto L_08938060;
    case 8u: goto L_08938068;
    case 9u: goto L_08938070;
    case 10u: goto L_08938078;
    case 11u: goto L_08938080;
    case 12u: goto L_08938088;
    case 13u: goto L_08938090;
    case 14u: goto L_08938098;
    case 15u: goto L_089380A0;
    case 16u: goto L_089380A4;
    case 17u: goto L_089380AC;
    case 18u: goto L_089380C0;
    case 19u: goto L_089380CC;
    case 20u: goto L_089380D4;
    case 21u: goto L_089380DC;
    case 22u: goto L_089380E4;
    case 23u: goto L_089380EC;
    case 24u: goto L_089380F4;
    case 25u: goto L_08938100;
    case 26u: goto L_08938104;
    case 27u: goto L_08938108;
    case 28u: goto L_08938110;
    case 29u: goto L_08938118;
    case 30u: goto L_08938128;
    case 31u: goto L_08938138;
    case 32u: goto L_08938140;
    case 33u: goto L_08938150;
    case 34u: goto L_08938158;
    case 35u: goto L_08938160;
    case 36u: goto L_08938168;
    case 37u: goto L_08938178;
    case 38u: goto L_08938180;
    case 39u: goto L_08938188;
    case 40u: goto L_08938190;
    case 41u: goto L_08938198;
    case 42u: goto L_089381B8;
    case 43u: goto L_089381C0;
    case 44u: goto L_089381C8;
    case 45u: goto L_089381E8;
    case 46u: goto L_089381F0;
    case 47u: goto L_089381FC;
    case 48u: goto L_08938208;
    case 49u: goto L_08938214;
    case 50u: goto L_08938220;
    case 51u: goto L_0893822C;
    case 52u: goto L_08938238;
    case 53u: goto L_08938240;
    case 54u: goto L_0893824C;
    case 55u: goto L_08938258;
    case 56u: goto L_08938260;
    case 57u: goto L_08938268;
    case 58u: goto L_08938274;
    case 59u: goto L_08938280;
    case 60u: goto L_08938288;
    case 61u: goto L_0893828C;
    case 62u: goto L_08938294;
    case 63u: goto L_0893829C;
    case 64u: goto L_089382A4;
    case 65u: goto L_089382B0;
    case 66u: goto L_089382B4;
    case 67u: goto L_089382BC;
    case 68u: goto L_089382C4;
    case 69u: goto L_089382D4;
    case 70u: goto L_089382E4;
    case 71u: goto L_089382F8;
    case 72u: goto L_0893830C;
    case 73u: goto L_08938314;
    case 74u: goto L_08938320;
    case 75u: goto L_08938328;
    case 76u: goto L_08938330;
    case 77u: goto L_0893833C;
    case 78u: goto L_08938344;
    case 79u: goto L_08938348;
    case 80u: goto L_08938354;
    case 81u: goto L_0893835C;
    case 82u: goto L_08938364;
    case 83u: goto L_08938370;
    case 84u: goto L_08938374;
    case 85u: goto L_08938378;
    case 86u: goto L_08938380;
    case 87u: goto L_08938388;
    case 88u: goto L_08938398;
    case 89u: goto L_089383A8;
    case 90u: goto L_089383B0;
    case 91u: goto L_089383C0;
    case 92u: goto L_089383C8;
    case 93u: goto L_089383D0;
    case 94u: goto L_089383D8;
    case 95u: goto L_089383E8;
    case 96u: goto L_089383F0;
    case 97u: goto L_089383F8;
    case 98u: goto L_08938400;
    case 99u: goto L_08938408;
    case 100u: goto L_08938418;
    case 101u: goto L_08938420;
    case 102u: goto L_08938428;
    case 103u: goto L_08938430;
    case 104u: goto L_08938438;
    case 105u: goto L_08938440;
    case 106u: goto L_0893844C;
    case 107u: goto L_08938454;
    case 108u: goto L_08938468;
    case 109u: goto L_08938470;
    case 110u: goto L_08938478;
    case 111u: goto L_08938480;
    case 112u: goto L_08938488;
    case 113u: goto L_08938490;
    case 114u: goto L_08938498;
    case 115u: goto L_089384A0;
    case 116u: goto L_089384A8;
    case 117u: goto L_089384E0;
    case 118u: goto L_089384EC;
    case 119u: goto L_089384F4;
    case 120u: goto L_089384FC;
    case 121u: goto L_08938504;
    case 122u: goto L_08938510;
    case 123u: goto L_08938528;
    case 124u: goto L_08938530;
    case 125u: goto L_08938538;
    case 126u: goto L_08938540;
    case 127u: goto L_0893854C;
    case 128u: goto L_08938554;
    case 129u: goto L_0893855C;
    case 130u: goto L_08938564;
    case 131u: goto L_08938570;
    case 132u: goto L_08938580;
    case 133u: goto L_08938588;
    case 134u: goto L_08938590;
    case 135u: goto L_0893859C;
    case 136u: goto L_089385A4;
    case 137u: goto L_089385AC;
    case 138u: goto L_089385B8;
    case 139u: goto L_089385D8;
    case 140u: goto L_08938618;
    case 141u: goto L_08938628;
    case 142u: goto L_08938630;
    case 143u: goto L_08938638;
    case 144u: goto L_08938640;
    case 145u: goto L_0893864C;
    case 146u: goto L_08938654;
    case 147u: goto L_0893865C;
    case 148u: goto L_08938674;
    case 149u: goto L_0893867C;
    case 150u: goto L_08938684;
    case 151u: goto L_08938690;
    case 152u: goto L_08938698;
    case 153u: goto L_089386A0;
    case 154u: goto L_089386B8;
    case 155u: goto L_089386C0;
    case 156u: goto L_089386D0;
    case 157u: goto L_089386D8;
    case 158u: goto L_089386E0;
    case 159u: goto L_089386F0;
    case 160u: goto L_089386F8;
    case 161u: goto L_08938708;
    case 162u: goto L_08938714;
    case 163u: goto L_08938720;
    case 164u: goto L_0893872C;
    case 165u: goto L_08938738;
    case 166u: goto L_08938740;
    case 167u: goto L_08938748;
    case 168u: goto L_08938758;
    case 169u: goto L_08938764;
    case 170u: goto L_08938768;
    case 171u: goto L_08938774;
    case 172u: goto L_0893877C;
    case 173u: goto L_08938784;
    case 174u: goto L_08938794;
    case 175u: goto L_0893879C;
    case 176u: goto L_089387A4;
    case 177u: goto L_089387B8;
    case 178u: goto L_089387C0;
    case 179u: goto L_089387D4;
    case 180u: goto L_089387DC;
    case 181u: goto L_089387F0;
    case 182u: goto L_089387F8;
    case 183u: goto L_0893880C;
    case 184u: goto L_08938814;
    case 185u: goto L_0893882C;
    case 186u: goto L_08938834;
    case 187u: goto L_0893884C;
    case 188u: goto L_08938854;
    case 189u: goto L_08938868;
    case 190u: goto L_08938870;
    case 191u: goto L_08938884;
    case 192u: goto L_0893888C;
    case 193u: goto L_089388A0;
    case 194u: goto L_089388A8;
    case 195u: goto L_089388BC;
    case 196u: goto L_089388C4;
    case 197u: goto L_089388D8;
    case 198u: goto L_089388E0;
    case 199u: goto L_089388F4;
    case 200u: goto L_089388FC;
    case 201u: goto L_08938910;
    case 202u: goto L_08938918;
    case 203u: goto L_0893892C;
    case 204u: goto L_08938934;
    case 205u: goto L_08938948;
    case 206u: goto L_08938950;
    case 207u: goto L_08938964;
    case 208u: goto L_0893896C;
    case 209u: goto L_0893897C;
    case 210u: goto L_08938984;
    case 211u: goto L_08938994;
    case 212u: goto L_089389A0;
    case 213u: goto L_089389AC;
    case 214u: goto L_089389B8;
    case 215u: goto L_089389C0;
    case 216u: goto L_089389C8;
    case 217u: goto L_089389D4;
    case 218u: goto L_089389E0;
    case 219u: goto L_089389E8;
    case 220u: goto L_089389F8;
    case 221u: goto L_08938A04;
    case 222u: goto L_08938A0C;
    case 223u: goto L_08938A14;
    case 224u: goto L_08938A1C;
    case 225u: goto L_08938A24;
    case 226u: goto L_08938A34;
    case 227u: goto L_08938A40;
    case 228u: goto L_08938A44;
    case 229u: goto L_08938A50;
    case 230u: goto L_08938A58;
    case 231u: goto L_08938A60;
    case 232u: goto L_08938A6C;
    case 233u: goto L_08938A78;
    case 234u: goto L_08938A80;
    case 235u: goto L_08938A88;
    case 236u: goto L_08938A9C;
    case 237u: goto L_08938AA4;
    case 238u: goto L_08938AAC;
    case 239u: goto L_08938AD4;
    case 240u: goto L_08938B04;
    case 241u: goto L_08938B0C;
    case 242u: goto L_08938B1C;
    case 243u: goto L_08938B24;
    case 244u: goto L_08938B2C;
    case 245u: goto L_08938B34;
    case 246u: goto L_08938B44;
    case 247u: goto L_08938B50;
    case 248u: goto L_08938B54;
    case 249u: goto L_08938B78;
    case 250u: goto L_08938B80;
    case 251u: goto L_08938B8C;
    case 252u: goto L_08938B94;
    case 253u: goto L_08938BA0;
    case 254u: goto L_08938BA8;
    case 255u: goto L_08938BB0;
    case 256u: goto L_08938BDC;
    case 257u: goto L_08938BE4;
    case 258u: goto L_08938BF0;
    case 259u: goto L_08938BFC;
    case 260u: goto L_08938C0C;
    case 261u: goto L_08938C14;
    case 262u: goto L_08938C1C;
    case 263u: goto L_08938C24;
    case 264u: goto L_08938C2C;
    case 265u: goto L_08938C34;
    case 266u: goto L_08938C40;
    case 267u: goto L_08938C48;
    case 268u: goto L_08938C50;
    case 269u: goto L_08938C58;
    case 270u: goto L_08938C60;
    case 271u: goto L_08938C78;
    case 272u: goto L_08938C84;
    case 273u: goto L_08938C8C;
    case 274u: goto L_08938C94;
    case 275u: goto L_08938C9C;
    case 276u: goto L_08938CA8;
    case 277u: goto L_08938CB4;
    case 278u: goto L_08938CC0;
    case 279u: goto L_08938CCC;
    case 280u: goto L_08938CD4;
    case 281u: goto L_08938CE4;
    case 282u: goto L_08938CEC;
    case 283u: goto L_08938CF4;
    case 284u: goto L_08938CFC;
    case 285u: goto L_08938D04;
    case 286u: goto L_08938D1C;
    case 287u: goto L_08938D24;
    case 288u: goto L_08938D30;
    case 289u: goto L_08938D3C;
    case 290u: goto L_08938D48;
    case 291u: goto L_08938D54;
    case 292u: goto L_08938D5C;
    case 293u: goto L_08938D60;
    case 294u: goto L_08938D68;
    case 295u: goto L_08938D70;
    case 296u: goto L_08938D74;
    case 297u: goto L_08938D78;
    case 298u: goto L_08938D84;
    case 299u: goto L_08938D8C;
    case 300u: goto L_08938D94;
    case 301u: goto L_08938D9C;
    case 302u: goto L_08938DA4;
    case 303u: goto L_08938DBC;
    case 304u: goto L_08938DC8;
    case 305u: goto L_08938DD4;
    case 306u: goto L_08938DE0;
    case 307u: goto L_08938DEC;
    case 308u: goto L_08938DF4;
    case 309u: goto L_08938DF8;
    case 310u: goto L_08938E00;
    case 311u: goto L_08938E04;
    case 312u: goto L_08938E08;
    case 313u: goto L_08938E14;
    case 314u: goto L_08938E1C;
    case 315u: goto L_08938E24;
    case 316u: goto L_08938E2C;
    case 317u: goto L_08938E34;
    case 318u: goto L_08938E4C;
    case 319u: goto L_08938E54;
    case 320u: goto L_08938E58;
    case 321u: goto L_08938E64;
    case 322u: goto L_08938E6C;
    case 323u: goto L_08938E74;
    case 324u: goto L_08938E94;
    case 325u: goto L_08938E9C;
    case 326u: goto L_08938EA8;
    case 327u: goto L_08938EB8;
    case 328u: goto L_08938EC0;
    case 329u: goto L_08938EC8;
    case 330u: goto L_08938ED4;
    case 331u: goto L_08938EE0;
    case 332u: goto L_08938EE8;
    case 333u: goto L_08938EF0;
    case 334u: goto L_08938EF8;
    case 335u: goto L_08938F24;
    case 336u: goto L_08938F50;
    case 337u: goto L_08938F7C;
    case 338u: goto L_08938FA4;
    case 339u: goto L_08938FAC;
    case 340u: goto L_08938FB4;
    case 341u: goto L_08938FBC;
    case 342u: goto L_08938FC4;
    case 343u: goto L_08938FCC;
    case 344u: goto L_08938FD4;
    case 345u: goto L_08938FDC;
    case 346u: goto L_08938FF4;
    case 347u: goto L_08938FFC;
    case 348u: goto L_08939004;
    case 349u: goto L_0893902C;
    case 350u: goto L_08939034;
    case 351u: goto L_0893903C;
    case 352u: goto L_08939058;
    case 353u: goto L_08939070;
    case 354u: goto L_08939078;
    case 355u: goto L_08939084;
    case 356u: goto L_08939090;
    case 357u: goto L_0893909C;
    case 358u: goto L_089390A0;
    case 359u: goto L_089390A4;
    case 360u: goto L_089390AC;
    case 361u: goto L_089390D4;
    case 362u: goto L_089390DC;
    case 363u: goto L_089390E4;
    case 364u: goto L_089390FC;
    case 365u: goto L_08939104;
    case 366u: goto L_0893911C;
    case 367u: goto L_08939128;
    case 368u: goto L_08939134;
    case 369u: goto L_08939140;
    case 370u: goto L_08939144;
    case 371u: goto L_08939150;
    case 372u: goto L_08939178;
    case 373u: goto L_08939180;
    case 374u: goto L_08939188;
    case 375u: goto L_08939198;
    case 376u: goto L_089391A4;
    case 377u: goto L_089391B0;
    case 378u: goto L_089391B8;
    case 379u: goto L_089391C0;
    case 380u: goto L_089391C4;
    case 381u: goto L_089391D0;
    case 382u: goto L_089391F8;
    case 383u: goto L_08939200;
    case 384u: goto L_08939204;
    case 385u: goto L_08939208;
    case 386u: goto L_08939210;
    case 387u: goto L_08939238;
    case 388u: goto L_08939250;
    case 389u: goto L_0893925C;
    case 390u: goto L_08939270;
    case 391u: goto L_08939284;
    case 392u: goto L_089392C8;
    case 393u: goto L_0893932C;
    case 394u: goto L_08939348;
    case 395u: goto L_08939368;
    case 396u: goto L_089393BC;
    case 397u: goto L_089393F8;
    case 398u: goto L_08939408;
    case 399u: goto L_08939424;
    case 400u: goto L_08939434;
    case 401u: goto L_08939450;
    case 402u: goto L_08939460;
    case 403u: goto L_089394A8;
    case 404u: goto L_089394B8;
    case 405u: goto L_089394D4;
    case 406u: goto L_089394E4;
    case 407u: goto L_08939500;
    case 408u: goto L_08939518;
    case 409u: goto L_08939530;
    case 410u: goto L_08939548;
    case 411u: goto L_0893956C;
    case 412u: goto L_08939588;
    case 413u: goto L_08939618;
    case 414u: goto L_08939640;
    case 415u: goto L_08939690;
    case 416u: goto L_08939698;
    case 417u: goto L_089396A0;
    case 418u: goto L_089396A8;
    case 419u: goto L_089396B4;
    case 420u: goto L_089396B8;
    case 421u: goto L_089396C0;
    case 422u: goto L_089396D0;
    case 423u: goto L_089396E0;
    case 424u: goto L_089396F0;
    case 425u: goto L_08939710;
    case 426u: goto L_08939730;
    case 427u: goto L_08939740;
    case 428u: goto L_08939758;
    case 429u: goto L_08939770;
    case 430u: goto L_08939790;
    case 431u: goto L_089397B4;
    case 432u: goto L_089397CC;
    case 433u: goto L_089397E4;
    case 434u: goto L_089397EC;
    case 435u: goto L_089397F4;
    case 436u: goto L_08939804;
    case 437u: goto L_0893980C;
    case 438u: goto L_08939818;
    case 439u: goto L_08939824;
    case 440u: goto L_0893982C;
    case 441u: goto L_08939834;
    case 442u: goto L_08939844;
    case 443u: goto L_0893984C;
    case 444u: goto L_08939858;
    case 445u: goto L_08939864;
    case 446u: goto L_0893986C;
    case 447u: goto L_08939874;
    case 448u: goto L_08939884;
    case 449u: goto L_0893988C;
    case 450u: goto L_08939894;
    case 451u: goto L_0893989C;
    case 452u: goto L_089398AC;
    case 453u: goto L_089398BC;
    case 454u: goto L_089398D4;
    case 455u: goto L_089398DC;
    case 456u: goto L_089398E4;
    case 457u: goto L_089398F0;
    case 458u: goto L_08939908;
    case 459u: goto L_08939910;
    case 460u: goto L_08939918;
    case 461u: goto L_08939930;
    case 462u: goto L_08939938;
    case 463u: goto L_08939940;
    case 464u: goto L_08939958;
    case 465u: goto L_08939960;
    case 466u: goto L_08939968;
    case 467u: goto L_08939980;
    case 468u: goto L_08939988;
    case 469u: goto L_08939990;
    case 470u: goto L_08939998;
    case 471u: goto L_089399B0;
    case 472u: goto L_089399B8;
    case 473u: goto L_089399C0;
    case 474u: goto L_089399CC;
    case 475u: goto L_089399D4;
    case 476u: goto L_089399DC;
    case 477u: goto L_089399E0;
    case 478u: goto L_089399EC;
    case 479u: goto L_089399FC;
    case 480u: goto L_08939A04;
    case 481u: goto L_08939A28;
    case 482u: goto L_08939A30;
    case 483u: goto L_08939A40;
    case 484u: goto L_08939A50;
    case 485u: goto L_08939A74;
    case 486u: goto L_08939A90;
    case 487u: goto L_08939AA8;
    case 488u: goto L_08939AB8;
    case 489u: goto L_08939AD4;
    case 490u: goto L_08939AEC;
    case 491u: goto L_08939B04;
    case 492u: goto L_08939B1C;
    case 493u: goto L_08939B28;
    case 494u: goto L_08939B34;
    case 495u: goto L_08939B48;
    case 496u: goto L_08939B68;
    case 497u: goto L_08939B80;
    case 498u: goto L_08939B88;
    case 499u: goto L_08939B90;
    case 500u: goto L_08939B98;
    case 501u: goto L_08939BA4;
    case 502u: goto L_08939BC0;
    case 503u: goto L_08939BC8;
    case 504u: goto L_08939BD0;
    case 505u: goto L_08939BE4;
    case 506u: goto L_08939BE8;
    case 507u: goto L_08939BF8;
    case 508u: goto L_08939C18;
    case 509u: goto L_08939C20;
    case 510u: goto L_08939C30;
    case 511u: goto L_08939C50;
    case 512u: goto L_08939C58;
    case 513u: goto L_08939C60;
    case 514u: goto L_08939C74;
    case 515u: goto L_08939C7C;
    case 516u: goto L_08939C84;
    case 517u: goto L_08939CA0;
    case 518u: goto L_08939CA8;
    case 519u: goto L_08939CB0;
    case 520u: goto L_08939CBC;
    case 521u: goto L_08939CC4;
    case 522u: goto L_08939CCC;
    case 523u: goto L_08939CD4;
    case 524u: goto L_08939CDC;
    case 525u: goto L_08939CE4;
    case 526u: goto L_08939CEC;
    case 527u: goto L_08939D08;
    case 528u: goto L_08939D10;
    case 529u: goto L_08939D1C;
    case 530u: goto L_08939D24;
    case 531u: goto L_08939D2C;
    case 532u: goto L_08939D34;
    case 533u: goto L_08939D3C;
    case 534u: goto L_08939D44;
    case 535u: goto L_08939D4C;
    case 536u: goto L_08939D58;
    case 537u: goto L_08939D60;
    case 538u: goto L_08939D6C;
    case 539u: goto L_08939D74;
    case 540u: goto L_08939D7C;
    case 541u: goto L_08939D84;
    case 542u: goto L_08939D8C;
    case 543u: goto L_08939D9C;
    case 544u: goto L_08939DA8;
    case 545u: goto L_08939DB0;
    case 546u: goto L_08939DB8;
    case 547u: goto L_08939DC0;
    case 548u: goto L_08939DC8;
    case 549u: goto L_08939DDC;
    case 550u: goto L_08939DF4;
    case 551u: goto L_08939DFC;
    case 552u: goto L_08939E04;
    case 553u: goto L_08939E10;
    case 554u: goto L_08939E34;
    case 555u: goto L_08939E44;
    case 556u: goto L_08939E54;
    case 557u: goto L_08939E64;
    case 558u: goto L_08939E74;
    case 559u: goto L_08939E84;
    case 560u: goto L_08939E90;
    case 561u: goto L_08939EA8;
    case 562u: goto L_08939EBC;
    case 563u: goto L_08939EDC;
    case 564u: goto L_08939F0C;
    case 565u: goto L_08939F24;
    case 566u: goto L_08939F34;
    case 567u: goto L_08939F64;
    case 568u: goto L_08939F70;
    case 569u: goto L_08939F94;
    case 570u: goto L_08939FA4;
    case 571u: goto L_08939FB4;
    case 572u: goto L_08939FC4;
    case 573u: goto L_08939FD4;
    case 574u: goto L_08939FDC;
    case 575u: goto L_08939FF0;
    case 576u: goto L_0893A000;
    case 577u: goto L_0893A018;
    case 578u: goto L_0893A040;
    case 579u: goto L_0893A048;
    case 580u: goto L_0893A060;
    case 581u: goto L_0893A074;
    case 582u: goto L_0893A094;
    case 583u: goto L_0893A09C;
    case 584u: goto L_0893A0C8;
    case 585u: goto L_0893A0D8;
    case 586u: goto L_0893A0E0;
    case 587u: goto L_0893A0F8;
    case 588u: goto L_0893A100;
    case 589u: goto L_0893A104;
    case 590u: goto L_0893A10C;
    case 591u: goto L_0893A114;
    case 592u: goto L_0893A12C;
    case 593u: goto L_0893A134;
    case 594u: goto L_0893A13C;
    case 595u: goto L_0893A144;
    case 596u: goto L_0893A15C;
    case 597u: goto L_0893A160;
    case 598u: goto L_0893A168;
    case 599u: goto L_0893A178;
    case 600u: goto L_0893A17C;
    case 601u: goto L_0893A188;
    case 602u: goto L_0893A1A4;
    case 603u: goto L_0893A1DC;
    case 604u: goto L_0893A1EC;
    case 605u: goto L_0893A200;
    case 606u: goto L_0893A21C;
    case 607u: goto L_0893A22C;
    case 608u: goto L_0893A254;
    case 609u: goto L_0893A268;
    case 610u: goto L_0893A278;
    case 611u: goto L_0893A280;
    case 612u: goto L_0893A288;
    case 613u: goto L_0893A290;
    case 614u: goto L_0893A2A4;
    case 615u: goto L_0893A2CC;
    case 616u: goto L_0893A2EC;
    case 617u: goto L_0893A2F4;
    case 618u: goto L_0893A304;
    case 619u: goto L_0893A350;
    case 620u: goto L_0893A370;
    case 621u: goto L_0893A40C;
    case 622u: goto L_0893A448;
    case 623u: goto L_0893A480;
    case 624u: goto L_0893A524;
    case 625u: goto L_0893A54C;
    case 626u: goto L_0893A560;
    case 627u: goto L_0893A570;
    case 628u: goto L_0893A608;
    case 629u: goto L_0893A624;
    case 630u: goto L_0893A634;
    case 631u: goto L_0893A640;
    case 632u: goto L_0893A654;
    case 633u: goto L_0893A668;
    case 634u: goto L_0893A68C;
    case 635u: goto L_0893A6B8;
    case 636u: goto L_0893A6BC;
    case 637u: goto L_0893A6F8;
    case 638u: goto L_0893A724;
    case 639u: goto L_0893A744;
    case 640u: goto L_0893A79C;
    case 641u: goto L_0893A7AC;
    case 642u: goto L_0893A7E4;
    case 643u: goto L_0893A840;
    case 644u: goto L_0893A85C;
    case 645u: goto L_0893A910;
    case 646u: goto L_0893A934;
    case 647u: goto L_0893A940;
    case 648u: goto L_0893A974;
    case 649u: goto L_0893A980;
    case 650u: goto L_0893A98C;
    case 651u: goto L_0893A9C0;
    case 652u: goto L_0893A9C8;
    case 653u: goto L_0893A9D0;
    case 654u: goto L_0893A9F4;
    case 655u: goto L_0893AA30;
    case 656u: goto L_0893AA40;
    case 657u: goto L_0893AA5C;
    case 658u: goto L_0893AA60;
    case 659u: goto L_0893AA68;
    case 660u: goto L_0893AA70;
    case 661u: goto L_0893AA7C;
    case 662u: goto L_0893AAA8;
    case 663u: goto L_0893AAB8;
    case 664u: goto L_0893AACC;
    case 665u: goto L_0893AAD4;
    case 666u: goto L_0893AADC;
    case 667u: goto L_0893AB10;
    case 668u: goto L_0893AB3C;
    case 669u: goto L_0893AB4C;
    case 670u: goto L_0893AB5C;
    case 671u: goto L_0893AB60;
    case 672u: goto L_0893AB9C;
    case 673u: goto L_0893ABB4;
    case 674u: goto L_0893ABC4;
    case 675u: goto L_0893ABD8;
    case 676u: goto L_0893AC20;
    case 677u: goto L_0893AC34;
    case 678u: goto L_0893AC5C;
    case 679u: goto L_0893AC7C;
    case 680u: goto L_0893AC8C;
    case 681u: goto L_0893ACA0;
    case 682u: goto L_0893ACB4;
    case 683u: goto L_0893ACBC;
    case 684u: goto L_0893ACC8;
    case 685u: goto L_0893ACEC;
    case 686u: goto L_0893ACF8;
    case 687u: goto L_0893AD04;
    case 688u: goto L_0893AD1C;
    case 689u: goto L_0893AD34;
    case 690u: goto L_0893AD60;
    case 691u: goto L_0893AD70;
    case 692u: goto L_0893AD74;
    case 693u: goto L_0893AD80;
    case 694u: goto L_0893AD9C;
    case 695u: goto L_0893ADA0;
    case 696u: goto L_0893ADAC;
    case 697u: goto L_0893ADD4;
    case 698u: goto L_0893ADDC;
    case 699u: goto L_0893ADE4;
    case 700u: goto L_0893AE04;
    case 701u: goto L_0893AE4C;
    case 702u: goto L_0893AE58;
    case 703u: goto L_0893AE64;
    case 704u: goto L_0893AE78;
    case 705u: goto L_0893AE94;
    case 706u: goto L_0893AEB4;
    case 707u: goto L_0893AEC4;
    case 708u: goto L_0893AEE0;
    case 709u: goto L_0893AEF4;
    case 710u: goto L_0893AEFC;
    case 711u: goto L_0893AF0C;
    case 712u: goto L_0893AF38;
    case 713u: goto L_0893AF58;
    case 714u: goto L_0893AF6C;
    case 715u: goto L_0893AF78;
    case 716u: goto L_0893AFAC;
    case 717u: goto L_0893AFE0;
    case 718u: goto L_0893B044;
    case 719u: goto L_0893B04C;
    case 720u: goto L_0893B05C;
    case 721u: goto L_0893B07C;
    case 722u: goto L_0893B08C;
    case 723u: goto L_0893B0B8;
    case 724u: goto L_0893B0C4;
    case 725u: goto L_0893B0D0;
    case 726u: goto L_0893B0D8;
    case 727u: goto L_0893B0E4;
    case 728u: goto L_0893B0F0;
    case 729u: goto L_0893B110;
    case 730u: goto L_0893B114;
    case 731u: goto L_0893B18C;
    case 732u: goto L_0893B1A8;
    case 733u: goto L_0893B1B4;
    case 734u: goto L_0893B1C0;
    case 735u: goto L_0893B1E0;
    case 736u: goto L_0893B1E4;
    case 737u: goto L_0893B25C;
    case 738u: goto L_0893B278;
    case 739u: goto L_0893B2AC;
    case 740u: goto L_0893B2BC;
    case 741u: goto L_0893B324;
    case 742u: goto L_0893B32C;
    case 743u: goto L_0893B344;
    case 744u: goto L_0893B34C;
    case 745u: goto L_0893B370;
    case 746u: goto L_0893B400;
    case 747u: goto L_0893B410;
    case 748u: goto L_0893B418;
    case 749u: goto L_0893B420;
    case 750u: goto L_0893B428;
    case 751u: goto L_0893B458;
    case 752u: goto L_0893B4B8;
    case 753u: goto L_0893B4C0;
    case 754u: goto L_0893B4E4;
    case 755u: goto L_0893B504;
    case 756u: goto L_0893B50C;
    case 757u: goto L_0893B530;
    case 758u: goto L_0893B538;
    case 759u: goto L_0893B544;
    case 760u: goto L_0893B55C;
    case 761u: goto L_0893B568;
    case 762u: goto L_0893B578;
    case 763u: goto L_0893B594;
    case 764u: goto L_0893B69C;
    case 765u: goto L_0893B724;
    case 766u: goto L_0893B7C0;
    case 767u: goto L_0893B864;
    case 768u: goto L_0893B964;
    case 769u: goto L_0893B9C4;
    case 770u: goto L_0893B9DC;
    case 771u: goto L_0893B9E4;
    case 772u: goto L_0893B9EC;
    case 773u: goto L_0893BA18;
    case 774u: goto L_0893BA30;
    case 775u: goto L_0893BA44;
    case 776u: goto L_0893BA6C;
    case 777u: goto L_0893BA7C;
    case 778u: goto L_0893BA84;
    case 779u: goto L_0893BA94;
    case 780u: goto L_0893BAC4;
    case 781u: goto L_0893BAD4;
    case 782u: goto L_0893BAE4;
    case 783u: goto L_0893BAF0;
    case 784u: goto L_0893BAFC;
    case 785u: goto L_0893BB18;
    case 786u: goto L_0893BB3C;
    case 787u: goto L_0893BB54;
    case 788u: goto L_0893BB60;
    case 789u: goto L_0893BB78;
    case 790u: goto L_0893BBA0;
    case 791u: goto L_0893BBA8;
    case 792u: goto L_0893BBB8;
    case 793u: goto L_0893BBC4;
    case 794u: goto L_0893BBD0;
    case 795u: goto L_0893BBD8;
    case 796u: goto L_0893BBE0;
    case 797u: goto L_0893BBFC;
    case 798u: goto L_0893BC08;
    case 799u: goto L_0893BC20;
    case 800u: goto L_0893BC2C;
    case 801u: goto L_0893BC3C;
    case 802u: goto L_0893BC60;
    case 803u: goto L_0893BC74;
    case 804u: goto L_0893BC7C;
    case 805u: goto L_0893BC8C;
    case 806u: goto L_0893BC9C;
    case 807u: goto L_0893BCAC;
    case 808u: goto L_0893BCBC;
    case 809u: goto L_0893BCC4;
    case 810u: goto L_0893BCD8;
    case 811u: goto L_0893BCE0;
    case 812u: goto L_0893BD00;
    case 813u: goto L_0893BD20;
    case 814u: goto L_0893BD2C;
    case 815u: goto L_0893BD50;
    case 816u: goto L_0893BD68;
    case 817u: goto L_0893BD74;
    case 818u: goto L_0893BDF0;
    case 819u: goto L_0893BDF4;
    case 820u: goto L_0893BE28;
    case 821u: goto L_0893BE40;
    case 822u: goto L_0893BE54;
    case 823u: goto L_0893BE60;
    case 824u: goto L_0893BE68;
    case 825u: goto L_0893BE94;
    case 826u: goto L_0893BF34;
    case 827u: goto L_0893BF44;
    case 828u: goto L_0893BF98;
    case 829u: goto L_0893BFB0;
    case 830u: goto L_0893BFCC;
    case 831u: goto L_0893BFDC;
    case 832u: goto L_0893BFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08938000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(537))))));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(760)));
      if (branch_taken) {
          goto L_08938058;
      }
      goto L_08938034;
    }
L_08938034:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    goto L_08938038;
L_08938038:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(540)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0893804C;
      }
      goto L_08938044;
    }
L_08938044:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08938058;
      }
      goto L_0893804C;
    }
L_0893804C:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08938038;
      }
      goto L_08938058;
    }
L_08938058:
    if (ctx.gpr[8] != ctx.gpr[17]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(776)));
        goto L_08938078;
    }
    goto L_08938060;
L_08938060:
    ctx.gpr[31] = (0x08938068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 627u, 0x08833120u>(ctx, &aot_mem) && ctx.pc == 0x08938068u) goto L_08938068;
    return;
L_08938068:
    ctx.gpr[31] = (0x08938070u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 628u, 0x08833130u>(ctx, &aot_mem) && ctx.pc == 0x08938070u) goto L_08938070;
    return;
L_08938070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(776)));
    goto L_08938078;
L_08938078:
    if (ctx.gpr[5] != ctx.gpr[17]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(780)));
        goto L_08938090;
    }
    goto L_08938080;
L_08938080:
    ctx.gpr[31] = (0x08938088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 227u, 0x0883513Cu>(ctx, &aot_mem) && ctx.pc == 0x08938088u) goto L_08938088;
    return;
L_08938088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(780)));
    goto L_08938090;
L_08938090:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089380A4;
      }
      goto L_08938098;
    }
L_08938098:
    ctx.gpr[31] = (0x089380A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 254u, 0x088353C0u>(ctx, &aot_mem) && ctx.pc == 0x089380A0u) goto L_089380A0;
    return;
L_089380A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    goto L_089380A4;
L_089380A4:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[17];
    ctx.gpr[5] = (2224u << 16u);
      if (branch_taken) {
          goto L_08938440;
      }
      goto L_089380AC;
    }
L_089380AC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1880));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08938330;
      }
      goto L_089380C0;
    }
L_089380C0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(764))))));
    if (ctx.gpr[5] == ctx.gpr[19]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(772))))));
        goto L_089380DC;
    }
    goto L_089380CC;
L_089380CC:
    ctx.gpr[31] = (0x089380D4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 707u, 0x088335A4u>(ctx, &aot_mem) && ctx.pc == 0x089380D4u) goto L_089380D4;
    return;
L_089380D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(772))))));
    goto L_089380DC;
L_089380DC:
    if (ctx.gpr[5] == ctx.gpr[19]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(784)));
        goto L_08938108;
    }
    goto L_089380E4;
L_089380E4:
    ctx.gpr[31] = (0x089380ECu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 157u, 0x088349E8u>(ctx, &aot_mem) && ctx.pc == 0x089380ECu) goto L_089380EC;
    return;
L_089380EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
      if (branch_taken) {
          goto L_08938104;
      }
      goto L_089380F4;
    }
L_089380F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(772))))));
    ctx.gpr[31] = (0x08938100u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 150u, 0x08834994u>(ctx, &aot_mem) && ctx.pc == 0x08938100u) goto L_08938100;
    return;
L_08938100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    goto L_08938104;
L_08938104:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(784)));
    goto L_08938108;
L_08938108:
    if (ctx.gpr[5] != ctx.gpr[17]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
        goto L_08938180;
    }
    goto L_08938110;
L_08938110:
    ctx.gpr[31] = (0x08938118u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 270u, 0x0883550Cu>(ctx, &aot_mem) && ctx.pc == 0x08938118u) goto L_08938118;
    return;
L_08938118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08938128u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 272u, 0x08835538u>(ctx, &aot_mem) && ctx.pc == 0x08938128u) goto L_08938128;
    return;
L_08938128:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(796)));
    if (ctx.gpr[5] == ctx.gpr[19]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(800)));
        goto L_08938158;
    }
    goto L_08938138;
L_08938138:
    ctx.gpr[31] = (0x08938140u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 270u, 0x0883550Cu>(ctx, &aot_mem) && ctx.pc == 0x08938140u) goto L_08938140;
    return;
L_08938140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08938150u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(796)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 272u, 0x08835538u>(ctx, &aot_mem) && ctx.pc == 0x08938150u) goto L_08938150;
    return;
L_08938150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(800)));
    goto L_08938158;
L_08938158:
    if (ctx.gpr[5] == ctx.gpr[19]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
        goto L_08938180;
    }
    goto L_08938160;
L_08938160:
    ctx.gpr[31] = (0x08938168u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 270u, 0x0883550Cu>(ctx, &aot_mem) && ctx.pc == 0x08938168u) goto L_08938168;
    return;
L_08938168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08938178u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(800)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 272u, 0x08835538u>(ctx, &aot_mem) && ctx.pc == 0x08938178u) goto L_08938178;
    return;
L_08938178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    goto L_08938180;
L_08938180:
    if (ctx.gpr[5] != ctx.gpr[17]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(536))))));
        goto L_089382B4;
    }
    goto L_08938188;
L_08938188:
    ctx.gpr[31] = (0x08938190u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 505u, 0x0884277Cu>(ctx, &aot_mem) && ctx.pc == 0x08938190u) goto L_08938190;
    return;
L_08938190:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (0u | 2u);
      if (branch_taken) {
          goto L_089381B8;
      }
      goto L_08938198;
    }
L_08938198:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (16204u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089381B8;
L_089381B8:
    ctx.gpr[31] = (0x089381C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 505u, 0x0884277Cu>(ctx, &aot_mem) && ctx.pc == 0x089381C0u) goto L_089381C0;
    return;
L_089381C0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089381E8;
      }
      goto L_089381C8;
    }
L_089381C8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (16281u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089381E8;
L_089381E8:
    ctx.gpr[31] = (0x089381F0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 552u, 0x088329B0u>(ctx, &aot_mem) && ctx.pc == 0x089381F0u) goto L_089381F0;
    return;
L_089381F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[31] = (0x089381FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(728)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 542u, 0x088328E8u>(ctx, &aot_mem) && ctx.pc == 0x089381FCu) goto L_089381FC;
    return;
L_089381FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[31] = (0x08938208u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(728)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 549u, 0x08832980u>(ctx, &aot_mem) && ctx.pc == 0x08938208u) goto L_08938208;
    return;
L_08938208:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[4]);
    goto L_08938214;
L_08938214:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(740))))));
    if (ctx.gpr[6] == ctx.gpr[19]) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(743))))));
        goto L_08938238;
    }
    goto L_08938220;
L_08938220:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0893822Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 450u, 0x0884DC3Cu>(ctx, &aot_mem) && ctx.pc == 0x0893822Cu) goto L_0893822C;
    return;
L_0893822C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(743))))));
    goto L_08938238;
L_08938238:
    if (ctx.gpr[6] == ctx.gpr[19]) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(746))))));
        goto L_08938258;
    }
    goto L_08938240;
L_08938240:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x0893824Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 450u, 0x0884DC3Cu>(ctx, &aot_mem) && ctx.pc == 0x0893824Cu) goto L_0893824C;
    return;
L_0893824C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(746))))));
    goto L_08938258;
L_08938258:
    if (ctx.gpr[6] == ctx.gpr[19]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(749))))));
        goto L_0893828C;
    }
    goto L_08938260;
L_08938260:
    ctx.gpr[31] = (0x08938268u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 162u, 0x08834A54u>(ctx, &aot_mem) && ctx.pc == 0x08938268u) goto L_08938268;
    return;
L_08938268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08938288;
      }
      goto L_08938274;
    }
L_08938274:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(746))))));
    ctx.gpr[31] = (0x08938280u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 161u, 0x08834A40u>(ctx, &aot_mem) && ctx.pc == 0x08938280u) goto L_08938280;
    return;
L_08938280:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[4]);
    goto L_08938288;
L_08938288:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(749))))));
    goto L_0893828C;
L_0893828C:
    if (ctx.gpr[5] == ctx.gpr[19]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_089382A4;
    }
    goto L_08938294;
L_08938294:
    ctx.gpr[31] = (0x0893829Cu);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 450u, 0x0884DC3Cu>(ctx, &aot_mem) && ctx.pc == 0x0893829Cu) goto L_0893829C;
    return;
L_0893829C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089382A4;
L_089382A4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08938214;
      }
      goto L_089382B0;
    }
L_089382B0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(536))))));
    goto L_089382B4;
L_089382B4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938488;
      }
      goto L_089382BC;
    }
L_089382BC:
    ctx.gpr[31] = (0x089382C4u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(556))))));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 163u, 0x08834A68u>(ctx, &aot_mem) && ctx.pc == 0x089382C4u) goto L_089382C4;
    return;
L_089382C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(536))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08938488;
      }
      goto L_089382D4;
    }
L_089382D4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(550))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 69 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08938488;
      }
      goto L_089382E4;
    }
L_089382E4:
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(552))))));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22188));
    goto L_089382F8;
L_089382F8:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[5] - ctx.gpr[9]);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08938314;
      }
      goto L_0893830C;
    }
L_0893830C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08938320;
      }
      goto L_08938314;
    }
L_08938314:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089382F8;
      }
      goto L_08938320;
    }
L_08938320:
    ctx.gpr[31] = (0x08938328u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 207u, 0x08834EF0u>(ctx, &aot_mem) && ctx.pc == 0x08938328u) goto L_08938328;
    return;
L_08938328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938488;
      }
      goto L_08938330;
    }
L_08938330:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(765))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_08938348;
      }
      goto L_0893833C;
    }
L_0893833C:
    ctx.gpr[31] = (0x08938344u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 707u, 0x088335A4u>(ctx, &aot_mem) && ctx.pc == 0x08938344u) goto L_08938344;
    return;
L_08938344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    goto L_08938348;
L_08938348:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(774))))));
    if (ctx.gpr[5] == ctx.gpr[19]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(788)));
        goto L_08938378;
    }
    goto L_08938354;
L_08938354:
    ctx.gpr[31] = (0x0893835Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 157u, 0x088349E8u>(ctx, &aot_mem) && ctx.pc == 0x0893835Cu) goto L_0893835C;
    return;
L_0893835C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
      if (branch_taken) {
          goto L_08938374;
      }
      goto L_08938364;
    }
L_08938364:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(774))))));
    ctx.gpr[31] = (0x08938370u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 150u, 0x08834994u>(ctx, &aot_mem) && ctx.pc == 0x08938370u) goto L_08938370;
    return;
L_08938370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    goto L_08938374;
L_08938374:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(788)));
    goto L_08938378;
L_08938378:
    if (ctx.gpr[5] != ctx.gpr[17]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
        goto L_089383F0;
    }
    goto L_08938380;
L_08938380:
    ctx.gpr[31] = (0x08938388u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 270u, 0x0883550Cu>(ctx, &aot_mem) && ctx.pc == 0x08938388u) goto L_08938388;
    return;
L_08938388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08938398u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 272u, 0x08835538u>(ctx, &aot_mem) && ctx.pc == 0x08938398u) goto L_08938398;
    return;
L_08938398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(796)));
    if (ctx.gpr[5] == ctx.gpr[19]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(800)));
        goto L_089383C8;
    }
    goto L_089383A8;
L_089383A8:
    ctx.gpr[31] = (0x089383B0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 270u, 0x0883550Cu>(ctx, &aot_mem) && ctx.pc == 0x089383B0u) goto L_089383B0;
    return;
L_089383B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089383C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(796)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 272u, 0x08835538u>(ctx, &aot_mem) && ctx.pc == 0x089383C0u) goto L_089383C0;
    return;
L_089383C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(800)));
    goto L_089383C8;
L_089383C8:
    if (ctx.gpr[5] == ctx.gpr[19]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
        goto L_089383F0;
    }
    goto L_089383D0;
L_089383D0:
    ctx.gpr[31] = (0x089383D8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 270u, 0x0883550Cu>(ctx, &aot_mem) && ctx.pc == 0x089383D8u) goto L_089383D8;
    return;
L_089383D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089383E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(800)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 272u, 0x08835538u>(ctx, &aot_mem) && ctx.pc == 0x089383E8u) goto L_089383E8;
    return;
L_089383E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(720)));
    goto L_089383F0;
L_089383F0:
    if (ctx.gpr[5] != ctx.gpr[17]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(536))))));
        goto L_08938428;
    }
    goto L_089383F8;
L_089383F8:
    ctx.gpr[31] = (0x08938400u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(732)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 544u, 0x0883291Cu>(ctx, &aot_mem) && ctx.pc == 0x08938400u) goto L_08938400;
    return;
L_08938400:
    ctx.gpr[31] = (0x08938408u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 549u, 0x08832980u>(ctx, &aot_mem) && ctx.pc == 0x08938408u) goto L_08938408;
    return;
L_08938408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(736)));
    if (ctx.gpr[5] != ctx.gpr[17]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(536))))));
        goto L_08938428;
    }
    goto L_08938418;
L_08938418:
    ctx.gpr[31] = (0x08938420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 678u, 0x08936B98u>(ctx, &aot_mem) && ctx.pc == 0x08938420u) goto L_08938420;
    return;
L_08938420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(536))))));
    goto L_08938428;
L_08938428:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08938488;
      }
      goto L_08938430;
    }
L_08938430:
    ctx.gpr[31] = (0x08938438u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(556))))));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 165u, 0x08834A94u>(ctx, &aot_mem) && ctx.pc == 0x08938438u) goto L_08938438;
    return;
L_08938438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938488;
      }
      goto L_08938440;
    }
L_08938440:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(792)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08938488;
      }
      goto L_0893844C;
    }
L_0893844C:
    ctx.gpr[31] = (0x08938454u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 270u, 0x0883550Cu>(ctx, &aot_mem) && ctx.pc == 0x08938454u) goto L_08938454;
    return;
L_08938454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(796)));
    if (ctx.gpr[5] == ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(800)));
        goto L_08938478;
    }
    goto L_08938468;
L_08938468:
    ctx.gpr[31] = (0x08938470u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 270u, 0x0883550Cu>(ctx, &aot_mem) && ctx.pc == 0x08938470u) goto L_08938470;
    return;
L_08938470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(800)));
    goto L_08938478;
L_08938478:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08938488;
      }
      goto L_08938480;
    }
L_08938480:
    ctx.gpr[31] = (0x08938488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 270u, 0x0883550Cu>(ctx, &aot_mem) && ctx.pc == 0x08938488u) goto L_08938488;
    return;
L_08938488:
    ctx.gpr[31] = (0x08938490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 541u, 0x088328C8u>(ctx, &aot_mem) && ctx.pc == 0x08938490u) goto L_08938490;
    return;
L_08938490:
    if (ctx.gpr[2] != ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
        goto L_08938504;
    }
    goto L_08938498;
L_08938498:
    ctx.gpr[31] = (0x089384A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 564u, 0x08832B6Cu>(ctx, &aot_mem) && ctx.pc == 0x089384A0u) goto L_089384A0;
    return;
L_089384A0:
    ctx.gpr[31] = (0x089384A8u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 692u, 0x08833480u>(ctx, &aot_mem) && ctx.pc == 0x089384A8u) goto L_089384A8;
    return;
L_089384A8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
        goto L_089384F4;
    }
    goto L_089384E0;
L_089384E0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089384ECu);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 278u, 0x088355A0u>(ctx, &aot_mem) && ctx.pc == 0x089384ECu) goto L_089384EC;
    return;
L_089384EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893859C;
      }
      goto L_089384F4;
    }
L_089384F4:
    ctx.gpr[31] = (0x089384FCu);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 278u, 0x088355A0u>(ctx, &aot_mem) && ctx.pc == 0x089384FCu) goto L_089384FC;
    return;
L_089384FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893859C;
      }
      goto L_08938504;
    }
L_08938504:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(536))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08938538;
      }
      goto L_08938510;
    }
L_08938510:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1880));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893859C;
      }
      goto L_08938528;
    }
L_08938528:
    ctx.gpr[31] = (0x08938530u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 274u, 0x08835560u>(ctx, &aot_mem) && ctx.pc == 0x08938530u) goto L_08938530;
    return;
L_08938530:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893859C;
      }
      goto L_08938538;
    }
L_08938538:
    ctx.gpr[31] = (0x08938540u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 529u, 0x088327E8u>(ctx, &aot_mem) && ctx.pc == 0x08938540u) goto L_08938540;
    return;
L_08938540:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(996));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[18] = (2221u << 16u);
      if (branch_taken) {
          goto L_0893855C;
      }
      goto L_0893854C;
    }
L_0893854C:
    ctx.gpr[31] = (0x08938554u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 274u, 0x08835560u>(ctx, &aot_mem) && ctx.pc == 0x08938554u) goto L_08938554;
    return;
L_08938554:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893859C;
      }
      goto L_0893855C;
    }
L_0893855C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(22168));
    goto L_08938564;
L_08938564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[31] = (0x08938570u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 529u, 0x088327E8u>(ctx, &aot_mem) && ctx.pc == 0x08938570u) goto L_08938570;
    return;
L_08938570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08938590;
      }
      goto L_08938580;
    }
L_08938580:
    ctx.gpr[31] = (0x08938588u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 274u, 0x08835560u>(ctx, &aot_mem) && ctx.pc == 0x08938588u) goto L_08938588;
    return;
L_08938588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893859C;
      }
      goto L_08938590;
    }
L_08938590:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08938564;
      }
      goto L_0893859C;
    }
L_0893859C:
    ctx.gpr[31] = (0x089385A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 606u, 0x08832F60u>(ctx, &aot_mem) && ctx.pc == 0x089385A4u) goto L_089385A4;
    return;
L_089385A4:
    ctx.gpr[31] = (0x089385ACu);
    // nop
    goto L_08939238;
L_089385AC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x089385B8u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x089385B8u) goto L_089385B8;
    return;
L_089385B8:
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
L_089385D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-21168));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(21136), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(21144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(492), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(21140), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(21148), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(21152), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(21156), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(21160), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(21164), ctx.gpr[31]);
    ctx.gpr[31] = (0x08938618u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 592u, 0x08847378u>(ctx, &aot_mem) && ctx.pc == 0x08938618u) goto L_08938618;
    return;
L_08938618:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08938628u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 275u, 0x08841980u>(ctx, &aot_mem) && ctx.pc == 0x08938628u) goto L_08938628;
    return;
L_08938628:
    ctx.gpr[31] = (0x08938630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 541u, 0x088328C8u>(ctx, &aot_mem) && ctx.pc == 0x08938630u) goto L_08938630;
    return;
L_08938630:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0893877C;
      }
      goto L_08938638;
    }
L_08938638:
    ctx.gpr[31] = (0x08938640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 564u, 0x08832B6Cu>(ctx, &aot_mem) && ctx.pc == 0x08938640u) goto L_08938640;
    return;
L_08938640:
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893867C;
      }
      goto L_0893864C;
    }
L_0893864C:
    ctx.gpr[31] = (0x08938654u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 157u, 0x088349E8u>(ctx, &aot_mem) && ctx.pc == 0x08938654u) goto L_08938654;
    return;
L_08938654:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938AAC;
      }
      goto L_0893865C;
    }
L_0893865C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(492), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[31] = (0x08938674u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 150u, 0x08834994u>(ctx, &aot_mem) && ctx.pc == 0x08938674u) goto L_08938674;
    return;
L_08938674:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938AAC;
      }
      goto L_0893867C;
    }
L_0893867C:
    ctx.gpr[31] = (0x08938684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 564u, 0x08832B6Cu>(ctx, &aot_mem) && ctx.pc == 0x08938684u) goto L_08938684;
    return;
L_08938684:
    ctx.gpr[4] = (0u | 21u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0893877C;
      }
      goto L_08938690;
    }
L_08938690:
    ctx.gpr[31] = (0x08938698u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 157u, 0x088349E8u>(ctx, &aot_mem) && ctx.pc == 0x08938698u) goto L_08938698;
    return;
L_08938698:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938AAC;
      }
      goto L_089386A0;
    }
L_089386A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(492), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x089386B8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 150u, 0x08834994u>(ctx, &aot_mem) && ctx.pc == 0x089386B8u) goto L_089386B8;
    return;
L_089386B8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_089386C0;
L_089386C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x089386D0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 586u, 0x089365E0u>(ctx, &aot_mem) && ctx.pc == 0x089386D0u) goto L_089386D0;
    return;
L_089386D0:
    ctx.gpr[31] = (0x089386D8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 157u, 0x088349E8u>(ctx, &aot_mem) && ctx.pc == 0x089386D8u) goto L_089386D8;
    return;
L_089386D8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08938768;
    }
    goto L_089386E0;
L_089386E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x089386F0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 574u, 0x08936554u>(ctx, &aot_mem) && ctx.pc == 0x089386F0u) goto L_089386F0;
    return;
L_089386F0:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08938768;
    }
    goto L_089386F8;
L_089386F8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x08938708u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 586u, 0x089365E0u>(ctx, &aot_mem) && ctx.pc == 0x08938708u) goto L_08938708;
    return;
L_08938708:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 111 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08938768;
    }
    goto L_08938714;
L_08938714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x08938720u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 586u, 0x089365E0u>(ctx, &aot_mem) && ctx.pc == 0x08938720u) goto L_08938720;
    return;
L_08938720:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 148 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08938768;
    }
    goto L_0893872C;
L_0893872C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x08938738u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 586u, 0x089365E0u>(ctx, &aot_mem) && ctx.pc == 0x08938738u) goto L_08938738;
    return;
L_08938738:
    ctx.gpr[31] = (0x08938740u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 157u, 0x088349E8u>(ctx, &aot_mem) && ctx.pc == 0x08938740u) goto L_08938740;
    return;
L_08938740:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08938768;
    }
    goto L_08938748;
L_08938748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x08938758u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 586u, 0x089365E0u>(ctx, &aot_mem) && ctx.pc == 0x08938758u) goto L_08938758;
    return;
L_08938758:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08938764u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 150u, 0x08834994u>(ctx, &aot_mem) && ctx.pc == 0x08938764u) goto L_08938764;
    return;
L_08938764:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08938768;
L_08938768:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089386C0;
      }
      goto L_08938774;
    }
L_08938774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938AAC;
      }
      goto L_0893877C;
    }
L_0893877C:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    goto L_08938784;
L_08938784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x08938794u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 586u, 0x089365E0u>(ctx, &aot_mem) && ctx.pc == 0x08938794u) goto L_08938794;
    return;
L_08938794:
    ctx.gpr[31] = (0x0893879Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 157u, 0x088349E8u>(ctx, &aot_mem) && ctx.pc == 0x0893879Cu) goto L_0893879C;
    return;
L_0893879C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08938A44;
    }
    goto L_089387A4;
L_089387A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x089387B8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 250u, 0x089355ACu>(ctx, &aot_mem) && ctx.pc == 0x089387B8u) goto L_089387B8;
    return;
L_089387B8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08938A44;
    }
    goto L_089387C0;
L_089387C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x089387D4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 259u, 0x08935640u>(ctx, &aot_mem) && ctx.pc == 0x089387D4u) goto L_089387D4;
    return;
L_089387D4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08938A44;
    }
    goto L_089387DC;
L_089387DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x089387F0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 276u, 0x08935700u>(ctx, &aot_mem) && ctx.pc == 0x089387F0u) goto L_089387F0;
    return;
L_089387F0:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08938A44;
    }
    goto L_089387F8;
L_089387F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x0893880Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 285u, 0x08935780u>(ctx, &aot_mem) && ctx.pc == 0x0893880Cu) goto L_0893880C;
    return;
L_0893880C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08938A44;
    }
    goto L_08938814;
L_08938814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0893882Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 313u, 0x089358B0u>(ctx, &aot_mem) && ctx.pc == 0x0893882Cu) goto L_0893882C;
    return;
L_0893882C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08938A44;
    }
    goto L_08938834;
L_08938834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0893884Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 336u, 0x08935A38u>(ctx, &aot_mem) && ctx.pc == 0x0893884Cu) goto L_0893884C;
    return;
L_0893884C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08938A44;
    }
    goto L_08938854;
L_08938854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x08938868u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 368u, 0x08935BC8u>(ctx, &aot_mem) && ctx.pc == 0x08938868u) goto L_08938868;
    return;
L_08938868:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08938A44;
    }
    goto L_08938870;
L_08938870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x08938884u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 388u, 0x08935CB8u>(ctx, &aot_mem) && ctx.pc == 0x08938884u) goto L_08938884;
    return;
L_08938884:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08938A44;
    }
    goto L_0893888C;
L_0893888C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x089388A0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 408u, 0x08935DBCu>(ctx, &aot_mem) && ctx.pc == 0x089388A0u) goto L_089388A0;
    return;
L_089388A0:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08938A44;
    }
    goto L_089388A8;
L_089388A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x089388BCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 428u, 0x08935E9Cu>(ctx, &aot_mem) && ctx.pc == 0x089388BCu) goto L_089388BC;
    return;
L_089388BC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08938A44;
    }
    goto L_089388C4;
L_089388C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x089388D8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 451u, 0x08935F9Cu>(ctx, &aot_mem) && ctx.pc == 0x089388D8u) goto L_089388D8;
    return;
L_089388D8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08938A44;
    }
    goto L_089388E0;
L_089388E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x089388F4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 474u, 0x0893609Cu>(ctx, &aot_mem) && ctx.pc == 0x089388F4u) goto L_089388F4;
    return;
L_089388F4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08938A44;
    }
    goto L_089388FC;
L_089388FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x08938910u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 498u, 0x089361ACu>(ctx, &aot_mem) && ctx.pc == 0x08938910u) goto L_08938910;
    return;
L_08938910:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08938A44;
    }
    goto L_08938918;
L_08938918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x0893892Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 525u, 0x08936318u>(ctx, &aot_mem) && ctx.pc == 0x0893892Cu) goto L_0893892C;
    return;
L_0893892C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08938A44;
    }
    goto L_08938934;
L_08938934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x08938948u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 541u, 0x089363C4u>(ctx, &aot_mem) && ctx.pc == 0x08938948u) goto L_08938948;
    return;
L_08938948:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08938A44;
    }
    goto L_08938950;
L_08938950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x08938964u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 564u, 0x089364BCu>(ctx, &aot_mem) && ctx.pc == 0x08938964u) goto L_08938964;
    return;
L_08938964:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08938A44;
    }
    goto L_0893896C;
L_0893896C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x0893897Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 574u, 0x08936554u>(ctx, &aot_mem) && ctx.pc == 0x0893897Cu) goto L_0893897C;
    return;
L_0893897C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08938A44;
    }
    goto L_08938984;
L_08938984:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x08938994u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 586u, 0x089365E0u>(ctx, &aot_mem) && ctx.pc == 0x08938994u) goto L_08938994;
    return;
L_08938994:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 90 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(520)));
        goto L_089389C8;
    }
    goto L_089389A0;
L_089389A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x089389ACu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 586u, 0x089365E0u>(ctx, &aot_mem) && ctx.pc == 0x089389ACu) goto L_089389AC;
    return;
L_089389AC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 102 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(520)));
        goto L_089389C8;
    }
    goto L_089389B8;
L_089389B8:
    if (ctx.gpr[20] != 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08938A44;
    }
    goto L_089389C0;
L_089389C0:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(520)));
    goto L_089389C8;
L_089389C8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089389D4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 571u, 0x08936538u>(ctx, &aot_mem) && ctx.pc == 0x089389D4u) goto L_089389D4;
    return;
L_089389D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(520)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08938A0C;
      }
      goto L_089389E0;
    }
L_089389E0:
    ctx.gpr[31] = (0x089389E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 586u, 0x089365E0u>(ctx, &aot_mem) && ctx.pc == 0x089389E8u) goto L_089389E8;
    return;
L_089389E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(520)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(492), ctx.gpr[2]);
    ctx.gpr[31] = (0x089389F8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 586u, 0x089365E0u>(ctx, &aot_mem) && ctx.pc == 0x089389F8u) goto L_089389F8;
    return;
L_089389F8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08938A04u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 150u, 0x08834994u>(ctx, &aot_mem) && ctx.pc == 0x08938A04u) goto L_08938A04;
    return;
L_08938A04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08938A44;
      }
      goto L_08938A0C;
    }
L_08938A0C:
    ctx.gpr[31] = (0x08938A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 586u, 0x089365E0u>(ctx, &aot_mem) && ctx.pc == 0x08938A14u) goto L_08938A14;
    return;
L_08938A14:
    ctx.gpr[31] = (0x08938A1Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 157u, 0x088349E8u>(ctx, &aot_mem) && ctx.pc == 0x08938A1Cu) goto L_08938A1C;
    return;
L_08938A1C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08938A44;
    }
    goto L_08938A24;
L_08938A24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[31] = (0x08938A34u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 586u, 0x089365E0u>(ctx, &aot_mem) && ctx.pc == 0x08938A34u) goto L_08938A34;
    return;
L_08938A34:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08938A40u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 150u, 0x08834994u>(ctx, &aot_mem) && ctx.pc == 0x08938A40u) goto L_08938A40;
    return;
L_08938A40:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08938A44;
L_08938A44:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08938784;
      }
      goto L_08938A50;
    }
L_08938A50:
    ctx.gpr[31] = (0x08938A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 564u, 0x08832B6Cu>(ctx, &aot_mem) && ctx.pc == 0x08938A58u) goto L_08938A58;
    return;
L_08938A58:
    ctx.gpr[31] = (0x08938A60u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 692u, 0x08833480u>(ctx, &aot_mem) && ctx.pc == 0x08938A60u) goto L_08938A60;
    return;
L_08938A60:
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08938A78;
      }
      goto L_08938A6C;
    }
L_08938A6C:
    ctx.gpr[5] = (0u | 100u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08938AAC;
      }
      goto L_08938A78;
    }
L_08938A78:
    ctx.gpr[31] = (0x08938A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 541u, 0x088328C8u>(ctx, &aot_mem) && ctx.pc == 0x08938A80u) goto L_08938A80;
    return;
L_08938A80:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08938AAC;
      }
      goto L_08938A88;
    }
L_08938A88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(492), ctx.gpr[5]);
    ctx.gpr[31] = (0x08938A9Cu);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 157u, 0x088349E8u>(ctx, &aot_mem) && ctx.pc == 0x08938A9Cu) goto L_08938A9C;
    return;
L_08938A9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 7u);
      if (branch_taken) {
          goto L_08938AAC;
      }
      goto L_08938AA4;
    }
L_08938AA4:
    ctx.gpr[31] = (0x08938AACu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 150u, 0x08834994u>(ctx, &aot_mem) && ctx.pc == 0x08938AACu) goto L_08938AAC;
    return;
L_08938AAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21152)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21156)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(21168));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08938AD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08938B04u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(508), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 541u, 0x088328C8u>(ctx, &aot_mem) && ctx.pc == 0x08938B04u) goto L_08938B04;
    return;
L_08938B04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
      if (branch_taken) {
          goto L_08938B50;
      }
      goto L_08938B0C;
    }
L_08938B0C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
        goto L_08938B54;
    }
    goto L_08938B1C;
L_08938B1C:
    ctx.gpr[31] = (0x08938B24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 564u, 0x08832B6Cu>(ctx, &aot_mem) && ctx.pc == 0x08938B24u) goto L_08938B24;
    return;
L_08938B24:
    ctx.gpr[31] = (0x08938B2Cu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 692u, 0x08833480u>(ctx, &aot_mem) && ctx.pc == 0x08938B2Cu) goto L_08938B2C;
    return;
L_08938B2C:
    ctx.gpr[31] = (0x08938B34u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 696u, 0x088334B4u>(ctx, &aot_mem) && ctx.pc == 0x08938B34u) goto L_08938B34;
    return;
L_08938B34:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 41 ? 1u : 0u);
      if (branch_taken) {
          goto L_08938B78;
      }
      goto L_08938B44;
    }
L_08938B44:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 21 ? 1u : 0u);
      if (branch_taken) {
          goto L_08938BDC;
      }
      goto L_08938B50;
    }
L_08938B50:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    goto L_08938B54;
L_08938B54:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(0u));
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
L_08938B78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 61 ? 1u : 0u);
      if (branch_taken) {
          goto L_08938B8C;
      }
      goto L_08938B80;
    }
L_08938B80:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 21 ? 1u : 0u);
      if (branch_taken) {
          goto L_08938BDC;
      }
      goto L_08938B8C;
    }
L_08938B8C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 81 ? 1u : 0u);
      if (branch_taken) {
          goto L_08938BA0;
      }
      goto L_08938B94;
    }
L_08938B94:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 21 ? 1u : 0u);
      if (branch_taken) {
          goto L_08938BDC;
      }
      goto L_08938BA0;
    }
L_08938BA0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08938BB0;
      }
      goto L_08938BA8;
    }
L_08938BA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 21 ? 1u : 0u);
      if (branch_taken) {
          goto L_08938BDC;
      }
      goto L_08938BB0;
    }
L_08938BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(0u));
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
L_08938BDC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08938C0C;
      }
      goto L_08938BE4;
    }
L_08938BE4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 41 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08938C0C;
      }
      goto L_08938BF0;
    }
L_08938BF0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 61 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (0u | 2u);
      if (branch_taken) {
          goto L_08938C0C;
      }
      goto L_08938BFC;
    }
L_08938BFC:
    ctx.gpr[20] = (0u | 4u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 81 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (0u | 3u);
        goto L_08938C0C;
    }
    goto L_08938C0C;
L_08938C0C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08938E94;
      }
      goto L_08938C14;
    }
L_08938C14:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_08938C34;
      }
      goto L_08938C1C;
    }
L_08938C1C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08938E54;
      }
      goto L_08938C24;
    }
L_08938C24:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938C50;
      }
      goto L_08938C2C;
    }
L_08938C2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08938CF4;
      }
      goto L_08938C34;
    }
L_08938C34:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08938D94;
      }
      goto L_08938C40;
    }
L_08938C40:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938E24;
      }
      goto L_08938C48;
    }
L_08938C48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
      if (branch_taken) {
          goto L_08938E58;
      }
      goto L_08938C50;
    }
L_08938C50:
    ctx.gpr[31] = (0x08938C58u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 702u, 0x0883351Cu>(ctx, &aot_mem) && ctx.pc == 0x08938C58u) goto L_08938C58;
    return;
L_08938C58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
      if (branch_taken) {
          goto L_08938E54;
      }
      goto L_08938C60;
    }
L_08938C60:
    ctx.gpr[4] = (ctx.gpr[4] >> 29u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
      if (branch_taken) {
          goto L_08938CD4;
      }
      goto L_08938C78;
    }
L_08938C78:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08938CA8;
      }
      goto L_08938C84;
    }
L_08938C84:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08938CB4;
      }
      goto L_08938C8C;
    }
L_08938C8C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08938CC0;
      }
      goto L_08938C94;
    }
L_08938C94:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08938CCC;
      }
      goto L_08938C9C;
    }
L_08938C9C:
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08938CD4;
      }
      goto L_08938CA8;
    }
L_08938CA8:
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08938CD4;
      }
      goto L_08938CB4;
    }
L_08938CB4:
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08938CD4;
      }
      goto L_08938CC0;
    }
L_08938CC0:
    ctx.gpr[5] = (0u | 21u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08938CD4;
      }
      goto L_08938CCC;
    }
L_08938CCC:
    ctx.gpr[5] = (0u | 28u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
    goto L_08938CD4;
L_08938CD4:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08938CE4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 697u, 0x088334C4u>(ctx, &aot_mem) && ctx.pc == 0x08938CE4u) goto L_08938CE4;
    return;
L_08938CE4:
    ctx.gpr[31] = (0x08938CECu);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 701u, 0x08833504u>(ctx, &aot_mem) && ctx.pc == 0x08938CECu) goto L_08938CEC;
    return;
L_08938CEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
      if (branch_taken) {
          goto L_08938E58;
      }
      goto L_08938CF4;
    }
L_08938CF4:
    ctx.gpr[31] = (0x08938CFCu);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 702u, 0x0883351Cu>(ctx, &aot_mem) && ctx.pc == 0x08938CFCu) goto L_08938CFC;
    return;
L_08938CFC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
      if (branch_taken) {
          goto L_08938E54;
      }
      goto L_08938D04;
    }
L_08938D04:
    ctx.gpr[4] = (ctx.gpr[4] >> 29u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
      if (branch_taken) {
          goto L_08938D3C;
      }
      goto L_08938D1C;
    }
L_08938D1C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08938D78;
      }
      goto L_08938D24;
    }
L_08938D24:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 23u);
      if (branch_taken) {
          goto L_08938D60;
      }
      goto L_08938D30;
    }
L_08938D30:
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08938D74;
      }
      goto L_08938D3C;
    }
L_08938D3C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 24u);
      if (branch_taken) {
          goto L_08938D68;
      }
      goto L_08938D48;
    }
L_08938D48:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 29u);
      if (branch_taken) {
          goto L_08938D70;
      }
      goto L_08938D54;
    }
L_08938D54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08938D78;
      }
      goto L_08938D5C;
    }
L_08938D5C:
    ctx.gpr[5] = (0u | 23u);
    goto L_08938D60;
L_08938D60:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08938D74;
      }
      goto L_08938D68;
    }
L_08938D68:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08938D74;
      }
      goto L_08938D70;
    }
L_08938D70:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
    goto L_08938D74;
L_08938D74:
    ctx.gpr[5] = (0u | 1u);
    goto L_08938D78;
L_08938D78:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08938D84u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 697u, 0x088334C4u>(ctx, &aot_mem) && ctx.pc == 0x08938D84u) goto L_08938D84;
    return;
L_08938D84:
    ctx.gpr[31] = (0x08938D8Cu);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 701u, 0x08833504u>(ctx, &aot_mem) && ctx.pc == 0x08938D8Cu) goto L_08938D8C;
    return;
L_08938D8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
      if (branch_taken) {
          goto L_08938E58;
      }
      goto L_08938D94;
    }
L_08938D94:
    ctx.gpr[31] = (0x08938D9Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 702u, 0x0883351Cu>(ctx, &aot_mem) && ctx.pc == 0x08938D9Cu) goto L_08938D9C;
    return;
L_08938D9C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
      if (branch_taken) {
          goto L_08938E54;
      }
      goto L_08938DA4;
    }
L_08938DA4:
    ctx.gpr[4] = (ctx.gpr[4] >> 29u);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 3u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
      if (branch_taken) {
          goto L_08938DD4;
      }
      goto L_08938DBC;
    }
L_08938DBC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08938E08;
      }
      goto L_08938DC8;
    }
L_08938DC8:
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08938E04;
      }
      goto L_08938DD4;
    }
L_08938DD4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 26u);
      if (branch_taken) {
          goto L_08938DF8;
      }
      goto L_08938DE0;
    }
L_08938DE0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 30u);
      if (branch_taken) {
          goto L_08938E00;
      }
      goto L_08938DEC;
    }
L_08938DEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08938E08;
      }
      goto L_08938DF4;
    }
L_08938DF4:
    ctx.gpr[5] = (0u | 26u);
    goto L_08938DF8;
L_08938DF8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08938E04;
      }
      goto L_08938E00;
    }
L_08938E00:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
    goto L_08938E04;
L_08938E04:
    ctx.gpr[5] = (0u | 1u);
    goto L_08938E08;
L_08938E08:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08938E14u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 697u, 0x088334C4u>(ctx, &aot_mem) && ctx.pc == 0x08938E14u) goto L_08938E14;
    return;
L_08938E14:
    ctx.gpr[31] = (0x08938E1Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 701u, 0x08833504u>(ctx, &aot_mem) && ctx.pc == 0x08938E1Cu) goto L_08938E1C;
    return;
L_08938E1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
      if (branch_taken) {
          goto L_08938E58;
      }
      goto L_08938E24;
    }
L_08938E24:
    ctx.gpr[31] = (0x08938E2Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 702u, 0x0883351Cu>(ctx, &aot_mem) && ctx.pc == 0x08938E2Cu) goto L_08938E2C;
    return;
L_08938E2C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
        goto L_08938E58;
    }
    goto L_08938E34;
L_08938E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08938E4Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 697u, 0x088334C4u>(ctx, &aot_mem) && ctx.pc == 0x08938E4Cu) goto L_08938E4C;
    return;
L_08938E4C:
    ctx.gpr[31] = (0x08938E54u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 701u, 0x08833504u>(ctx, &aot_mem) && ctx.pc == 0x08938E54u) goto L_08938E54;
    return;
L_08938E54:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    goto L_08938E58;
L_08938E58:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08938E74;
      }
      goto L_08938E64;
    }
L_08938E64:
    ctx.gpr[31] = (0x08938E6Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 150u, 0x08834994u>(ctx, &aot_mem) && ctx.pc == 0x08938E6Cu) goto L_08938E6C;
    return;
L_08938E6C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(508)));
    goto L_08938E74;
L_08938E74:
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
L_08938E94:
    ctx.gpr[31] = (0x08938E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 699u, 0x088334DCu>(ctx, &aot_mem) && ctx.pc == 0x08938E9Cu) goto L_08938E9C;
    return;
L_08938E9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_08938EB8;
    }
    goto L_08938EA8;
L_08938EA8:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08938EB8;
      }
      goto L_08938EB8;
    }
L_08938EB8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
        goto L_08938F7C;
    }
    goto L_08938EC0;
L_08938EC0:
    ctx.gpr[31] = (0x08938EC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 700u, 0x088334F4u>(ctx, &aot_mem) && ctx.pc == 0x08938EC8u) goto L_08938EC8;
    return;
L_08938EC8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08938F50;
      }
      goto L_08938ED4;
    }
L_08938ED4:
    ctx.gpr[18] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[19] = (0u | 40u);
      if (branch_taken) {
          goto L_08938F24;
      }
      goto L_08938EE0;
    }
L_08938EE0:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08938EF8;
      }
      goto L_08938EE8;
    }
L_08938EE8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08938FA4;
      }
      goto L_08938EF0;
    }
L_08938EF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08938FBC;
      }
      goto L_08938EF8;
    }
L_08938EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(0u));
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
L_08938F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(0u));
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
L_08938F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(0u));
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
L_08938F7C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(0u));
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
L_08938FA4:
    if (static_cast<std::int32_t>(ctx.gpr[20]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
        goto L_08939004;
    }
    goto L_08938FAC;
L_08938FAC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0893902C;
      }
      goto L_08938FB4;
    }
L_08938FB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089390D4;
      }
      goto L_08938FBC;
    }
L_08938FBC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08939178;
      }
      goto L_08938FC4;
    }
L_08938FC4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
        goto L_08939004;
    }
    goto L_08938FCC;
L_08938FCC:
    ctx.gpr[31] = (0x08938FD4u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 702u, 0x0883351Cu>(ctx, &aot_mem) && ctx.pc == 0x08938FD4u) goto L_08938FD4;
    return;
L_08938FD4:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
        goto L_08939004;
    }
    goto L_08938FDC;
L_08938FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 33 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_089391F8;
      }
      goto L_08938FF4;
    }
L_08938FF4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 17u);
      if (branch_taken) {
          goto L_08939204;
      }
      goto L_08938FFC;
    }
L_08938FFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08939204;
      }
      goto L_08939004;
    }
L_08939004:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(0u));
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
L_0893902C:
    ctx.gpr[31] = (0x08939034u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 702u, 0x0883351Cu>(ctx, &aot_mem) && ctx.pc == 0x08939034u) goto L_08939034;
    return;
L_08939034:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
        goto L_08939004;
    }
    goto L_0893903C;
L_0893903C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-8));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
        goto L_089390A4;
    }
    goto L_08939058;
L_08939058:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(7456)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939070:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[18]);
      if (branch_taken) {
          goto L_089390A0;
      }
      goto L_08939078;
    }
L_08939078:
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089390A0;
      }
      goto L_08939084;
    }
L_08939084:
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089390A0;
      }
      goto L_08939090;
    }
L_08939090:
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089390A0;
      }
      goto L_0893909C;
    }
L_0893909C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), 0u);
    goto L_089390A0;
L_089390A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    goto L_089390A4;
L_089390A4:
    ctx.gpr[31] = (0x089390ACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 150u, 0x08834994u>(ctx, &aot_mem) && ctx.pc == 0x089390ACu) goto L_089390AC;
    return;
L_089390AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
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
L_089390D4:
    ctx.gpr[31] = (0x089390DCu);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 702u, 0x0883351Cu>(ctx, &aot_mem) && ctx.pc == 0x089390DCu) goto L_089390DC;
    return;
L_089390DC:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
        goto L_08939004;
    }
    goto L_089390E4;
L_089390E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 41 ? 1u : 0u);
      if (branch_taken) {
          goto L_08939144;
      }
      goto L_089390FC;
    }
L_089390FC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_08939144;
      }
      goto L_08939104;
    }
L_08939104:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(7592)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893911C:
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08939144;
      }
      goto L_08939128;
    }
L_08939128:
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08939144;
      }
      goto L_08939134;
    }
L_08939134:
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08939144;
      }
      goto L_08939140;
    }
L_08939140:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), 0u);
    goto L_08939144;
L_08939144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    ctx.gpr[31] = (0x08939150u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 150u, 0x08834994u>(ctx, &aot_mem) && ctx.pc == 0x08939150u) goto L_08939150;
    return;
L_08939150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
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
L_08939178:
    ctx.gpr[31] = (0x08939180u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 702u, 0x0883351Cu>(ctx, &aot_mem) && ctx.pc == 0x08939180u) goto L_08939180;
    return;
L_08939180:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
        goto L_08939004;
    }
    goto L_08939188;
L_08939188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089391C0;
      }
      goto L_08939198;
    }
L_08939198:
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_089391B8;
      }
      goto L_089391A4;
    }
L_089391A4:
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_089391C4;
      }
      goto L_089391B0;
    }
L_089391B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089391C4;
      }
      goto L_089391B8;
    }
L_089391B8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089391C4;
      }
      goto L_089391C0;
    }
L_089391C0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), 0u);
    goto L_089391C4;
L_089391C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    ctx.gpr[31] = (0x089391D0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 150u, 0x08834994u>(ctx, &aot_mem) && ctx.pc == 0x089391D0u) goto L_089391D0;
    return;
L_089391D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
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
L_089391F8:
    if (ctx.gpr[17] != ctx.gpr[19]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
        goto L_08939208;
    }
    goto L_08939200;
L_08939200:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), 0u);
    goto L_08939204;
L_08939204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    goto L_08939208;
L_08939208:
    ctx.gpr[31] = (0x08939210u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 150u, 0x08834994u>(ctx, &aot_mem) && ctx.pc == 0x08939210u) goto L_08939210;
    return;
L_08939210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
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
L_08939238:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    goto L_08939250;
L_08939250:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_0893925C;
L_0893925C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893925C;
      }
      goto L_08939270;
    }
L_08939270:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[10]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08939250;
      }
      goto L_08939284;
    }
L_08939284:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(484), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(492), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(500), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(512), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(508), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(514), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(528), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(529), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(532), 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(536), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(537), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(540));
    goto L_089392C8;
L_089392C8:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), ctx.gpr[8]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(46), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_089392C8;
      }
      goto L_0893932C;
    }
L_0893932C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(720), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(724), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(728), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(732), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(736), 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_08939348;
L_08939348:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(740), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(743), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(746), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(749), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08939348;
      }
      goto L_08939368;
    }
L_08939368:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(752), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(754), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(756), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(758), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(760), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(764), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(765), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(768), 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(772), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(774), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(776), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(780), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(784), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(788), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(792), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(796), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(800), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(516), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(520), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(524), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089393BC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22152)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(22156), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089393F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08939408u);
    // nop
    goto L_08939500;
L_08939408:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08939434u);
    // nop
    goto L_08939500;
L_08939434:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939450:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08939460u);
    // nop
    goto L_08939500;
L_08939460:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089394A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089394B8u);
    // nop
    goto L_08939500;
L_089394B8:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089394D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089394E4u);
    // nop
    goto L_08939500;
L_089394E4:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939500:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08939518u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 18u, 0x0884C14Cu>(ctx, &aot_mem) && ctx.pc == 0x08939518u) goto L_08939518;
    return;
L_08939518:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 20u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08939530u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939530u) goto L_08939530;
    return;
L_08939530:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(22232), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08939548u);
    ctx.gpr[6] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08939548u) goto L_08939548;
    return;
L_08939548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 276u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0893956Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893956Cu) goto L_0893956C;
    return;
L_0893956C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[6] = (0u | 276u);
    ctx.gpr[31] = (0x08939588u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08939588u) goto L_08939588;
    return;
L_08939588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[5] = (17392u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[31] = (0x08939618u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08939618u) goto L_08939618;
    return;
L_08939618:
    ctx.gpr[7] = (17360u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (17232u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (17024u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08939640;
L_08939640:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08939640;
      }
      goto L_08939690;
    }
L_08939690:
    ctx.gpr[31] = (0x08939698u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 55u, 0x0883C734u>(ctx, &aot_mem) && ctx.pc == 0x08939698u) goto L_08939698;
    return;
L_08939698:
    ctx.gpr[31] = (0x089396A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 203u, 0x08834EA4u>(ctx, &aot_mem) && ctx.pc == 0x089396A0u) goto L_089396A0;
    return;
L_089396A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
      if (branch_taken) {
          goto L_089396B4;
      }
      goto L_089396A8;
    }
L_089396A8:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089396B8;
      }
      goto L_089396B4;
    }
L_089396B4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_089396B8;
L_089396B8:
    ctx.gpr[31] = (0x089396C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 202u, 0x08834E94u>(ctx, &aot_mem) && ctx.pc == 0x089396C0u) goto L_089396C0;
    return;
L_089396C0:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x089396D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26736));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x089396D0u) goto L_089396D0;
    return;
L_089396D0:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x089396E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26116));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x089396E0u) goto L_089396E0;
    return;
L_089396E0:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x089396F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26108));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x089396F0u) goto L_089396F0;
    return;
L_089396F0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(22236), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939710:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08939730u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08939730u) goto L_08939730;
    return;
L_08939730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08939740u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 61u, 0x0883C8A8u>(ctx, &aot_mem) && ctx.pc == 0x08939740u) goto L_08939740;
    return;
L_08939740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08939758u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939758u) goto L_08939758;
    return;
L_08939758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08939770u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939770u) goto L_08939770;
    return;
L_08939770:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(22232), 0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(22236), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939790:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (0u | 6u);
        goto L_089399DC;
    }
    goto L_089397B4;
L_089397B4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2220u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(7720)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089397CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 60 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089399E0;
      }
      goto L_089397E4;
    }
L_089397E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089399E0;
      }
      goto L_089397EC;
    }
L_089397EC:
    ctx.gpr[31] = (0x089397F4u);
    // nop
    goto L_08939A50;
L_089397F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089399E0;
      }
      goto L_08939804;
    }
L_08939804:
    ctx.gpr[31] = (0x0893980Cu);
    // nop
    goto L_08939B04;
L_0893980C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
      if (branch_taken) {
          goto L_089399E0;
      }
      goto L_08939818;
    }
L_08939818:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089399E0;
      }
      goto L_08939824;
    }
L_08939824:
    ctx.gpr[31] = (0x0893982Cu);
    // nop
    goto L_08939AB8;
L_0893982C:
    ctx.gpr[31] = (0x08939834u);
    // nop
    goto L_08939A50;
L_08939834:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089399E0;
      }
      goto L_08939844;
    }
L_08939844:
    ctx.gpr[31] = (0x0893984Cu);
    // nop
    goto L_08939B04;
L_0893984C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
      if (branch_taken) {
          goto L_089399E0;
      }
      goto L_08939858;
    }
L_08939858:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089399E0;
      }
      goto L_08939864;
    }
L_08939864:
    ctx.gpr[31] = (0x0893986Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 128u, 0x0884882Cu>(ctx, &aot_mem) && ctx.pc == 0x0893986Cu) goto L_0893986C;
    return;
L_0893986C:
    ctx.gpr[31] = (0x08939874u);
    // nop
    goto L_08939AB8;
L_08939874:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089399E0;
      }
      goto L_08939884;
    }
L_08939884:
    ctx.gpr[31] = (0x0893988Cu);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x0893988Cu) goto L_0893988C;
    return;
L_0893988C:
    ctx.gpr[31] = (0x08939894u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x08939894u) goto L_08939894;
    return;
L_08939894:
    ctx.gpr[31] = (0x0893989Cu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x0893989Cu) goto L_0893989C;
    return;
L_0893989C:
    ctx.gpr[4] = (2196u << 16u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x089398ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26864));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x089398ACu) goto L_089398AC;
    return;
L_089398AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_089398DC;
      }
      goto L_089398BC;
    }
L_089398BC:
    ctx.gpr[4] = (2182u << 16u);
    ctx.gpr[5] = (2182u << 16u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17012));
    ctx.gpr[31] = (0x089398D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17564));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x089398D4u) goto L_089398D4;
    return;
L_089398D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089399CC;
      }
      goto L_089398DC;
    }
L_089398DC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08939910;
      }
      goto L_089398E4;
    }
L_089398E4:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x089398F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 151u, 0x0884C9D4u>(ctx, &aot_mem) && ctx.pc == 0x089398F0u) goto L_089398F0;
    return;
L_089398F0:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26012));
    ctx.gpr[31] = (0x08939908u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25780));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08939908u) goto L_08939908;
    return;
L_08939908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089399CC;
      }
      goto L_08939910;
    }
L_08939910:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08939938;
      }
      goto L_08939918;
    }
L_08939918:
    ctx.gpr[4] = (2187u << 16u);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08939930u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(292));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08939930u) goto L_08939930;
    return;
L_08939930:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089399CC;
      }
      goto L_08939938;
    }
L_08939938:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08939960;
      }
      goto L_08939940;
    }
L_08939940:
    ctx.gpr[4] = (2184u << 16u);
    ctx.gpr[5] = (2184u << 16u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2716));
    ctx.gpr[31] = (0x08939958u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3188));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08939958u) goto L_08939958;
    return;
L_08939958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089399CC;
      }
      goto L_08939960;
    }
L_08939960:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08939988;
      }
      goto L_08939968;
    }
L_08939968:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16636));
    ctx.gpr[31] = (0x08939980u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16788));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08939980u) goto L_08939980;
    return;
L_08939980:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089399CC;
      }
      goto L_08939988;
    }
L_08939988:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_089399B8;
      }
      goto L_08939990;
    }
L_08939990:
    ctx.gpr[31] = (0x08939998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 55u, 0x0884C384u>(ctx, &aot_mem) && ctx.pc == 0x08939998u) goto L_08939998;
    return;
L_08939998:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15040));
    ctx.gpr[31] = (0x089399B0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15244));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x089399B0u) goto L_089399B0;
    return;
L_089399B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089399CC;
      }
      goto L_089399B8;
    }
L_089399B8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2192u << 16u);
      if (branch_taken) {
          goto L_089399CC;
      }
      goto L_089399C0;
    }
L_089399C0:
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x089399CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2400));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x089399CCu) goto L_089399CC;
    return;
L_089399CC:
    ctx.gpr[31] = (0x089399D4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 18u, 0x0884C14Cu>(ctx, &aot_mem) && ctx.pc == 0x089399D4u) goto L_089399D4;
    return;
L_089399D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
      if (branch_taken) {
          goto L_089399E0;
      }
      goto L_089399DC;
    }
L_089399DC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089399E0;
L_089399E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089399ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 65u, 0x0883C8F0u>(ctx, &aot_mem) && ctx.pc == 0x089399ECu) goto L_089399EC;
    return;
L_089399EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089399FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939A04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08939A40;
      }
      goto L_08939A28;
    }
L_08939A28:
    ctx.gpr[31] = (0x08939A30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08939A30u) goto L_08939A30;
    return;
L_08939A30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08939A40u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 72u, 0x0883C9FCu>(ctx, &aot_mem) && ctx.pc == 0x08939A40u) goto L_08939A40;
    return;
L_08939A40:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939A50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 52u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08939A74u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939A74u) goto L_08939A74;
    return;
L_08939A74:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08939A90u);
    ctx.gpr[6] = (0u | 52u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08939A90u) goto L_08939A90;
    return;
L_08939A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[31] = (0x08939AA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 747u, 0x08847CDCu>(ctx, &aot_mem) && ctx.pc == 0x08939AA8u) goto L_08939AA8;
    return;
L_08939AA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939AB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08939AD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 751u, 0x08847D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08939AD4u) goto L_08939AD4;
    return;
L_08939AD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08939AECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939AECu) goto L_08939AEC;
    return;
L_08939AEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939B04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08939B1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 753u, 0x08847D68u>(ctx, &aot_mem) && ctx.pc == 0x08939B1Cu) goto L_08939B1C;
    return;
L_08939B1C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939B28:
    ctx.gpr[4] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(22236)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939B34:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22224)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(22228), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939B48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 276u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08939B68u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939B68u) goto L_08939B68;
    return;
L_08939B68:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(22248), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08939B80u);
    ctx.gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08939B80u) goto L_08939B80;
    return;
L_08939B80:
    ctx.gpr[31] = (0x08939B88u);
    // nop
    goto L_0893A1A4;
L_08939B88:
    ctx.gpr[31] = (0x08939B90u);
    // nop
    goto L_0893A304;
L_08939B90:
    ctx.gpr[31] = (0x08939B98u);
    // nop
    goto L_0893A7E4;
L_08939B98:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939BA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939BE8;
      }
      goto L_08939BC0;
    }
L_08939BC0:
    ctx.gpr[31] = (0x08939BC8u);
    // nop
    goto L_08939E10;
L_08939BC8:
    ctx.gpr[31] = (0x08939BD0u);
    // nop
    goto L_0893A018;
L_08939BD0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08939BE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939BE4u) goto L_08939BE4;
    return;
L_08939BE4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(22248), 0u);
    goto L_08939BE8;
L_08939BE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939BF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08939C20;
      }
      goto L_08939C18;
    }
L_08939C18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08939DC8;
      }
      goto L_08939C20;
    }
L_08939C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] & 64u);
      if (branch_taken) {
          goto L_08939C58;
      }
      goto L_08939C30;
    }
L_08939C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(220)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08939C50u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08939C50u) goto L_08939C50;
    return;
L_08939C50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939DB8;
      }
      goto L_08939C58;
    }
L_08939C58:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (ctx.gpr[4] & 8u);
        goto L_08939C7C;
    }
    goto L_08939C60;
L_08939C60:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x08939C74u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08939C74u) goto L_08939C74;
    return;
L_08939C74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939DB8;
      }
      goto L_08939C7C;
    }
L_08939C7C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] & 2u);
      if (branch_taken) {
          goto L_08939CE4;
      }
      goto L_08939C84;
    }
L_08939C84:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(220)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (0u | 4u);
      if (branch_taken) {
          goto L_08939CD4;
      }
      goto L_08939CA0;
    }
L_08939CA0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 9u);
      if (branch_taken) {
          goto L_08939CC4;
      }
      goto L_08939CA8;
    }
L_08939CA8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08939CC4;
      }
      goto L_08939CB0;
    }
L_08939CB0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(220), ctx.gpr[6]);
    ctx.gpr[31] = (0x08939CBCu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08939CBCu) goto L_08939CBC;
    return;
L_08939CBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939DB8;
      }
      goto L_08939CC4;
    }
L_08939CC4:
    ctx.gpr[31] = (0x08939CCCu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08939CCCu) goto L_08939CCC;
    return;
L_08939CCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939DB8;
      }
      goto L_08939CD4;
    }
L_08939CD4:
    ctx.gpr[31] = (0x08939CDCu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08939CDCu) goto L_08939CDC;
    return;
L_08939CDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939DB8;
      }
      goto L_08939CE4;
    }
L_08939CE4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] & 4u);
      if (branch_taken) {
          goto L_08939D44;
      }
      goto L_08939CEC;
    }
L_08939CEC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(220)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08939D34;
      }
      goto L_08939D08;
    }
L_08939D08:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939D24;
      }
      goto L_08939D10;
    }
L_08939D10:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(220), ctx.gpr[6]);
    ctx.gpr[31] = (0x08939D1Cu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08939D1Cu) goto L_08939D1C;
    return;
L_08939D1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939DB8;
      }
      goto L_08939D24;
    }
L_08939D24:
    ctx.gpr[31] = (0x08939D2Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08939D2Cu) goto L_08939D2C;
    return;
L_08939D2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939DB8;
      }
      goto L_08939D34;
    }
L_08939D34:
    ctx.gpr[31] = (0x08939D3Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08939D3Cu) goto L_08939D3C;
    return;
L_08939D3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939DB8;
      }
      goto L_08939D44;
    }
L_08939D44:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
      if (branch_taken) {
          goto L_08939D84;
      }
      goto L_08939D4C;
    }
L_08939D4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 5u);
      if (branch_taken) {
          goto L_08939D74;
      }
      goto L_08939D58;
    }
L_08939D58:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08939D74;
      }
      goto L_08939D60;
    }
L_08939D60:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(220), ctx.gpr[4]);
    ctx.gpr[31] = (0x08939D6Cu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08939D6Cu) goto L_08939D6C;
    return;
L_08939D6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939DB8;
      }
      goto L_08939D74;
    }
L_08939D74:
    ctx.gpr[31] = (0x08939D7Cu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08939D7Cu) goto L_08939D7C;
    return;
L_08939D7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939DB8;
      }
      goto L_08939D84;
    }
L_08939D84:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939DB8;
      }
      goto L_08939D8C;
    }
L_08939D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(220)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
      if (branch_taken) {
          goto L_08939DB0;
      }
      goto L_08939D9C;
    }
L_08939D9C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(220), ctx.gpr[4]);
    ctx.gpr[31] = (0x08939DA8u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08939DA8u) goto L_08939DA8;
    return;
L_08939DA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08939DB8;
      }
      goto L_08939DB0;
    }
L_08939DB0:
    ctx.gpr[31] = (0x08939DB8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08939DB8u) goto L_08939DB8;
    return;
L_08939DB8:
    ctx.gpr[31] = (0x08939DC0u);
    // nop
    goto L_08939EDC;
L_08939DC0:
    ctx.gpr[31] = (0x08939DC8u);
    // nop
    goto L_0893A094;
L_08939DC8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939DDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08939E04;
      }
      goto L_08939DF4;
    }
L_08939DF4:
    ctx.gpr[31] = (0x08939DFCu);
    // nop
    goto L_08939F70;
L_08939DFC:
    ctx.gpr[31] = (0x08939E04u);
    // nop
    goto L_0893A09C;
L_08939E04:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939E10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08939E34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08939E34u) goto L_08939E34;
    return;
L_08939E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[31] = (0x08939E44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x08939E44u) goto L_08939E44;
    return;
L_08939E44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[31] = (0x08939E54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x08939E54u) goto L_08939E54;
    return;
L_08939E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[31] = (0x08939E64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08939E64u) goto L_08939E64;
    return;
L_08939E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[31] = (0x08939E74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08939E74u) goto L_08939E74;
    return;
L_08939E74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[16] = (0u | 0u);
    goto L_08939E84;
L_08939E84:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08939E90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08939E90u) goto L_08939E90;
    return;
L_08939E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
      if (branch_taken) {
          goto L_08939E84;
      }
      goto L_08939EA8;
    }
L_08939EA8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08939EBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08939EBCu) goto L_08939EBC;
    return;
L_08939EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(268), 0u);
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
L_08939EDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (16872u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
      if (branch_taken) {
          goto L_08939F24;
      }
      goto L_08939F0C;
    }
L_08939F0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(368)));
    ctx.gpr[4] = (17208u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    goto L_08939F24;
L_08939F24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(220)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
        goto L_08939F34;
    }
    goto L_08939F34;
L_08939F34:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16904u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17060u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    ctx.gpr[31] = (0x08939F64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x08939F64u) goto L_08939F64;
    return;
L_08939F64:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08939F70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08939F94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08939F94u) goto L_08939F94;
    return;
L_08939F94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[31] = (0x08939FA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x08939FA4u) goto L_08939FA4;
    return;
L_08939FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[31] = (0x08939FB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x08939FB4u) goto L_08939FB4;
    return;
L_08939FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[31] = (0x08939FC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08939FC4u) goto L_08939FC4;
    return;
L_08939FC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[31] = (0x08939FD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08939FD4u) goto L_08939FD4;
    return;
L_08939FD4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_08939FDC;
L_08939FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08939FF0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08939FF0u) goto L_08939FF0;
    return;
L_08939FF0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08939FDC;
      }
      goto L_0893A000;
    }
L_0893A000:
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
L_0893A018:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0893A040;
L_0893A040:
    ctx.gpr[31] = (0x0893A048u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0893A048u) goto L_0893A048;
    return;
L_0893A048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
      if (branch_taken) {
          goto L_0893A040;
      }
      goto L_0893A060;
    }
L_0893A060:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0893A074u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893A074u) goto L_0893A074;
    return;
L_0893A074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22248)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(272), 0u);
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
L_0893A094:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893A09C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0893A0C8;
L_0893A0C8:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893A100;
      }
      goto L_0893A0D8;
    }
L_0893A0D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0893A104;
      }
      goto L_0893A0E0;
    }
L_0893A0E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A160;
      }
      goto L_0893A0F8;
    }
L_0893A0F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0893A160;
      }
      goto L_0893A100;
    }
L_0893A100:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    goto L_0893A104;
L_0893A104:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 22 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893A134;
      }
      goto L_0893A10C;
    }
L_0893A10C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A134;
      }
      goto L_0893A114;
    }
L_0893A114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-12));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A160;
      }
      goto L_0893A12C;
    }
L_0893A12C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0893A160;
      }
      goto L_0893A134;
    }
L_0893A134:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A160;
      }
      goto L_0893A13C;
    }
L_0893A13C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893A160;
      }
      goto L_0893A144;
    }
L_0893A144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-22));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A160;
      }
      goto L_0893A15C;
    }
L_0893A15C:
    ctx.gpr[5] = (0u | 0u);
    goto L_0893A160;
L_0893A160:
    if (ctx.gpr[5] != ctx.gpr[17]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_0893A17C;
    }
    goto L_0893A168;
L_0893A168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.gpr[31] = (0x0893A178u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0893A178u) goto L_0893A178;
    return;
L_0893A178:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0893A17C;
L_0893A17C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0893A0C8;
      }
      goto L_0893A188;
    }
L_0893A188:
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
L_0893A1A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893A1DCu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), 0u);
    goto L_0893A2CC;
L_0893A1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    goto L_0893A1EC;
L_0893A1EC:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(228), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893A1EC;
      }
      goto L_0893A200;
    }
L_0893A200:
    ctx.gpr[21] = (2220u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[22] = (0u | 100u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(7824));
    goto L_0893A21C;
L_0893A21C:
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0893A254;
      }
      goto L_0893A22C;
    }
L_0893A22C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(228), ctx.gpr[17]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 101 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893A278;
      }
      goto L_0893A254;
    }
L_0893A254:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[31] = (0x0893A268u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0893A268u) goto L_0893A268;
    return;
L_0893A268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 101 ? 1u : 0u);
    goto L_0893A278;
L_0893A278:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893A288;
      }
      goto L_0893A280;
    }
L_0893A280:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_0893A288;
L_0893A288:
    if (static_cast<std::int32_t>(ctx.gpr[6]) < 0) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(100), 0u);
        goto L_0893A290;
    }
    goto L_0893A290;
L_0893A290:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(9));
      if (branch_taken) {
          goto L_0893A21C;
      }
      goto L_0893A2A4;
    }
L_0893A2A4:
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
L_0893A2CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893A2ECu);
    ctx.gpr[6] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0893A2ECu) goto L_0893A2EC;
    return;
L_0893A2EC:
    ctx.gpr[31] = (0x0893A2F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 575u, 0x08842C58u>(ctx, &aot_mem) && ctx.pc == 0x0893A2F4u) goto L_0893A2F4;
    return;
L_0893A2F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893A304:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 1380u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0893A350u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893A350u) goto L_0893A350;
    return;
L_0893A350:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(268), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[6] = (0u | 1380u);
    ctx.gpr[31] = (0x0893A370u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0893A370u) goto L_0893A370;
    return;
L_0893A370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[5] = (17392u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[31] = (0x0893A40Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0893A40Cu) goto L_0893A40C;
    return;
L_0893A40C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[5] = (17331u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[5] = (16704u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[31] = (0x0893A448u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x0893A448u) goto L_0893A448;
    return;
L_0893A448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[5] = (17363u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[31] = (0x0893A480u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x0893A480u) goto L_0893A480;
    return;
L_0893A480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[5] = (16872u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[5] = (16980u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[5] = (17336u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[5] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(300), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(296));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[31] = (0x0893A524u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0893A524u) goto L_0893A524;
    return;
L_0893A524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[5] = (17208u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
      if (branch_taken) {
          goto L_0893A560;
      }
      goto L_0893A54C;
    }
L_0893A54C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(368)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    goto L_0893A560;
L_0893A560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
        goto L_0893A570;
    }
    goto L_0893A570;
L_0893A570:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16904u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17060u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (0u | 151u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(392), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(388));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[31] = (0x0893A608u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0893A608u) goto L_0893A608;
    return;
L_0893A608:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (17224u << 16u);
    ctx.gpr[20] = (0u | 8u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 0u);
    goto L_0893A624;
L_0893A624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0893A6B8;
      }
      goto L_0893A634;
    }
L_0893A634:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-7));
      if (branch_taken) {
          goto L_0893A6BC;
      }
      goto L_0893A640;
    }
L_0893A640:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0893A668;
      }
      goto L_0893A654;
    }
L_0893A654:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0893A68C;
      }
      goto L_0893A668;
    }
L_0893A668:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_0893A68C;
L_0893A68C:
    ctx.gpr[5] = (17336u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0893A744;
      }
      goto L_0893A6B8;
    }
L_0893A6B8:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-7));
    goto L_0893A6BC;
L_0893A6BC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17208u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[20];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0893A724;
      }
      goto L_0893A6F8;
    }
L_0893A6F8:
    ctx.gpr[5] = (17195u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_0893A744;
      }
      goto L_0893A724;
    }
L_0893A724:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_0893A744;
L_0893A744:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(484), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(480));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x0893A79Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x0893A79Cu) goto L_0893A79C;
    return;
L_0893A79C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_0893A624;
      }
      goto L_0893A7AC;
    }
L_0893A7AC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893A7E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 5760u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0893A840u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893A840u) goto L_0893A840;
    return;
L_0893A840:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(272), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0893A85Cu);
    ctx.gpr[6] = (0u | 5760u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0893A85Cu) goto L_0893A85C;
    return;
L_0893A85C:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7828));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (17208u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16904u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17140u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    ctx.gpr[4] = (17106u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] << 24u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
    ctx.gpr[30] = (ctx.gpr[8] << 24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[4] = (17234u << 16u);
    ctx.gpr[23] = (2220u << 16u);
    ctx.gpr[22] = (2220u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[30]) >> 24u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[20] = (ctx.gpr[21] + static_cast<std::uint32_t>(22260));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(7836));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(7852));
    goto L_0893A910;
L_0893A910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0893A974;
      }
      goto L_0893A934;
    }
L_0893A934:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(22260)));
    ctx.gpr[31] = (0x0893A940u);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0893A940u) goto L_0893A940;
    return;
L_0893A940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[6] = (16832u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16640u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16688u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0893AB5C;
      }
      goto L_0893A974;
    }
L_0893A974:
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[7];
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893A9C0;
      }
      goto L_0893A980;
    }
L_0893A980:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0893A98Cu);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0893A98Cu) goto L_0893A98C;
    return;
L_0893A98C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[5] = (16784u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16920u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.gpr[5] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0893AB5C;
      }
      goto L_0893A9C0;
    }
L_0893A9C0:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[17]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893AA5C;
      }
      goto L_0893A9C8;
    }
L_0893A9C8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0893AA60;
      }
      goto L_0893A9D0;
    }
L_0893A9D0:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(220)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    ctx.gpr[31] = (0x0893A9F4u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0893A9F4u) goto L_0893A9F4;
    return;
L_0893A9F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[6] = (16784u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (16924u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    if (ctx.gpr[7] == 0u) {
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[22];
        goto L_0893AA30;
    }
    goto L_0893AA30;
L_0893AA30:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 5 ? 1u : 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5));
        goto L_0893AA40;
    }
    goto L_0893AA40;
L_0893AA40:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (17076u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
      if (branch_taken) {
          goto L_0893AB5C;
      }
      goto L_0893AA5C;
    }
L_0893AA5C:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    goto L_0893AA60;
L_0893AA60:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[17]) < 22 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893AACC;
      }
      goto L_0893AA68;
    }
L_0893AA68:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893AACC;
      }
      goto L_0893AA70;
    }
L_0893AA70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0893AA7Cu);
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0893AA7Cu) goto L_0893AA7C;
    return;
L_0893AA7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-12));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    if (ctx.gpr[7] == 0u) {
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[22];
        goto L_0893AAA8;
    }
    goto L_0893AAA8;
L_0893AAA8:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 5 ? 1u : 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5));
        goto L_0893AAB8;
    }
    goto L_0893AAB8;
L_0893AAB8:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[26];
      if (branch_taken) {
          goto L_0893AB5C;
      }
      goto L_0893AACC;
    }
L_0893AACC:
    if (ctx.gpr[7] != 0u) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0893AB60;
    }
    goto L_0893AAD4;
L_0893AAD4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_0893AB5C;
      }
      goto L_0893AADC;
    }
L_0893AADC:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(140)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0893AB10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0893AB10u) goto L_0893AB10;
    return;
L_0893AB10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-22));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    if (ctx.gpr[7] == 0u) {
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[22];
        goto L_0893AB3C;
    }
    goto L_0893AB3C;
L_0893AB3C:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 5 ? 1u : 0u);
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5));
        goto L_0893AB4C;
    }
    goto L_0893AB4C;
L_0893AB4C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[26];
    goto L_0893AB5C;
L_0893AB5C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0893AB60;
L_0893AB60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[31] = (0x0893AB9Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x0893AB9Cu) goto L_0893AB9C;
    return;
L_0893AB9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0893ABB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0893ABB4u) goto L_0893ABB4;
    return;
L_0893ABB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22248)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    ctx.gpr[31] = (0x0893ABC4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x0893ABC4u) goto L_0893ABC4;
    return;
L_0893ABC4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893A910;
      }
      goto L_0893ABD8;
    }
L_0893ABD8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893AC20:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22240)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(22244), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893AC34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893AC5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 545u, 0x0894BAD0u>(ctx, &aot_mem) && ctx.pc == 0x0893AC5Cu) goto L_0893AC5C;
    return;
L_0893AC5C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
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
L_0893AC7C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893AC8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ACB4;
      }
      goto L_0893ACA0;
    }
L_0893ACA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[31] = (0x0893ACB4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 548u, 0x0894BAFCu>(ctx, &aot_mem) && ctx.pc == 0x0893ACB4u) goto L_0893ACB4;
    return;
L_0893ACB4:
    ctx.gpr[31] = (0x0893ACBCu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 548u, 0x0894BAFCu>(ctx, &aot_mem) && ctx.pc == 0x0893ACBCu) goto L_0893ACBC;
    return;
L_0893ACBC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893ACC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893ACECu);
    ctx.gpr[6] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 431u, 0x08809A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893ACECu) goto L_0893ACEC;
    return;
L_0893ACEC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893ACF8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0893AE04;
L_0893ACF8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0893AD04u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0893AD04u) goto L_0893AD04;
    return;
L_0893AD04:
    ctx.gpr[2] = (0u < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893AD1C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893AD34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0893AD74;
      }
      goto L_0893AD60;
    }
L_0893AD60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0893AD70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893AD70u) goto L_0893AD70;
    return;
L_0893AD70:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_0893AD74;
L_0893AD74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_0893ADE4;
      }
      goto L_0893AD80;
    }
L_0893AD80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
      if (branch_taken) {
          goto L_0893ADD4;
      }
      goto L_0893AD9C;
    }
L_0893AD9C:
    ctx.gpr[17] = (0u | 0u);
    goto L_0893ADA0;
L_0893ADA0:
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[17]);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0893ADACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893ADACu) goto L_0893ADAC;
    return;
L_0893ADAC:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0893ADA0;
      }
      goto L_0893ADD4;
    }
L_0893ADD4:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0893ADDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893ADDCu) goto L_0893ADDC;
    return;
L_0893ADDC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_0893ADE4;
L_0893ADE4:
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
L_0893AE04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893AE4Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 381u, 0x089D26B8u>(ctx, &aot_mem) && ctx.pc == 0x0893AE4Cu) goto L_0893AE4C;
    return;
L_0893AE4C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0893AFAC;
      }
      goto L_0893AE58;
    }
L_0893AE58:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0893AE64u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x0893AE64u) goto L_0893AE64;
    return;
L_0893AE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2222u << 16u);
      if (branch_taken) {
          goto L_0893AEB4;
      }
      goto L_0893AE78;
    }
L_0893AE78:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0893AE94u);
    ctx.gpr[5] = (0u | 135u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893AE94u) goto L_0893AE94;
    return;
L_0893AE94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0893AEB4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x0893AEB4u) goto L_0893AEB4;
    return;
L_0893AEB4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0893AEC4u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x0893AEC4u) goto L_0893AEC4;
    return;
L_0893AEC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0893AEE0u);
    ctx.gpr[5] = (0u | 135u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893AEE0u) goto L_0893AEE0;
    return;
L_0893AEE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0893AF6C;
      }
      goto L_0893AEF4;
    }
L_0893AEF4:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[21] = (0u | 0u);
    goto L_0893AEFC;
L_0893AEFC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0893AF0Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x0893AF0Cu) goto L_0893AF0C;
    return;
L_0893AF0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0893AF38u);
    ctx.gpr[5] = (0u | 135u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893AF38u) goto L_0893AF38;
    return;
L_0893AF38:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0893AF58u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 301u, 0x089D2224u>(ctx, &aot_mem) && ctx.pc == 0x0893AF58u) goto L_0893AF58;
    return;
L_0893AF58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0893AEFC;
      }
      goto L_0893AF6C;
    }
L_0893AF6C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0893AF78u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 356u, 0x089D258Cu>(ctx, &aot_mem) && ctx.pc == 0x0893AF78u) goto L_0893AF78;
    return;
L_0893AF78:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893AFAC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893AFE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[8] << 3u);
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0893B08C;
      }
      goto L_0893B044;
    }
L_0893B044:
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[2] = (ctx.gpr[9] | 0u);
    goto L_0893B04C;
L_0893B04C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[3] == 0u) {
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
        goto L_0893B07C;
    }
    goto L_0893B05C;
L_0893B05C:
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[11]);
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_0893B08C;
      }
      goto L_0893B07C;
    }
L_0893B07C:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(8));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0893B04C;
      }
      goto L_0893B08C;
    }
L_0893B08C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[7] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0893B0B8u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 545u, 0x0894BAD0u>(ctx, &aot_mem) && ctx.pc == 0x0893B0B8u) goto L_0893B0B8;
    return;
L_0893B0B8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0893B0C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0893AC7C;
L_0893B0C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0893B0D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0893AC34;
L_0893B0D0:
    ctx.gpr[31] = (0x0893B0D8u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 545u, 0x0894BAD0u>(ctx, &aot_mem) && ctx.pc == 0x0893B0D8u) goto L_0893B0D8;
    return;
L_0893B0D8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0893B0E4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0893AC7C;
L_0893B0E4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0893B0F0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0893AC34;
L_0893B0F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0893B18C;
      }
      goto L_0893B110;
    }
L_0893B110:
    ctx.gpr[8] = (0u | 0u);
    goto L_0893B114;
L_0893B114:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[9] << 3u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(24), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_0893B114;
      }
      goto L_0893B18C;
    }
L_0893B18C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0893B1A8u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 545u, 0x0894BAD0u>(ctx, &aot_mem) && ctx.pc == 0x0893B1A8u) goto L_0893B1A8;
    return;
L_0893B1A8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0893B1B4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0893AC7C;
L_0893B1B4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0893B1C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0893AC34;
L_0893B1C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0893B25C;
      }
      goto L_0893B1E0;
    }
L_0893B1E0:
    ctx.gpr[8] = (0u | 0u);
    goto L_0893B1E4;
L_0893B1E4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[9] << 3u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(24), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(32), ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_0893B1E4;
      }
      goto L_0893B25C;
    }
L_0893B25C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0893B278u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 545u, 0x0894BAD0u>(ctx, &aot_mem) && ctx.pc == 0x0893B278u) goto L_0893B278;
    return;
L_0893B278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (ctx.gpr[7] << 3u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0893B32C;
      }
      goto L_0893B2AC;
    }
L_0893B2AC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B324;
      }
      goto L_0893B2BC;
    }
L_0893B2BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_0893B2BC;
      }
      goto L_0893B324;
    }
L_0893B324:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0893B410;
      }
      goto L_0893B32C;
    }
L_0893B32C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
      if (branch_taken) {
          goto L_0893B34C;
      }
      goto L_0893B344;
    }
L_0893B344:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    goto L_0893B34C;
L_0893B34C:
    ctx.fpr[14] = ctx.fpr[20] - ctx.fpr[22];
    ctx.gpr[20] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.fpr[20] = ctx.fpr[13] / ctx.fpr[14];
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[22];
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[14];
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0893B410;
      }
      goto L_0893B370;
    }
L_0893B370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(24));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.gpr[31] = (0x0893B400u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0893B458;
L_0893B400:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_0893B370;
      }
      goto L_0893B410;
    }
L_0893B410:
    ctx.gpr[31] = (0x0893B418u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 548u, 0x0894BAFCu>(ctx, &aot_mem) && ctx.pc == 0x0893B418u) goto L_0893B418;
    return;
L_0893B418:
    ctx.gpr[31] = (0x0893B420u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0893AC8C;
L_0893B420:
    ctx.gpr[31] = (0x0893B428u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0893AC8C;
L_0893B428:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B458:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.gpr[8] = (16256u << 16u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[13] + ctx.fpr[0];
    ctx.fpr[17] = std::bit_cast<float>(0u);
    ctx.fpr[15] = ctx.fpr[0] + ctx.fpr[15];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[17]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[7] = (0u | 1u);
        goto L_0893B4B8;
    }
    goto L_0893B4B8;
L_0893B4B8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (16255u << 16u);
      if (branch_taken) {
          goto L_0893B4E4;
      }
      goto L_0893B4C0;
    }
L_0893B4C0:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]) ^ 0x80000000u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_0893B4E4;
L_0893B4E4:
    ctx.fpr[16] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[8] = (ctx.gpr[7] | 48759u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[7] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[7] = (0u | 1u);
        goto L_0893B504;
    }
    goto L_0893B504;
L_0893B504:
    if (ctx.gpr[7] != 0u) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_0893B964;
    }
    goto L_0893B50C;
L_0893B50C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (32768u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[8] & ctx.gpr[7]);
    ctx.gpr[9] = (16256u << 16u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (16128u << 16u);
      if (branch_taken) {
          goto L_0893B55C;
      }
      goto L_0893B530;
    }
L_0893B530:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[7] = (16457u << 16u);
      if (branch_taken) {
          goto L_0893B544;
      }
      goto L_0893B538;
    }
L_0893B538:
    ctx.gpr[7] = (ctx.gpr[7] | 4059u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_0893B544;
      }
      goto L_0893B544;
    }
L_0893B544:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
      if (branch_taken) {
          goto L_0893B864;
      }
      goto L_0893B55C;
    }
L_0893B55C:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    if (ctx.gpr[9] == 0u) {
    ctx.gpr[7] = (14353u << 16u);
        goto L_0893B69C;
    }
    goto L_0893B568;
L_0893B568:
    ctx.gpr[8] = (8960u << 16u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (16329u << 16u);
      if (branch_taken) {
          goto L_0893B594;
      }
      goto L_0893B578;
    }
L_0893B578:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] | 4059u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
      if (branch_taken) {
          goto L_0893B864;
      }
      goto L_0893B594;
    }
L_0893B594:
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[7] = (14353u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 61192u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (14927u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[7] | 32516u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (48420u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 4422u);
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[19];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (15950u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 2728u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.gpr[8] = (48944u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (15773u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 50734u);
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[0];
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[8] | 13153u);
    ctx.gpr[8] = (48806u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[8] | 45200u);
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[0];
    ctx.gpr[8] = (15914u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16385u << 16u);
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[2];
    ctx.gpr[7] = (ctx.gpr[7] | 22317u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[8] | 43691u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[0];
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (49177u << 16u);
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[1];
    ctx.gpr[7] = (ctx.gpr[7] | 53561u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[0];
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[2];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[13];
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[19];
    ctx.gpr[7] = (13218u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 8552u);
    ctx.gpr[8] = (16329u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] | 4058u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[17] = ctx.fpr[0] - ctx.fpr[17];
    ctx.fpr[17] = ctx.fpr[15] - ctx.fpr[17];
    ctx.fpr[17] = ctx.fpr[19] - ctx.fpr[17];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
      if (branch_taken) {
          goto L_0893B864;
      }
      goto L_0893B69C;
    }
L_0893B69C:
    ctx.gpr[7] = (ctx.gpr[7] | 61192u);
    ctx.fpr[8] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (14927u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 32516u);
    ctx.fpr[7] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (48420u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 4422u);
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (15950u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 2728u);
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (48806u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 45200u);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (15914u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 43691u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (15773u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 50734u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (48944u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 13153u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[9] = (16384u << 16u);
    ctx.gpr[7] = (16385u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] | 22317u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (49177u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 53561u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16128u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_0893B7C0;
      }
      goto L_0893B724;
    }
L_0893B724:
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[8] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[7] = ctx.fpr[8] + ctx.fpr[7];
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[2];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[7] + ctx.fpr[6];
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[5];
    ctx.fpr[19] = ctx.fpr[0] + ctx.fpr[19];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[4];
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[13];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[3];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::sqrt(ctx.fpr[15]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[19];
    ctx.gpr[7] = (13218u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 8552u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16457u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 4058u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[18];
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[19] - ctx.fpr[17];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
      if (branch_taken) {
          goto L_0893B864;
      }
      goto L_0893B7C0;
    }
L_0893B7C0:
    ctx.fpr[15] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[9] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[10] = std::sqrt(ctx.fpr[15]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-4096));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.fpr[11] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[8] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    { const float fs = ctx.fpr[11]; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[11] + ctx.fpr[10];
    ctx.fpr[7] = ctx.fpr[8] + ctx.fpr[7];
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[18];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[6] = ctx.fpr[7] + ctx.fpr[6];
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[2];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[6] + ctx.fpr[5];
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[4];
    ctx.fpr[19] = ctx.fpr[0] + ctx.fpr[19];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[3];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[18] / ctx.fpr[15];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[10]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[11] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    goto L_0893B864;
L_0893B864:
    ctx.gpr[7] = (12078u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 51667u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[7] = (45783u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 12084u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (13880u << 16u);
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[0];
    ctx.gpr[7] = (ctx.gpr[7] | 61211u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (47440u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[7] | 3329u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (15368u << 16u);
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[1];
    ctx.gpr[7] = (ctx.gpr[7] | 34953u);
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[7] = (48682u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 43691u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[16];
    ctx.fpr[8] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[5];
    ctx.fpr[6] = ctx.fpr[6] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[7] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[8];
    ctx.fpr[6] = ctx.fpr[6] + ctx.fpr[1];
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[6] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[17] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    ctx.fpr[19] = ctx.fpr[6] + ctx.fpr[16];
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[1];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] + ctx.fpr[5];
    ctx.fpr[16] = ctx.fpr[18] + ctx.fpr[16];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[8];
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[5];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[18] = ctx.fpr[16] + ctx.fpr[8];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[2] + ctx.fpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_0893B964;
L_0893B964:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893B9C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893B9DCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0893BA44;
L_0893B9DC:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (0u | 57344u);
      if (branch_taken) {
          goto L_0893B9EC;
      }
      goto L_0893B9E4;
    }
L_0893B9E4:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28672));
    goto L_0893B9EC;
L_0893B9EC:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22280));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0893BA18u);
    ctx.gpr[5] = (0u | 136u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893BA18u) goto L_0893BA18;
    return;
L_0893BA18:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0893BA30u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0893BA30u) goto L_0893BA30;
    return;
L_0893BA30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BA44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22280));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0893BA84;
      }
      goto L_0893BA6C;
    }
L_0893BA6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0893BA7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893BA7Cu) goto L_0893BA7C;
    return;
L_0893BA7C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    goto L_0893BA84;
L_0893BA84:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BA94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22280));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[16] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_0893BAC4;
L_0893BAC4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_0893BAF0;
    }
    goto L_0893BAD4;
L_0893BAD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0893BAE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893BAE4u) goto L_0893BAE4;
    return;
L_0893BAE4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0893BAF0;
L_0893BAF0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0893BAC4;
      }
      goto L_0893BAFC;
    }
L_0893BAFC:
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
L_0893BB18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893BB3Cu);
    ctx.gpr[6] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 431u, 0x08809A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893BB3Cu) goto L_0893BB3C;
    return;
L_0893BB3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0893BB54u);
    ctx.gpr[8] = (0u | 0u);
    goto L_0893BB78;
L_0893BB54:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0893BB60u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0893BB60u) goto L_0893BB60;
    return;
L_0893BB60:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BB78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) > 0;
    ctx.gpr[4] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_0893BBC4;
      }
      goto L_0893BBA0;
    }
L_0893BBA0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0893BC20;
      }
      goto L_0893BBA8;
    }
L_0893BBA8:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x0893BBB8u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 5u, 0x0893C0F0u>(ctx, &aot_mem) && ctx.pc == 0x0893BBB8u) goto L_0893BBB8;
    return;
L_0893BBB8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BBC4:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893BBE0;
      }
      goto L_0893BBD0;
    }
L_0893BBD0:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0893BC08;
      }
      goto L_0893BBD8;
    }
L_0893BBD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893BC20;
      }
      goto L_0893BBE0;
    }
L_0893BBE0:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x0893BBFCu);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 21u, 0x0893C260u>(ctx, &aot_mem) && ctx.pc == 0x0893BBFCu) goto L_0893BBFC;
    return;
L_0893BBFC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BC08:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x0893BC20u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 35u, 0x0893C3CCu>(ctx, &aot_mem) && ctx.pc == 0x0893BC20u) goto L_0893BC20;
    return;
L_0893BC20:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BC2C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BC3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0893BCE0;
      }
      goto L_0893BC60;
    }
L_0893BC60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0893BCBC;
      }
      goto L_0893BC74;
    }
L_0893BC74:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (2222u << 16u);
    goto L_0893BC7C;
L_0893BC7C:
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0893BCAC;
    }
    goto L_0893BC8C;
L_0893BC8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0893BC9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893BC9Cu) goto L_0893BC9C;
    return;
L_0893BC9C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0893BCAC;
L_0893BCAC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0893BC7C;
      }
      goto L_0893BCBC;
    }
L_0893BCBC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_0893BCE0;
      }
      goto L_0893BCC4;
    }
L_0893BCC4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0893BCD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893BCD8u) goto L_0893BCD8;
    return;
L_0893BCD8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_0893BCE0;
L_0893BCE0:
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
L_0893BD00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0893BD2C;
      }
      goto L_0893BD20;
    }
L_0893BD20:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0893BD2Cu);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0893BD2Cu) goto L_0893BD2C;
    return;
L_0893BD2C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BD50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893BD68u);
    ctx.gpr[6] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 431u, 0x08809A2Cu>(ctx, &aot_mem) && ctx.pc == 0x0893BD68u) goto L_0893BD68;
    return;
L_0893BD68:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893BD74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22280));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0893BE54;
      }
      goto L_0893BDF0;
    }
L_0893BDF0:
    ctx.gpr[19] = (0u | 0u);
    goto L_0893BDF4;
L_0893BDF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[23] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x0893BE28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    goto L_0893BC2C;
L_0893BE28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0893BE40u);
    ctx.gpr[8] = (0u | 2u);
    goto L_0893BB78;
L_0893BE40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893BDF4;
      }
      goto L_0893BE54;
    }
L_0893BE54:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893BE68;
      }
      goto L_0893BE60;
    }
L_0893BE60:
    ctx.gpr[31] = (0x0893BE68u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 61u, 0x0893C5F4u>(ctx, &aot_mem) && ctx.pc == 0x0893BE68u) goto L_0893BE68;
    return;
L_0893BE68:
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
L_0893BE94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22280));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[9] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0893BFCC;
      }
      goto L_0893BF34;
    }
L_0893BF34:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[20] + ctx.gpr[18]);
    ctx.gpr[16] = (0u | 0u);
    goto L_0893BF44;
L_0893BF44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[31] = (0x0893BF98u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_0893BC2C;
L_0893BF98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0893BFB0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_0893BB78;
L_0893BFB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_0893BF44;
      }
      goto L_0893BFCC;
    }
L_0893BFCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893BFE4;
      }
      goto L_0893BFDC;
    }
L_0893BFDC:
    ctx.gpr[31] = (0x0893BFE4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 61u, 0x0893C5F4u>(ctx, &aot_mem) && ctx.pc == 0x0893BFE4u) goto L_0893BFE4;
    return;
L_0893BFE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.pc = 0x0893C000u; return;
}

void recomp_unit_0077(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0077_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_77(Runtime &runtime) {
    runtime.register_generated_unit(77u, 0x08938000u, 16384u, &recomp_unit_0077, &recomp_unit_0077_entry);
    runtime.register_function(0x08938000u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938034u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938038u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938044u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893804Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938058u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938060u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938068u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938070u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938078u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938080u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938088u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938090u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938098u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089380F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938100u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938104u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938108u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938110u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938118u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938128u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938138u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938140u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938150u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938158u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938160u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938168u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938178u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938180u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938188u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938190u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938198u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089381FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938208u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938214u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938220u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893822Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938238u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938240u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893824Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938258u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938260u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938268u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938274u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938280u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938288u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893828Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938294u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893829Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089382F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893830Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938314u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938320u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938328u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938330u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893833Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938344u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938348u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938354u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893835Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938364u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938370u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938374u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938378u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938380u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938388u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938398u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089383F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938400u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938408u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938418u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938420u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938428u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938430u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938438u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938440u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893844Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938454u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938468u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938470u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938478u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938480u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938488u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938490u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938498u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089384FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938504u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938510u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938528u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938530u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938538u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938540u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893854Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938554u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893855Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938564u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938570u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938580u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938588u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938590u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893859Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089385D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938618u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938628u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938630u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938638u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938640u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893864Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938654u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893865Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938674u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893867Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938684u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938690u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938698u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089386F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938708u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938714u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938720u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893872Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938738u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938740u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938748u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938758u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938764u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938768u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938774u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893877Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938784u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938794u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893879Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089387F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893880Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938814u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893882Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938834u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893884Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938854u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938868u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938870u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938884u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893888Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089388FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938910u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938918u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893892Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938934u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938948u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938950u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938964u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893896Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893897Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938984u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938994u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389E8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089389F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A50u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938A9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938AD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B50u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938B94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BB0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938BFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C50u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938C9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CCCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938CFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D5Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938D9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938DF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E14u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938E9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938ED4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938EF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F50u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938F7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FCCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08938FFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939004u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893902Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939034u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893903Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939058u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939070u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939078u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939084u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939090u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893909Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089390FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939104u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893911Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939128u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939134u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939140u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939144u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939150u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939178u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939180u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939188u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939198u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089391F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939200u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939204u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939208u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939210u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939238u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939250u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893925Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939270u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939284u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089392C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893932Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939348u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939368u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089393F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939408u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939424u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939434u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939450u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939460u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089394E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939500u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939518u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939530u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939548u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893956Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939588u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939618u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939640u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939690u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939698u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396A0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089396F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939710u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939730u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939740u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939758u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939770u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939790u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089397F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939804u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893980Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939818u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939824u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893982Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939834u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939844u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893984Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939858u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939864u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893986Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939874u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939884u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893988Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939894u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893989Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089398F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939908u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939910u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939918u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939930u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939938u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939940u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939958u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939960u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939968u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939980u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939988u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939990u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939998u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399B0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399D4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x089399FCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A50u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939A90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939AA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939AB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939AD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939AECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B48u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B88u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939B98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BD0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BE8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939BF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C20u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C50u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939C84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CB0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CCCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939CECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939D9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DB0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DC0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939DFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939E90u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939EDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F24u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939F94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FA4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x08939FF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A000u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A018u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A040u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A048u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A060u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A074u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A094u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A09Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A0C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A0D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A0E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A0F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A100u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A104u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A10Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A114u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A12Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A134u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A13Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A144u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A15Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A160u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A168u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A178u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A17Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A188u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A1ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A200u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A21Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A22Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A254u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A268u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A278u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A280u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A288u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A290u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2A4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2CCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A2F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A304u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A350u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A370u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A40Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A448u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A480u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A524u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A54Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A560u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A570u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A608u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A624u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A634u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A640u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A654u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A668u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A68Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A6B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A6BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A6F8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A724u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A744u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A79Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A7E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A840u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A85Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A910u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A934u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A940u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A974u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A980u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A98Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9C8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893A9F4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA5Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AA7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AAA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AAB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AACCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AAD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AADCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB10u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB5Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AB9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ABB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ABC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ABD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC20u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC5Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AC8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACC8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ACF8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD1Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD70u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD80u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AD9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ADA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ADACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ADD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ADDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893ADE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE04u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE4Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE64u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AE94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEB4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AEFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF0Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF38u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF58u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AF78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893AFE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B044u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B04Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B05Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B07Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B08Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0D0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0D8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B0F0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B110u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B114u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B18Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1A8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1B4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1E0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B1E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B25Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B278u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2ACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B2BCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B324u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B32Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B344u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B34Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B370u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B400u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B410u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B418u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B420u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B428u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B458u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B4B8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B4C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B4E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B504u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B50Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B530u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B538u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B544u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B55Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B568u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B578u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B594u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B69Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B724u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B7C0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B864u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B964u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B9C4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B9DCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B9E4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893B9ECu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA30u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA6Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA84u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BA94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAD4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAE4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BAFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB18u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BB78u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBA0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBA8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBB8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBD0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BBFCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC08u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC20u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC3Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC7Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC8Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BC9Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCACu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCBCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCC4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCD8u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BCE0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD00u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD20u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD2Cu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD50u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BD74u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BDF0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BDF4u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE28u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE40u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE54u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE60u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE68u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BE94u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF34u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF44u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BF98u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFB0u, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFCCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFDCu, &recomp_unit_0077, "recomp_unit_0077");
    runtime.register_function(0x0893BFE4u, &recomp_unit_0077, "recomp_unit_0077");
}
} // namespace psprecomp

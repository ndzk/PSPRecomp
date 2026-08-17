#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0076[4094] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0,
    0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 14,
    0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0,
    0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 29,
    0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0,
    0, 34, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41,
    0, 0, 42, 0, 43, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 49,
    0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 52, 0, 53, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0,
    68, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 73, 0, 74, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0,
    0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 79, 0, 0, 80, 0, 81, 0, 0, 82, 0, 83, 0, 0, 84, 0, 85, 0, 0, 86, 0, 87, 0,
    0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 93, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 99, 100,
    0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 105, 0, 106, 0,
    0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0,
    117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0,
    0, 0, 122, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0,
    129, 0, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137,
    0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145,
    0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 149, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0,
    0, 0, 0, 153, 154, 0, 0, 155, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0,
    0, 167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0,
    175, 0, 176, 0, 177, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 182, 0, 183, 0, 184, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0,
    0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202,
    0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 209, 0, 210, 211, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 220, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0,
    0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 247, 0, 0,
    0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0,
    255, 0, 0, 0, 256, 0, 0, 0, 257, 258, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 262,
    0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0, 0, 269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 275, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 279, 0, 280, 0, 281, 0, 0, 282, 0, 283, 284, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 288, 0, 289, 0, 0, 290, 0, 0, 291, 0, 292, 0, 293, 0, 294, 0, 295,
    0, 296, 0, 297, 0, 298, 0, 299, 0, 0, 0, 300, 0, 301, 0, 302, 0, 0, 303, 0, 0, 304, 0, 305, 0, 306, 0, 307, 0, 308, 0, 309,
    0, 310, 0, 311, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 316, 0, 0,
    0, 0, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 320, 0, 321, 0, 322, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325,
    0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 331, 0, 332, 0, 333, 334, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 337, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 340, 0, 341, 0, 342, 343, 0, 0, 344, 0, 345, 0, 0, 0, 346, 0, 0, 347, 0, 0,
    348, 0, 349, 0, 350, 0, 351, 0, 352, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 361, 0, 362, 0, 363, 0,
    364, 0, 365, 0, 366, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370,
    0, 371, 0, 372, 0, 0, 373, 0, 0, 374, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 0, 379, 0, 380, 0, 381, 0, 0, 382, 0, 0, 383,
    0, 384, 0, 385, 0, 386, 387, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0,
    390, 0, 391, 0, 0, 0, 392, 0, 393, 0, 0, 394, 0, 395, 0, 396, 0, 397, 0, 398, 0, 399, 0, 400, 0, 401, 0, 402, 0, 403, 0, 404,
    0, 405, 0, 406, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 411, 0, 412,
    0, 413, 0, 0, 414, 0, 415, 0, 416, 0, 417, 0, 418, 0, 0, 0, 419, 0, 420, 0, 421, 0, 422, 0, 0, 423, 0, 424, 0, 425, 0, 426,
    427, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 431, 0, 432, 0, 433, 0, 434, 0, 435,
    0, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 0, 0, 441, 0, 442, 0, 443, 0, 444, 0, 445, 0, 0, 446, 0, 447, 0, 448, 0, 449,
    450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 455, 0, 456, 0, 457, 0, 458,
    0, 0, 459, 0, 460, 0, 461, 0, 462, 0, 463, 0, 0, 0, 464, 0, 465, 0, 466, 0, 467, 0, 468, 0, 0, 469, 0, 470, 0, 471, 0, 472,
    473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 477, 0, 0, 0, 478, 0, 479, 0, 480, 0,
    481, 0, 482, 0, 0, 483, 0, 484, 0, 485, 0, 486, 0, 487, 0, 0, 0, 488, 0, 489, 0, 490, 0, 491, 0, 492, 0, 0, 493, 0, 494, 0,
    495, 0, 496, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 501, 0, 502, 0, 0, 0,
    0, 0, 0, 0, 503, 0, 504, 0, 0, 505, 0, 506, 0, 507, 0, 0, 0, 508, 0, 509, 0, 0, 0, 510, 0, 0, 0, 511, 0, 512, 0, 0,
    0, 513, 0, 514, 0, 515, 0, 516, 0, 517, 0, 0, 0, 518, 0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 522, 0, 0, 0, 523, 524, 0,
    0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 528, 0, 529, 0, 530, 0, 531, 0, 0, 532, 0, 533, 0,
    534, 0, 535, 0, 536, 0, 537, 0, 538, 0, 539, 540, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0,
    0, 544, 0, 545, 0, 546, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 0, 552, 0, 553, 0, 0, 0, 554, 0, 555, 0, 556, 0, 557, 0, 558,
    0, 559, 0, 560, 0, 561, 0, 562, 563, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0,
    0, 567, 0, 568, 0, 0, 569, 570, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 573, 0, 574, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0,
    576, 0, 577, 0, 0, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0, 583, 0, 584, 585, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0,
    0, 588, 0, 589, 0, 590, 0, 591, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 596, 0, 0, 597, 0, 598,
    0, 599, 0, 0, 600, 0, 601, 0, 602, 0, 603, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0,
    607, 0, 608, 0, 0, 609, 0, 610, 0, 0, 611, 0, 612, 0, 0, 613, 0, 614, 0, 0, 615, 0, 0, 616, 0, 617, 0, 0, 0, 0, 0, 0,
    0, 618, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 622, 0, 623, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 626, 627, 0, 0, 628, 0, 629, 0, 630, 0, 631, 0, 0, 632, 0, 0, 0, 0,
    0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 635, 0, 0, 636, 0, 0, 637, 0, 0, 0, 0, 638, 639, 0, 0, 640,
    0, 641, 0, 0, 0, 642, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 648, 0, 0, 649, 0, 650, 0, 0, 0, 651, 0, 0, 652, 0, 653, 654, 0, 0, 655, 0, 656, 0, 657, 0, 0, 658, 0, 659, 0, 0,
    0, 660, 0, 0, 661, 0, 662, 0, 663, 0, 664, 0, 665, 0, 0, 0, 666, 0, 0, 667, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0,
    670, 0, 671, 0, 0, 672, 0, 0, 673, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 676, 0, 0, 677, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 680, 0, 0, 0, 681, 0, 0, 682, 0, 683, 0, 0, 684, 0, 0, 685, 0,
    686, 0, 0, 687, 0, 0, 688, 0, 689, 0, 0, 690, 0, 0, 691, 0, 692, 0, 0, 693, 0, 0, 694, 0, 695, 0, 0, 0, 0, 696, 0, 0,
    0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 698, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 708, 0, 0, 0, 0, 709,
    0, 710, 0, 711, 0, 712, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 716, 0, 0, 0, 0, 0, 717, 0,
    0, 0, 0, 0, 0, 718, 0, 719, 0, 0, 0, 0, 720, 0, 721, 0, 722, 0, 723, 0, 724, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0,
    726, 0, 0, 0, 727, 0, 0, 728, 0, 729, 0, 0, 0, 0, 730, 0, 731, 0, 732, 0, 733, 0, 0, 0, 734, 0, 0, 0, 0, 0, 735, 0,
    0, 0, 0, 0, 736, 0, 737, 0, 0, 0, 0, 738, 0, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0, 0, 741, 0, 0, 0, 0, 742, 0,
    0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 744, 0, 745, 746, 0, 747, 0, 0, 0, 0, 0, 0, 0, 748, 0, 749, 0, 0, 750, 0, 0,
    751, 0, 0, 752, 0, 753, 0, 0, 754, 0, 755, 0, 0, 0, 0, 0, 0, 0, 756, 0, 757, 0, 0, 0, 0, 758, 0, 759, 0, 0, 760, 0,
    0, 761, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 764, 0, 0, 0, 765, 0, 766, 0, 767, 0, 0, 0, 0, 768, 0,
    0, 0, 769, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 0, 772, 0, 0, 773, 774, 0, 0, 0, 775, 0, 0, 776, 0, 777, 0,
    778, 0, 779, 0, 0, 0, 0, 0, 780, 0, 0, 0, 0, 0, 781, 0, 782, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 786, 0, 787, 0, 788, 0, 0, 0, 789, 0, 0, 0, 0,
    0, 0, 0, 790, 0, 0, 0, 0, 0, 791, 0, 792, 0, 0, 0, 0, 793, 0, 794, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 796, 0,
    0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 799, 0, 800, 801, 0, 802, 0, 0, 0, 0, 0, 0, 0, 803, 0, 804,
    0, 0, 805, 0, 0, 806, 0, 0, 807, 0, 808, 0, 0, 809, 0, 810, 0, 0, 0, 0, 0, 0, 0, 811, 0, 812, 0, 0, 0, 0, 813, 0,
    814, 0, 0, 815, 0, 0, 816, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 819, 0, 0, 0, 820, 0, 821, 0, 822, 0,
    0, 0, 0, 823, 0, 0, 0, 824, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 0, 826, 0, 827, 0, 0, 0, 0, 0, 828, 0, 0, 829, 0,
    830, 0, 0, 0, 0, 831, 0, 832, 0, 833, 0, 834, 0, 0, 0, 835, 836, 837, 0, 0, 0, 838, 0, 0, 839, 0, 840, 0, 841, 0, 842, 0,
    0, 0, 0, 843, 0, 0, 0, 0, 0, 844, 0, 845, 0, 0, 0, 0, 846, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 847, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 849, 0, 0, 850, 0, 0, 0, 0, 0, 0, 0, 851, 0, 852,
    0, 0, 0, 0, 0, 0, 853, 0, 0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 856, 0, 0, 857, 0, 858, 0, 0,
    0, 859, 0, 860, 0, 861, 0, 862, 0, 863, 0, 864, 0, 0, 0, 865, 0, 866, 0, 0, 0, 0, 867, 0, 868, 0, 869, 0, 870, 0, 0, 0,
    871, 0, 872, 0, 0, 0, 873, 0, 874, 0, 875, 0, 876, 0, 877, 0, 878, 0, 879, 0, 880, 0, 0, 0, 0, 0, 0, 0, 0, 0, 881, 0,
    882, 0, 883, 0, 0, 884, 0, 0, 0, 0, 0, 0, 0, 0, 885, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 887, 0, 888, 0, 0, 0, 0,
    0, 0, 889, 0, 0, 890, 0, 0, 0, 0, 0, 0, 0, 0, 891, 0, 892, 0, 0, 893, 0, 0, 0, 0, 894, 0, 895, 0, 0, 896, 0, 897,
    0, 0, 898, 0, 899, 0, 900, 0, 0, 901, 0, 902, 0, 903, 0, 904, 0, 905, 0, 906, 0, 907, 0, 908, 0, 909, 0, 910, 0, 0, 0, 911,
    0, 912, 0, 0, 913, 0, 914, 0, 915, 0, 0, 0, 916, 0, 917, 0, 918, 0, 919, 0, 920, 0, 921, 0, 922, 0, 923, 0, 924, 0, 925, 0,
    926, 0, 0, 927, 928, 0, 0, 929, 0, 0, 930, 0, 931, 0, 932, 0, 933, 0, 934, 0, 0, 0, 0, 0, 0, 935, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 936, 0, 937, 0, 938, 0, 0, 0, 939, 940, 0, 0, 941, 0, 0, 942, 0, 0, 0, 0, 943, 0, 0,
    0, 0, 944, 0, 945, 0, 946, 0, 947, 0, 0, 948, 0, 949, 0, 0, 950, 0, 951, 0, 0, 0, 952, 0, 0, 0, 0, 953, 0, 954, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 955, 0, 956, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 957, 0, 0, 0, 958, 0, 959, 0, 960, 0, 0, 0, 0, 961, 0, 962, 0, 0, 0, 0, 963, 0, 964, 0, 0, 0, 0, 965, 0, 966, 0,
    0, 0, 0, 967, 0, 968, 0, 0, 0, 969, 0, 970, 0, 0, 0, 0, 0, 971, 0, 972, 0, 0, 0, 0, 0, 973, 0, 974, 0, 0, 0, 0,
    975, 0, 976, 0, 0, 0, 0, 977, 0, 978, 0, 0, 0, 0, 979, 0, 980, 0, 0, 0, 0, 981, 0, 982, 0, 0, 0, 0, 983, 0, 984, 0,
    0, 0, 0, 985, 0, 986, 0, 0, 0, 0, 987, 0, 988, 0, 0, 0, 0, 989, 0, 990, 0, 0, 0, 0, 991, 0, 992, 0, 0, 0, 0, 993,
    0, 994, 0, 0, 0, 995, 0, 996, 0, 0, 0, 997, 0, 998, 0, 0, 0, 0, 999, 0, 0, 1000, 0, 1001, 0, 0, 0, 0, 0, 0, 0, 1002,
    0, 1003, 0, 1004, 0, 0, 0, 0, 0, 0, 1005, 0, 0, 0, 1006, 1007, 0, 0, 1008, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1009,
};
void recomp_unit_0076_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08934000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0076[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08934000;
    case 2u: goto L_08934020;
    case 3u: goto L_08934044;
    case 4u: goto L_08934054;
    case 5u: goto L_0893405C;
    case 6u: goto L_08934068;
    case 7u: goto L_08934078;
    case 8u: goto L_0893409C;
    case 9u: goto L_089340AC;
    case 10u: goto L_089340BC;
    case 11u: goto L_089340C4;
    case 12u: goto L_089340D4;
    case 13u: goto L_089340E4;
    case 14u: goto L_089340FC;
    case 15u: goto L_08934120;
    case 16u: goto L_08934138;
    case 17u: goto L_08934148;
    case 18u: goto L_08934154;
    case 19u: goto L_08934164;
    case 20u: goto L_08934174;
    case 21u: goto L_08934184;
    case 22u: goto L_08934194;
    case 23u: goto L_089341A4;
    case 24u: goto L_089341AC;
    case 25u: goto L_089341C4;
    case 26u: goto L_089341D0;
    case 27u: goto L_089341D8;
    case 28u: goto L_089341E8;
    case 29u: goto L_089341FC;
    case 30u: goto L_08934220;
    case 31u: goto L_0893423C;
    case 32u: goto L_0893426C;
    case 33u: goto L_08934274;
    case 34u: goto L_08934284;
    case 35u: goto L_08934290;
    case 36u: goto L_089342A0;
    case 37u: goto L_089342B4;
    case 38u: goto L_089342C4;
    case 39u: goto L_089342D0;
    case 40u: goto L_089342E8;
    case 41u: goto L_089342FC;
    case 42u: goto L_08934308;
    case 43u: goto L_08934310;
    case 44u: goto L_08934318;
    case 45u: goto L_08934320;
    case 46u: goto L_0893432C;
    case 47u: goto L_08934344;
    case 48u: goto L_0893435C;
    case 49u: goto L_0893437C;
    case 50u: goto L_0893438C;
    case 51u: goto L_089343A4;
    case 52u: goto L_089343B0;
    case 53u: goto L_089343B8;
    case 54u: goto L_089343C4;
    case 55u: goto L_089343DC;
    case 56u: goto L_089343E8;
    case 57u: goto L_089343F0;
    case 58u: goto L_08934400;
    case 59u: goto L_08934430;
    case 60u: goto L_08934454;
    case 61u: goto L_08934470;
    case 62u: goto L_089344A0;
    case 63u: goto L_089344A8;
    case 64u: goto L_089344B8;
    case 65u: goto L_089344D0;
    case 66u: goto L_089344E4;
    case 67u: goto L_089344F4;
    case 68u: goto L_08934500;
    case 69u: goto L_08934518;
    case 70u: goto L_0893452C;
    case 71u: goto L_08934538;
    case 72u: goto L_08934544;
    case 73u: goto L_0893454C;
    case 74u: goto L_08934554;
    case 75u: goto L_08934560;
    case 76u: goto L_08934574;
    case 77u: goto L_0893458C;
    case 78u: goto L_089345A4;
    case 79u: goto L_089345A8;
    case 80u: goto L_089345B4;
    case 81u: goto L_089345BC;
    case 82u: goto L_089345C8;
    case 83u: goto L_089345D0;
    case 84u: goto L_089345DC;
    case 85u: goto L_089345E4;
    case 86u: goto L_089345F0;
    case 87u: goto L_089345F8;
    case 88u: goto L_08934604;
    case 89u: goto L_08934614;
    case 90u: goto L_08934634;
    case 91u: goto L_08934660;
    case 92u: goto L_08934680;
    case 93u: goto L_08934688;
    case 94u: goto L_08934694;
    case 95u: goto L_089346A4;
    case 96u: goto L_089346BC;
    case 97u: goto L_089346D8;
    case 98u: goto L_089346EC;
    case 99u: goto L_089346F8;
    case 100u: goto L_089346FC;
    case 101u: goto L_08934720;
    case 102u: goto L_0893472C;
    case 103u: goto L_08934744;
    case 104u: goto L_08934758;
    case 105u: goto L_08934770;
    case 106u: goto L_08934778;
    case 107u: goto L_08934784;
    case 108u: goto L_08934794;
    case 109u: goto L_089347AC;
    case 110u: goto L_089347B4;
    case 111u: goto L_0893480C;
    case 112u: goto L_0893481C;
    case 113u: goto L_0893482C;
    case 114u: goto L_08934838;
    case 115u: goto L_08934858;
    case 116u: goto L_08934874;
    case 117u: goto L_08934880;
    case 118u: goto L_089348A4;
    case 119u: goto L_089348C0;
    case 120u: goto L_089348F0;
    case 121u: goto L_089348F8;
    case 122u: goto L_08934908;
    case 123u: goto L_08934914;
    case 124u: goto L_08934924;
    case 125u: goto L_08934938;
    case 126u: goto L_08934948;
    case 127u: goto L_08934954;
    case 128u: goto L_0893496C;
    case 129u: goto L_08934980;
    case 130u: goto L_0893498C;
    case 131u: goto L_08934994;
    case 132u: goto L_0893499C;
    case 133u: goto L_089349A4;
    case 134u: goto L_089349B0;
    case 135u: goto L_089349C8;
    case 136u: goto L_089349DC;
    case 137u: goto L_089349FC;
    case 138u: goto L_08934A1C;
    case 139u: goto L_08934A3C;
    case 140u: goto L_08934A5C;
    case 141u: goto L_08934A80;
    case 142u: goto L_08934AA0;
    case 143u: goto L_08934AB0;
    case 144u: goto L_08934AD8;
    case 145u: goto L_08934AFC;
    case 146u: goto L_08934B0C;
    case 147u: goto L_08934B30;
    case 148u: goto L_08934B38;
    case 149u: goto L_08934B44;
    case 150u: goto L_08934B48;
    case 151u: goto L_08934B5C;
    case 152u: goto L_08934B70;
    case 153u: goto L_08934B8C;
    case 154u: goto L_08934B90;
    case 155u: goto L_08934B9C;
    case 156u: goto L_08934BA8;
    case 157u: goto L_08934BB0;
    case 158u: goto L_08934BC0;
    case 159u: goto L_08934BC8;
    case 160u: goto L_08934BF4;
    case 161u: goto L_08934C38;
    case 162u: goto L_08934C48;
    case 163u: goto L_08934C84;
    case 164u: goto L_08934CAC;
    case 165u: goto L_08934CD4;
    case 166u: goto L_08934CF8;
    case 167u: goto L_08934D04;
    case 168u: goto L_08934D14;
    case 169u: goto L_08934D30;
    case 170u: goto L_08934D3C;
    case 171u: goto L_08934D54;
    case 172u: goto L_08934D60;
    case 173u: goto L_08934D6C;
    case 174u: goto L_08934D78;
    case 175u: goto L_08934D80;
    case 176u: goto L_08934D88;
    case 177u: goto L_08934D90;
    case 178u: goto L_08934D98;
    case 179u: goto L_08934DA4;
    case 180u: goto L_08934DB0;
    case 181u: goto L_08934DBC;
    case 182u: goto L_08934DC4;
    case 183u: goto L_08934DCC;
    case 184u: goto L_08934DD4;
    case 185u: goto L_08934DD8;
    case 186u: goto L_08934DE0;
    case 187u: goto L_08934DF0;
    case 188u: goto L_08934E14;
    case 189u: goto L_08934E1C;
    case 190u: goto L_08934E28;
    case 191u: goto L_08934E40;
    case 192u: goto L_08934E54;
    case 193u: goto L_08934E64;
    case 194u: goto L_08934E84;
    case 195u: goto L_08934E94;
    case 196u: goto L_08934EA8;
    case 197u: goto L_08934EB8;
    case 198u: goto L_08934EDC;
    case 199u: goto L_08934EE4;
    case 200u: goto L_08934EEC;
    case 201u: goto L_08934EF4;
    case 202u: goto L_08934EFC;
    case 203u: goto L_08934F04;
    case 204u: goto L_08934F0C;
    case 205u: goto L_08934F14;
    case 206u: goto L_08934F1C;
    case 207u: goto L_08934F24;
    case 208u: goto L_08934F48;
    case 209u: goto L_08934F50;
    case 210u: goto L_08934F58;
    case 211u: goto L_08934F5C;
    case 212u: goto L_089350AC;
    case 213u: goto L_089350D4;
    case 214u: goto L_089350F4;
    case 215u: goto L_08935190;
    case 216u: goto L_089351A4;
    case 217u: goto L_089351C0;
    case 218u: goto L_089351E8;
    case 219u: goto L_08935238;
    case 220u: goto L_08935240;
    case 221u: goto L_08935254;
    case 222u: goto L_08935274;
    case 223u: goto L_0893528C;
    case 224u: goto L_089352A0;
    case 225u: goto L_089352B4;
    case 226u: goto L_089352D0;
    case 227u: goto L_089352E8;
    case 228u: goto L_089352F4;
    case 229u: goto L_08935310;
    case 230u: goto L_0893531C;
    case 231u: goto L_0893532C;
    case 232u: goto L_08935354;
    case 233u: goto L_08935374;
    case 234u: goto L_08935410;
    case 235u: goto L_08935424;
    case 236u: goto L_08935440;
    case 237u: goto L_08935468;
    case 238u: goto L_089354B8;
    case 239u: goto L_089354C0;
    case 240u: goto L_089354D4;
    case 241u: goto L_089354F4;
    case 242u: goto L_0893550C;
    case 243u: goto L_08935520;
    case 244u: goto L_08935534;
    case 245u: goto L_08935550;
    case 246u: goto L_08935568;
    case 247u: goto L_08935574;
    case 248u: goto L_08935590;
    case 249u: goto L_0893559C;
    case 250u: goto L_089355AC;
    case 251u: goto L_089355D0;
    case 252u: goto L_089355D8;
    case 253u: goto L_089355E8;
    case 254u: goto L_089355F8;
    case 255u: goto L_08935600;
    case 256u: goto L_08935610;
    case 257u: goto L_08935620;
    case 258u: goto L_08935624;
    case 259u: goto L_08935640;
    case 260u: goto L_08935664;
    case 261u: goto L_08935670;
    case 262u: goto L_0893567C;
    case 263u: goto L_08935684;
    case 264u: goto L_0893568C;
    case 265u: goto L_08935694;
    case 266u: goto L_0893569C;
    case 267u: goto L_089356A4;
    case 268u: goto L_089356AC;
    case 269u: goto L_089356B8;
    case 270u: goto L_089356C0;
    case 271u: goto L_089356C8;
    case 272u: goto L_089356D0;
    case 273u: goto L_089356D8;
    case 274u: goto L_089356E0;
    case 275u: goto L_089356E4;
    case 276u: goto L_08935700;
    case 277u: goto L_08935724;
    case 278u: goto L_08935730;
    case 279u: goto L_0893573C;
    case 280u: goto L_08935744;
    case 281u: goto L_0893574C;
    case 282u: goto L_08935758;
    case 283u: goto L_08935760;
    case 284u: goto L_08935764;
    case 285u: goto L_08935780;
    case 286u: goto L_089357A4;
    case 287u: goto L_089357B4;
    case 288u: goto L_089357BC;
    case 289u: goto L_089357C4;
    case 290u: goto L_089357D0;
    case 291u: goto L_089357DC;
    case 292u: goto L_089357E4;
    case 293u: goto L_089357EC;
    case 294u: goto L_089357F4;
    case 295u: goto L_089357FC;
    case 296u: goto L_08935804;
    case 297u: goto L_0893580C;
    case 298u: goto L_08935814;
    case 299u: goto L_0893581C;
    case 300u: goto L_0893582C;
    case 301u: goto L_08935834;
    case 302u: goto L_0893583C;
    case 303u: goto L_08935848;
    case 304u: goto L_08935854;
    case 305u: goto L_0893585C;
    case 306u: goto L_08935864;
    case 307u: goto L_0893586C;
    case 308u: goto L_08935874;
    case 309u: goto L_0893587C;
    case 310u: goto L_08935884;
    case 311u: goto L_0893588C;
    case 312u: goto L_08935890;
    case 313u: goto L_089358B0;
    case 314u: goto L_089358DC;
    case 315u: goto L_089358EC;
    case 316u: goto L_089358F4;
    case 317u: goto L_08935918;
    case 318u: goto L_08935924;
    case 319u: goto L_08935930;
    case 320u: goto L_08935938;
    case 321u: goto L_08935940;
    case 322u: goto L_08935948;
    case 323u: goto L_0893594C;
    case 324u: goto L_08935974;
    case 325u: goto L_0893597C;
    case 326u: goto L_0893598C;
    case 327u: goto L_08935994;
    case 328u: goto L_089359B8;
    case 329u: goto L_089359C4;
    case 330u: goto L_089359D0;
    case 331u: goto L_089359D8;
    case 332u: goto L_089359E0;
    case 333u: goto L_089359E8;
    case 334u: goto L_089359EC;
    case 335u: goto L_08935A14;
    case 336u: goto L_08935A38;
    case 337u: goto L_08935A84;
    case 338u: goto L_08935A98;
    case 339u: goto L_08935AA4;
    case 340u: goto L_08935AB0;
    case 341u: goto L_08935AB8;
    case 342u: goto L_08935AC0;
    case 343u: goto L_08935AC4;
    case 344u: goto L_08935AD0;
    case 345u: goto L_08935AD8;
    case 346u: goto L_08935AE8;
    case 347u: goto L_08935AF4;
    case 348u: goto L_08935B00;
    case 349u: goto L_08935B08;
    case 350u: goto L_08935B10;
    case 351u: goto L_08935B18;
    case 352u: goto L_08935B20;
    case 353u: goto L_08935B28;
    case 354u: goto L_08935B30;
    case 355u: goto L_08935B38;
    case 356u: goto L_08935B40;
    case 357u: goto L_08935B48;
    case 358u: goto L_08935B50;
    case 359u: goto L_08935B58;
    case 360u: goto L_08935B60;
    case 361u: goto L_08935B68;
    case 362u: goto L_08935B70;
    case 363u: goto L_08935B78;
    case 364u: goto L_08935B80;
    case 365u: goto L_08935B88;
    case 366u: goto L_08935B90;
    case 367u: goto L_08935B94;
    case 368u: goto L_08935BC8;
    case 369u: goto L_08935BEC;
    case 370u: goto L_08935BFC;
    case 371u: goto L_08935C04;
    case 372u: goto L_08935C0C;
    case 373u: goto L_08935C18;
    case 374u: goto L_08935C24;
    case 375u: goto L_08935C2C;
    case 376u: goto L_08935C34;
    case 377u: goto L_08935C3C;
    case 378u: goto L_08935C44;
    case 379u: goto L_08935C54;
    case 380u: goto L_08935C5C;
    case 381u: goto L_08935C64;
    case 382u: goto L_08935C70;
    case 383u: goto L_08935C7C;
    case 384u: goto L_08935C84;
    case 385u: goto L_08935C8C;
    case 386u: goto L_08935C94;
    case 387u: goto L_08935C98;
    case 388u: goto L_08935CB8;
    case 389u: goto L_08935CF8;
    case 390u: goto L_08935D00;
    case 391u: goto L_08935D08;
    case 392u: goto L_08935D18;
    case 393u: goto L_08935D20;
    case 394u: goto L_08935D2C;
    case 395u: goto L_08935D34;
    case 396u: goto L_08935D3C;
    case 397u: goto L_08935D44;
    case 398u: goto L_08935D4C;
    case 399u: goto L_08935D54;
    case 400u: goto L_08935D5C;
    case 401u: goto L_08935D64;
    case 402u: goto L_08935D6C;
    case 403u: goto L_08935D74;
    case 404u: goto L_08935D7C;
    case 405u: goto L_08935D84;
    case 406u: goto L_08935D8C;
    case 407u: goto L_08935D90;
    case 408u: goto L_08935DBC;
    case 409u: goto L_08935DDC;
    case 410u: goto L_08935DEC;
    case 411u: goto L_08935DF4;
    case 412u: goto L_08935DFC;
    case 413u: goto L_08935E04;
    case 414u: goto L_08935E10;
    case 415u: goto L_08935E18;
    case 416u: goto L_08935E20;
    case 417u: goto L_08935E28;
    case 418u: goto L_08935E30;
    case 419u: goto L_08935E40;
    case 420u: goto L_08935E48;
    case 421u: goto L_08935E50;
    case 422u: goto L_08935E58;
    case 423u: goto L_08935E64;
    case 424u: goto L_08935E6C;
    case 425u: goto L_08935E74;
    case 426u: goto L_08935E7C;
    case 427u: goto L_08935E80;
    case 428u: goto L_08935E9C;
    case 429u: goto L_08935EC0;
    case 430u: goto L_08935ECC;
    case 431u: goto L_08935EDC;
    case 432u: goto L_08935EE4;
    case 433u: goto L_08935EEC;
    case 434u: goto L_08935EF4;
    case 435u: goto L_08935EFC;
    case 436u: goto L_08935F08;
    case 437u: goto L_08935F10;
    case 438u: goto L_08935F18;
    case 439u: goto L_08935F20;
    case 440u: goto L_08935F28;
    case 441u: goto L_08935F38;
    case 442u: goto L_08935F40;
    case 443u: goto L_08935F48;
    case 444u: goto L_08935F50;
    case 445u: goto L_08935F58;
    case 446u: goto L_08935F64;
    case 447u: goto L_08935F6C;
    case 448u: goto L_08935F74;
    case 449u: goto L_08935F7C;
    case 450u: goto L_08935F80;
    case 451u: goto L_08935F9C;
    case 452u: goto L_08935FC0;
    case 453u: goto L_08935FCC;
    case 454u: goto L_08935FDC;
    case 455u: goto L_08935FE4;
    case 456u: goto L_08935FEC;
    case 457u: goto L_08935FF4;
    case 458u: goto L_08935FFC;
    case 459u: goto L_08936008;
    case 460u: goto L_08936010;
    case 461u: goto L_08936018;
    case 462u: goto L_08936020;
    case 463u: goto L_08936028;
    case 464u: goto L_08936038;
    case 465u: goto L_08936040;
    case 466u: goto L_08936048;
    case 467u: goto L_08936050;
    case 468u: goto L_08936058;
    case 469u: goto L_08936064;
    case 470u: goto L_0893606C;
    case 471u: goto L_08936074;
    case 472u: goto L_0893607C;
    case 473u: goto L_08936080;
    case 474u: goto L_0893609C;
    case 475u: goto L_089360C4;
    case 476u: goto L_089360CC;
    case 477u: goto L_089360D8;
    case 478u: goto L_089360E8;
    case 479u: goto L_089360F0;
    case 480u: goto L_089360F8;
    case 481u: goto L_08936100;
    case 482u: goto L_08936108;
    case 483u: goto L_08936114;
    case 484u: goto L_0893611C;
    case 485u: goto L_08936124;
    case 486u: goto L_0893612C;
    case 487u: goto L_08936134;
    case 488u: goto L_08936144;
    case 489u: goto L_0893614C;
    case 490u: goto L_08936154;
    case 491u: goto L_0893615C;
    case 492u: goto L_08936164;
    case 493u: goto L_08936170;
    case 494u: goto L_08936178;
    case 495u: goto L_08936180;
    case 496u: goto L_08936188;
    case 497u: goto L_0893618C;
    case 498u: goto L_089361AC;
    case 499u: goto L_089361D4;
    case 500u: goto L_089361DC;
    case 501u: goto L_089361E8;
    case 502u: goto L_089361F0;
    case 503u: goto L_08936210;
    case 504u: goto L_08936218;
    case 505u: goto L_08936224;
    case 506u: goto L_0893622C;
    case 507u: goto L_08936234;
    case 508u: goto L_08936244;
    case 509u: goto L_0893624C;
    case 510u: goto L_0893625C;
    case 511u: goto L_0893626C;
    case 512u: goto L_08936274;
    case 513u: goto L_08936284;
    case 514u: goto L_0893628C;
    case 515u: goto L_08936294;
    case 516u: goto L_0893629C;
    case 517u: goto L_089362A4;
    case 518u: goto L_089362B4;
    case 519u: goto L_089362BC;
    case 520u: goto L_089362CC;
    case 521u: goto L_089362DC;
    case 522u: goto L_089362E4;
    case 523u: goto L_089362F4;
    case 524u: goto L_089362F8;
    case 525u: goto L_08936318;
    case 526u: goto L_08936334;
    case 527u: goto L_08936344;
    case 528u: goto L_0893634C;
    case 529u: goto L_08936354;
    case 530u: goto L_0893635C;
    case 531u: goto L_08936364;
    case 532u: goto L_08936370;
    case 533u: goto L_08936378;
    case 534u: goto L_08936380;
    case 535u: goto L_08936388;
    case 536u: goto L_08936390;
    case 537u: goto L_08936398;
    case 538u: goto L_089363A0;
    case 539u: goto L_089363A8;
    case 540u: goto L_089363AC;
    case 541u: goto L_089363C4;
    case 542u: goto L_089363E8;
    case 543u: goto L_089363F4;
    case 544u: goto L_08936404;
    case 545u: goto L_0893640C;
    case 546u: goto L_08936414;
    case 547u: goto L_0893641C;
    case 548u: goto L_08936424;
    case 549u: goto L_0893642C;
    case 550u: goto L_08936434;
    case 551u: goto L_0893643C;
    case 552u: goto L_08936444;
    case 553u: goto L_0893644C;
    case 554u: goto L_0893645C;
    case 555u: goto L_08936464;
    case 556u: goto L_0893646C;
    case 557u: goto L_08936474;
    case 558u: goto L_0893647C;
    case 559u: goto L_08936484;
    case 560u: goto L_0893648C;
    case 561u: goto L_08936494;
    case 562u: goto L_0893649C;
    case 563u: goto L_089364A0;
    case 564u: goto L_089364BC;
    case 565u: goto L_089364E0;
    case 566u: goto L_089364F4;
    case 567u: goto L_08936504;
    case 568u: goto L_0893650C;
    case 569u: goto L_08936518;
    case 570u: goto L_0893651C;
    case 571u: goto L_08936538;
    case 572u: goto L_08936540;
    case 573u: goto L_0893654C;
    case 574u: goto L_08936554;
    case 575u: goto L_08936570;
    case 576u: goto L_08936580;
    case 577u: goto L_08936588;
    case 578u: goto L_08936594;
    case 579u: goto L_0893659C;
    case 580u: goto L_089365A4;
    case 581u: goto L_089365AC;
    case 582u: goto L_089365B4;
    case 583u: goto L_089365BC;
    case 584u: goto L_089365C4;
    case 585u: goto L_089365C8;
    case 586u: goto L_089365E0;
    case 587u: goto L_089365E8;
    case 588u: goto L_08936604;
    case 589u: goto L_0893660C;
    case 590u: goto L_08936614;
    case 591u: goto L_0893661C;
    case 592u: goto L_08936620;
    case 593u: goto L_08936634;
    case 594u: goto L_08936650;
    case 595u: goto L_08936660;
    case 596u: goto L_08936668;
    case 597u: goto L_08936674;
    case 598u: goto L_0893667C;
    case 599u: goto L_08936684;
    case 600u: goto L_08936690;
    case 601u: goto L_08936698;
    case 602u: goto L_089366A0;
    case 603u: goto L_089366A8;
    case 604u: goto L_089366AC;
    case 605u: goto L_089366C4;
    case 606u: goto L_089366EC;
    case 607u: goto L_08936700;
    case 608u: goto L_08936708;
    case 609u: goto L_08936714;
    case 610u: goto L_0893671C;
    case 611u: goto L_08936728;
    case 612u: goto L_08936730;
    case 613u: goto L_0893673C;
    case 614u: goto L_08936744;
    case 615u: goto L_08936750;
    case 616u: goto L_0893675C;
    case 617u: goto L_08936764;
    case 618u: goto L_08936784;
    case 619u: goto L_089367A4;
    case 620u: goto L_089367C4;
    case 621u: goto L_089367E0;
    case 622u: goto L_089367E8;
    case 623u: goto L_089367F0;
    case 624u: goto L_08936818;
    case 625u: goto L_08936828;
    case 626u: goto L_08936838;
    case 627u: goto L_0893683C;
    case 628u: goto L_08936848;
    case 629u: goto L_08936850;
    case 630u: goto L_08936858;
    case 631u: goto L_08936860;
    case 632u: goto L_0893686C;
    case 633u: goto L_08936888;
    case 634u: goto L_089368B0;
    case 635u: goto L_089368C0;
    case 636u: goto L_089368CC;
    case 637u: goto L_089368D8;
    case 638u: goto L_089368EC;
    case 639u: goto L_089368F0;
    case 640u: goto L_089368FC;
    case 641u: goto L_08936904;
    case 642u: goto L_08936914;
    case 643u: goto L_0893691C;
    case 644u: goto L_08936924;
    case 645u: goto L_08936958;
    case 646u: goto L_089369AC;
    case 647u: goto L_089369C4;
    case 648u: goto L_08936A08;
    case 649u: goto L_08936A14;
    case 650u: goto L_08936A1C;
    case 651u: goto L_08936A2C;
    case 652u: goto L_08936A38;
    case 653u: goto L_08936A40;
    case 654u: goto L_08936A44;
    case 655u: goto L_08936A50;
    case 656u: goto L_08936A58;
    case 657u: goto L_08936A60;
    case 658u: goto L_08936A6C;
    case 659u: goto L_08936A74;
    case 660u: goto L_08936A84;
    case 661u: goto L_08936A90;
    case 662u: goto L_08936A98;
    case 663u: goto L_08936AA0;
    case 664u: goto L_08936AA8;
    case 665u: goto L_08936AB0;
    case 666u: goto L_08936AC0;
    case 667u: goto L_08936ACC;
    case 668u: goto L_08936AD4;
    case 669u: goto L_08936AF8;
    case 670u: goto L_08936B00;
    case 671u: goto L_08936B08;
    case 672u: goto L_08936B14;
    case 673u: goto L_08936B20;
    case 674u: goto L_08936B28;
    case 675u: goto L_08936B54;
    case 676u: goto L_08936B5C;
    case 677u: goto L_08936B68;
    case 678u: goto L_08936B98;
    case 679u: goto L_08936BB4;
    case 680u: goto L_08936BBC;
    case 681u: goto L_08936BCC;
    case 682u: goto L_08936BD8;
    case 683u: goto L_08936BE0;
    case 684u: goto L_08936BEC;
    case 685u: goto L_08936BF8;
    case 686u: goto L_08936C00;
    case 687u: goto L_08936C0C;
    case 688u: goto L_08936C18;
    case 689u: goto L_08936C20;
    case 690u: goto L_08936C2C;
    case 691u: goto L_08936C38;
    case 692u: goto L_08936C40;
    case 693u: goto L_08936C4C;
    case 694u: goto L_08936C58;
    case 695u: goto L_08936C60;
    case 696u: goto L_08936C74;
    case 697u: goto L_08936C94;
    case 698u: goto L_08936CAC;
    case 699u: goto L_08936CB8;
    case 700u: goto L_08936CCC;
    case 701u: goto L_08936CE0;
    case 702u: goto L_08936D28;
    case 703u: goto L_08936D8C;
    case 704u: goto L_08936DA8;
    case 705u: goto L_08936DC8;
    case 706u: goto L_08936E28;
    case 707u: goto L_08936E5C;
    case 708u: goto L_08936E68;
    case 709u: goto L_08936E7C;
    case 710u: goto L_08936E84;
    case 711u: goto L_08936E8C;
    case 712u: goto L_08936E94;
    case 713u: goto L_08936EB0;
    case 714u: goto L_08936EC4;
    case 715u: goto L_08936ED8;
    case 716u: goto L_08936EE0;
    case 717u: goto L_08936EF8;
    case 718u: goto L_08936F14;
    case 719u: goto L_08936F1C;
    case 720u: goto L_08936F30;
    case 721u: goto L_08936F38;
    case 722u: goto L_08936F40;
    case 723u: goto L_08936F48;
    case 724u: goto L_08936F50;
    case 725u: goto L_08936F6C;
    case 726u: goto L_08936F80;
    case 727u: goto L_08936F90;
    case 728u: goto L_08936F9C;
    case 729u: goto L_08936FA4;
    case 730u: goto L_08936FB8;
    case 731u: goto L_08936FC0;
    case 732u: goto L_08936FC8;
    case 733u: goto L_08936FD0;
    case 734u: goto L_08936FE0;
    case 735u: goto L_08936FF8;
    case 736u: goto L_08937010;
    case 737u: goto L_08937018;
    case 738u: goto L_0893702C;
    case 739u: goto L_0893703C;
    case 740u: goto L_08937050;
    case 741u: goto L_08937064;
    case 742u: goto L_08937078;
    case 743u: goto L_08937098;
    case 744u: goto L_089370AC;
    case 745u: goto L_089370B4;
    case 746u: goto L_089370B8;
    case 747u: goto L_089370C0;
    case 748u: goto L_089370E0;
    case 749u: goto L_089370E8;
    case 750u: goto L_089370F4;
    case 751u: goto L_08937100;
    case 752u: goto L_0893710C;
    case 753u: goto L_08937114;
    case 754u: goto L_08937120;
    case 755u: goto L_08937128;
    case 756u: goto L_08937148;
    case 757u: goto L_08937150;
    case 758u: goto L_08937164;
    case 759u: goto L_0893716C;
    case 760u: goto L_08937178;
    case 761u: goto L_08937184;
    case 762u: goto L_0893718C;
    case 763u: goto L_089371B8;
    case 764u: goto L_089371C4;
    case 765u: goto L_089371D4;
    case 766u: goto L_089371DC;
    case 767u: goto L_089371E4;
    case 768u: goto L_089371F8;
    case 769u: goto L_08937208;
    case 770u: goto L_0893721C;
    case 771u: goto L_08937234;
    case 772u: goto L_08937244;
    case 773u: goto L_08937250;
    case 774u: goto L_08937254;
    case 775u: goto L_08937264;
    case 776u: goto L_08937270;
    case 777u: goto L_08937278;
    case 778u: goto L_08937280;
    case 779u: goto L_08937288;
    case 780u: goto L_089372A0;
    case 781u: goto L_089372B8;
    case 782u: goto L_089372C0;
    case 783u: goto L_089372D4;
    case 784u: goto L_08937304;
    case 785u: goto L_08937338;
    case 786u: goto L_0893734C;
    case 787u: goto L_08937354;
    case 788u: goto L_0893735C;
    case 789u: goto L_0893736C;
    case 790u: goto L_0893738C;
    case 791u: goto L_089373A4;
    case 792u: goto L_089373AC;
    case 793u: goto L_089373C0;
    case 794u: goto L_089373C8;
    case 795u: goto L_089373E4;
    case 796u: goto L_089373F8;
    case 797u: goto L_0893740C;
    case 798u: goto L_0893742C;
    case 799u: goto L_08937440;
    case 800u: goto L_08937448;
    case 801u: goto L_0893744C;
    case 802u: goto L_08937454;
    case 803u: goto L_08937474;
    case 804u: goto L_0893747C;
    case 805u: goto L_08937488;
    case 806u: goto L_08937494;
    case 807u: goto L_089374A0;
    case 808u: goto L_089374A8;
    case 809u: goto L_089374B4;
    case 810u: goto L_089374BC;
    case 811u: goto L_089374DC;
    case 812u: goto L_089374E4;
    case 813u: goto L_089374F8;
    case 814u: goto L_08937500;
    case 815u: goto L_0893750C;
    case 816u: goto L_08937518;
    case 817u: goto L_08937520;
    case 818u: goto L_0893754C;
    case 819u: goto L_08937558;
    case 820u: goto L_08937568;
    case 821u: goto L_08937570;
    case 822u: goto L_08937578;
    case 823u: goto L_0893758C;
    case 824u: goto L_0893759C;
    case 825u: goto L_089375B4;
    case 826u: goto L_089375CC;
    case 827u: goto L_089375D4;
    case 828u: goto L_089375EC;
    case 829u: goto L_089375F8;
    case 830u: goto L_08937600;
    case 831u: goto L_08937614;
    case 832u: goto L_0893761C;
    case 833u: goto L_08937624;
    case 834u: goto L_0893762C;
    case 835u: goto L_0893763C;
    case 836u: goto L_08937640;
    case 837u: goto L_08937644;
    case 838u: goto L_08937654;
    case 839u: goto L_08937660;
    case 840u: goto L_08937668;
    case 841u: goto L_08937670;
    case 842u: goto L_08937678;
    case 843u: goto L_0893768C;
    case 844u: goto L_089376A4;
    case 845u: goto L_089376AC;
    case 846u: goto L_089376C0;
    case 847u: goto L_089376F0;
    case 848u: goto L_08937738;
    case 849u: goto L_08937748;
    case 850u: goto L_08937754;
    case 851u: goto L_08937774;
    case 852u: goto L_0893777C;
    case 853u: goto L_08937798;
    case 854u: goto L_089377A4;
    case 855u: goto L_089377C8;
    case 856u: goto L_089377E0;
    case 857u: goto L_089377EC;
    case 858u: goto L_089377F4;
    case 859u: goto L_08937804;
    case 860u: goto L_0893780C;
    case 861u: goto L_08937814;
    case 862u: goto L_0893781C;
    case 863u: goto L_08937824;
    case 864u: goto L_0893782C;
    case 865u: goto L_0893783C;
    case 866u: goto L_08937844;
    case 867u: goto L_08937858;
    case 868u: goto L_08937860;
    case 869u: goto L_08937868;
    case 870u: goto L_08937870;
    case 871u: goto L_08937880;
    case 872u: goto L_08937888;
    case 873u: goto L_08937898;
    case 874u: goto L_089378A0;
    case 875u: goto L_089378A8;
    case 876u: goto L_089378B0;
    case 877u: goto L_089378B8;
    case 878u: goto L_089378C0;
    case 879u: goto L_089378C8;
    case 880u: goto L_089378D0;
    case 881u: goto L_089378F8;
    case 882u: goto L_08937900;
    case 883u: goto L_08937908;
    case 884u: goto L_08937914;
    case 885u: goto L_08937938;
    case 886u: goto L_08937944;
    case 887u: goto L_08937964;
    case 888u: goto L_0893796C;
    case 889u: goto L_08937988;
    case 890u: goto L_08937994;
    case 891u: goto L_089379B8;
    case 892u: goto L_089379C0;
    case 893u: goto L_089379CC;
    case 894u: goto L_089379E0;
    case 895u: goto L_089379E8;
    case 896u: goto L_089379F4;
    case 897u: goto L_089379FC;
    case 898u: goto L_08937A08;
    case 899u: goto L_08937A10;
    case 900u: goto L_08937A18;
    case 901u: goto L_08937A24;
    case 902u: goto L_08937A2C;
    case 903u: goto L_08937A34;
    case 904u: goto L_08937A3C;
    case 905u: goto L_08937A44;
    case 906u: goto L_08937A4C;
    case 907u: goto L_08937A54;
    case 908u: goto L_08937A5C;
    case 909u: goto L_08937A64;
    case 910u: goto L_08937A6C;
    case 911u: goto L_08937A7C;
    case 912u: goto L_08937A84;
    case 913u: goto L_08937A90;
    case 914u: goto L_08937A98;
    case 915u: goto L_08937AA0;
    case 916u: goto L_08937AB0;
    case 917u: goto L_08937AB8;
    case 918u: goto L_08937AC0;
    case 919u: goto L_08937AC8;
    case 920u: goto L_08937AD0;
    case 921u: goto L_08937AD8;
    case 922u: goto L_08937AE0;
    case 923u: goto L_08937AE8;
    case 924u: goto L_08937AF0;
    case 925u: goto L_08937AF8;
    case 926u: goto L_08937B00;
    case 927u: goto L_08937B0C;
    case 928u: goto L_08937B10;
    case 929u: goto L_08937B1C;
    case 930u: goto L_08937B28;
    case 931u: goto L_08937B30;
    case 932u: goto L_08937B38;
    case 933u: goto L_08937B40;
    case 934u: goto L_08937B48;
    case 935u: goto L_08937B64;
    case 936u: goto L_08937BA4;
    case 937u: goto L_08937BAC;
    case 938u: goto L_08937BB4;
    case 939u: goto L_08937BC4;
    case 940u: goto L_08937BC8;
    case 941u: goto L_08937BD4;
    case 942u: goto L_08937BE0;
    case 943u: goto L_08937BF4;
    case 944u: goto L_08937C08;
    case 945u: goto L_08937C10;
    case 946u: goto L_08937C18;
    case 947u: goto L_08937C20;
    case 948u: goto L_08937C2C;
    case 949u: goto L_08937C34;
    case 950u: goto L_08937C40;
    case 951u: goto L_08937C48;
    case 952u: goto L_08937C58;
    case 953u: goto L_08937C6C;
    case 954u: goto L_08937C74;
    case 955u: goto L_08937CB8;
    case 956u: goto L_08937CC0;
    case 957u: goto L_08937D04;
    case 958u: goto L_08937D14;
    case 959u: goto L_08937D1C;
    case 960u: goto L_08937D24;
    case 961u: goto L_08937D38;
    case 962u: goto L_08937D40;
    case 963u: goto L_08937D54;
    case 964u: goto L_08937D5C;
    case 965u: goto L_08937D70;
    case 966u: goto L_08937D78;
    case 967u: goto L_08937D8C;
    case 968u: goto L_08937D94;
    case 969u: goto L_08937DA4;
    case 970u: goto L_08937DAC;
    case 971u: goto L_08937DC4;
    case 972u: goto L_08937DCC;
    case 973u: goto L_08937DE4;
    case 974u: goto L_08937DEC;
    case 975u: goto L_08937E00;
    case 976u: goto L_08937E08;
    case 977u: goto L_08937E1C;
    case 978u: goto L_08937E24;
    case 979u: goto L_08937E38;
    case 980u: goto L_08937E40;
    case 981u: goto L_08937E54;
    case 982u: goto L_08937E5C;
    case 983u: goto L_08937E70;
    case 984u: goto L_08937E78;
    case 985u: goto L_08937E8C;
    case 986u: goto L_08937E94;
    case 987u: goto L_08937EA8;
    case 988u: goto L_08937EB0;
    case 989u: goto L_08937EC4;
    case 990u: goto L_08937ECC;
    case 991u: goto L_08937EE0;
    case 992u: goto L_08937EE8;
    case 993u: goto L_08937EFC;
    case 994u: goto L_08937F04;
    case 995u: goto L_08937F14;
    case 996u: goto L_08937F1C;
    case 997u: goto L_08937F2C;
    case 998u: goto L_08937F34;
    case 999u: goto L_08937F48;
    case 1000u: goto L_08937F54;
    case 1001u: goto L_08937F5C;
    case 1002u: goto L_08937F7C;
    case 1003u: goto L_08937F84;
    case 1004u: goto L_08937F8C;
    case 1005u: goto L_08937FA8;
    case 1006u: goto L_08937FB8;
    case 1007u: goto L_08937FBC;
    case 1008u: goto L_08937FC8;
    case 1009u: goto L_08937FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08934000:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
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
L_08934020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08934068;
      }
      goto L_08934044;
    }
L_08934044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08934068;
      }
      goto L_08934054;
    }
L_08934054:
    ctx.gpr[31] = (0x0893405Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x0893405Cu) goto L_0893405C;
    return;
L_0893405C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[31] = (0x08934068u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 710u, 0x08933F58u>(ctx, &aot_mem) && ctx.pc == 0x08934068u) goto L_08934068;
    return;
L_08934068:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934078:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893409Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 54u, 0x088387ACu>(ctx, &aot_mem) && ctx.pc == 0x0893409Cu) goto L_0893409C;
    return;
L_0893409C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089340ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 41u, 0x0883C5B8u>(ctx, &aot_mem) && ctx.pc == 0x089340ACu) goto L_089340AC;
    return;
L_089340AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089340BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x089340BCu) goto L_089340BC;
    return;
L_089340BC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_089340C4;
L_089340C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x089340D4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x089340D4u) goto L_089340D4;
    return;
L_089340D4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_089340C4;
      }
      goto L_089340E4;
    }
L_089340E4:
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
L_089340FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08934120u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08934120u) goto L_08934120;
    return;
L_08934120:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(22816), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08934138u);
    ctx.gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08934138u) goto L_08934138;
    return;
L_08934138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08934148u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    goto L_0893532C;
L_08934148:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08934154u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08934154u) goto L_08934154;
    return;
L_08934154:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08934164u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30448));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x08934164u) goto L_08934164;
    return;
L_08934164:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08934174u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16848));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x08934174u) goto L_08934174;
    return;
L_08934174:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08934184u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16856));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x08934184u) goto L_08934184;
    return;
L_08934184:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934194:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089341A4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 432u, 0x0884DB28u>(ctx, &aot_mem) && ctx.pc == 0x089341A4u) goto L_089341A4;
    return;
L_089341A4:
    ctx.gpr[31] = (0x089341ACu);
    // nop
    goto L_089354D4;
L_089341AC:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (2222u << 16u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089341C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22816)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089341C4u) goto L_089341C4;
    return;
L_089341C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089341D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089341D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x089341E8u);
    // nop
    goto L_08935574;
L_089341E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089341FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08934220u);
    ctx.gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08934220u) goto L_08934220;
    return;
L_08934220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893423C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089342FC;
      }
      goto L_0893426C;
    }
L_0893426C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0893435C;
      }
      goto L_08934274;
    }
L_08934274:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08934284u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08934284u) goto L_08934284;
    return;
L_08934284:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[31] = (0x08934290u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(7364));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 529u, 0x088327E8u>(ctx, &aot_mem) && ctx.pc == 0x08934290u) goto L_08934290;
    return;
L_08934290:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089342A0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x089342A0u) goto L_089342A0;
    return;
L_089342A0:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089342B4u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089342B4u) goto L_089342B4;
    return;
L_089342B4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22204)));
    ctx.gpr[31] = (0x089342C4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089342C4u) goto L_089342C4;
    return;
L_089342C4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089342D0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x089342D0u) goto L_089342D0;
    return;
L_089342D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.gpr[6] = (0u | 130u);
    ctx.gpr[31] = (0x089342E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x089342E8u) goto L_089342E8;
    return;
L_089342E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0893435C;
      }
      goto L_089342FC;
    }
L_089342FC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08934318;
      }
      goto L_08934308;
    }
L_08934308:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_0893435C;
    }
    goto L_08934310;
L_08934310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893435C;
      }
      goto L_08934318;
    }
L_08934318:
    ctx.gpr[31] = (0x08934320u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x08934320u) goto L_08934320;
    return;
L_08934320:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893435C;
      }
      goto L_0893432C;
    }
L_0893432C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08934344u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08934344u) goto L_08934344;
    return;
L_08934344:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0893435C;
      }
      goto L_0893435C;
    }
L_0893435C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893437C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893438C:
    ctx.gpr[3] = (2222u << 16u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(488)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[11];
    ctx.gpr[8] = (ctx.gpr[3] | 0u);
      if (branch_taken) {
          goto L_08934400;
      }
      goto L_089343A4;
    }
L_089343A4:
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    goto L_089343B0;
L_089343B0:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    goto L_089343B8;
L_089343B8:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[4];
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089343DC;
      }
      goto L_089343C4;
    }
L_089343C4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(484), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(488)));
      if (branch_taken) {
          goto L_089343E8;
      }
      goto L_089343DC;
    }
L_089343DC:
    ctx.gpr[12] = (static_cast<std::int32_t>(ctx.gpr[9]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089343B8;
      }
      goto L_089343E8;
    }
L_089343E8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[11];
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08934400;
      }
      goto L_089343F0;
    }
L_089343F0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[10]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089343B0;
      }
      goto L_08934400;
    }
L_08934400:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934430:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08934454u);
    ctx.gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08934454u) goto L_08934454;
    return;
L_08934454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934470:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0893452C;
      }
      goto L_089344A0;
    }
L_089344A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08934614;
      }
      goto L_089344A8;
    }
L_089344A8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089344B8u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089344B8u) goto L_089344B8;
    return;
L_089344B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[31] = (0x089344D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7376));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x089344D0u) goto L_089344D0;
    return;
L_089344D0:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089344E4u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089344E4u) goto L_089344E4;
    return;
L_089344E4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22204)));
    ctx.gpr[31] = (0x089344F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x089344F4u) goto L_089344F4;
    return;
L_089344F4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08934500u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08934500u) goto L_08934500;
    return;
L_08934500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.gpr[6] = (0u | 130u);
    ctx.gpr[31] = (0x08934518u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x08934518u) goto L_08934518;
    return;
L_08934518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08934614;
      }
      goto L_0893452C;
    }
L_0893452C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893454C;
      }
      goto L_08934538;
    }
L_08934538:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08934614;
    }
    goto L_08934544;
L_08934544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934614;
      }
      goto L_0893454C;
    }
L_0893454C:
    ctx.gpr[31] = (0x08934554u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x08934554u) goto L_08934554;
    return;
L_08934554:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08934614;
      }
      goto L_08934560;
    }
L_08934560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(528));
    ctx.gpr[31] = (0x08934574u);
    ctx.gpr[6] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08934574u) goto L_08934574;
    return;
L_08934574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[6] = (0u | 276u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(528));
    ctx.gpr[31] = (0x0893458Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0893458Cu) goto L_0893458C;
    return;
L_0893458C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(537))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
      if (branch_taken) {
          goto L_089345B4;
      }
      goto L_089345A4;
    }
L_089345A4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089345A8;
L_089345A8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089345A8;
      }
      goto L_089345B4;
    }
L_089345B4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089345BC;
L_089345BC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089345BC;
      }
      goto L_089345C8;
    }
L_089345C8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089345D0;
L_089345D0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089345D0;
      }
      goto L_089345DC;
    }
L_089345DC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089345E4;
L_089345E4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089345E4;
      }
      goto L_089345F0;
    }
L_089345F0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089345F8;
L_089345F8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089345F8;
      }
      goto L_08934604;
    }
L_08934604:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08934614;
      }
      goto L_08934614;
    }
L_08934614:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934634:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(537))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(500)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[5] << 6u);
      if (branch_taken) {
          goto L_089346BC;
      }
      goto L_08934660;
    }
L_08934660:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(513), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1880));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089346A4;
      }
      goto L_08934680;
    }
L_08934680:
    ctx.gpr[31] = (0x08934688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 692u, 0x08833480u>(ctx, &aot_mem) && ctx.pc == 0x08934688u) goto L_08934688;
    return;
L_08934688:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08934694u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 693u, 0x08833490u>(ctx, &aot_mem) && ctx.pc == 0x08934694u) goto L_08934694;
    return;
L_08934694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(758))))));
    ctx.gpr[31] = (0x089346A4u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 689u, 0x0883345Cu>(ctx, &aot_mem) && ctx.pc == 0x089346A4u) goto L_089346A4;
    return;
L_089346A4:
    ctx.gpr[2] = (0u | 3u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089346BC:
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[2];
    ctx.gpr[7] = (2224u << 16u);
      if (branch_taken) {
          goto L_089346F8;
      }
      goto L_089346D8;
    }
L_089346D8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1880));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
        goto L_089347AC;
    }
    goto L_089346EC;
L_089346EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08934770;
      }
      goto L_089346F8;
    }
L_089346F8:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089346FC;
L_089346FC:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(500), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(554))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08934758;
      }
      goto L_08934720;
    }
L_08934720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08934744;
      }
      goto L_0893472C;
    }
L_0893472C:
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934744:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934758:
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
L_08934770:
    ctx.gpr[31] = (0x08934778u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(512), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 692u, 0x08833480u>(ctx, &aot_mem) && ctx.pc == 0x08934778u) goto L_08934778;
    return;
L_08934778:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08934784u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 693u, 0x08833490u>(ctx, &aot_mem) && ctx.pc == 0x08934784u) goto L_08934784;
    return;
L_08934784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(758))))));
    ctx.gpr[31] = (0x08934794u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 689u, 0x0883345Cu>(ctx, &aot_mem) && ctx.pc == 0x08934794u) goto L_08934794;
    return;
L_08934794:
    ctx.gpr[2] = (0u | 2u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089347AC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089346FC;
      }
      goto L_089347B4;
    }
L_089347B4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(512), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 2u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893480C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0893482C;
      }
      goto L_0893481C;
    }
L_0893481C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[6] = (0u | 420u);
    ctx.gpr[31] = (0x0893482Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0893482Cu) goto L_0893482C;
    return;
L_0893482C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934838:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934858:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[6] = (0u | 276u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08934874u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(528));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08934874u) goto L_08934874;
    return;
L_08934874:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934880:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089348A4u);
    ctx.gpr[6] = (0u | 144u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089348A4u) goto L_089348A4;
    return;
L_089348A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089348C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08934980;
      }
      goto L_089348F0;
    }
L_089348F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089349DC;
      }
      goto L_089348F8;
    }
L_089348F8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08934908u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08934908u) goto L_08934908;
    return;
L_08934908:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[31] = (0x08934914u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(7388));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 529u, 0x088327E8u>(ctx, &aot_mem) && ctx.pc == 0x08934914u) goto L_08934914;
    return;
L_08934914:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08934924u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08934924u) goto L_08934924;
    return;
L_08934924:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08934938u);
    ctx.gpr[6] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08934938u) goto L_08934938;
    return;
L_08934938:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22204)));
    ctx.gpr[31] = (0x08934948u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08934948u) goto L_08934948;
    return;
L_08934948:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08934954u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08934954u) goto L_08934954;
    return;
L_08934954:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.gpr[6] = (0u | 130u);
    ctx.gpr[31] = (0x0893496Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x0893496Cu) goto L_0893496C;
    return;
L_0893496C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089349DC;
      }
      goto L_08934980;
    }
L_08934980:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893499C;
      }
      goto L_0893498C;
    }
L_0893498C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_089349DC;
    }
    goto L_08934994;
L_08934994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089349DC;
      }
      goto L_0893499C;
    }
L_0893499C:
    ctx.gpr[31] = (0x089349A4u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x089349A4u) goto L_089349A4;
    return;
L_089349A4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089349DC;
      }
      goto L_089349B0;
    }
L_089349B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x089349C8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x089349C8u) goto L_089349C8;
    return;
L_089349C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089349DC;
      }
      goto L_089349DC;
    }
L_089349DC:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089349FC:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(548))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934A1C:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(552))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934A3C:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(556))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934A5C:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934A80:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(554))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934AA0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934AB0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934AD8:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(540)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934AFC:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(756))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934B0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(768)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08934B48;
      }
      goto L_08934B30;
    }
L_08934B30:
    ctx.gpr[31] = (0x08934B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 183u, 0x08834CFCu>(ctx, &aot_mem) && ctx.pc == 0x08934B38u) goto L_08934B38;
    return;
L_08934B38:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934B48;
      }
      goto L_08934B44;
    }
L_08934B44:
    ctx.gpr[16] = (0u | 1u);
    goto L_08934B48;
L_08934B48:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934B5C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(532)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934B70:
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(537))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08934BC0;
      }
      goto L_08934B8C;
    }
L_08934B8C:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08934B90;
L_08934B90:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(544)));
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(537))))));
        goto L_08934BB0;
    }
    goto L_08934B9C;
L_08934B9C:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(548))))));
    if (ctx.gpr[9] != ctx.gpr[5]) {
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(537))))));
        goto L_08934BB0;
    }
    goto L_08934BA8;
L_08934BA8:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(548), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(537))))));
    goto L_08934BB0;
L_08934BB0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08934B90;
      }
      goto L_08934BC0;
    }
L_08934BC0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934BC8:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(554))))));
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934BF4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(557))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934C38:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(514)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934C48:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (0u | 1u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(514), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934C84:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(572)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934CAC:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(568)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934CD4:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    ctx.gpr[7] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08934D04;
      }
      goto L_08934CF8;
    }
L_08934CF8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(576)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934D04:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(580)));
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934D14:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(537))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[8] = (ctx.gpr[7] << 6u);
      if (branch_taken) {
          goto L_08934D3C;
      }
      goto L_08934D30;
    }
L_08934D30:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(720)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934D3C:
    ctx.gpr[9] = (ctx.gpr[7] << 2u);
    ctx.gpr[10] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_08934D98;
      }
      goto L_08934D54;
    }
L_08934D54:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08934D88;
      }
      goto L_08934D60;
    }
L_08934D60:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08934D80;
      }
      goto L_08934D6C;
    }
L_08934D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08934D80;
      }
      goto L_08934D78;
    }
L_08934D78:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(720)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    goto L_08934D80;
L_08934D80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934D90;
      }
      goto L_08934D88;
    }
L_08934D88:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(720)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    goto L_08934D90;
L_08934D90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08934DD8;
      }
      goto L_08934D98;
    }
L_08934D98:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08934DCC;
      }
      goto L_08934DA4;
    }
L_08934DA4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08934DC4;
      }
      goto L_08934DB0;
    }
L_08934DB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08934DC4;
      }
      goto L_08934DBC;
    }
L_08934DBC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(720)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    goto L_08934DC4;
L_08934DC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934DD4;
      }
      goto L_08934DCC;
    }
L_08934DCC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(720)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    goto L_08934DD4;
L_08934DD4:
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
    goto L_08934DD8;
L_08934DD8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934DE0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(724)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934DF0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    ctx.gpr[7] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08934E1C;
      }
      goto L_08934E14;
    }
L_08934E14:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(584))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934E1C:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(586))))));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934E28:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934E40:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(492), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934E54:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934E64:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934E84:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934E94:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (0u | 1u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(496), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934EA8:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(496), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934EB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08934EDCu);
    ctx.gpr[19] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 564u, 0x08832B6Cu>(ctx, &aot_mem) && ctx.pc == 0x08934EDCu) goto L_08934EDC;
    return;
L_08934EDC:
    ctx.gpr[31] = (0x08934EE4u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 692u, 0x08833480u>(ctx, &aot_mem) && ctx.pc == 0x08934EE4u) goto L_08934EE4;
    return;
L_08934EE4:
    ctx.gpr[31] = (0x08934EECu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 696u, 0x088334B4u>(ctx, &aot_mem) && ctx.pc == 0x08934EECu) goto L_08934EEC;
    return;
L_08934EEC:
    ctx.gpr[31] = (0x08934EF4u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 541u, 0x088328C8u>(ctx, &aot_mem) && ctx.pc == 0x08934EF4u) goto L_08934EF4;
    return;
L_08934EF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08934F24;
      }
      goto L_08934EFC;
    }
L_08934EFC:
    ctx.gpr[31] = (0x08934F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 529u, 0x088327E8u>(ctx, &aot_mem) && ctx.pc == 0x08934F04u) goto L_08934F04;
    return;
L_08934F04:
    ctx.gpr[31] = (0x08934F0Cu);
    ctx.gpr[20] = (ctx.gpr[2] + static_cast<std::uint32_t>(21));
    goto L_08934838;
L_08934F0C:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    ctx.gpr[4] = (0u | 40u);
      if (branch_taken) {
          goto L_08934F24;
      }
      goto L_08934F14;
    }
L_08934F14:
    if (ctx.gpr[18] == ctx.gpr[4]) {
    ctx.gpr[19] = (0u | 1u);
        goto L_08934F5C;
    }
    goto L_08934F1C;
L_08934F1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08934F48;
      }
      goto L_08934F24;
    }
L_08934F24:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08934F48:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[17];
    ctx.gpr[4] = (0u | 100u);
      if (branch_taken) {
          goto L_08934F5C;
      }
      goto L_08934F50;
    }
L_08934F50:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08934F5C;
      }
      goto L_08934F58;
    }
L_08934F58:
    ctx.gpr[19] = (0u | 1u);
    goto L_08934F5C;
L_08934F5C:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089350AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089350D4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089350D4u) goto L_089350D4;
    return;
L_089350D4:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x089350F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089350F4u) goto L_089350F4;
    return;
L_089350F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (17392u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[31] = (0x08935190u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08935190u) goto L_08935190;
    return;
L_08935190:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 184u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089351A4u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089351A4u) goto L_089351A4;
    return;
L_089351A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[6] = (0u | 184u);
    ctx.gpr[31] = (0x089351C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089351C0u) goto L_089351C0;
    return;
L_089351C0:
    ctx.gpr[7] = (17360u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (17232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (17024u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    goto L_089351E8;
L_089351E8:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089351E8;
      }
      goto L_08935238;
    }
L_08935238:
    ctx.gpr[31] = (0x08935240u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 55u, 0x0883C734u>(ctx, &aot_mem) && ctx.pc == 0x08935240u) goto L_08935240;
    return;
L_08935240:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935254:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935274u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08935274u) goto L_08935274;
    return;
L_08935274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0893528Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893528Cu) goto L_0893528C;
    return;
L_0893528C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[31] = (0x089352A0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 61u, 0x0883C8A8u>(ctx, &aot_mem) && ctx.pc == 0x089352A0u) goto L_089352A0;
    return;
L_089352A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089352B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089352B4u) goto L_089352B4;
    return;
L_089352B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089352D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089352E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 65u, 0x0883C8F0u>(ctx, &aot_mem) && ctx.pc == 0x089352E8u) goto L_089352E8;
    return;
L_089352E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089352F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935310u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08935310u) goto L_08935310;
    return;
L_08935310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[31] = (0x0893531Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 72u, 0x0883C9FCu>(ctx, &aot_mem) && ctx.pc == 0x0893531Cu) goto L_0893531C;
    return;
L_0893531C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893532C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08935354u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935354u) goto L_08935354;
    return;
L_08935354:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x08935374u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08935374u) goto L_08935374;
    return;
L_08935374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (17392u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 110u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[31] = (0x08935410u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08935410u) goto L_08935410;
    return;
L_08935410:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 184u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08935424u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935424u) goto L_08935424;
    return;
L_08935424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[6] = (0u | 184u);
    ctx.gpr[31] = (0x08935440u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08935440u) goto L_08935440;
    return;
L_08935440:
    ctx.gpr[7] = (17360u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (17232u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (17024u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    goto L_08935468;
L_08935468:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08935468;
      }
      goto L_089354B8;
    }
L_089354B8:
    ctx.gpr[31] = (0x089354C0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 55u, 0x0883C734u>(ctx, &aot_mem) && ctx.pc == 0x089354C0u) goto L_089354C0;
    return;
L_089354C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089354D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089354F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x089354F4u) goto L_089354F4;
    return;
L_089354F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0893550Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893550Cu) goto L_0893550C;
    return;
L_0893550C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[31] = (0x08935520u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 61u, 0x0883C8A8u>(ctx, &aot_mem) && ctx.pc == 0x08935520u) goto L_08935520;
    return;
L_08935520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08935534u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08935534u) goto L_08935534;
    return;
L_08935534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935550:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935568u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 65u, 0x0883C8F0u>(ctx, &aot_mem) && ctx.pc == 0x08935568u) goto L_08935568;
    return;
L_08935568:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935574:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935590u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08935590u) goto L_08935590;
    return;
L_08935590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[31] = (0x0893559Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 72u, 0x0883C9FCu>(ctx, &aot_mem) && ctx.pc == 0x0893559Cu) goto L_0893559C;
    return;
L_0893559C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089355AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x089355D0u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 692u, 0x08833480u>(ctx, &aot_mem) && ctx.pc == 0x089355D0u) goto L_089355D0;
    return;
L_089355D0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08935600;
      }
      goto L_089355D8;
    }
L_089355D8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935624;
      }
      goto L_089355E8;
    }
L_089355E8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935624;
      }
      goto L_089355F8;
    }
L_089355F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08935624;
      }
      goto L_08935600;
    }
L_08935600:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935624;
      }
      goto L_08935610;
    }
L_08935610:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935624;
      }
      goto L_08935620;
    }
L_08935620:
    ctx.gpr[17] = (0u | 1u);
    goto L_08935624;
L_08935624:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935640:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935664u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 541u, 0x088328C8u>(ctx, &aot_mem) && ctx.pc == 0x08935664u) goto L_08935664;
    return;
L_08935664:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089356AC;
      }
      goto L_08935670;
    }
L_08935670:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08935684;
      }
      goto L_0893567C;
    }
L_0893567C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089356E4;
      }
      goto L_08935684;
    }
L_08935684:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0893569C;
      }
      goto L_0893568C;
    }
L_0893568C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089356E4;
      }
      goto L_08935694;
    }
L_08935694:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089356E4;
      }
      goto L_0893569C;
    }
L_0893569C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089356E4;
      }
      goto L_089356A4;
    }
L_089356A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089356E4;
      }
      goto L_089356AC;
    }
L_089356AC:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089356C0;
      }
      goto L_089356B8;
    }
L_089356B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089356E4;
      }
      goto L_089356C0;
    }
L_089356C0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089356D8;
      }
      goto L_089356C8;
    }
L_089356C8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089356E4;
      }
      goto L_089356D0;
    }
L_089356D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089356E4;
      }
      goto L_089356D8;
    }
L_089356D8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089356E4;
      }
      goto L_089356E0;
    }
L_089356E0:
    ctx.gpr[17] = (0u | 1u);
    goto L_089356E4;
L_089356E4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935700:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935724u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 529u, 0x088327E8u>(ctx, &aot_mem) && ctx.pc == 0x08935724u) goto L_08935724;
    return;
L_08935724:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0893574C;
      }
      goto L_08935730;
    }
L_08935730:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_0893573C;
    }
    goto L_0893573C;
L_0893573C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08935764;
      }
      goto L_08935744;
    }
L_08935744:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08935764;
      }
      goto L_0893574C;
    }
L_0893574C:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08935758;
    }
    goto L_08935758;
L_08935758:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08935764;
      }
      goto L_08935760;
    }
L_08935760:
    ctx.gpr[17] = (0u | 1u);
    goto L_08935764;
L_08935764:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935780:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0893581C;
      }
      goto L_089357A4;
    }
L_089357A4:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089357BC;
      }
      goto L_089357B4;
    }
L_089357B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08935890;
      }
      goto L_089357BC;
    }
L_089357BC:
    ctx.gpr[31] = (0x089357C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 271u, 0x08835524u>(ctx, &aot_mem) && ctx.pc == 0x089357C4u) goto L_089357C4;
    return;
L_089357C4:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08935890;
      }
      goto L_089357D0;
    }
L_089357D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089357E4;
      }
      goto L_089357DC;
    }
L_089357DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08935890;
      }
      goto L_089357E4;
    }
L_089357E4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4))))));
      if (branch_taken) {
          goto L_08935804;
      }
      goto L_089357EC;
    }
L_089357EC:
    ctx.gpr[31] = (0x089357F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 273u, 0x0883554Cu>(ctx, &aot_mem) && ctx.pc == 0x089357F4u) goto L_089357F4;
    return;
L_089357F4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08935890;
      }
      goto L_089357FC;
    }
L_089357FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08935890;
      }
      goto L_08935804;
    }
L_08935804:
    ctx.gpr[31] = (0x0893580Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 273u, 0x0883554Cu>(ctx, &aot_mem) && ctx.pc == 0x0893580Cu) goto L_0893580C;
    return;
L_0893580C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935890;
      }
      goto L_08935814;
    }
L_08935814:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08935890;
      }
      goto L_0893581C;
    }
L_0893581C:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08935834;
      }
      goto L_0893582C;
    }
L_0893582C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08935890;
      }
      goto L_08935834;
    }
L_08935834:
    ctx.gpr[31] = (0x0893583Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 271u, 0x08835524u>(ctx, &aot_mem) && ctx.pc == 0x0893583Cu) goto L_0893583C;
    return;
L_0893583C:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08935890;
      }
      goto L_08935848;
    }
L_08935848:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(6))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0893585C;
      }
      goto L_08935854;
    }
L_08935854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08935890;
      }
      goto L_0893585C;
    }
L_0893585C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4))))));
      if (branch_taken) {
          goto L_0893587C;
      }
      goto L_08935864;
    }
L_08935864:
    ctx.gpr[31] = (0x0893586Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 273u, 0x0883554Cu>(ctx, &aot_mem) && ctx.pc == 0x0893586Cu) goto L_0893586C;
    return;
L_0893586C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08935890;
      }
      goto L_08935874;
    }
L_08935874:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08935890;
      }
      goto L_0893587C;
    }
L_0893587C:
    ctx.gpr[31] = (0x08935884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 273u, 0x0883554Cu>(ctx, &aot_mem) && ctx.pc == 0x08935884u) goto L_08935884;
    return;
L_08935884:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935890;
      }
      goto L_0893588C;
    }
L_0893588C:
    ctx.gpr[18] = (0u | 1u);
    goto L_08935890;
L_08935890:
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
L_089358B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0893597C;
      }
      goto L_089358DC;
    }
L_089358DC:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(7))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
      if (branch_taken) {
          goto L_089358F4;
      }
      goto L_089358EC;
    }
L_089358EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08935A14;
      }
      goto L_089358F4;
    }
L_089358F4:
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08935A14;
      }
      goto L_08935918;
    }
L_08935918:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08935948;
      }
      goto L_08935924;
    }
L_08935924:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08935948;
      }
      goto L_08935930;
    }
L_08935930:
    ctx.gpr[31] = (0x08935938u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 166u, 0x08834AA8u>(ctx, &aot_mem) && ctx.pc == 0x08935938u) goto L_08935938;
    return;
L_08935938:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(7))))));
        goto L_0893594C;
    }
    goto L_08935940;
L_08935940:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08935A14;
      }
      goto L_08935948;
    }
L_08935948:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(7))))));
    goto L_0893594C;
L_0893594C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08935918;
      }
      goto L_08935974;
    }
L_08935974:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08935A14;
      }
      goto L_0893597C;
    }
L_0893597C:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
      if (branch_taken) {
          goto L_08935994;
      }
      goto L_0893598C;
    }
L_0893598C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08935A14;
      }
      goto L_08935994;
    }
L_08935994:
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08935A14;
      }
      goto L_089359B8;
    }
L_089359B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_089359E8;
      }
      goto L_089359C4;
    }
L_089359C4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_089359E8;
      }
      goto L_089359D0;
    }
L_089359D0:
    ctx.gpr[31] = (0x089359D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 166u, 0x08834AA8u>(ctx, &aot_mem) && ctx.pc == 0x089359D8u) goto L_089359D8;
    return;
L_089359D8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
        goto L_089359EC;
    }
    goto L_089359E0;
L_089359E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08935A14;
      }
      goto L_089359E8;
    }
L_089359E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    goto L_089359EC;
L_089359EC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 7u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089359B8;
      }
      goto L_08935A14;
    }
L_08935A14:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08935A38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    goto L_08935A84;
L_08935A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08935AD0;
      }
      goto L_08935A98;
    }
L_08935A98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08935AC0;
      }
      goto L_08935AA4;
    }
L_08935AA4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(296)));
    if (ctx.gpr[5] != ctx.gpr[19]) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08935AC4;
    }
    goto L_08935AB0;
L_08935AB0:
    ctx.gpr[31] = (0x08935AB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 166u, 0x08834AA8u>(ctx, &aot_mem) && ctx.pc == 0x08935AB8u) goto L_08935AB8;
    return;
L_08935AB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08935AD0;
      }
      goto L_08935AC0;
    }
L_08935AC0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08935AC4;
L_08935AC4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08935A98;
      }
      goto L_08935AD0;
    }
L_08935AD0:
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08935AD8;
    }
    goto L_08935AD8;
L_08935AD8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4224));
      if (branch_taken) {
          goto L_08935A84;
      }
      goto L_08935AE8;
    }
L_08935AE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(11))))));
        goto L_08935B48;
    }
    goto L_08935AF4;
L_08935AF4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(8))))));
    if (ctx.gpr[4] != ctx.gpr[23]) {
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(9))))));
        goto L_08935B08;
    }
    goto L_08935B00;
L_08935B00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08935B94;
      }
      goto L_08935B08;
    }
L_08935B08:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935B20;
      }
      goto L_08935B10;
    }
L_08935B10:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08935B94;
      }
      goto L_08935B18;
    }
L_08935B18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08935B94;
      }
      goto L_08935B20;
    }
L_08935B20:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[19];
    ctx.gpr[21] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08935B38;
      }
      goto L_08935B28;
    }
L_08935B28:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935B94;
      }
      goto L_08935B30;
    }
L_08935B30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08935B94;
      }
      goto L_08935B38;
    }
L_08935B38:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935B94;
      }
      goto L_08935B40;
    }
L_08935B40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08935B94;
      }
      goto L_08935B48;
    }
L_08935B48:
    if (ctx.gpr[4] != ctx.gpr[23]) {
    ctx.gpr[30] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(12))))));
        goto L_08935B58;
    }
    goto L_08935B50;
L_08935B50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08935B94;
      }
      goto L_08935B58;
    }
L_08935B58:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935B70;
      }
      goto L_08935B60;
    }
L_08935B60:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08935B94;
      }
      goto L_08935B68;
    }
L_08935B68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08935B94;
      }
      goto L_08935B70;
    }
L_08935B70:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[19];
    ctx.gpr[21] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08935B88;
      }
      goto L_08935B78;
    }
L_08935B78:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935B94;
      }
      goto L_08935B80;
    }
L_08935B80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08935B94;
      }
      goto L_08935B88;
    }
L_08935B88:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935B94;
      }
      goto L_08935B90;
    }
L_08935B90:
    ctx.gpr[22] = (0u | 1u);
    goto L_08935B94;
L_08935B94:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
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
L_08935BC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08935C44;
      }
      goto L_08935BEC;
    }
L_08935BEC:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08935C04;
      }
      goto L_08935BFC;
    }
L_08935BFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08935C98;
      }
      goto L_08935C04;
    }
L_08935C04:
    ctx.gpr[31] = (0x08935C0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 166u, 0x08834AA8u>(ctx, &aot_mem) && ctx.pc == 0x08935C0Cu) goto L_08935C0C;
    return;
L_08935C0C:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08935C98;
      }
      goto L_08935C18;
    }
L_08935C18:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11))))));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08935C2C;
      }
      goto L_08935C24;
    }
L_08935C24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08935C98;
      }
      goto L_08935C2C;
    }
L_08935C2C:
    ctx.gpr[31] = (0x08935C34u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 166u, 0x08834AA8u>(ctx, &aot_mem) && ctx.pc == 0x08935C34u) goto L_08935C34;
    return;
L_08935C34:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08935C98;
      }
      goto L_08935C3C;
    }
L_08935C3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08935C98;
      }
      goto L_08935C44;
    }
L_08935C44:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(13))))));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08935C5C;
      }
      goto L_08935C54;
    }
L_08935C54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08935C98;
      }
      goto L_08935C5C;
    }
L_08935C5C:
    ctx.gpr[31] = (0x08935C64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 166u, 0x08834AA8u>(ctx, &aot_mem) && ctx.pc == 0x08935C64u) goto L_08935C64;
    return;
L_08935C64:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08935C98;
      }
      goto L_08935C70;
    }
L_08935C70:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08935C84;
      }
      goto L_08935C7C;
    }
L_08935C7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08935C98;
      }
      goto L_08935C84;
    }
L_08935C84:
    ctx.gpr[31] = (0x08935C8Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 166u, 0x08834AA8u>(ctx, &aot_mem) && ctx.pc == 0x08935C8Cu) goto L_08935C8C;
    return;
L_08935C8C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08935C98;
      }
      goto L_08935C94;
    }
L_08935C94:
    ctx.gpr[18] = (0u | 1u);
    goto L_08935C98;
L_08935C98:
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
L_08935CB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    goto L_08935CF8;
L_08935CF8:
    ctx.gpr[31] = (0x08935D00u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 166u, 0x08834AA8u>(ctx, &aot_mem) && ctx.pc == 0x08935D00u) goto L_08935D00;
    return;
L_08935D00:
    if (ctx.gpr[2] == ctx.gpr[21]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_08935D08;
    }
    goto L_08935D08;
L_08935D08:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 29 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935CF8;
      }
      goto L_08935D18;
    }
L_08935D18:
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15))))));
        goto L_08935D5C;
    }
    goto L_08935D20;
L_08935D20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    if (ctx.gpr[4] != ctx.gpr[22]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(13))))));
        goto L_08935D34;
    }
    goto L_08935D2C;
L_08935D2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08935D90;
      }
      goto L_08935D34;
    }
L_08935D34:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08935D4C;
      }
      goto L_08935D3C;
    }
L_08935D3C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935D90;
      }
      goto L_08935D44;
    }
L_08935D44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08935D90;
      }
      goto L_08935D4C;
    }
L_08935D4C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935D90;
      }
      goto L_08935D54;
    }
L_08935D54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08935D90;
      }
      goto L_08935D5C;
    }
L_08935D5C:
    if (ctx.gpr[4] != ctx.gpr[22]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
        goto L_08935D6C;
    }
    goto L_08935D64;
L_08935D64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08935D90;
      }
      goto L_08935D6C;
    }
L_08935D6C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08935D84;
      }
      goto L_08935D74;
    }
L_08935D74:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935D90;
      }
      goto L_08935D7C;
    }
L_08935D7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08935D90;
      }
      goto L_08935D84;
    }
L_08935D84:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935D90;
      }
      goto L_08935D8C;
    }
L_08935D8C:
    ctx.gpr[18] = (0u | 1u);
    goto L_08935D90;
L_08935D90:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08935DBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08935E30;
      }
      goto L_08935DDC;
    }
L_08935DDC:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08935DF4;
      }
      goto L_08935DEC;
    }
L_08935DEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08935E80;
      }
      goto L_08935DF4;
    }
L_08935DF4:
    ctx.gpr[31] = (0x08935DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 166u, 0x08834AA8u>(ctx, &aot_mem) && ctx.pc == 0x08935DFCu) goto L_08935DFC;
    return;
L_08935DFC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935E80;
      }
      goto L_08935E04;
    }
L_08935E04:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(15))))));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08935E18;
      }
      goto L_08935E10;
    }
L_08935E10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08935E80;
      }
      goto L_08935E18;
    }
L_08935E18:
    ctx.gpr[31] = (0x08935E20u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 166u, 0x08834AA8u>(ctx, &aot_mem) && ctx.pc == 0x08935E20u) goto L_08935E20;
    return;
L_08935E20:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935E80;
      }
      goto L_08935E28;
    }
L_08935E28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08935E80;
      }
      goto L_08935E30;
    }
L_08935E30:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(17))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08935E48;
      }
      goto L_08935E40;
    }
L_08935E40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08935E80;
      }
      goto L_08935E48;
    }
L_08935E48:
    ctx.gpr[31] = (0x08935E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 166u, 0x08834AA8u>(ctx, &aot_mem) && ctx.pc == 0x08935E50u) goto L_08935E50;
    return;
L_08935E50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935E80;
      }
      goto L_08935E58;
    }
L_08935E58:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08935E6C;
      }
      goto L_08935E64;
    }
L_08935E64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08935E80;
      }
      goto L_08935E6C;
    }
L_08935E6C:
    ctx.gpr[31] = (0x08935E74u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 166u, 0x08834AA8u>(ctx, &aot_mem) && ctx.pc == 0x08935E74u) goto L_08935E74;
    return;
L_08935E74:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935E80;
      }
      goto L_08935E7C;
    }
L_08935E7C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08935E80;
L_08935E80:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08935E9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935EC0u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 564u, 0x08832B6Cu>(ctx, &aot_mem) && ctx.pc == 0x08935EC0u) goto L_08935EC0;
    return;
L_08935EC0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08935F28;
      }
      goto L_08935ECC;
    }
L_08935ECC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08935EE4;
      }
      goto L_08935EDC;
    }
L_08935EDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08935F80;
      }
      goto L_08935EE4;
    }
L_08935EE4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_08935EFC;
      }
      goto L_08935EEC;
    }
L_08935EEC:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08935F80;
      }
      goto L_08935EF4;
    }
L_08935EF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08935F80;
      }
      goto L_08935EFC;
    }
L_08935EFC:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08935F18;
      }
      goto L_08935F08;
    }
L_08935F08:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935F80;
      }
      goto L_08935F10;
    }
L_08935F10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08935F80;
      }
      goto L_08935F18;
    }
L_08935F18:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935F80;
      }
      goto L_08935F20;
    }
L_08935F20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08935F80;
      }
      goto L_08935F28;
    }
L_08935F28:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(22))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08935F40;
      }
      goto L_08935F38;
    }
L_08935F38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08935F80;
      }
      goto L_08935F40;
    }
L_08935F40:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20))))));
      if (branch_taken) {
          goto L_08935F58;
      }
      goto L_08935F48;
    }
L_08935F48:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08935F80;
      }
      goto L_08935F50;
    }
L_08935F50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08935F80;
      }
      goto L_08935F58;
    }
L_08935F58:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08935F74;
      }
      goto L_08935F64;
    }
L_08935F64:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08935F80;
      }
      goto L_08935F6C;
    }
L_08935F6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08935F80;
      }
      goto L_08935F74;
    }
L_08935F74:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08935F80;
      }
      goto L_08935F7C;
    }
L_08935F7C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08935F80;
L_08935F80:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08935F9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x08935FC0u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 568u, 0x08832BE4u>(ctx, &aot_mem) && ctx.pc == 0x08935FC0u) goto L_08935FC0;
    return;
L_08935FC0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08936028;
      }
      goto L_08935FCC;
    }
L_08935FCC:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(22))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08935FE4;
      }
      goto L_08935FDC;
    }
L_08935FDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08936080;
      }
      goto L_08935FE4;
    }
L_08935FE4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(20))))));
      if (branch_taken) {
          goto L_08935FFC;
      }
      goto L_08935FEC;
    }
L_08935FEC:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08936080;
      }
      goto L_08935FF4;
    }
L_08935FF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08936080;
      }
      goto L_08935FFC;
    }
L_08935FFC:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08936018;
      }
      goto L_08936008;
    }
L_08936008:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936080;
      }
      goto L_08936010;
    }
L_08936010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08936080;
      }
      goto L_08936018;
    }
L_08936018:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936080;
      }
      goto L_08936020;
    }
L_08936020:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08936080;
      }
      goto L_08936028;
    }
L_08936028:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08936040;
      }
      goto L_08936038;
    }
L_08936038:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08936080;
      }
      goto L_08936040;
    }
L_08936040:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(24))))));
      if (branch_taken) {
          goto L_08936058;
      }
      goto L_08936048;
    }
L_08936048:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08936080;
      }
      goto L_08936050;
    }
L_08936050:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08936080;
      }
      goto L_08936058;
    }
L_08936058:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08936074;
      }
      goto L_08936064;
    }
L_08936064:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936080;
      }
      goto L_0893606C;
    }
L_0893606C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08936080;
      }
      goto L_08936074;
    }
L_08936074:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936080;
      }
      goto L_0893607C;
    }
L_0893607C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08936080;
L_08936080:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893609C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089360C4u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 564u, 0x08832B6Cu>(ctx, &aot_mem) && ctx.pc == 0x089360C4u) goto L_089360C4;
    return;
L_089360C4:
    ctx.gpr[31] = (0x089360CCu);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 568u, 0x08832BE4u>(ctx, &aot_mem) && ctx.pc == 0x089360CCu) goto L_089360CC;
    return;
L_089360CC:
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08936134;
      }
      goto L_089360D8;
    }
L_089360D8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089360F0;
      }
      goto L_089360E8;
    }
L_089360E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0893618C;
      }
      goto L_089360F0;
    }
L_089360F0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(24))))));
      if (branch_taken) {
          goto L_08936108;
      }
      goto L_089360F8;
    }
L_089360F8:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893618C;
      }
      goto L_08936100;
    }
L_08936100:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0893618C;
      }
      goto L_08936108;
    }
L_08936108:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08936124;
      }
      goto L_08936114;
    }
L_08936114:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893618C;
      }
      goto L_0893611C;
    }
L_0893611C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0893618C;
      }
      goto L_08936124;
    }
L_08936124:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893618C;
      }
      goto L_0893612C;
    }
L_0893612C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0893618C;
      }
      goto L_08936134;
    }
L_08936134:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(30))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0893614C;
      }
      goto L_08936144;
    }
L_08936144:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0893618C;
      }
      goto L_0893614C;
    }
L_0893614C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
      if (branch_taken) {
          goto L_08936164;
      }
      goto L_08936154;
    }
L_08936154:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893618C;
      }
      goto L_0893615C;
    }
L_0893615C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0893618C;
      }
      goto L_08936164;
    }
L_08936164:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08936180;
      }
      goto L_08936170;
    }
L_08936170:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893618C;
      }
      goto L_08936178;
    }
L_08936178:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0893618C;
      }
      goto L_08936180;
    }
L_08936180:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893618C;
      }
      goto L_08936188;
    }
L_08936188:
    ctx.gpr[17] = (0u | 1u);
    goto L_0893618C;
L_0893618C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089361AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089361D4u);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 564u, 0x08832B6Cu>(ctx, &aot_mem) && ctx.pc == 0x089361D4u) goto L_089361D4;
    return;
L_089361D4:
    ctx.gpr[31] = (0x089361DCu);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 568u, 0x08832BE4u>(ctx, &aot_mem) && ctx.pc == 0x089361DCu) goto L_089361DC;
    return;
L_089361DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089361F0;
      }
      goto L_089361E8;
    }
L_089361E8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08936210;
      }
      goto L_089361F0;
    }
L_089361F0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    goto L_08936210;
L_08936210:
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32))))));
        goto L_0893628C;
    }
    goto L_08936218;
L_08936218:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893622C;
      }
      goto L_08936224;
    }
L_08936224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089362F8;
      }
      goto L_0893622C;
    }
L_0893622C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(27))))));
      if (branch_taken) {
          goto L_0893624C;
      }
      goto L_08936234;
    }
L_08936234:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089362F8;
      }
      goto L_08936244;
    }
L_08936244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089362F8;
      }
      goto L_0893624C;
    }
L_0893624C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08936274;
      }
      goto L_0893625C;
    }
L_0893625C:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089362F8;
      }
      goto L_0893626C;
    }
L_0893626C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089362F8;
      }
      goto L_08936274;
    }
L_08936274:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089362F8;
      }
      goto L_08936284;
    }
L_08936284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089362F8;
      }
      goto L_0893628C;
    }
L_0893628C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893629C;
      }
      goto L_08936294;
    }
L_08936294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089362F8;
      }
      goto L_0893629C;
    }
L_0893629C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(31))))));
      if (branch_taken) {
          goto L_089362BC;
      }
      goto L_089362A4;
    }
L_089362A4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089362F8;
      }
      goto L_089362B4;
    }
L_089362B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089362F8;
      }
      goto L_089362BC;
    }
L_089362BC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_089362E4;
      }
      goto L_089362CC;
    }
L_089362CC:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089362F8;
      }
      goto L_089362DC;
    }
L_089362DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089362F8;
      }
      goto L_089362E4;
    }
L_089362E4:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089362F8;
      }
      goto L_089362F4;
    }
L_089362F4:
    ctx.gpr[18] = (0u | 1u);
    goto L_089362F8;
L_089362F8:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936318:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08936364;
      }
      goto L_08936334;
    }
L_08936334:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(29))))));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893634C;
      }
      goto L_08936344;
    }
L_08936344:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089363AC;
      }
      goto L_0893634C;
    }
L_0893634C:
    ctx.gpr[31] = (0x08936354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 706u, 0x08833594u>(ctx, &aot_mem) && ctx.pc == 0x08936354u) goto L_08936354;
    return;
L_08936354:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089363AC;
      }
      goto L_0893635C;
    }
L_0893635C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089363AC;
      }
      goto L_08936364;
    }
L_08936364:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(33))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08936378;
      }
      goto L_08936370;
    }
L_08936370:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089363AC;
      }
      goto L_08936378;
    }
L_08936378:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936398;
      }
      goto L_08936380;
    }
L_08936380:
    ctx.gpr[31] = (0x08936388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 706u, 0x08833594u>(ctx, &aot_mem) && ctx.pc == 0x08936388u) goto L_08936388;
    return;
L_08936388:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089363AC;
      }
      goto L_08936390;
    }
L_08936390:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089363AC;
      }
      goto L_08936398;
    }
L_08936398:
    ctx.gpr[31] = (0x089363A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 706u, 0x08833594u>(ctx, &aot_mem) && ctx.pc == 0x089363A0u) goto L_089363A0;
    return;
L_089363A0:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089363AC;
      }
      goto L_089363A8;
    }
L_089363A8:
    ctx.gpr[17] = (0u | 1u);
    goto L_089363AC;
L_089363AC:
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
L_089363C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x089363E8u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 548u, 0x08832970u>(ctx, &aot_mem) && ctx.pc == 0x089363E8u) goto L_089363E8;
    return;
L_089363E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0893644C;
      }
      goto L_089363F4;
    }
L_089363F4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36))))));
        goto L_0893640C;
    }
    goto L_08936404;
L_08936404:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089364A0;
      }
      goto L_0893640C;
    }
L_0893640C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08936424;
      }
      goto L_08936414;
    }
L_08936414:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089364A0;
      }
      goto L_0893641C;
    }
L_0893641C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089364A0;
      }
      goto L_08936424;
    }
L_08936424:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[6];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0893643C;
      }
      goto L_0893642C;
    }
L_0893642C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089364A0;
      }
      goto L_08936434;
    }
L_08936434:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089364A0;
      }
      goto L_0893643C;
    }
L_0893643C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089364A0;
      }
      goto L_08936444;
    }
L_08936444:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089364A0;
      }
      goto L_0893644C;
    }
L_0893644C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
        goto L_08936464;
    }
    goto L_0893645C;
L_0893645C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089364A0;
      }
      goto L_08936464;
    }
L_08936464:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0893647C;
      }
      goto L_0893646C;
    }
L_0893646C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089364A0;
      }
      goto L_08936474;
    }
L_08936474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089364A0;
      }
      goto L_0893647C;
    }
L_0893647C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[6];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08936494;
      }
      goto L_08936484;
    }
L_08936484:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089364A0;
      }
      goto L_0893648C;
    }
L_0893648C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089364A0;
      }
      goto L_08936494;
    }
L_08936494:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089364A0;
      }
      goto L_0893649C;
    }
L_0893649C:
    ctx.gpr[17] = (0u | 1u);
    goto L_089364A0;
L_089364A0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089364BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x089364E0u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x089364E0u) goto L_089364E0;
    return;
L_089364E0:
    ctx.gpr[4] = (0u | 100u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56))))));
        goto L_0893650C;
    }
    goto L_089364F4;
L_089364F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893651C;
      }
      goto L_08936504;
    }
L_08936504:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0893651C;
      }
      goto L_0893650C;
    }
L_0893650C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893651C;
      }
      goto L_08936518;
    }
L_08936518:
    ctx.gpr[17] = (0u | 1u);
    goto L_0893651C;
L_0893651C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936538:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
        goto L_0893654C;
    }
    goto L_08936540;
L_08936540:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893654C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936554:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08936570u);
    ctx.gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 627u, 0x08833120u>(ctx, &aot_mem) && ctx.pc == 0x08936570u) goto L_08936570;
    return;
L_08936570:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08936588;
      }
      goto L_08936580;
    }
L_08936580:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_089365C8;
      }
      goto L_08936588;
    }
L_08936588:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(45))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_089365A4;
      }
      goto L_08936594;
    }
L_08936594:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089365C8;
      }
      goto L_0893659C;
    }
L_0893659C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_089365C8;
      }
      goto L_089365A4;
    }
L_089365A4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089365BC;
      }
      goto L_089365AC;
    }
L_089365AC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089365C8;
      }
      goto L_089365B4;
    }
L_089365B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_089365C8;
      }
      goto L_089365BC;
    }
L_089365BC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089365C8;
      }
      goto L_089365C4;
    }
L_089365C4:
    ctx.gpr[16] = (0u | 1u);
    goto L_089365C8;
L_089365C8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089365E0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(46))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089365E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0893660C;
      }
      goto L_08936604;
    }
L_08936604:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08936620;
      }
      goto L_0893660C;
    }
L_0893660C:
    ctx.gpr[31] = (0x08936614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 157u, 0x088349E8u>(ctx, &aot_mem) && ctx.pc == 0x08936614u) goto L_08936614;
    return;
L_08936614:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08936620;
      }
      goto L_0893661C;
    }
L_0893661C:
    ctx.gpr[16] = (0u | 1u);
    goto L_08936620;
L_08936620:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936634:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.gpr[31] = (0x08936650u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 550u, 0x08832990u>(ctx, &aot_mem) && ctx.pc == 0x08936650u) goto L_08936650;
    return;
L_08936650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08936668;
      }
      goto L_08936660;
    }
L_08936660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089366AC;
      }
      goto L_08936668;
    }
L_08936668:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
        goto L_08936684;
    }
    goto L_08936674;
L_08936674:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089366AC;
      }
      goto L_0893667C;
    }
L_0893667C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089366AC;
      }
      goto L_08936684;
    }
L_08936684:
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_089366A0;
      }
      goto L_08936690;
    }
L_08936690:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089366AC;
      }
      goto L_08936698;
    }
L_08936698:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089366AC;
      }
      goto L_089366A0;
    }
L_089366A0:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089366AC;
      }
      goto L_089366A8;
    }
L_089366A8:
    ctx.gpr[17] = (0u | 1u);
    goto L_089366AC;
L_089366AC:
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
L_089366C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[31]);
    ctx.gpr[31] = (0x089366ECu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 824u, 0x08833E18u>(ctx, &aot_mem) && ctx.pc == 0x089366ECu) goto L_089366EC;
    return;
L_089366EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
        goto L_08936700;
    }
    goto L_08936700;
L_08936700:
    ctx.gpr[31] = (0x08936708u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 837u, 0x08833F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08936708u) goto L_08936708;
    return;
L_08936708:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
        goto L_08936714;
    }
    goto L_08936714;
L_08936714:
    ctx.gpr[31] = (0x0893671Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 4u, 0x08834038u>(ctx, &aot_mem) && ctx.pc == 0x0893671Cu) goto L_0893671C;
    return;
L_0893671C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(92))))));
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
        goto L_08936728;
    }
    goto L_08936728;
L_08936728:
    ctx.gpr[31] = (0x08936730u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 17u, 0x08834130u>(ctx, &aot_mem) && ctx.pc == 0x08936730u) goto L_08936730;
    return;
L_08936730:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(128))))));
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
        goto L_0893673C;
    }
    goto L_0893673C;
L_0893673C:
    ctx.gpr[31] = (0x08936744u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 32u, 0x0883424Cu>(ctx, &aot_mem) && ctx.pc == 0x08936744u) goto L_08936744;
    return;
L_08936744:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(168))))));
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
        goto L_08936750;
    }
    goto L_08936750;
L_08936750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08936784;
      }
      goto L_0893675C;
    }
L_0893675C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089367A4;
      }
      goto L_08936764;
    }
L_08936764:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936784:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089367A4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089367C4:
    ctx.gpr[8] = (2222u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(488)));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[7];
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08936858;
      }
      goto L_089367E0;
    }
L_089367E0:
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[9];
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08936850;
      }
      goto L_089367E8;
    }
L_089367E8:
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089367F0;
L_089367F0:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(65))))));
    ctx.gpr[9] = (ctx.gpr[9] << 7u);
    ctx.gpr[10] = (0u + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] << 5u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[6] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08936838;
      }
      goto L_08936818;
    }
L_08936818:
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[2]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(296)));
    if (ctx.gpr[10] != ctx.gpr[7]) {
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_0893683C;
    }
    goto L_08936828;
L_08936828:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(64), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08936838;
L_08936838:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_0893683C;
L_0893683C:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[2]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089367F0;
      }
      goto L_08936848;
    }
L_08936848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936914;
      }
      goto L_08936850;
    }
L_08936850:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(64), ctx.gpr[10]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936858:
    if (ctx.gpr[10] != ctx.gpr[9]) {
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
        goto L_08936904;
    }
    goto L_08936860;
L_08936860:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(65))))));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[9];
    ctx.gpr[11] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_08936914;
      }
      goto L_0893686C;
    }
L_0893686C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[11] = (ctx.gpr[11] - ctx.gpr[4]);
    ctx.gpr[3] = (2221u << 16u);
    ctx.gpr[13] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[12] = (0u | 0u);
    ctx.gpr[2] = (ctx.gpr[3] + static_cast<std::uint32_t>(22160));
    goto L_08936888;
L_08936888:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(65))))));
    ctx.gpr[9] = (ctx.gpr[9] << 7u);
    ctx.gpr[10] = (0u + ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[9] << 5u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[6] + ctx.gpr[10]);
    ctx.gpr[9] = (ctx.gpr[10] + ctx.gpr[12]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[14];
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_089368EC;
      }
      goto L_089368B0;
    }
L_089368B0:
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[13]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(296)));
    if (ctx.gpr[10] != ctx.gpr[7]) {
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
        goto L_089368F0;
    }
    goto L_089368C0;
L_089368C0:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(22160)));
    if (ctx.gpr[9] == ctx.gpr[10]) {
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
        goto L_089368F0;
    }
    goto L_089368CC;
L_089368CC:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[9] == ctx.gpr[10]) {
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
        goto L_089368F0;
    }
    goto L_089368D8;
L_089368D8:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(64), ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089368EC;
L_089368EC:
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_089368F0;
L_089368F0:
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[13]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[12] = (ctx.gpr[12] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08936888;
      }
      goto L_089368FC;
    }
L_089368FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08936914;
      }
      goto L_08936904;
    }
L_08936904:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[11] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[10]);
    goto L_08936914;
L_08936914:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893691C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(66))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936924:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[31]);
    ctx.gpr[31] = (0x08936958u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 593u, 0x0884738Cu>(ctx, &aot_mem) && ctx.pc == 0x08936958u) goto L_08936958;
    return;
L_08936958:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19864));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089369ACu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 621u, 0x0880ABA0u>(ctx, &aot_mem) && ctx.pc == 0x089369ACu) goto L_089369AC;
    return;
L_089369AC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089369C4u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089369C4u) goto L_089369C4;
    return;
L_089369C4:
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7420));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[4]);
    ctx.gpr[4] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7400));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7412));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[4]);
    ctx.gpr[30] = (2220u << 16u);
    ctx.gpr[23] = (2220u << 16u);
    ctx.gpr[22] = (2220u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[5]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(7428));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(7440));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(7448));
    ctx.gpr[21] = (2222u << 16u);
    goto L_08936A08;
L_08936A08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[31] = (0x08936A14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08936A14u) goto L_08936A14;
    return;
L_08936A14:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
        goto L_08936B54;
    }
    goto L_08936A1C;
L_08936A1C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08936A2Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08936A2Cu) goto L_08936A2C;
    return;
L_08936A2C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08936A38u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08936A38u) goto L_08936A38;
    return;
L_08936A38:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08936A08;
      }
      goto L_08936A40;
    }
L_08936A40:
    ctx.gpr[18] = (0u | 0u);
    goto L_08936A44;
L_08936A44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[31] = (0x08936A50u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08936A50u) goto L_08936A50;
    return;
L_08936A50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08936A08;
      }
      goto L_08936A58;
    }
L_08936A58:
    ctx.gpr[31] = (0x08936A60u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x08936A60u) goto L_08936A60;
    return;
L_08936A60:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08936A6Cu);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08936A6Cu) goto L_08936A6C;
    return;
L_08936A6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08936AA0;
      }
      goto L_08936A74;
    }
L_08936A74:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08936A84u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08936A84u) goto L_08936A84;
    return;
L_08936A84:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08936A90u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08936A90u) goto L_08936A90;
    return;
L_08936A90:
    ctx.gpr[31] = (0x08936A98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08936A98u) goto L_08936A98;
    return;
L_08936A98:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08936AA0;
L_08936AA0:
    ctx.gpr[31] = (0x08936AA8u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08936AA8u) goto L_08936AA8;
    return;
L_08936AA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08936AF8;
      }
      goto L_08936AB0;
    }
L_08936AB0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08936AC0u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08936AC0u) goto L_08936AC0;
    return;
L_08936AC0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08936ACCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08936ACCu) goto L_08936ACC;
    return;
L_08936ACC:
    ctx.gpr[31] = (0x08936AD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08936AD4u) goto L_08936AD4;
    return;
L_08936AD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08936AF8;
L_08936AF8:
    ctx.gpr[31] = (0x08936B00u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08936B00u) goto L_08936B00;
    return;
L_08936B00:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08936A44;
      }
      goto L_08936B08;
    }
L_08936B08:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08936B14u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08936B14u) goto L_08936B14;
    return;
L_08936B14:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08936B20u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x08936B20u) goto L_08936B20;
    return;
L_08936B20:
    ctx.gpr[31] = (0x08936B28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x08936B28u) goto L_08936B28;
    return;
L_08936B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08936A44;
      }
      goto L_08936B54;
    }
L_08936B54:
    ctx.gpr[31] = (0x08936B5Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08936B5Cu) goto L_08936B5C;
    return;
L_08936B5C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    ctx.gpr[31] = (0x08936B68u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x08936B68u) goto L_08936B68;
    return;
L_08936B68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936B98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1152));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1132), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1136), ctx.gpr[31]);
    ctx.gpr[31] = (0x08936BB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 51u, 0x0883439Cu>(ctx, &aot_mem) && ctx.pc == 0x08936BB4u) goto L_08936BB4;
    return;
L_08936BB4:
    ctx.gpr[31] = (0x08936BBCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(940));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 824u, 0x08833E18u>(ctx, &aot_mem) && ctx.pc == 0x08936BBCu) goto L_08936BBC;
    return;
L_08936BBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(940))))));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08936BD8;
      }
      goto L_08936BCC;
    }
L_08936BCC:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08936BD8u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(686), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 830u, 0x08833E74u>(ctx, &aot_mem) && ctx.pc == 0x08936BD8u) goto L_08936BD8;
    return;
L_08936BD8:
    ctx.gpr[31] = (0x08936BE0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 837u, 0x08833F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08936BE0u) goto L_08936BE0;
    return;
L_08936BE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(976))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08936BF8;
      }
      goto L_08936BEC;
    }
L_08936BEC:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08936BF8u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(782), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 843u, 0x08833F78u>(ctx, &aot_mem) && ctx.pc == 0x08936BF8u) goto L_08936BF8;
    return;
L_08936BF8:
    ctx.gpr[31] = (0x08936C00u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1016));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 4u, 0x08834038u>(ctx, &aot_mem) && ctx.pc == 0x08936C00u) goto L_08936C00;
    return;
L_08936C00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1016))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08936C18;
      }
      goto L_08936C0C;
    }
L_08936C0C:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08936C18u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(812), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 10u, 0x08834094u>(ctx, &aot_mem) && ctx.pc == 0x08936C18u) goto L_08936C18;
    return;
L_08936C18:
    ctx.gpr[31] = (0x08936C20u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1052));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 17u, 0x08834130u>(ctx, &aot_mem) && ctx.pc == 0x08936C20u) goto L_08936C20;
    return;
L_08936C20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1052))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08936C38;
      }
      goto L_08936C2C;
    }
L_08936C2C:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08936C38u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(842), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 23u, 0x0883418Cu>(ctx, &aot_mem) && ctx.pc == 0x08936C38u) goto L_08936C38;
    return;
L_08936C38:
    ctx.gpr[31] = (0x08936C40u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1092));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 32u, 0x0883424Cu>(ctx, &aot_mem) && ctx.pc == 0x08936C40u) goto L_08936C40;
    return;
L_08936C40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(1092))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08936C58;
      }
      goto L_08936C4C;
    }
L_08936C4C:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08936C58u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(876), static_cast<std::uint16_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 38u, 0x088342A8u>(ctx, &aot_mem) && ctx.pc == 0x08936C58u) goto L_08936C58;
    return;
L_08936C58:
    ctx.gpr[31] = (0x08936C60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 54u, 0x088343C8u>(ctx, &aot_mem) && ctx.pc == 0x08936C60u) goto L_08936C60;
    return;
L_08936C60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936C74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08936C94u);
    ctx.gpr[6] = (0u | 804u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08936C94u) goto L_08936C94;
    return;
L_08936C94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    goto L_08936CAC;
L_08936CAC:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08936CB8;
L_08936CB8:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08936CB8;
      }
      goto L_08936CCC;
    }
L_08936CCC:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[10]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08936CAC;
      }
      goto L_08936CE0;
    }
L_08936CE0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(484), 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(492), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(500), 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(504), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u & 255u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(512), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(508), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(496), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(514), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(528), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(529), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(532), 0u);
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(536), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(537), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(540));
    goto L_08936D28;
L_08936D28:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[4]));
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
          goto L_08936D28;
      }
      goto L_08936D8C;
    }
L_08936D8C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(720), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(724), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(728), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(732), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(736), 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_08936DA8;
L_08936DA8:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(740), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(743), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(746), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(749), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08936DA8;
      }
      goto L_08936DC8;
    }
L_08936DC8:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(752), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(754), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(756), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(758), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(760), 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(764), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(765), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(768), 0u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(772), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(774), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(776), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(780), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(784), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(788), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(792), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(796), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(800), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(516), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(520), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(524), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08936E28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08936E5Cu);
    // nop
    goto L_089352D0;
L_08936E5C:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x08936E68u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x08936E68u) goto L_08936E68;
    return;
L_08936E68:
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08936ED8;
      }
      goto L_08936E7C;
    }
L_08936E7C:
    ctx.gpr[31] = (0x08936E84u);
    // nop
    goto L_089348C0;
L_08936E84:
    if (ctx.gpr[2] != ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
        goto L_08937254;
    }
    goto L_08936E8C;
L_08936E8C:
    ctx.gpr[31] = (0x08936E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 139u, 0x089385D8u>(ctx, &aot_mem) && ctx.pc == 0x08936E94u) goto L_08936E94;
    return;
L_08936E94:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08936EB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936EB0u) goto L_08936EB0;
    return;
L_08936EB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(520), 0u);
    ctx.gpr[31] = (0x08936EC4u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x08936EC4u) goto L_08936EC4;
    return;
L_08936EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08937250;
      }
      goto L_08936ED8;
    }
L_08936ED8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_08936F30;
      }
      goto L_08936EE0;
    }
L_08936EE0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 23120u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08936EF8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936EF8u) goto L_08936EF8;
    return;
L_08936EF8:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(516), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08936F14u);
    ctx.gpr[6] = (0u | 23120u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08936F14u) goto L_08936F14;
    return;
L_08936F14:
    ctx.gpr[31] = (0x08936F1Cu);
    // nop
    goto L_089341FC;
L_08936F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08937250;
      }
      goto L_08936F30;
    }
L_08936F30:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 3u);
      if (branch_taken) {
          goto L_08936FB8;
      }
      goto L_08936F38;
    }
L_08936F38:
    ctx.gpr[31] = (0x08936F40u);
    // nop
    goto L_0893423C;
L_08936F40:
    if (ctx.gpr[2] != ctx.gpr[17]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
        goto L_08937254;
    }
    goto L_08936F48;
L_08936F48:
    ctx.gpr[31] = (0x08936F50u);
    // nop
    goto L_08937B64;
L_08936F50:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08936F6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936F6Cu) goto L_08936F6C;
    return;
L_08936F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(516), 0u);
    ctx.gpr[31] = (0x08936F80u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x08936F80u) goto L_08936F80;
    return;
L_08936F80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(488)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08936F9C;
      }
      goto L_08936F90;
    }
L_08936F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08937250;
      }
      goto L_08936F9C;
    }
L_08936F9C:
    ctx.gpr[31] = (0x08936FA4u);
    // nop
    goto L_08934430;
L_08936FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08937250;
      }
      goto L_08936FB8;
    }
L_08936FB8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0893702C;
      }
      goto L_08936FC0;
    }
L_08936FC0:
    ctx.gpr[31] = (0x08936FC8u);
    // nop
    goto L_08934470;
L_08936FC8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08937250;
      }
      goto L_08936FD0;
    }
L_08936FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.gpr[31] = (0x08936FE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x08936FE0u) goto L_08936FE0;
    return;
L_08936FE0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 7800u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08936FF8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08936FF8u) goto L_08936FF8;
    return;
L_08936FF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08937010u);
    ctx.gpr[6] = (0u | 7800u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08937010u) goto L_08937010;
    return;
L_08937010:
    ctx.gpr[31] = (0x08937018u);
    // nop
    goto L_08936924;
L_08937018:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08937250;
      }
      goto L_0893702C;
    }
L_0893702C:
    ctx.gpr[20] = (2222u << 16u);
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22812)));
      if (branch_taken) {
          goto L_08937234;
      }
      goto L_0893703C;
    }
L_0893703C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(537))))));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08937208;
      }
      goto L_08937050;
    }
L_08937050:
    ctx.gpr[30] = (2221u << 16u);
    ctx.gpr[21] = (0u | 8u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(22188));
    goto L_08937064;
L_08937064:
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(550))))));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[10];
    ctx.gpr[18] = (ctx.gpr[9] << 4u);
      if (branch_taken) {
          goto L_089371F8;
      }
      goto L_08937078;
    }
L_08937078:
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[18] = (ctx.gpr[7] - ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 1u);
    if (ctx.gpr[7] != ctx.gpr[10]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(536))))));
        goto L_089370AC;
    }
    goto L_08937098;
L_08937098:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(552), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(537))))));
      if (branch_taken) {
          goto L_089371F8;
      }
      goto L_089370AC;
    }
L_089370AC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08937148;
      }
      goto L_089370B4;
    }
L_089370B4:
    ctx.gpr[17] = (0u | 0u);
    goto L_089370B8;
L_089370B8:
    ctx.gpr[31] = (0x089370C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x089370C0u) goto L_089370C0;
    return;
L_089370C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_089370E8;
      }
      goto L_089370E0;
    }
L_089370E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08937120;
      }
      goto L_089370E8;
    }
L_089370E8:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
      if (branch_taken) {
          goto L_08937120;
      }
      goto L_089370F4;
    }
L_089370F4:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    goto L_08937100;
L_08937100:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(552))))));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[10];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08937114;
      }
      goto L_0893710C;
    }
L_0893710C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08937120;
      }
      goto L_08937114;
    }
L_08937114:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08937100;
      }
      goto L_08937120;
    }
L_08937120:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
      if (branch_taken) {
          goto L_089370B8;
      }
      goto L_08937128;
    }
L_08937128:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(552), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(537))))));
      if (branch_taken) {
          goto L_089371F8;
      }
      goto L_08937148;
    }
L_08937148:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08937150;
L_08937150:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0893716C;
      }
      goto L_08937164;
    }
L_08937164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08937178;
      }
      goto L_0893716C;
    }
L_0893716C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08937150;
      }
      goto L_08937178;
    }
L_08937178:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08937184u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 204u, 0x08834EB4u>(ctx, &aot_mem) && ctx.pc == 0x08937184u) goto L_08937184;
    return;
L_08937184:
    ctx.gpr[31] = (0x0893718Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x0893718Cu) goto L_0893718C;
    return;
L_0893718C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[5]);
    goto L_089371B8;
L_089371B8:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089371D4;
      }
      goto L_089371C4;
    }
L_089371C4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_089371B8;
      }
      goto L_089371D4;
    }
L_089371D4:
    if (ctx.gpr[5] == ctx.gpr[21]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_089371DC;
    }
    goto L_089371DC;
L_089371DC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937184;
      }
      goto L_089371E4;
    }
L_089371E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(552), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(537))))));
    goto L_089371F8;
L_089371F8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08937064;
      }
      goto L_08937208;
    }
L_08937208:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0893721Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893721Cu) goto L_0893721C;
    return;
L_0893721C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08937250;
      }
      goto L_08937234;
    }
L_08937234:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(556))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[16]));
        goto L_08937250;
    }
    goto L_08937244;
L_08937244:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(484)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(556), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08937250;
L_08937250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    goto L_08937254;
L_08937254:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2195u << 16u);
      if (branch_taken) {
          goto L_089372D4;
      }
      goto L_08937264;
    }
L_08937264:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08937270u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14904));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08937270u) goto L_08937270;
    return;
L_08937270:
    ctx.gpr[31] = (0x08937278u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x08937278u) goto L_08937278;
    return;
L_08937278:
    ctx.gpr[31] = (0x08937280u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x08937280u) goto L_08937280;
    return;
L_08937280:
    ctx.gpr[31] = (0x08937288u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08937288u) goto L_08937288;
    return;
L_08937288:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2186u << 16u);
      if (branch_taken) {
          goto L_089372C0;
      }
      goto L_089372A0;
    }
L_089372A0:
    ctx.gpr[4] = (2186u << 16u);
    ctx.gpr[5] = (2186u << 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10988));
    ctx.gpr[31] = (0x089372B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10768));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x089372B8u) goto L_089372B8;
    return;
L_089372B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089372D4;
      }
      goto L_089372C0;
    }
L_089372C0:
    ctx.gpr[5] = (2186u << 16u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19272));
    ctx.gpr[31] = (0x089372D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18980));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x089372D4u) goto L_089372D4;
    return;
L_089372D4:
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
L_08937304:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08937338u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_089352D0;
L_08937338:
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089373C0;
      }
      goto L_0893734C;
    }
L_0893734C:
    ctx.gpr[31] = (0x08937354u);
    // nop
    goto L_08934470;
L_08937354:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_08937640;
      }
      goto L_0893735C;
    }
L_0893735C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.gpr[31] = (0x0893736Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0893736Cu) goto L_0893736C;
    return;
L_0893736C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(500), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 7800u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0893738Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893738Cu) goto L_0893738C;
    return;
L_0893738C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089373A4u);
    ctx.gpr[6] = (0u | 7800u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x089373A4u) goto L_089373A4;
    return;
L_089373A4:
    ctx.gpr[31] = (0x089373ACu);
    // nop
    goto L_08936924;
L_089373AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08937640;
      }
      goto L_089373C0;
    }
L_089373C0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_089375CC;
      }
      goto L_089373C8;
    }
L_089373C8:
    ctx.gpr[20] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(537))))));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0893759C;
      }
      goto L_089373E4;
    }
L_089373E4:
    ctx.gpr[30] = (2221u << 16u);
    ctx.gpr[21] = (0u | 8u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(22188));
    goto L_089373F8;
L_089373F8:
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[22]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(550))))));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[10];
    ctx.gpr[18] = (ctx.gpr[9] << 4u);
      if (branch_taken) {
          goto L_0893758C;
      }
      goto L_0893740C;
    }
L_0893740C:
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[18] = (ctx.gpr[7] - ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 1u);
    if (ctx.gpr[7] != ctx.gpr[10]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(536))))));
        goto L_08937440;
    }
    goto L_0893742C;
L_0893742C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(552), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(537))))));
      if (branch_taken) {
          goto L_0893758C;
      }
      goto L_08937440;
    }
L_08937440:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089374DC;
      }
      goto L_08937448;
    }
L_08937448:
    ctx.gpr[17] = (0u | 0u);
    goto L_0893744C;
L_0893744C:
    ctx.gpr[31] = (0x08937454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x08937454u) goto L_08937454;
    return;
L_08937454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_0893747C;
      }
      goto L_08937474;
    }
L_08937474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089374B4;
      }
      goto L_0893747C;
    }
L_0893747C:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[6] << 2u);
      if (branch_taken) {
          goto L_089374B4;
      }
      goto L_08937488;
    }
L_08937488:
    ctx.gpr[9] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    goto L_08937494;
L_08937494:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(552))))));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[10];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089374A8;
      }
      goto L_089374A0;
    }
L_089374A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_089374B4;
      }
      goto L_089374A8;
    }
L_089374A8:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_08937494;
      }
      goto L_089374B4;
    }
L_089374B4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
      if (branch_taken) {
          goto L_0893744C;
      }
      goto L_089374BC;
    }
L_089374BC:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(552), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(537))))));
      if (branch_taken) {
          goto L_0893758C;
      }
      goto L_089374DC;
    }
L_089374DC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_089374E4;
L_089374E4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08937500;
      }
      goto L_089374F8;
    }
L_089374F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0893750C;
      }
      goto L_08937500;
    }
L_08937500:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089374E4;
      }
      goto L_0893750C;
    }
L_0893750C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08937518u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 204u, 0x08834EB4u>(ctx, &aot_mem) && ctx.pc == 0x08937518u) goto L_08937518;
    return;
L_08937518:
    ctx.gpr[31] = (0x08937520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x08937520u) goto L_08937520;
    return;
L_08937520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[6]);
    goto L_0893754C;
L_0893754C:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08937568;
      }
      goto L_08937558;
    }
L_08937558:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[29] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_0893754C;
      }
      goto L_08937568;
    }
L_08937568:
    if (ctx.gpr[6] == ctx.gpr[21]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_08937570;
    }
    goto L_08937570;
L_08937570:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937518;
      }
      goto L_08937578;
    }
L_08937578:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[22]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(552), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(537))))));
    goto L_0893758C;
L_0893758C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(60));
      if (branch_taken) {
          goto L_089373F8;
      }
      goto L_0893759C;
    }
L_0893759C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x089375B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089375B4u) goto L_089375B4;
    return;
L_089375B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08937640;
      }
      goto L_089375CC;
    }
L_089375CC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08937624;
      }
      goto L_089375D4;
    }
L_089375D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(556))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(484)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[9];
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_089375F8;
      }
      goto L_089375EC;
    }
L_089375EC:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(556), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(556))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(484)));
    goto L_089375F8;
L_089375F8:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0893761C;
      }
      goto L_08937600;
    }
L_08937600:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08937614u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 693u, 0x08933C40u>(ctx, &aot_mem) && ctx.pc == 0x08937614u) goto L_08937614;
    return;
L_08937614:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
      if (branch_taken) {
          goto L_08937644;
      }
      goto L_0893761C;
    }
L_0893761C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08937640;
      }
      goto L_08937624;
    }
L_08937624:
    ctx.gpr[31] = (0x0893762Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08934020;
L_0893762C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08937640;
      }
      goto L_0893763C;
    }
L_0893763C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08937640;
L_08937640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22816)));
    goto L_08937644;
L_08937644:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[4] = (2195u << 16u);
      if (branch_taken) {
          goto L_089376C0;
      }
      goto L_08937654;
    }
L_08937654:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08937660u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15244));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08937660u) goto L_08937660;
    return;
L_08937660:
    ctx.gpr[31] = (0x08937668u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x08937668u) goto L_08937668;
    return;
L_08937668:
    ctx.gpr[31] = (0x08937670u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x08937670u) goto L_08937670;
    return;
L_08937670:
    ctx.gpr[31] = (0x08937678u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08937678u) goto L_08937678;
    return;
L_08937678:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[4] = (2184u << 16u);
      if (branch_taken) {
          goto L_089376AC;
      }
      goto L_0893768C;
    }
L_0893768C:
    ctx.gpr[4] = (2187u << 16u);
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x089376A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(292));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x089376A4u) goto L_089376A4;
    return;
L_089376A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089376C0;
      }
      goto L_089376AC;
    }
L_089376AC:
    ctx.gpr[5] = (2184u << 16u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2716));
    ctx.gpr[31] = (0x089376C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3188));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x089376C0u) goto L_089376C0;
    return;
L_089376C0:
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
L_089376F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(557))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (2222u << 16u);
      if (branch_taken) {
          goto L_089377EC;
      }
      goto L_08937738;
    }
L_08937738:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(548))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08937774;
      }
      goto L_08937748;
    }
L_08937748:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x08937754u);
    ctx.gpr[5] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08937754u) goto L_08937754;
    return;
L_08937754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(552))))));
      if (branch_taken) {
          goto L_08937798;
      }
      goto L_08937774;
    }
L_08937774:
    ctx.gpr[31] = (0x0893777Cu);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x0893777Cu) goto L_0893777C;
    return;
L_0893777C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(552))))));
    goto L_08937798;
L_08937798:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089377A4u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x089377A4u) goto L_089377A4;
    return;
L_089377A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(556))))));
    ctx.gpr[31] = (0x089377C8u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x089377C8u) goto L_089377C8;
    return;
L_089377C8:
    ctx.gpr[4] = (2183u << 16u);
    ctx.gpr[5] = (2183u << 16u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18056));
    ctx.gpr[31] = (0x089377E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17548));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x089377E0u) goto L_089377E0;
    return;
L_089377E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22816)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08937B0C;
      }
      goto L_089377EC;
    }
L_089377EC:
    ctx.gpr[31] = (0x089377F4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 208u, 0x088213B0u>(ctx, &aot_mem) && ctx.pc == 0x089377F4u) goto L_089377F4;
    return;
L_089377F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937858;
      }
      goto L_08937804;
    }
L_08937804:
    ctx.gpr[31] = (0x0893780Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 432u, 0x0884DB28u>(ctx, &aot_mem) && ctx.pc == 0x0893780Cu) goto L_0893780C;
    return;
L_0893780C:
    ctx.gpr[31] = (0x08937814u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 439u, 0x0884DB84u>(ctx, &aot_mem) && ctx.pc == 0x08937814u) goto L_08937814;
    return;
L_08937814:
    ctx.gpr[31] = (0x0893781Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 211u, 0x088213E8u>(ctx, &aot_mem) && ctx.pc == 0x0893781Cu) goto L_0893781C;
    return;
L_0893781C:
    ctx.gpr[31] = (0x08937824u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x08937824u) goto L_08937824;
    return;
L_08937824:
    ctx.gpr[31] = (0x0893782Cu);
    ctx.gpr[4] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 861u, 0x0881F4B4u>(ctx, &aot_mem) && ctx.pc == 0x0893782Cu) goto L_0893782C;
    return;
L_0893782C:
    ctx.gpr[4] = (2184u << 16u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x0893783Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3188));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x0893783Cu) goto L_0893783C;
    return;
L_0893783C:
    ctx.gpr[31] = (0x08937844u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08937844u) goto L_08937844;
    return;
L_08937844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08937B0C;
      }
      goto L_08937858;
    }
L_08937858:
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
        goto L_089379FC;
    }
    goto L_08937860;
L_08937860:
    ctx.gpr[31] = (0x08937868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 227u, 0x08821578u>(ctx, &aot_mem) && ctx.pc == 0x08937868u) goto L_08937868;
    return;
L_08937868:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22816)));
        goto L_08937B10;
    }
    goto L_08937870;
L_08937870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937898;
      }
      goto L_08937880;
    }
L_08937880:
    ctx.gpr[31] = (0x08937888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 767u, 0x088FF214u>(ctx, &aot_mem) && ctx.pc == 0x08937888u) goto L_08937888;
    return;
L_08937888:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089379F4;
      }
      goto L_08937898;
    }
L_08937898:
    ctx.gpr[31] = (0x089378A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 341u, 0x08849DA8u>(ctx, &aot_mem) && ctx.pc == 0x089378A0u) goto L_089378A0;
    return;
L_089378A0:
    ctx.gpr[31] = (0x089378A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 51u, 0x088404B0u>(ctx, &aot_mem) && ctx.pc == 0x089378A8u) goto L_089378A8;
    return;
L_089378A8:
    ctx.gpr[31] = (0x089378B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 445u, 0x0884685Cu>(ctx, &aot_mem) && ctx.pc == 0x089378B0u) goto L_089378B0;
    return;
L_089378B0:
    ctx.gpr[31] = (0x089378B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 554u, 0x088470D0u>(ctx, &aot_mem) && ctx.pc == 0x089378B8u) goto L_089378B8;
    return;
L_089378B8:
    ctx.gpr[31] = (0x089378C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 55u, 0x0884C384u>(ctx, &aot_mem) && ctx.pc == 0x089378C0u) goto L_089378C0;
    return;
L_089378C0:
    ctx.gpr[31] = (0x089378C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 728u, 0x0884BE58u>(ctx, &aot_mem) && ctx.pc == 0x089378C8u) goto L_089378C8;
    return;
L_089378C8:
    ctx.gpr[31] = (0x089378D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 508u, 0x08946754u>(ctx, &aot_mem) && ctx.pc == 0x089378D0u) goto L_089378D0;
    return;
L_089378D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(548))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08937900;
      }
      goto L_089378F8;
    }
L_089378F8:
    ctx.gpr[31] = (0x08937900u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 946u, 0x0881FAFCu>(ctx, &aot_mem) && ctx.pc == 0x08937900u) goto L_08937900;
    return;
L_08937900:
    ctx.gpr[31] = (0x08937908u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 769u, 0x0893B9C4u>(ctx, &aot_mem) && ctx.pc == 0x08937908u) goto L_08937908;
    return;
L_08937908:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08937914u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08937914u) goto L_08937914;
    return;
L_08937914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(548))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08937964;
      }
      goto L_08937938;
    }
L_08937938:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x08937944u);
    ctx.gpr[5] = (0u | 68u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08937944u) goto L_08937944;
    return;
L_08937944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(552))))));
      if (branch_taken) {
          goto L_08937988;
      }
      goto L_08937964;
    }
L_08937964:
    ctx.gpr[31] = (0x0893796Cu);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x0893796Cu) goto L_0893796C;
    return;
L_0893796C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(552))))));
    goto L_08937988;
L_08937988:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08937994u);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08937994u) goto L_08937994;
    return;
L_08937994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(556))))));
    ctx.gpr[31] = (0x089379B8u);
    ctx.gpr[4] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x089379B8u) goto L_089379B8;
    return;
L_089379B8:
    ctx.gpr[31] = (0x089379C0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 826u, 0x08843B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089379C0u) goto L_089379C0;
    return;
L_089379C0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_089379CC;
L_089379CC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_089379CC;
      }
      goto L_089379E0;
    }
L_089379E0:
    ctx.gpr[31] = (0x089379E8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 173u, 0x0884CB80u>(ctx, &aot_mem) && ctx.pc == 0x089379E8u) goto L_089379E8;
    return;
L_089379E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089379F4;
L_089379F4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08937B0C;
      }
      goto L_089379FC;
    }
L_089379FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937A2C;
      }
      goto L_08937A08;
    }
L_08937A08:
    ctx.gpr[31] = (0x08937A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0062_entry, 62u, 785u, 0x088FF2D0u>(ctx, &aot_mem) && ctx.pc == 0x08937A10u) goto L_08937A10;
    return;
L_08937A10:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22816)));
        goto L_08937B10;
    }
    goto L_08937A18;
L_08937A18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[31] = (0x08937A24u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 714u, 0x0884BD84u>(ctx, &aot_mem) && ctx.pc == 0x08937A24u) goto L_08937A24;
    return;
L_08937A24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22816)));
      if (branch_taken) {
          goto L_08937B10;
      }
      goto L_08937A2C;
    }
L_08937A2C:
    ctx.gpr[31] = (0x08937A34u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FABCu>(ctx, &aot_mem) && ctx.pc == 0x08937A34u) goto L_08937A34;
    return;
L_08937A34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937B48;
      }
      goto L_08937A3C;
    }
L_08937A3C:
    ctx.gpr[31] = (0x08937A44u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FABCu>(ctx, &aot_mem) && ctx.pc == 0x08937A44u) goto L_08937A44;
    return;
L_08937A44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08937B48;
      }
      goto L_08937A4C;
    }
L_08937A4C:
    ctx.gpr[31] = (0x08937A54u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 549u, 0x0882289Cu>(ctx, &aot_mem) && ctx.pc == 0x08937A54u) goto L_08937A54;
    return;
L_08937A54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08937B48;
      }
      goto L_08937A5C;
    }
L_08937A5C:
    ctx.gpr[31] = (0x08937A64u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 549u, 0x0882289Cu>(ctx, &aot_mem) && ctx.pc == 0x08937A64u) goto L_08937A64;
    return;
L_08937A64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937B48;
      }
      goto L_08937A6C;
    }
L_08937A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_08937A90;
      }
      goto L_08937A7C;
    }
L_08937A7C:
    ctx.gpr[31] = (0x08937A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 107u, 0x088207F8u>(ctx, &aot_mem) && ctx.pc == 0x08937A84u) goto L_08937A84;
    return;
L_08937A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (0u | 5u);
    goto L_08937A90;
L_08937A90:
    ctx.gpr[31] = (0x08937A98u);
    ctx.gpr[5] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 131u, 0x08820A64u>(ctx, &aot_mem) && ctx.pc == 0x08937A98u) goto L_08937A98;
    return;
L_08937A98:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937B48;
      }
      goto L_08937AA0;
    }
L_08937AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08937AD0;
      }
      goto L_08937AB0;
    }
L_08937AB0:
    ctx.gpr[31] = (0x08937AB8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 222u, 0x08945104u>(ctx, &aot_mem) && ctx.pc == 0x08937AB8u) goto L_08937AB8;
    return;
L_08937AB8:
    ctx.gpr[31] = (0x08937AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 963u, 0x0881FCB0u>(ctx, &aot_mem) && ctx.pc == 0x08937AC0u) goto L_08937AC0;
    return;
L_08937AC0:
    ctx.gpr[31] = (0x08937AC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 174u, 0x08820F88u>(ctx, &aot_mem) && ctx.pc == 0x08937AC8u) goto L_08937AC8;
    return;
L_08937AC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22816)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08937AD0;
L_08937AD0:
    ctx.gpr[31] = (0x08937AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 602u, 0x08822C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08937AD8u) goto L_08937AD8;
    return;
L_08937AD8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08937B48;
      }
      goto L_08937AE0;
    }
L_08937AE0:
    ctx.gpr[31] = (0x08937AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 76u, 0x089405C0u>(ctx, &aot_mem) && ctx.pc == 0x08937AE8u) goto L_08937AE8;
    return;
L_08937AE8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08937B48;
      }
      goto L_08937AF0;
    }
L_08937AF0:
    ctx.gpr[31] = (0x08937AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 50u, 0x089684ACu>(ctx, &aot_mem) && ctx.pc == 0x08937AF8u) goto L_08937AF8;
    return;
L_08937AF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08937B48;
      }
      goto L_08937B00;
    }
L_08937B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22816)));
    ctx.gpr[31] = (0x08937B0Cu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 714u, 0x0884BD84u>(ctx, &aot_mem) && ctx.pc == 0x08937B0Cu) goto L_08937B0C;
    return;
L_08937B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22816)));
    goto L_08937B10;
L_08937B10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    ctx.gpr[4] = (2195u << 16u);
      if (branch_taken) {
          goto L_08937B40;
      }
      goto L_08937B1C;
    }
L_08937B1C:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08937B28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16788));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08937B28u) goto L_08937B28;
    return;
L_08937B28:
    ctx.gpr[31] = (0x08937B30u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x08937B30u) goto L_08937B30;
    return;
L_08937B30:
    ctx.gpr[31] = (0x08937B38u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x08937B38u) goto L_08937B38;
    return;
L_08937B38:
    ctx.gpr[31] = (0x08937B40u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08937B40u) goto L_08937B40;
    return;
L_08937B40:
    ctx.gpr[31] = (0x08937B48u);
    // nop
    goto L_08935550;
L_08937B48:
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
L_08937B64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-21184));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(21136), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(21140), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(21144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(21148), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(21152), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(21156), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(21160), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(21164), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(21168), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08937BC8;
      }
      goto L_08937BA4;
    }
L_08937BA4:
    ctx.gpr[31] = (0x08937BACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 271u, 0x08835524u>(ctx, &aot_mem) && ctx.pc == 0x08937BACu) goto L_08937BAC;
    return;
L_08937BAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
      if (branch_taken) {
          goto L_08937BC4;
      }
      goto L_08937BB4;
    }
L_08937BB4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08937FC8;
      }
      goto L_08937BC4;
    }
L_08937BC4:
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    goto L_08937BC8;
L_08937BC8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (0u | 1u);
    goto L_08937BD4;
L_08937BD4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    goto L_08937BE0;
L_08937BE0:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08937BE0;
      }
      goto L_08937BF4;
    }
L_08937BF4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08937BD4;
      }
      goto L_08937C08;
    }
L_08937C08:
    ctx.gpr[31] = (0x08937C10u);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 541u, 0x088328C8u>(ctx, &aot_mem) && ctx.pc == 0x08937C10u) goto L_08937C10;
    return;
L_08937C10:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08937C40;
      }
      goto L_08937C18;
    }
L_08937C18:
    ctx.gpr[31] = (0x08937C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 564u, 0x08832B6Cu>(ctx, &aot_mem) && ctx.pc == 0x08937C20u) goto L_08937C20;
    return;
L_08937C20:
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08937CB8;
      }
      goto L_08937C2C;
    }
L_08937C2C:
    ctx.gpr[31] = (0x08937C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 564u, 0x08832B6Cu>(ctx, &aot_mem) && ctx.pc == 0x08937C34u) goto L_08937C34;
    return;
L_08937C34:
    ctx.gpr[4] = (0u | 21u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08937C6C;
      }
      goto L_08937C40;
    }
L_08937C40:
    ctx.gpr[31] = (0x08937C48u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 592u, 0x08847378u>(ctx, &aot_mem) && ctx.pc == 0x08937C48u) goto L_08937C48;
    return;
L_08937C48:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08937C58u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 275u, 0x08841980u>(ctx, &aot_mem) && ctx.pc == 0x08937C58u) goto L_08937C58;
    return;
L_08937C58:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_08937D04;
      }
      goto L_08937C6C;
    }
L_08937C6C:
    ctx.gpr[31] = (0x08937C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 529u, 0x088327E8u>(ctx, &aot_mem) && ctx.pc == 0x08937C74u) goto L_08937C74;
    return;
L_08937C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(11));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21152)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21156)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21160)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21164)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21168)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(21184));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937CB8:
    ctx.gpr[31] = (0x08937CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 529u, 0x088327E8u>(ctx, &aot_mem) && ctx.pc == 0x08937CC0u) goto L_08937CC0;
    return;
L_08937CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(6));
    ctx.gpr[6] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21152)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21156)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21160)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21164)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21168)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(21184));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937D04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x08937D14u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_0893691C;
L_08937D14:
    ctx.gpr[31] = (0x08937D1Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 271u, 0x08835524u>(ctx, &aot_mem) && ctx.pc == 0x08937D1Cu) goto L_08937D1C;
    return;
L_08937D1C:
    if (ctx.gpr[2] == ctx.gpr[18]) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08937FBC;
    }
    goto L_08937D24;
L_08937D24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x08937D38u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_089355AC;
L_08937D38:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08937FBC;
    }
    goto L_08937D40;
L_08937D40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x08937D54u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08935640;
L_08937D54:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08937FBC;
    }
    goto L_08937D5C;
L_08937D5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x08937D70u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08935700;
L_08937D70:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08937FBC;
    }
    goto L_08937D78;
L_08937D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x08937D8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08935780;
L_08937D8C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08937FBC;
    }
    goto L_08937D94;
L_08937D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x08937DA4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_089365E8;
L_08937DA4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08937FBC;
    }
    goto L_08937DAC;
L_08937DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08937DC4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_089358B0;
L_08937DC4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08937FBC;
    }
    goto L_08937DCC;
L_08937DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08937DE4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08935A38;
L_08937DE4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08937FBC;
    }
    goto L_08937DEC;
L_08937DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x08937E00u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08935BC8;
L_08937E00:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08937FBC;
    }
    goto L_08937E08;
L_08937E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x08937E1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08935CB8;
L_08937E1C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08937FBC;
    }
    goto L_08937E24;
L_08937E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x08937E38u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08935DBC;
L_08937E38:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08937FBC;
    }
    goto L_08937E40;
L_08937E40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x08937E54u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08935E9C;
L_08937E54:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08937FBC;
    }
    goto L_08937E5C;
L_08937E5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x08937E70u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08935F9C;
L_08937E70:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08937FBC;
    }
    goto L_08937E78;
L_08937E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x08937E8Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_0893609C;
L_08937E8C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08937FBC;
    }
    goto L_08937E94;
L_08937E94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x08937EA8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_089361AC;
L_08937EA8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08937FBC;
    }
    goto L_08937EB0;
L_08937EB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x08937EC4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08936318;
L_08937EC4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08937FBC;
    }
    goto L_08937ECC;
L_08937ECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x08937EE0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_089363C4;
L_08937EE0:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08937FBC;
    }
    goto L_08937EE8;
L_08937EE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x08937EFCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_089364BC;
L_08937EFC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08937FBC;
    }
    goto L_08937F04;
L_08937F04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x08937F14u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08936634;
L_08937F14:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08937FBC;
    }
    goto L_08937F1C;
L_08937F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x08937F2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_089366C4;
L_08937F2C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_08937FBC;
    }
    goto L_08937F34;
L_08937F34:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22812)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x08937F48u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08936538;
L_08937F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08937F84;
      }
      goto L_08937F54;
    }
L_08937F54:
    ctx.gpr[31] = (0x08937F5Cu);
    // nop
    goto L_0893691C;
L_08937F5C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(488), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08937F7Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_089367C4;
L_08937F7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08937FC8;
      }
      goto L_08937F84;
    }
L_08937F84:
    ctx.gpr[31] = (0x08937F8Cu);
    // nop
    goto L_0893691C;
L_08937F8C:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[22]);
    ctx.gpr[31] = (0x08937FA8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_089367C4;
L_08937FA8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08937FC8;
      }
      goto L_08937FB8;
    }
L_08937FB8:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_08937FBC;
L_08937FBC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 340 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08937D04;
      }
      goto L_08937FC8;
    }
L_08937FC8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21148)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21152)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21156)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21160)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21164)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(21168)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(21184));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08937FF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.pc = 0x08938000u; return;
}

void recomp_unit_0076(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0076_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_76(Runtime &runtime) {
    runtime.register_generated_unit(76u, 0x08934000u, 16384u, &recomp_unit_0076, &recomp_unit_0076_entry);
    runtime.register_function(0x08934000u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934020u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934044u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934054u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893405Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934068u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934078u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893409Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089340FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934120u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934138u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934148u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934154u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934164u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934174u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934184u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934194u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089341FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934220u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893423Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893426Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934274u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934284u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934290u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089342FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934308u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934310u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934318u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934320u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893432Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934344u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893435Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893437Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893438Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089343F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934400u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934430u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934454u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934470u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089344F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934500u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934518u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893452Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934538u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934544u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893454Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934554u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934560u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934574u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893458Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089345F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934604u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934614u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934634u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934660u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934680u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934688u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934694u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089346FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934720u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893472Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934744u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934758u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934770u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934778u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934784u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934794u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089347ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089347B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893480Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893481Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893482Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934838u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934858u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934874u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934880u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089348F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934908u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934914u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934924u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934938u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934948u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934954u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893496Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934980u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893498Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934994u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893499Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089349FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934A80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934AA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934AB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934AD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934AFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934B9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934BA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934BB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934BC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934BC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934BF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934C84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934CF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934D98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934DF0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934E94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934EFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08934F5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089350ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089350D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089350F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935190u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089351E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935238u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935240u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935254u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935274u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893528Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089352A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089352B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089352D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089352E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089352F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935310u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893531Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893532Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935354u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935374u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935410u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935424u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935440u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935468u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089354B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089354C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089354D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089354F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893550Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935520u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935534u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935550u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935568u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935574u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935590u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893559Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089355F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935600u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935610u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935620u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935624u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935640u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935664u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935670u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893567Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935684u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893568Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935694u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893569Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089356E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935700u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935724u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935730u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893573Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935744u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893574Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935758u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935760u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935764u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935780u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089357FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935804u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893580Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935814u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893581Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893582Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935834u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893583Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935848u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935854u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893585Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935864u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893586Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935874u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893587Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935884u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893588Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935890u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089358F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935918u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935924u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935930u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935938u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935940u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935948u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893594Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935974u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893597Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893598Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935994u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089359ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935A98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935AF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B88u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935B94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935BFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935C98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935CF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935D90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935DFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935E9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935ECCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935EFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935F9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FDCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08935FFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936008u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936010u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936018u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936020u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936028u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936038u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936040u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936048u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936050u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936058u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936064u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893606Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936074u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893607Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936080u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893609Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089360F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936100u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936108u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936114u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893611Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936124u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893612Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936134u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936144u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893614Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936154u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893615Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936164u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936170u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936178u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936180u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936188u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893618Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089361F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936210u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936218u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936224u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893622Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936234u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936244u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893624Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893625Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893626Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936274u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936284u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893628Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936294u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893629Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089362F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936318u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936334u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936344u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893634Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936354u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893635Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936364u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936370u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936378u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936380u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936388u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936390u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936398u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089363F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936404u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893640Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936414u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893641Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936424u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893642Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936434u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893643Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936444u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893644Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893645Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936464u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893646Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936474u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893647Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936484u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893648Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936494u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893649Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089364A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089364BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089364E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089364F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936504u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893650Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936518u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893651Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936538u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936540u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893654Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936554u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936570u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936580u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936588u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936594u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893659Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089365E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936604u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893660Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936614u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893661Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936620u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936634u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936650u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936660u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936668u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936674u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893667Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936684u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936690u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936698u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089366ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936700u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936708u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936714u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893671Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936728u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936730u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893673Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936744u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936750u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893675Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936764u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936784u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089367F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936818u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936828u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936838u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893683Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936848u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936850u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936858u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936860u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893686Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936888u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368D8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089368FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936904u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936914u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893691Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936924u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936958u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089369C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936A98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936ACCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936AF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936B98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936BF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C60u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936C94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936CE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936D8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936DC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E68u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936E94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936ED8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936EF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F50u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F80u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936F9Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08936FF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937010u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937018u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893702Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893703Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937050u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937064u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937078u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937098u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089370F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937100u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893710Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937114u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937120u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937128u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937148u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937150u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937164u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893716Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937178u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937184u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893718Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371C4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089371F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937208u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893721Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937234u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937244u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937250u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937254u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937264u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937270u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937278u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937280u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937288u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089372A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089372B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089372C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089372D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937304u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937338u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893734Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937354u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893735Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893736Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893738Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089373F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893740Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893742Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937440u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937448u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893744Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937454u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937474u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893747Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937488u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937494u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374BCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374DCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374E4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089374F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937500u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893750Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937518u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937520u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893754Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937558u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937568u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937570u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937578u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893758Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893759Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375B4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375D4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089375F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937600u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937614u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893761Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937624u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893762Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893763Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937640u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937644u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937654u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937660u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937668u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937670u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937678u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893768Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376ACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089376F0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937738u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937748u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937754u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937774u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893777Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937798u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377A4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377ECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089377F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937804u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893780Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937814u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893781Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937824u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893782Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893783Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937844u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937858u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937860u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937868u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937870u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937880u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937888u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937898u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378A0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378A8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378B0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378C8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378D0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089378F8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937900u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937908u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937914u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937938u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937944u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937964u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x0893796Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937988u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937994u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379B8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379C0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379CCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379E0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379E8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379F4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x089379FCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A3Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A44u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A4Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A90u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937A98u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AA0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AD0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AD8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AF0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937AF8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B0Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B28u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B30u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937B64u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BB4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BD4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937BF4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C10u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C18u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C20u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C58u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C6Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937C74u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937CC0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937D94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DA4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DACu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DCCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DE4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937DECu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E00u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E08u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E24u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E38u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E40u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E70u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E78u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937E94u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EB0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EC4u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937ECCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EE0u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EE8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937EFCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F04u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F14u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F1Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F2Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F34u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F48u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F54u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F5Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F7Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F84u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937F8Cu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937FA8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937FB8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937FBCu, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937FC8u, &recomp_unit_0076, "recomp_unit_0076");
    runtime.register_function(0x08937FF4u, &recomp_unit_0076, "recomp_unit_0076");
}
} // namespace psprecomp

#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0167[4095] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 11, 12, 0, 0, 0, 0, 13, 14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 15, 0, 16, 0, 0, 17, 0, 0, 0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0,
    0, 22, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 27, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 30, 0,
    0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 37, 38, 0, 0, 0, 0,
    0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 44, 0,
    0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50,
    0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56,
    0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 64, 0, 0, 0, 65, 66,
    0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 75,
    0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 83,
    84, 0, 0, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0,
    98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101,
    102, 0, 103, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 107, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0,
    0, 111, 0, 0, 112, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0,
    0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0,
    0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 0, 137,
    0, 0, 0, 138, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0,
    146, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0,
    154, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0, 160, 161, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 168, 0, 0, 169, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 171, 172, 0, 173, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 176, 0, 177,
    0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 180, 0, 0, 181, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 186, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0,
    191, 0, 0, 192, 0, 0, 193, 0, 194, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0,
    0, 200, 0, 201, 202, 0, 0, 203, 0, 204, 205, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 211,
    0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 218, 0, 0, 0, 0,
    0, 219, 0, 0, 0, 0, 220, 0, 0, 221, 222, 0, 223, 0, 0, 0, 0, 224, 0, 225, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0,
    228, 0, 0, 229, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0,
    0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 239, 0, 240, 0, 0, 241, 0, 0, 0, 242, 0, 243, 0, 244, 0, 0, 0,
    0, 245, 0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0,
    254, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 260, 261, 0, 0, 0, 0, 0, 262, 0,
    263, 0, 264, 265, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 268, 0, 269, 0, 270, 271, 0, 0, 272, 0, 0, 273, 0, 274, 0, 0, 275, 0,
    276, 277, 278, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 0, 281, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284,
    0, 0, 0, 285, 286, 0, 0, 0, 0, 0, 287, 288, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 292, 293, 0, 294, 0, 295, 0,
    0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 299, 0, 0, 300, 301, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0,
    0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 313,
    314, 315, 0, 0, 0, 316, 0, 317, 0, 0, 0, 318, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0, 322,
    0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 330,
    0, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 336, 0,
    337, 0, 338, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 353,
    0, 0, 0, 354, 0, 0, 355, 0, 356, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361,
    0, 0, 0, 0, 0, 0, 0, 362, 0, 363, 0, 364, 0, 365, 0, 0, 0, 366, 0, 367, 0, 0, 0, 368, 0, 369, 0, 0, 0, 370, 0, 0,
    0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 376, 0, 0, 377, 0, 0,
    0, 378, 0, 379, 0, 0, 0, 0, 380, 0, 0, 381, 0, 382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0,
    0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 389, 0, 390, 0, 0, 0, 391, 0, 392, 0, 0, 0, 393, 0, 394, 0, 0, 0,
    395, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 401,
    0, 0, 402, 0, 0, 0, 403, 0, 0, 404, 0, 405, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 409,
    0, 0, 0, 0, 0, 410, 0, 411, 0, 412, 0, 0, 413, 0, 0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0, 0, 417, 0, 418, 0, 0, 0,
    419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 425, 0, 426,
    0, 0, 0, 427, 0, 428, 0, 0, 0, 429, 0, 430, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0,
    0, 0, 0, 0, 435, 0, 436, 0, 437, 0, 0, 438, 0, 0, 0, 439, 440, 0, 0, 441, 0, 0, 0, 442, 443, 0, 0, 444, 0, 0, 0, 0,
    445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 447, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0, 453, 0, 0,
    454, 0, 455, 0, 456, 0, 457, 0, 458, 459, 0, 460, 0, 0, 0, 461, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 465,
    0, 0, 0, 466, 0, 0, 0, 467, 0, 468, 0, 0, 0, 469, 0, 0, 0, 470, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 482, 0,
    0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488, 0, 0, 489, 0, 0, 490, 0, 0, 491, 0, 0, 492, 0, 0,
    0, 493, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 499, 0, 500, 0,
    0, 0, 501, 0, 0, 0, 502, 0, 0, 503, 0, 504, 0, 0, 505, 0, 0, 0, 506, 507, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 509, 0,
    510, 0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 514, 0, 0, 515, 0, 0, 0, 516, 0, 0, 517, 0, 518, 0, 519, 0, 0,
    0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526,
    0, 527, 0, 0, 528, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 534,
    0, 535, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 538, 0, 539, 0, 540, 0, 0, 541,
    0, 542, 0, 0, 543, 0, 544, 0, 0, 0, 0, 545, 546, 547, 0, 0, 548, 0, 0, 549, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0,
    0, 553, 0, 0, 0, 0, 554, 0, 555, 0, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 558, 0, 559, 0, 560, 0, 0, 561, 0, 562, 0,
    0, 563, 0, 564, 0, 0, 0, 565, 566, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 569, 0, 570, 0,
    0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 574, 0, 0, 575, 0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0, 0,
    0, 579, 0, 0, 580, 0, 581, 0, 0, 582, 0, 583, 0, 0, 584, 0, 585, 0, 0, 0, 586, 587, 0, 0, 0, 588, 0, 0, 0, 0, 589, 0,
    0, 0, 590, 0, 591, 0, 0, 592, 0, 593, 0, 0, 594, 0, 595, 0, 0, 0, 596, 597, 598, 0, 0, 0, 0, 0, 599, 0, 600, 0, 601, 602,
    0, 0, 603, 0, 604, 0, 0, 0, 0, 0, 605, 0, 606, 0, 607, 608, 0, 0, 609, 0, 0, 0, 0, 0, 0, 610, 0, 611, 0, 612, 0, 613,
    614, 615, 0, 0, 0, 0, 0, 616, 0, 617, 0, 0, 0, 618, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    621, 0, 0, 0, 0, 622, 623, 0, 0, 0, 0, 0, 624, 625, 0, 0, 626, 0, 0, 627, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 629,
    630, 0, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 634, 0, 635, 0, 636, 0, 0, 637, 638,
    639, 0, 640, 0, 0, 641, 0, 0, 642, 0, 643, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 647,
    0, 0, 0, 0, 0, 0, 0, 648, 0, 649, 0, 650, 651, 652, 0, 0, 0, 653, 0, 654, 0, 0, 0, 655, 0, 656, 0, 0, 0, 657, 0, 0,
    0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 662, 0, 663, 0, 0, 0,
    664, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 667, 0, 668, 0, 0, 0, 669, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0,
    0, 672, 0, 0, 0, 0, 0, 0, 0, 673, 0, 674, 0, 675, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 678, 0, 0, 679, 0, 0, 680, 0,
    0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 686, 0, 687,
    0, 0, 0, 688, 0, 0, 0, 689, 0, 690, 0, 0, 0, 691, 0, 0, 0, 692, 0, 693, 0, 694, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0,
    0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 699, 0, 700, 0, 701, 0, 702, 0, 0, 0, 703, 0, 704, 0,
    0, 0, 705, 0, 706, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0,
    711, 0, 712, 0, 713, 0, 0, 714, 0, 0, 0, 715, 0, 716, 0, 0, 0, 0, 717, 0, 718, 0, 719, 0, 0, 0, 720, 0, 0, 0, 721, 0,
    0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0, 0, 724, 0, 725, 0, 726, 0, 727, 0, 0, 0, 728, 0, 729,
    0, 0, 0, 730, 0, 731, 0, 0, 0, 732, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 735, 0, 0, 0, 0, 0,
    0, 0, 0, 736, 0, 737, 0, 738, 0, 0, 739, 0, 0, 0, 740, 0, 0, 741, 0, 742, 0, 0, 0, 743, 0, 0, 0, 744, 0, 0, 0, 0,
    0, 0, 0, 745, 0, 0, 0, 746, 0, 0, 0, 0, 0, 747, 0, 748, 0, 749, 0, 0, 750, 0, 0, 0, 751, 0, 0, 752, 0, 0, 0, 753,
    0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 756, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 759, 0, 0, 0, 0,
    0, 0, 0, 760, 0, 761, 0, 762, 0, 763, 0, 0, 0, 764, 0, 765, 0, 0, 0, 766, 0, 767, 0, 0, 0, 768, 0, 0, 0, 769, 0, 0,
    0, 0, 0, 0, 770, 0, 0, 0, 771, 0, 0, 0, 0, 0, 772, 0, 773, 0, 774, 0, 0, 775, 0, 0, 0, 776, 777, 0, 0, 778, 0, 0,
    0, 779, 780, 0, 0, 781, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 785, 0, 0, 0, 786, 0, 0,
    787, 0, 788, 0, 789, 790, 0, 0, 0, 0, 791, 0, 0, 0, 0, 792, 0, 0, 793, 0, 794, 0, 0, 795, 0, 0, 0, 796, 0, 0, 0, 0,
    0, 797, 0, 798, 0, 0, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 800, 0, 0, 0, 0, 0, 0, 0, 801, 0, 802, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 803, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 806, 0, 807, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 0, 809, 810, 0, 0, 0, 0, 0,
    811, 0, 0, 0, 812, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 0, 0, 815, 0, 816, 0, 0,
    0, 0, 817, 0, 0, 0, 0, 0, 0, 818, 0, 0, 0, 0, 0, 819, 0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 821, 0,
    0, 0, 0, 0, 822, 0, 0, 823, 0, 824, 0, 825, 0, 0, 826, 0, 827, 0, 828, 0, 829, 0, 0, 830, 0, 831, 0, 0, 832, 0, 0, 833,
    0, 834, 0, 0, 0, 0, 0, 835, 836, 0, 0, 0, 0, 837, 0, 838, 0, 839, 0, 0, 840, 0, 841, 0, 0, 0, 0, 0, 0, 0, 0, 842,
    0, 0, 0, 0, 0, 843, 844, 0, 845, 0, 0, 846, 0, 0, 0, 0, 0, 847, 0, 0, 848, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 850, 0, 0, 0, 0, 0, 851, 0, 0, 0, 0, 0, 852, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 853, 0, 0, 0, 0, 0, 854, 0, 855, 0, 856, 0, 857, 0, 0, 858, 0, 859, 0, 860, 0, 861, 0, 0, 862, 0, 863, 0, 0, 864, 0,
    0, 865, 0, 866, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 0, 0, 868, 0, 869, 0, 0, 0, 0, 870, 0, 871, 0, 0, 0, 872,
    873, 0, 0, 0, 0, 0, 0, 0, 0, 874, 0, 875, 0, 0, 0, 0, 876, 0, 0, 0, 877, 878, 879, 0, 0, 880, 0, 881, 882, 0, 0, 0,
    0, 883, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 0, 885, 0, 886, 0, 0, 887, 0, 888,
    889, 0, 0, 0, 0, 0, 0, 0, 0, 890, 0, 0, 0, 0, 0, 891, 0, 0, 892, 0, 893, 0, 0, 894, 0, 0, 895, 0, 0, 0, 896, 0,
    0, 897, 0, 0, 0, 898, 0, 899, 0, 900, 0, 0, 0, 901, 902, 0, 903, 904, 0, 0, 0, 0, 0, 905, 0, 906, 0, 0, 0, 0, 907, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 908, 0, 0, 909, 0, 910, 0, 0, 0, 0, 911, 0, 0, 0, 0, 0, 0, 912, 0, 0, 0, 0, 913, 0,
    0, 0, 914, 0, 0, 915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 916, 0, 917, 0, 0, 0, 0, 0, 0, 918, 0, 0,
    0, 0, 0, 0, 0, 919, 0, 0, 0, 920, 921, 0, 922, 0, 0, 923, 0, 0, 0, 924, 0, 0, 0, 0, 0, 925, 0, 926, 0, 0, 927, 0,
    0, 0, 0, 928, 0, 0, 929, 0, 0, 930, 0, 0, 0, 0, 0, 931, 932, 0, 933, 934, 0, 0, 0, 935, 0, 0, 936, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 937, 0, 938, 0, 939, 0, 940, 0, 0, 941, 0, 942, 0, 943, 0, 944, 0, 0, 945, 0,
    946, 0, 0, 947, 0, 0, 948, 0, 949, 0, 0, 0, 0, 950, 0, 0, 0, 0, 0, 0, 0, 0, 0, 951, 0, 952, 0, 0, 0, 0, 953, 0,
    954, 0, 0, 0, 955, 0, 956, 0, 0, 957, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 958, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 959, 0, 960, 0, 0, 0, 961, 0, 962, 0, 0, 963, 0, 0, 964, 0, 0, 0, 0, 0, 965, 0, 966, 967, 0, 0, 0,
    0, 0, 0, 0, 0, 968, 0, 0, 0, 0, 0, 0, 0, 0, 969, 0, 970, 0, 0, 0, 0, 0, 0, 0, 0, 971, 0, 972, 0, 0, 0, 0,
    0, 0, 0, 0, 973, 0, 0, 0, 0, 0, 974, 0, 975, 0, 0, 0, 0, 0, 0, 0, 0, 976, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 977, 0, 0, 978, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 979, 0, 980, 0, 0, 981, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    982, 0, 0, 983, 0, 984, 0, 0, 0, 0, 985, 0, 0, 0, 0, 0, 0, 986, 0, 0, 987, 0, 0, 0, 988, 989, 0, 990, 0, 991, 992,
};
void recomp_unit_0167_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AA0000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0167[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AA0000;
    case 2u: goto L_08AA000C;
    case 3u: goto L_08AA0018;
    case 4u: goto L_08AA0024;
    case 5u: goto L_08AA004C;
    case 6u: goto L_08AA0058;
    case 7u: goto L_08AA0070;
    case 8u: goto L_08AA0084;
    case 9u: goto L_08AA0098;
    case 10u: goto L_08AA00B8;
    case 11u: goto L_08AA00C4;
    case 12u: goto L_08AA00C8;
    case 13u: goto L_08AA00DC;
    case 14u: goto L_08AA00E0;
    case 15u: goto L_08AA0110;
    case 16u: goto L_08AA0118;
    case 17u: goto L_08AA0124;
    case 18u: goto L_08AA0138;
    case 19u: goto L_08AA0140;
    case 20u: goto L_08AA0160;
    case 21u: goto L_08AA016C;
    case 22u: goto L_08AA0184;
    case 23u: goto L_08AA018C;
    case 24u: goto L_08AA0198;
    case 25u: goto L_08AA01B0;
    case 26u: goto L_08AA01BC;
    case 27u: goto L_08AA01C4;
    case 28u: goto L_08AA01D8;
    case 29u: goto L_08AA01E0;
    case 30u: goto L_08AA01F8;
    case 31u: goto L_08AA0204;
    case 32u: goto L_08AA0218;
    case 33u: goto L_08AA0238;
    case 34u: goto L_08AA0248;
    case 35u: goto L_08AA0254;
    case 36u: goto L_08AA0260;
    case 37u: goto L_08AA0268;
    case 38u: goto L_08AA026C;
    case 39u: goto L_08AA028C;
    case 40u: goto L_08AA02A0;
    case 41u: goto L_08AA02BC;
    case 42u: goto L_08AA02C8;
    case 43u: goto L_08AA02DC;
    case 44u: goto L_08AA02F8;
    case 45u: goto L_08AA030C;
    case 46u: goto L_08AA0314;
    case 47u: goto L_08AA032C;
    case 48u: goto L_08AA0340;
    case 49u: goto L_08AA0348;
    case 50u: goto L_08AA037C;
    case 51u: goto L_08AA0398;
    case 52u: goto L_08AA03A8;
    case 53u: goto L_08AA03AC;
    case 54u: goto L_08AA03C0;
    case 55u: goto L_08AA03D8;
    case 56u: goto L_08AA03FC;
    case 57u: goto L_08AA0404;
    case 58u: goto L_08AA041C;
    case 59u: goto L_08AA042C;
    case 60u: goto L_08AA0434;
    case 61u: goto L_08AA044C;
    case 62u: goto L_08AA0454;
    case 63u: goto L_08AA045C;
    case 64u: goto L_08AA0468;
    case 65u: goto L_08AA0478;
    case 66u: goto L_08AA047C;
    case 67u: goto L_08AA0494;
    case 68u: goto L_08AA04A4;
    case 69u: goto L_08AA04B0;
    case 70u: goto L_08AA04C8;
    case 71u: goto L_08AA04D0;
    case 72u: goto L_08AA04D8;
    case 73u: goto L_08AA04E8;
    case 74u: goto L_08AA04F0;
    case 75u: goto L_08AA04FC;
    case 76u: goto L_08AA0508;
    case 77u: goto L_08AA051C;
    case 78u: goto L_08AA0534;
    case 79u: goto L_08AA0540;
    case 80u: goto L_08AA0550;
    case 81u: goto L_08AA0558;
    case 82u: goto L_08AA056C;
    case 83u: goto L_08AA057C;
    case 84u: goto L_08AA0580;
    case 85u: goto L_08AA0590;
    case 86u: goto L_08AA0598;
    case 87u: goto L_08AA05A0;
    case 88u: goto L_08AA05FC;
    case 89u: goto L_08AA0634;
    case 90u: goto L_08AA0644;
    case 91u: goto L_08AA0654;
    case 92u: goto L_08AA0670;
    case 93u: goto L_08AA06A4;
    case 94u: goto L_08AA06A8;
    case 95u: goto L_08AA06D4;
    case 96u: goto L_08AA06E4;
    case 97u: goto L_08AA06F0;
    case 98u: goto L_08AA0700;
    case 99u: goto L_08AA072C;
    case 100u: goto L_08AA0758;
    case 101u: goto L_08AA077C;
    case 102u: goto L_08AA0780;
    case 103u: goto L_08AA0788;
    case 104u: goto L_08AA0794;
    case 105u: goto L_08AA07A0;
    case 106u: goto L_08AA07A8;
    case 107u: goto L_08AA07B4;
    case 108u: goto L_08AA07C4;
    case 109u: goto L_08AA07D0;
    case 110u: goto L_08AA07E8;
    case 111u: goto L_08AA0804;
    case 112u: goto L_08AA0810;
    case 113u: goto L_08AA0814;
    case 114u: goto L_08AA0820;
    case 115u: goto L_08AA083C;
    case 116u: goto L_08AA0848;
    case 117u: goto L_08AA0884;
    case 118u: goto L_08AA08D8;
    case 119u: goto L_08AA08F0;
    case 120u: goto L_08AA0908;
    case 121u: goto L_08AA0914;
    case 122u: goto L_08AA0920;
    case 123u: goto L_08AA092C;
    case 124u: goto L_08AA0938;
    case 125u: goto L_08AA0948;
    case 126u: goto L_08AA0958;
    case 127u: goto L_08AA0968;
    case 128u: goto L_08AA0984;
    case 129u: goto L_08AA0994;
    case 130u: goto L_08AA09AC;
    case 131u: goto L_08AA09B4;
    case 132u: goto L_08AA09BC;
    case 133u: goto L_08AA09CC;
    case 134u: goto L_08AA09DC;
    case 135u: goto L_08AA09E8;
    case 136u: goto L_08AA09F0;
    case 137u: goto L_08AA09FC;
    case 138u: goto L_08AA0A0C;
    case 139u: goto L_08AA0A10;
    case 140u: goto L_08AA0A2C;
    case 141u: goto L_08AA0A3C;
    case 142u: goto L_08AA0A44;
    case 143u: goto L_08AA0A5C;
    case 144u: goto L_08AA0A68;
    case 145u: goto L_08AA0A74;
    case 146u: goto L_08AA0A80;
    case 147u: goto L_08AA0A8C;
    case 148u: goto L_08AA0AA4;
    case 149u: goto L_08AA0AB0;
    case 150u: goto L_08AA0AB8;
    case 151u: goto L_08AA0AC0;
    case 152u: goto L_08AA0AD0;
    case 153u: goto L_08AA0AE4;
    case 154u: goto L_08AA0B00;
    case 155u: goto L_08AA0B08;
    case 156u: goto L_08AA0B18;
    case 157u: goto L_08AA0B44;
    case 158u: goto L_08AA0B54;
    case 159u: goto L_08AA0B5C;
    case 160u: goto L_08AA0B68;
    case 161u: goto L_08AA0B6C;
    case 162u: goto L_08AA0B98;
    case 163u: goto L_08AA0BA8;
    case 164u: goto L_08AA0BB4;
    case 165u: goto L_08AA0BC0;
    case 166u: goto L_08AA0BD0;
    case 167u: goto L_08AA0BE0;
    case 168u: goto L_08AA0BE8;
    case 169u: goto L_08AA0BF4;
    case 170u: goto L_08AA0C2C;
    case 171u: goto L_08AA0C38;
    case 172u: goto L_08AA0C3C;
    case 173u: goto L_08AA0C44;
    case 174u: goto L_08AA0C58;
    case 175u: goto L_08AA0C60;
    case 176u: goto L_08AA0C74;
    case 177u: goto L_08AA0C7C;
    case 178u: goto L_08AA0C98;
    case 179u: goto L_08AA0CA4;
    case 180u: goto L_08AA0CA8;
    case 181u: goto L_08AA0CB4;
    case 182u: goto L_08AA0CC0;
    case 183u: goto L_08AA0CC8;
    case 184u: goto L_08AA0CF0;
    case 185u: goto L_08AA0D18;
    case 186u: goto L_08AA0D28;
    case 187u: goto L_08AA0D2C;
    case 188u: goto L_08AA0D50;
    case 189u: goto L_08AA0D58;
    case 190u: goto L_08AA0D78;
    case 191u: goto L_08AA0D80;
    case 192u: goto L_08AA0D8C;
    case 193u: goto L_08AA0D98;
    case 194u: goto L_08AA0DA0;
    case 195u: goto L_08AA0DAC;
    case 196u: goto L_08AA0DB4;
    case 197u: goto L_08AA0DE0;
    case 198u: goto L_08AA0DE8;
    case 199u: goto L_08AA0DF0;
    case 200u: goto L_08AA0E04;
    case 201u: goto L_08AA0E0C;
    case 202u: goto L_08AA0E10;
    case 203u: goto L_08AA0E1C;
    case 204u: goto L_08AA0E24;
    case 205u: goto L_08AA0E28;
    case 206u: goto L_08AA0E34;
    case 207u: goto L_08AA0E3C;
    case 208u: goto L_08AA0E44;
    case 209u: goto L_08AA0E60;
    case 210u: goto L_08AA0E6C;
    case 211u: goto L_08AA0E7C;
    case 212u: goto L_08AA0E90;
    case 213u: goto L_08AA0E9C;
    case 214u: goto L_08AA0EA8;
    case 215u: goto L_08AA0EC0;
    case 216u: goto L_08AA0ECC;
    case 217u: goto L_08AA0EE4;
    case 218u: goto L_08AA0EEC;
    case 219u: goto L_08AA0F04;
    case 220u: goto L_08AA0F18;
    case 221u: goto L_08AA0F24;
    case 222u: goto L_08AA0F28;
    case 223u: goto L_08AA0F30;
    case 224u: goto L_08AA0F44;
    case 225u: goto L_08AA0F4C;
    case 226u: goto L_08AA0F60;
    case 227u: goto L_08AA0F68;
    case 228u: goto L_08AA0F80;
    case 229u: goto L_08AA0F8C;
    case 230u: goto L_08AA0F98;
    case 231u: goto L_08AA0FC4;
    case 232u: goto L_08AA0FF0;
    case 233u: goto L_08AA0FF8;
    case 234u: goto L_08AA1004;
    case 235u: goto L_08AA1010;
    case 236u: goto L_08AA101C;
    case 237u: goto L_08AA1028;
    case 238u: goto L_08AA1034;
    case 239u: goto L_08AA103C;
    case 240u: goto L_08AA1044;
    case 241u: goto L_08AA1050;
    case 242u: goto L_08AA1060;
    case 243u: goto L_08AA1068;
    case 244u: goto L_08AA1070;
    case 245u: goto L_08AA1084;
    case 246u: goto L_08AA108C;
    case 247u: goto L_08AA10A0;
    case 248u: goto L_08AA10A8;
    case 249u: goto L_08AA10C0;
    case 250u: goto L_08AA10CC;
    case 251u: goto L_08AA10DC;
    case 252u: goto L_08AA10EC;
    case 253u: goto L_08AA10F8;
    case 254u: goto L_08AA1100;
    case 255u: goto L_08AA1114;
    case 256u: goto L_08AA111C;
    case 257u: goto L_08AA1130;
    case 258u: goto L_08AA1138;
    case 259u: goto L_08AA1150;
    case 260u: goto L_08AA115C;
    case 261u: goto L_08AA1160;
    case 262u: goto L_08AA1178;
    case 263u: goto L_08AA1180;
    case 264u: goto L_08AA1188;
    case 265u: goto L_08AA118C;
    case 266u: goto L_08AA1198;
    case 267u: goto L_08AA11A0;
    case 268u: goto L_08AA11B8;
    case 269u: goto L_08AA11C0;
    case 270u: goto L_08AA11C8;
    case 271u: goto L_08AA11CC;
    case 272u: goto L_08AA11D8;
    case 273u: goto L_08AA11E4;
    case 274u: goto L_08AA11EC;
    case 275u: goto L_08AA11F8;
    case 276u: goto L_08AA1200;
    case 277u: goto L_08AA1204;
    case 278u: goto L_08AA1208;
    case 279u: goto L_08AA1220;
    case 280u: goto L_08AA1228;
    case 281u: goto L_08AA1238;
    case 282u: goto L_08AA1244;
    case 283u: goto L_08AA124C;
    case 284u: goto L_08AA127C;
    case 285u: goto L_08AA128C;
    case 286u: goto L_08AA1290;
    case 287u: goto L_08AA12A8;
    case 288u: goto L_08AA12AC;
    case 289u: goto L_08AA12B8;
    case 290u: goto L_08AA12C4;
    case 291u: goto L_08AA12D8;
    case 292u: goto L_08AA12E4;
    case 293u: goto L_08AA12E8;
    case 294u: goto L_08AA12F0;
    case 295u: goto L_08AA12F8;
    case 296u: goto L_08AA1318;
    case 297u: goto L_08AA1334;
    case 298u: goto L_08AA133C;
    case 299u: goto L_08AA1344;
    case 300u: goto L_08AA1350;
    case 301u: goto L_08AA1354;
    case 302u: goto L_08AA1358;
    case 303u: goto L_08AA1360;
    case 304u: goto L_08AA1368;
    case 305u: goto L_08AA1370;
    case 306u: goto L_08AA1378;
    case 307u: goto L_08AA1388;
    case 308u: goto L_08AA1398;
    case 309u: goto L_08AA13BC;
    case 310u: goto L_08AA13CC;
    case 311u: goto L_08AA13EC;
    case 312u: goto L_08AA13F4;
    case 313u: goto L_08AA13FC;
    case 314u: goto L_08AA1400;
    case 315u: goto L_08AA1404;
    case 316u: goto L_08AA1414;
    case 317u: goto L_08AA141C;
    case 318u: goto L_08AA142C;
    case 319u: goto L_08AA1434;
    case 320u: goto L_08AA1444;
    case 321u: goto L_08AA1454;
    case 322u: goto L_08AA147C;
    case 323u: goto L_08AA148C;
    case 324u: goto L_08AA14B0;
    case 325u: goto L_08AA14B8;
    case 326u: goto L_08AA14C0;
    case 327u: goto L_08AA14D0;
    case 328u: goto L_08AA14E0;
    case 329u: goto L_08AA14EC;
    case 330u: goto L_08AA14FC;
    case 331u: goto L_08AA1504;
    case 332u: goto L_08AA1514;
    case 333u: goto L_08AA1524;
    case 334u: goto L_08AA1548;
    case 335u: goto L_08AA1558;
    case 336u: goto L_08AA1578;
    case 337u: goto L_08AA1580;
    case 338u: goto L_08AA1588;
    case 339u: goto L_08AA1598;
    case 340u: goto L_08AA15A8;
    case 341u: goto L_08AA15B4;
    case 342u: goto L_08AA15C0;
    case 343u: goto L_08AA15CC;
    case 344u: goto L_08AA15DC;
    case 345u: goto L_08AA15EC;
    case 346u: goto L_08AA1610;
    case 347u: goto L_08AA1620;
    case 348u: goto L_08AA1640;
    case 349u: goto L_08AA164C;
    case 350u: goto L_08AA1654;
    case 351u: goto L_08AA1664;
    case 352u: goto L_08AA1674;
    case 353u: goto L_08AA167C;
    case 354u: goto L_08AA168C;
    case 355u: goto L_08AA1698;
    case 356u: goto L_08AA16A0;
    case 357u: goto L_08AA16A8;
    case 358u: goto L_08AA16B8;
    case 359u: goto L_08AA16C8;
    case 360u: goto L_08AA16EC;
    case 361u: goto L_08AA16FC;
    case 362u: goto L_08AA171C;
    case 363u: goto L_08AA1724;
    case 364u: goto L_08AA172C;
    case 365u: goto L_08AA1734;
    case 366u: goto L_08AA1744;
    case 367u: goto L_08AA174C;
    case 368u: goto L_08AA175C;
    case 369u: goto L_08AA1764;
    case 370u: goto L_08AA1774;
    case 371u: goto L_08AA1784;
    case 372u: goto L_08AA17A8;
    case 373u: goto L_08AA17B8;
    case 374u: goto L_08AA17D8;
    case 375u: goto L_08AA17E0;
    case 376u: goto L_08AA17E8;
    case 377u: goto L_08AA17F4;
    case 378u: goto L_08AA1804;
    case 379u: goto L_08AA180C;
    case 380u: goto L_08AA1820;
    case 381u: goto L_08AA182C;
    case 382u: goto L_08AA1834;
    case 383u: goto L_08AA1844;
    case 384u: goto L_08AA1854;
    case 385u: goto L_08AA1878;
    case 386u: goto L_08AA1888;
    case 387u: goto L_08AA18A8;
    case 388u: goto L_08AA18B0;
    case 389u: goto L_08AA18B8;
    case 390u: goto L_08AA18C0;
    case 391u: goto L_08AA18D0;
    case 392u: goto L_08AA18D8;
    case 393u: goto L_08AA18E8;
    case 394u: goto L_08AA18F0;
    case 395u: goto L_08AA1900;
    case 396u: goto L_08AA1910;
    case 397u: goto L_08AA1938;
    case 398u: goto L_08AA1948;
    case 399u: goto L_08AA196C;
    case 400u: goto L_08AA1974;
    case 401u: goto L_08AA197C;
    case 402u: goto L_08AA1988;
    case 403u: goto L_08AA1998;
    case 404u: goto L_08AA19A4;
    case 405u: goto L_08AA19AC;
    case 406u: goto L_08AA19BC;
    case 407u: goto L_08AA19CC;
    case 408u: goto L_08AA19EC;
    case 409u: goto L_08AA19FC;
    case 410u: goto L_08AA1A14;
    case 411u: goto L_08AA1A1C;
    case 412u: goto L_08AA1A24;
    case 413u: goto L_08AA1A30;
    case 414u: goto L_08AA1A40;
    case 415u: goto L_08AA1A4C;
    case 416u: goto L_08AA1A58;
    case 417u: goto L_08AA1A68;
    case 418u: goto L_08AA1A70;
    case 419u: goto L_08AA1A80;
    case 420u: goto L_08AA1A90;
    case 421u: goto L_08AA1AB4;
    case 422u: goto L_08AA1AC4;
    case 423u: goto L_08AA1AE4;
    case 424u: goto L_08AA1AEC;
    case 425u: goto L_08AA1AF4;
    case 426u: goto L_08AA1AFC;
    case 427u: goto L_08AA1B0C;
    case 428u: goto L_08AA1B14;
    case 429u: goto L_08AA1B24;
    case 430u: goto L_08AA1B2C;
    case 431u: goto L_08AA1B3C;
    case 432u: goto L_08AA1B4C;
    case 433u: goto L_08AA1B68;
    case 434u: goto L_08AA1B78;
    case 435u: goto L_08AA1B90;
    case 436u: goto L_08AA1B98;
    case 437u: goto L_08AA1BA0;
    case 438u: goto L_08AA1BAC;
    case 439u: goto L_08AA1BBC;
    case 440u: goto L_08AA1BC0;
    case 441u: goto L_08AA1BCC;
    case 442u: goto L_08AA1BDC;
    case 443u: goto L_08AA1BE0;
    case 444u: goto L_08AA1BEC;
    case 445u: goto L_08AA1C00;
    case 446u: goto L_08AA1C34;
    case 447u: goto L_08AA1C84;
    case 448u: goto L_08AA1C8C;
    case 449u: goto L_08AA1C94;
    case 450u: goto L_08AA1CC0;
    case 451u: goto L_08AA1CE4;
    case 452u: goto L_08AA1CEC;
    case 453u: goto L_08AA1CF4;
    case 454u: goto L_08AA1D00;
    case 455u: goto L_08AA1D08;
    case 456u: goto L_08AA1D10;
    case 457u: goto L_08AA1D18;
    case 458u: goto L_08AA1D20;
    case 459u: goto L_08AA1D24;
    case 460u: goto L_08AA1D2C;
    case 461u: goto L_08AA1D3C;
    case 462u: goto L_08AA1D44;
    case 463u: goto L_08AA1D4C;
    case 464u: goto L_08AA1D70;
    case 465u: goto L_08AA1D7C;
    case 466u: goto L_08AA1D8C;
    case 467u: goto L_08AA1D9C;
    case 468u: goto L_08AA1DA4;
    case 469u: goto L_08AA1DB4;
    case 470u: goto L_08AA1DC4;
    case 471u: goto L_08AA1DC8;
    case 472u: goto L_08AA1DDC;
    case 473u: goto L_08AA1E04;
    case 474u: goto L_08AA1E3C;
    case 475u: goto L_08AA1E4C;
    case 476u: goto L_08AA1E5C;
    case 477u: goto L_08AA1E78;
    case 478u: goto L_08AA1EAC;
    case 479u: goto L_08AA1EB0;
    case 480u: goto L_08AA1EDC;
    case 481u: goto L_08AA1EEC;
    case 482u: goto L_08AA1EF8;
    case 483u: goto L_08AA1F08;
    case 484u: goto L_08AA1F34;
    case 485u: goto L_08AA1F88;
    case 486u: goto L_08AA2018;
    case 487u: goto L_08AA2028;
    case 488u: goto L_08AA2044;
    case 489u: goto L_08AA2050;
    case 490u: goto L_08AA205C;
    case 491u: goto L_08AA2068;
    case 492u: goto L_08AA2074;
    case 493u: goto L_08AA2084;
    case 494u: goto L_08AA2094;
    case 495u: goto L_08AA20A4;
    case 496u: goto L_08AA20C0;
    case 497u: goto L_08AA20D0;
    case 498u: goto L_08AA20E8;
    case 499u: goto L_08AA20F0;
    case 500u: goto L_08AA20F8;
    case 501u: goto L_08AA2108;
    case 502u: goto L_08AA2118;
    case 503u: goto L_08AA2124;
    case 504u: goto L_08AA212C;
    case 505u: goto L_08AA2138;
    case 506u: goto L_08AA2148;
    case 507u: goto L_08AA214C;
    case 508u: goto L_08AA2168;
    case 509u: goto L_08AA2178;
    case 510u: goto L_08AA2180;
    case 511u: goto L_08AA2198;
    case 512u: goto L_08AA21A4;
    case 513u: goto L_08AA21B0;
    case 514u: goto L_08AA21BC;
    case 515u: goto L_08AA21C8;
    case 516u: goto L_08AA21D8;
    case 517u: goto L_08AA21E4;
    case 518u: goto L_08AA21EC;
    case 519u: goto L_08AA21F4;
    case 520u: goto L_08AA2204;
    case 521u: goto L_08AA2214;
    case 522u: goto L_08AA2228;
    case 523u: goto L_08AA2230;
    case 524u: goto L_08AA2240;
    case 525u: goto L_08AA226C;
    case 526u: goto L_08AA227C;
    case 527u: goto L_08AA2284;
    case 528u: goto L_08AA2290;
    case 529u: goto L_08AA2294;
    case 530u: goto L_08AA22C0;
    case 531u: goto L_08AA22D0;
    case 532u: goto L_08AA22DC;
    case 533u: goto L_08AA22EC;
    case 534u: goto L_08AA22FC;
    case 535u: goto L_08AA2304;
    case 536u: goto L_08AA2310;
    case 537u: goto L_08AA2350;
    case 538u: goto L_08AA2360;
    case 539u: goto L_08AA2368;
    case 540u: goto L_08AA2370;
    case 541u: goto L_08AA237C;
    case 542u: goto L_08AA2384;
    case 543u: goto L_08AA2390;
    case 544u: goto L_08AA2398;
    case 545u: goto L_08AA23AC;
    case 546u: goto L_08AA23B0;
    case 547u: goto L_08AA23B4;
    case 548u: goto L_08AA23C0;
    case 549u: goto L_08AA23CC;
    case 550u: goto L_08AA23D4;
    case 551u: goto L_08AA23E4;
    case 552u: goto L_08AA23F8;
    case 553u: goto L_08AA2404;
    case 554u: goto L_08AA2418;
    case 555u: goto L_08AA2420;
    case 556u: goto L_08AA2434;
    case 557u: goto L_08AA2444;
    case 558u: goto L_08AA2454;
    case 559u: goto L_08AA245C;
    case 560u: goto L_08AA2464;
    case 561u: goto L_08AA2470;
    case 562u: goto L_08AA2478;
    case 563u: goto L_08AA2484;
    case 564u: goto L_08AA248C;
    case 565u: goto L_08AA249C;
    case 566u: goto L_08AA24A0;
    case 567u: goto L_08AA24AC;
    case 568u: goto L_08AA24D0;
    case 569u: goto L_08AA24F0;
    case 570u: goto L_08AA24F8;
    case 571u: goto L_08AA2504;
    case 572u: goto L_08AA2518;
    case 573u: goto L_08AA2528;
    case 574u: goto L_08AA2534;
    case 575u: goto L_08AA2540;
    case 576u: goto L_08AA2548;
    case 577u: goto L_08AA255C;
    case 578u: goto L_08AA2570;
    case 579u: goto L_08AA2584;
    case 580u: goto L_08AA2590;
    case 581u: goto L_08AA2598;
    case 582u: goto L_08AA25A4;
    case 583u: goto L_08AA25AC;
    case 584u: goto L_08AA25B8;
    case 585u: goto L_08AA25C0;
    case 586u: goto L_08AA25D0;
    case 587u: goto L_08AA25D4;
    case 588u: goto L_08AA25E4;
    case 589u: goto L_08AA25F8;
    case 590u: goto L_08AA2608;
    case 591u: goto L_08AA2610;
    case 592u: goto L_08AA261C;
    case 593u: goto L_08AA2624;
    case 594u: goto L_08AA2630;
    case 595u: goto L_08AA2638;
    case 596u: goto L_08AA2648;
    case 597u: goto L_08AA264C;
    case 598u: goto L_08AA2650;
    case 599u: goto L_08AA2668;
    case 600u: goto L_08AA2670;
    case 601u: goto L_08AA2678;
    case 602u: goto L_08AA267C;
    case 603u: goto L_08AA2688;
    case 604u: goto L_08AA2690;
    case 605u: goto L_08AA26A8;
    case 606u: goto L_08AA26B0;
    case 607u: goto L_08AA26B8;
    case 608u: goto L_08AA26BC;
    case 609u: goto L_08AA26C8;
    case 610u: goto L_08AA26E4;
    case 611u: goto L_08AA26EC;
    case 612u: goto L_08AA26F4;
    case 613u: goto L_08AA26FC;
    case 614u: goto L_08AA2700;
    case 615u: goto L_08AA2704;
    case 616u: goto L_08AA271C;
    case 617u: goto L_08AA2724;
    case 618u: goto L_08AA2734;
    case 619u: goto L_08AA2740;
    case 620u: goto L_08AA2750;
    case 621u: goto L_08AA2780;
    case 622u: goto L_08AA2794;
    case 623u: goto L_08AA2798;
    case 624u: goto L_08AA27B0;
    case 625u: goto L_08AA27B4;
    case 626u: goto L_08AA27C0;
    case 627u: goto L_08AA27CC;
    case 628u: goto L_08AA27E0;
    case 629u: goto L_08AA27FC;
    case 630u: goto L_08AA2800;
    case 631u: goto L_08AA2818;
    case 632u: goto L_08AA2820;
    case 633u: goto L_08AA2850;
    case 634u: goto L_08AA285C;
    case 635u: goto L_08AA2864;
    case 636u: goto L_08AA286C;
    case 637u: goto L_08AA2878;
    case 638u: goto L_08AA287C;
    case 639u: goto L_08AA2880;
    case 640u: goto L_08AA2888;
    case 641u: goto L_08AA2894;
    case 642u: goto L_08AA28A0;
    case 643u: goto L_08AA28A8;
    case 644u: goto L_08AA28B8;
    case 645u: goto L_08AA28C8;
    case 646u: goto L_08AA28EC;
    case 647u: goto L_08AA28FC;
    case 648u: goto L_08AA291C;
    case 649u: goto L_08AA2924;
    case 650u: goto L_08AA292C;
    case 651u: goto L_08AA2930;
    case 652u: goto L_08AA2934;
    case 653u: goto L_08AA2944;
    case 654u: goto L_08AA294C;
    case 655u: goto L_08AA295C;
    case 656u: goto L_08AA2964;
    case 657u: goto L_08AA2974;
    case 658u: goto L_08AA2984;
    case 659u: goto L_08AA29AC;
    case 660u: goto L_08AA29B8;
    case 661u: goto L_08AA29DC;
    case 662u: goto L_08AA29E8;
    case 663u: goto L_08AA29F0;
    case 664u: goto L_08AA2A00;
    case 665u: goto L_08AA2A10;
    case 666u: goto L_08AA2A1C;
    case 667u: goto L_08AA2A2C;
    case 668u: goto L_08AA2A34;
    case 669u: goto L_08AA2A44;
    case 670u: goto L_08AA2A54;
    case 671u: goto L_08AA2A78;
    case 672u: goto L_08AA2A84;
    case 673u: goto L_08AA2AA4;
    case 674u: goto L_08AA2AAC;
    case 675u: goto L_08AA2AB4;
    case 676u: goto L_08AA2AC4;
    case 677u: goto L_08AA2AD4;
    case 678u: goto L_08AA2AE0;
    case 679u: goto L_08AA2AEC;
    case 680u: goto L_08AA2AF8;
    case 681u: goto L_08AA2B08;
    case 682u: goto L_08AA2B18;
    case 683u: goto L_08AA2B3C;
    case 684u: goto L_08AA2B48;
    case 685u: goto L_08AA2B68;
    case 686u: goto L_08AA2B74;
    case 687u: goto L_08AA2B7C;
    case 688u: goto L_08AA2B8C;
    case 689u: goto L_08AA2B9C;
    case 690u: goto L_08AA2BA4;
    case 691u: goto L_08AA2BB4;
    case 692u: goto L_08AA2BC4;
    case 693u: goto L_08AA2BCC;
    case 694u: goto L_08AA2BD4;
    case 695u: goto L_08AA2BE4;
    case 696u: goto L_08AA2BF4;
    case 697u: goto L_08AA2C18;
    case 698u: goto L_08AA2C28;
    case 699u: goto L_08AA2C48;
    case 700u: goto L_08AA2C50;
    case 701u: goto L_08AA2C58;
    case 702u: goto L_08AA2C60;
    case 703u: goto L_08AA2C70;
    case 704u: goto L_08AA2C78;
    case 705u: goto L_08AA2C88;
    case 706u: goto L_08AA2C90;
    case 707u: goto L_08AA2CA0;
    case 708u: goto L_08AA2CB0;
    case 709u: goto L_08AA2CD4;
    case 710u: goto L_08AA2CE0;
    case 711u: goto L_08AA2D00;
    case 712u: goto L_08AA2D08;
    case 713u: goto L_08AA2D10;
    case 714u: goto L_08AA2D1C;
    case 715u: goto L_08AA2D2C;
    case 716u: goto L_08AA2D34;
    case 717u: goto L_08AA2D48;
    case 718u: goto L_08AA2D50;
    case 719u: goto L_08AA2D58;
    case 720u: goto L_08AA2D68;
    case 721u: goto L_08AA2D78;
    case 722u: goto L_08AA2D9C;
    case 723u: goto L_08AA2DAC;
    case 724u: goto L_08AA2DCC;
    case 725u: goto L_08AA2DD4;
    case 726u: goto L_08AA2DDC;
    case 727u: goto L_08AA2DE4;
    case 728u: goto L_08AA2DF4;
    case 729u: goto L_08AA2DFC;
    case 730u: goto L_08AA2E0C;
    case 731u: goto L_08AA2E14;
    case 732u: goto L_08AA2E24;
    case 733u: goto L_08AA2E34;
    case 734u: goto L_08AA2E5C;
    case 735u: goto L_08AA2E68;
    case 736u: goto L_08AA2E8C;
    case 737u: goto L_08AA2E94;
    case 738u: goto L_08AA2E9C;
    case 739u: goto L_08AA2EA8;
    case 740u: goto L_08AA2EB8;
    case 741u: goto L_08AA2EC4;
    case 742u: goto L_08AA2ECC;
    case 743u: goto L_08AA2EDC;
    case 744u: goto L_08AA2EEC;
    case 745u: goto L_08AA2F0C;
    case 746u: goto L_08AA2F1C;
    case 747u: goto L_08AA2F34;
    case 748u: goto L_08AA2F3C;
    case 749u: goto L_08AA2F44;
    case 750u: goto L_08AA2F50;
    case 751u: goto L_08AA2F60;
    case 752u: goto L_08AA2F6C;
    case 753u: goto L_08AA2F7C;
    case 754u: goto L_08AA2F90;
    case 755u: goto L_08AA2F98;
    case 756u: goto L_08AA2FA8;
    case 757u: goto L_08AA2FB8;
    case 758u: goto L_08AA2FDC;
    case 759u: goto L_08AA2FEC;
    case 760u: goto L_08AA300C;
    case 761u: goto L_08AA3014;
    case 762u: goto L_08AA301C;
    case 763u: goto L_08AA3024;
    case 764u: goto L_08AA3034;
    case 765u: goto L_08AA303C;
    case 766u: goto L_08AA304C;
    case 767u: goto L_08AA3054;
    case 768u: goto L_08AA3064;
    case 769u: goto L_08AA3074;
    case 770u: goto L_08AA3090;
    case 771u: goto L_08AA30A0;
    case 772u: goto L_08AA30B8;
    case 773u: goto L_08AA30C0;
    case 774u: goto L_08AA30C8;
    case 775u: goto L_08AA30D4;
    case 776u: goto L_08AA30E4;
    case 777u: goto L_08AA30E8;
    case 778u: goto L_08AA30F4;
    case 779u: goto L_08AA3104;
    case 780u: goto L_08AA3108;
    case 781u: goto L_08AA3114;
    case 782u: goto L_08AA3128;
    case 783u: goto L_08AA315C;
    case 784u: goto L_08AA31D4;
    case 785u: goto L_08AA31E4;
    case 786u: goto L_08AA31F4;
    case 787u: goto L_08AA3200;
    case 788u: goto L_08AA3208;
    case 789u: goto L_08AA3210;
    case 790u: goto L_08AA3214;
    case 791u: goto L_08AA3228;
    case 792u: goto L_08AA323C;
    case 793u: goto L_08AA3248;
    case 794u: goto L_08AA3250;
    case 795u: goto L_08AA325C;
    case 796u: goto L_08AA326C;
    case 797u: goto L_08AA3284;
    case 798u: goto L_08AA328C;
    case 799u: goto L_08AA32B0;
    case 800u: goto L_08AA32C4;
    case 801u: goto L_08AA32E4;
    case 802u: goto L_08AA32EC;
    case 803u: goto L_08AA3314;
    case 804u: goto L_08AA334C;
    case 805u: goto L_08AA335C;
    case 806u: goto L_08AA3394;
    case 807u: goto L_08AA339C;
    case 808u: goto L_08AA33D8;
    case 809u: goto L_08AA33E4;
    case 810u: goto L_08AA33E8;
    case 811u: goto L_08AA3400;
    case 812u: goto L_08AA3410;
    case 813u: goto L_08AA3414;
    case 814u: goto L_08AA3444;
    case 815u: goto L_08AA346C;
    case 816u: goto L_08AA3474;
    case 817u: goto L_08AA3488;
    case 818u: goto L_08AA34A4;
    case 819u: goto L_08AA34BC;
    case 820u: goto L_08AA34C8;
    case 821u: goto L_08AA34F8;
    case 822u: goto L_08AA3510;
    case 823u: goto L_08AA351C;
    case 824u: goto L_08AA3524;
    case 825u: goto L_08AA352C;
    case 826u: goto L_08AA3538;
    case 827u: goto L_08AA3540;
    case 828u: goto L_08AA3548;
    case 829u: goto L_08AA3550;
    case 830u: goto L_08AA355C;
    case 831u: goto L_08AA3564;
    case 832u: goto L_08AA3570;
    case 833u: goto L_08AA357C;
    case 834u: goto L_08AA3584;
    case 835u: goto L_08AA359C;
    case 836u: goto L_08AA35A0;
    case 837u: goto L_08AA35B4;
    case 838u: goto L_08AA35BC;
    case 839u: goto L_08AA35C4;
    case 840u: goto L_08AA35D0;
    case 841u: goto L_08AA35D8;
    case 842u: goto L_08AA35FC;
    case 843u: goto L_08AA3614;
    case 844u: goto L_08AA3618;
    case 845u: goto L_08AA3620;
    case 846u: goto L_08AA362C;
    case 847u: goto L_08AA3644;
    case 848u: goto L_08AA3650;
    case 849u: goto L_08AA365C;
    case 850u: goto L_08AA36A4;
    case 851u: goto L_08AA36BC;
    case 852u: goto L_08AA36D4;
    case 853u: goto L_08AA3704;
    case 854u: goto L_08AA371C;
    case 855u: goto L_08AA3724;
    case 856u: goto L_08AA372C;
    case 857u: goto L_08AA3734;
    case 858u: goto L_08AA3740;
    case 859u: goto L_08AA3748;
    case 860u: goto L_08AA3750;
    case 861u: goto L_08AA3758;
    case 862u: goto L_08AA3764;
    case 863u: goto L_08AA376C;
    case 864u: goto L_08AA3778;
    case 865u: goto L_08AA3784;
    case 866u: goto L_08AA378C;
    case 867u: goto L_08AA37A0;
    case 868u: goto L_08AA37C8;
    case 869u: goto L_08AA37D0;
    case 870u: goto L_08AA37E4;
    case 871u: goto L_08AA37EC;
    case 872u: goto L_08AA37FC;
    case 873u: goto L_08AA3800;
    case 874u: goto L_08AA3824;
    case 875u: goto L_08AA382C;
    case 876u: goto L_08AA3840;
    case 877u: goto L_08AA3850;
    case 878u: goto L_08AA3854;
    case 879u: goto L_08AA3858;
    case 880u: goto L_08AA3864;
    case 881u: goto L_08AA386C;
    case 882u: goto L_08AA3870;
    case 883u: goto L_08AA3884;
    case 884u: goto L_08AA38C8;
    case 885u: goto L_08AA38E0;
    case 886u: goto L_08AA38E8;
    case 887u: goto L_08AA38F4;
    case 888u: goto L_08AA38FC;
    case 889u: goto L_08AA3900;
    case 890u: goto L_08AA3924;
    case 891u: goto L_08AA393C;
    case 892u: goto L_08AA3948;
    case 893u: goto L_08AA3950;
    case 894u: goto L_08AA395C;
    case 895u: goto L_08AA3968;
    case 896u: goto L_08AA3978;
    case 897u: goto L_08AA3984;
    case 898u: goto L_08AA3994;
    case 899u: goto L_08AA399C;
    case 900u: goto L_08AA39A4;
    case 901u: goto L_08AA39B4;
    case 902u: goto L_08AA39B8;
    case 903u: goto L_08AA39C0;
    case 904u: goto L_08AA39C4;
    case 905u: goto L_08AA39DC;
    case 906u: goto L_08AA39E4;
    case 907u: goto L_08AA39F8;
    case 908u: goto L_08AA3A20;
    case 909u: goto L_08AA3A2C;
    case 910u: goto L_08AA3A34;
    case 911u: goto L_08AA3A48;
    case 912u: goto L_08AA3A64;
    case 913u: goto L_08AA3A78;
    case 914u: goto L_08AA3A88;
    case 915u: goto L_08AA3A94;
    case 916u: goto L_08AA3AD0;
    case 917u: goto L_08AA3AD8;
    case 918u: goto L_08AA3AF4;
    case 919u: goto L_08AA3B14;
    case 920u: goto L_08AA3B24;
    case 921u: goto L_08AA3B28;
    case 922u: goto L_08AA3B30;
    case 923u: goto L_08AA3B3C;
    case 924u: goto L_08AA3B4C;
    case 925u: goto L_08AA3B64;
    case 926u: goto L_08AA3B6C;
    case 927u: goto L_08AA3B78;
    case 928u: goto L_08AA3B8C;
    case 929u: goto L_08AA3B98;
    case 930u: goto L_08AA3BA4;
    case 931u: goto L_08AA3BBC;
    case 932u: goto L_08AA3BC0;
    case 933u: goto L_08AA3BC8;
    case 934u: goto L_08AA3BCC;
    case 935u: goto L_08AA3BDC;
    case 936u: goto L_08AA3BE8;
    case 937u: goto L_08AA3C30;
    case 938u: goto L_08AA3C38;
    case 939u: goto L_08AA3C40;
    case 940u: goto L_08AA3C48;
    case 941u: goto L_08AA3C54;
    case 942u: goto L_08AA3C5C;
    case 943u: goto L_08AA3C64;
    case 944u: goto L_08AA3C6C;
    case 945u: goto L_08AA3C78;
    case 946u: goto L_08AA3C80;
    case 947u: goto L_08AA3C8C;
    case 948u: goto L_08AA3C98;
    case 949u: goto L_08AA3CA0;
    case 950u: goto L_08AA3CB4;
    case 951u: goto L_08AA3CDC;
    case 952u: goto L_08AA3CE4;
    case 953u: goto L_08AA3CF8;
    case 954u: goto L_08AA3D00;
    case 955u: goto L_08AA3D10;
    case 956u: goto L_08AA3D18;
    case 957u: goto L_08AA3D24;
    case 958u: goto L_08AA3D50;
    case 959u: goto L_08AA3D94;
    case 960u: goto L_08AA3D9C;
    case 961u: goto L_08AA3DAC;
    case 962u: goto L_08AA3DB4;
    case 963u: goto L_08AA3DC0;
    case 964u: goto L_08AA3DCC;
    case 965u: goto L_08AA3DE4;
    case 966u: goto L_08AA3DEC;
    case 967u: goto L_08AA3DF0;
    case 968u: goto L_08AA3E14;
    case 969u: goto L_08AA3E38;
    case 970u: goto L_08AA3E40;
    case 971u: goto L_08AA3E64;
    case 972u: goto L_08AA3E6C;
    case 973u: goto L_08AA3E90;
    case 974u: goto L_08AA3EA8;
    case 975u: goto L_08AA3EB0;
    case 976u: goto L_08AA3ED4;
    case 977u: goto L_08AA3F08;
    case 978u: goto L_08AA3F14;
    case 979u: goto L_08AA3F40;
    case 980u: goto L_08AA3F48;
    case 981u: goto L_08AA3F54;
    case 982u: goto L_08AA3F80;
    case 983u: goto L_08AA3F8C;
    case 984u: goto L_08AA3F94;
    case 985u: goto L_08AA3FA8;
    case 986u: goto L_08AA3FC4;
    case 987u: goto L_08AA3FD0;
    case 988u: goto L_08AA3FE0;
    case 989u: goto L_08AA3FE4;
    case 990u: goto L_08AA3FEC;
    case 991u: goto L_08AA3FF4;
    case 992u: goto L_08AA3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AA0000:
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA000Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 717u, 0x08AABE5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA000Cu) goto L_08AA000C;
    return;
L_08AA000C:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08AA0018;
L_08AA0018:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 163 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA00C8;
      }
      goto L_08AA0024;
    }
L_08AA0024:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16348)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16344)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA004Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 222u, 0x08AA5058u>(ctx, &aot_mem) && ctx.pc == 0x08AA004Cu) goto L_08AA004C;
    return;
L_08AA004C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AA0058u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 81u, 0x08AAC5A4u>(ctx, &aot_mem) && ctx.pc == 0x08AA0058u) goto L_08AA0058;
    return;
L_08AA0058:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[21] + ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08AA0070u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 67u, 0x08AAC4C8u>(ctx, &aot_mem) && ctx.pc == 0x08AA0070u) goto L_08AA0070;
    return;
L_08AA0070:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AA0084u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 717u, 0x08AABE5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0084u) goto L_08AA0084;
    return;
L_08AA0084:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA0098u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 30u, 0x08AAC248u>(ctx, &aot_mem) && ctx.pc == 0x08AA0098u) goto L_08AA0098;
    return;
L_08AA0098:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16340)));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16336)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA00B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 63u, 0x08AAC46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA00B8u) goto L_08AA00B8;
    return;
L_08AA00B8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_08AA0018;
      }
      goto L_08AA00C4;
    }
L_08AA00C4:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    goto L_08AA00C8;
L_08AA00C8:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0110;
      }
      goto L_08AA00DC;
    }
L_08AA00DC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08AA00E0;
L_08AA00E0:
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
        goto L_08AA00E0;
    }
    goto L_08AA0110;
L_08AA0110:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
      if (branch_taken) {
          goto L_08AA0218;
      }
      goto L_08AA0118;
    }
L_08AA0118:
    ctx.gpr[4] = (0u | 102u);
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[4];
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08AA0204;
      }
      goto L_08AA0124;
    }
L_08AA0124:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16332)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16328)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA0138u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 63u, 0x08AAC46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0138u) goto L_08AA0138;
    return;
L_08AA0138:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08AA01C4;
      }
      goto L_08AA0140;
    }
L_08AA0140:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16348)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16344)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA0160u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 722u, 0x08AABED0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0160u) goto L_08AA0160;
    return;
L_08AA0160:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_08AA016C;
L_08AA016C:
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16340)));
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AA0184u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16336)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 63u, 0x08AAC46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0184u) goto L_08AA0184;
    return;
L_08AA0184:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA01BC;
      }
      goto L_08AA018C;
    }
L_08AA018C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < -1020 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA01BC;
      }
      goto L_08AA0198;
    }
L_08AA0198:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA01B0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 722u, 0x08AABED0u>(ctx, &aot_mem) && ctx.pc == 0x08AA01B0u) goto L_08AA01B0;
    return;
L_08AA01B0:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AA016C;
      }
      goto L_08AA01BC;
    }
L_08AA01BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    goto L_08AA01C4;
L_08AA01C4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16340)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16336)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA01D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 63u, 0x08AAC46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA01D8u) goto L_08AA01D8;
    return;
L_08AA01D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08AA0218;
      }
      goto L_08AA01E0;
    }
L_08AA01E0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16348)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16344)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA01F8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 30u, 0x08AAC248u>(ctx, &aot_mem) && ctx.pc == 0x08AA01F8u) goto L_08AA01F8;
    return;
L_08AA01F8:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AA0218;
      }
      goto L_08AA0204;
    }
L_08AA0204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 48u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08AA0218;
L_08AA0218:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16348)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16344)));
    ctx.gpr[30] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA0238u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 722u, 0x08AABED0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0238u) goto L_08AA0238;
    return;
L_08AA0238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA026C;
      }
      goto L_08AA0248;
    }
L_08AA0248:
    ctx.gpr[5] = (0u | 102u);
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[22]));
      if (branch_taken) {
          goto L_08AA0268;
      }
      goto L_08AA0254;
    }
L_08AA0254:
    ctx.gpr[30] = (0u | 1u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
        goto L_08AA0260;
    }
    goto L_08AA0260;
L_08AA0260:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[20] + ctx.gpr[30]);
      if (branch_taken) {
          goto L_08AA026C;
      }
      goto L_08AA0268;
    }
L_08AA0268:
    ctx.gpr[30] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08AA026C;
L_08AA026C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16356)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16352)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16348)));
    ctx.gpr[31] = (0x08AA028Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16344)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 722u, 0x08AABED0u>(ctx, &aot_mem) && ctx.pc == 0x08AA028Cu) goto L_08AA028C;
    return;
L_08AA028C:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    goto L_08AA02A0;
L_08AA02A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AA02BCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 81u, 0x08AAC5A4u>(ctx, &aot_mem) && ctx.pc == 0x08AA02BCu) goto L_08AA02BC;
    return;
L_08AA02BC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AA02C8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 67u, 0x08AAC4C8u>(ctx, &aot_mem) && ctx.pc == 0x08AA02C8u) goto L_08AA02C8;
    return;
L_08AA02C8:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AA02DCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 717u, 0x08AABE5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA02DCu) goto L_08AA02DC;
    return;
L_08AA02DC:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA03A8;
      }
      goto L_08AA02F8;
    }
L_08AA02F8:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA030Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 63u, 0x08AAC46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA030Cu) goto L_08AA030C;
    return;
L_08AA030C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08AA03AC;
      }
      goto L_08AA0314;
    }
L_08AA0314:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16340)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16336)));
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA032Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 717u, 0x08AABE5Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA032Cu) goto L_08AA032C;
    return;
L_08AA032C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA0340u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 63u, 0x08AAC46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0340u) goto L_08AA0340;
    return;
L_08AA0340:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08AA03AC;
      }
      goto L_08AA0348;
    }
L_08AA0348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16348)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16344)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA037Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 722u, 0x08AABED0u>(ctx, &aot_mem) && ctx.pc == 0x08AA037Cu) goto L_08AA037C;
    return;
L_08AA037C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA0398u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 722u, 0x08AABED0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0398u) goto L_08AA0398;
    return;
L_08AA0398:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA02A0;
      }
      goto L_08AA03A8;
    }
L_08AA03A8:
    ctx.gpr[4] = (2222u << 16u);
    goto L_08AA03AC;
L_08AA03AC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16364)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16360)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA03C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 63u, 0x08AAC46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA03C0u) goto L_08AA03C0;
    return;
L_08AA03C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[21] = (0u | 102u);
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
        goto L_08AA03D8;
    }
    goto L_08AA03D8;
L_08AA03D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 48u);
      if (branch_taken) {
          goto L_08AA041C;
      }
      goto L_08AA03FC;
    }
L_08AA03FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[22]);
    goto L_08AA0404;
L_08AA0404:
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08AA0404;
      }
      goto L_08AA041C;
    }
L_08AA041C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08AA042Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 1086u, 0x08A9FD08u>(ctx, &aot_mem) && ctx.pc == 0x08AA042Cu) goto L_08AA042C;
    return;
L_08AA042C:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
        goto L_08AA044C;
    }
    goto L_08AA0434;
L_08AA0434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_08AA044C;
L_08AA044C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
        goto L_08AA04A4;
    }
    goto L_08AA0454;
L_08AA0454:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[21];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA0468;
      }
      goto L_08AA045C;
    }
L_08AA045C:
    ctx.gpr[5] = (0u | 1u);
    if (static_cast<std::int32_t>(ctx.gpr[17]) > 0) {
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
        goto L_08AA0468;
    }
    goto L_08AA0468;
L_08AA0468:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AA0494;
      }
      goto L_08AA0478;
    }
L_08AA0478:
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_08AA047C;
L_08AA047C:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-1))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AA047C;
      }
      goto L_08AA0494;
    }
L_08AA0494:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AA04A4;
      }
      goto L_08AA04A4;
    }
L_08AA04A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AA04FC;
      }
      goto L_08AA04B0;
    }
L_08AA04B0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (0u | 48u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[5] = (0u | 46u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    goto L_08AA04C8;
L_08AA04C8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA04E8;
      }
      goto L_08AA04D0;
    }
L_08AA04D0:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA04E8;
      }
      goto L_08AA04D8;
    }
L_08AA04D8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AA04C8;
      }
      goto L_08AA04E8;
    }
L_08AA04E8:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AA04FC;
      }
      goto L_08AA04F0;
    }
L_08AA04F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08AA04FC;
L_08AA04FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[21];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AA0598;
      }
      goto L_08AA0508;
    }
L_08AA0508:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA0550;
      }
      goto L_08AA051C;
    }
L_08AA051C:
    ctx.gpr[6] = (0u | 43u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
        goto L_08AA0534;
    }
    goto L_08AA0534;
L_08AA0534:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (0u | 48u);
      if (branch_taken) {
          goto L_08AA0580;
      }
      goto L_08AA0540;
    }
L_08AA0540:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA0580;
      }
      goto L_08AA0550;
    }
L_08AA0550:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[6] = (0u | 45u);
      if (branch_taken) {
          goto L_08AA0580;
      }
      goto L_08AA0558;
    }
L_08AA0558:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < -9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA057C;
      }
      goto L_08AA056C;
    }
L_08AA056C:
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08AA057C;
L_08AA057C:
    ctx.gpr[17] = (0u - ctx.gpr[17]);
    goto L_08AA0580;
L_08AA0580:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA0590u);
    ctx.gpr[6] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 1101u, 0x08A9FDD8u>(ctx, &aot_mem) && ctx.pc == 0x08AA0590u) goto L_08AA0590;
    return;
L_08AA0590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA05A0;
      }
      goto L_08AA0598;
    }
L_08AA0598:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_08AA05A0;
L_08AA05A0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA05FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA0654;
      }
      goto L_08AA0634;
    }
L_08AA0634:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (2223u << 16u);
      if (branch_taken) {
          goto L_08AA0700;
      }
      goto L_08AA0644;
    }
L_08AA0644:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-5336));
    ctx.gpr[20] = (2222u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08AA06A4;
      }
      goto L_08AA0654;
    }
L_08AA0654:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5336));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16368)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA0670u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 559u, 0x0897FEF8u>(ctx, &aot_mem) && ctx.pc == 0x08AA0670u) goto L_08AA0670;
    return;
L_08AA0670:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16368), 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16372), ctx.gpr[17]);
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
L_08AA06A4:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_08AA06A8;
L_08AA06A8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16372)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16372)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16368)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16372), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16368), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA06F0;
      }
      goto L_08AA06D4;
    }
L_08AA06D4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA06E4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 559u, 0x0897FEF8u>(ctx, &aot_mem) && ctx.pc == 0x08AA06E4u) goto L_08AA06E4;
    return;
L_08AA06E4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16372), ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16368), 0u);
      if (branch_taken) {
          goto L_08AA072C;
      }
      goto L_08AA06F0;
    }
L_08AA06F0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AA06A8;
      }
      goto L_08AA0700;
    }
L_08AA0700:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_08AA072C:
    ctx.gpr[2] = (0u | 0u);
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
L_08AA0758:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08AA0820;
      }
      goto L_08AA077C;
    }
L_08AA077C:
    ctx.gpr[10] = (0u | 37u);
    goto L_08AA0780;
L_08AA0780:
    if (ctx.gpr[8] != ctx.gpr[10]) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08AA0814;
    }
    goto L_08AA0788;
L_08AA0788:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08AA0814;
    }
    goto L_08AA0794;
L_08AA0794:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < 65 ? 1u : 0u);
    goto L_08AA07A0;
L_08AA07A0:
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-69));
        goto L_08AA07C4;
    }
    goto L_08AA07A8;
L_08AA07A8:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-69));
      if (branch_taken) {
          goto L_08AA07C4;
      }
      goto L_08AA07B4;
    }
L_08AA07B4:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < 65 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA07A0;
      }
      goto L_08AA07C4;
    }
L_08AA07C4:
    ctx.gpr[11] = (ctx.gpr[8] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
        goto L_08AA0814;
    }
    goto L_08AA07D0;
L_08AA07D0:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[8]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7848)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA07E8:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08AA0804u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    goto L_08AA0848;
L_08AA0804:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA0810:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08AA0814;
L_08AA0814:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0780;
      }
      goto L_08AA0820;
    }
L_08AA0820:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08AA083Cu);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    goto L_08AA1F88;
L_08AA083C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA0848:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-512));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA0884u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 175u, 0x08AA4D34u>(ctx, &aot_mem) && ctx.pc == 0x08AA0884u) goto L_08AA0884;
    return;
L_08AA0884:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), 0u);
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16376));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16392));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[4]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7908));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7928));
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7900));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7880));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[4]);
    goto L_08AA08D8;
L_08AA08D8:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[21] = (0u | 37u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(392));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[23] = (2222u << 16u);
    goto L_08AA08F0;
L_08AA08F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(15220)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17552)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA0908u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 243u, 0x08A9CD44u>(ctx, &aot_mem) && ctx.pc == 0x08AA0908u) goto L_08AA0908;
    return;
L_08AA0908:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    ctx.gpr[19] = (ctx.gpr[17] - ctx.gpr[20]);
        goto L_08AA092C;
    }
    goto L_08AA0914;
L_08AA0914:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AA08F0;
      }
      goto L_08AA0920;
    }
L_08AA0920:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[17] - ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AA092C;
      }
      goto L_08AA092C;
    }
L_08AA092C:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA09E8;
      }
      goto L_08AA0938;
    }
L_08AA0938:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[6] & 512u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA09AC;
    }
    goto L_08AA0948;
L_08AA0948:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA0984;
      }
      goto L_08AA0958;
    }
L_08AA0958:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA0968u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA0968u) goto L_08AA0968;
    return;
L_08AA0968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA09DC;
      }
      goto L_08AA0984;
    }
L_08AA0984:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA0994u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA0994u) goto L_08AA0994;
    return;
L_08AA0994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA09DC;
      }
      goto L_08AA09AC;
    }
L_08AA09AC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA09CC;
      }
      goto L_08AA09B4;
    }
L_08AA09B4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA09CC;
      }
      goto L_08AA09BC;
    }
L_08AA09BC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AA09CC;
L_08AA09CC:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA09DCu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA05FC;
L_08AA09DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
    goto L_08AA09E8;
L_08AA09E8:
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
        goto L_08AA1BE0;
    }
    goto L_08AA09F0;
L_08AA09F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA0A10;
      }
      goto L_08AA09FC;
    }
L_08AA09FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
        goto L_08AA1BE0;
    }
    goto L_08AA0A0C;
L_08AA0A0C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08AA0A10;
L_08AA0A10:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[4]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AA0A2C;
L_08AA0A2C:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    goto L_08AA0A3C;
L_08AA0A3C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA12F0;
      }
      goto L_08AA0A44;
    }
L_08AA0A44:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7704)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA0A5C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA0A2C;
      }
      goto L_08AA0A68;
    }
L_08AA0A68:
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AA0A2C;
      }
      goto L_08AA0A74;
    }
L_08AA0A74:
    ctx.gpr[20] = (ctx.gpr[20] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA0A2C;
      }
      goto L_08AA0A80;
    }
L_08AA0A80:
    ctx.gpr[20] = (ctx.gpr[20] | 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA0A2C;
      }
      goto L_08AA0A8C;
    }
L_08AA0A8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA0A2C;
      }
      goto L_08AA0AA4;
    }
L_08AA0AA4:
    ctx.gpr[30] = (0u - ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[20] | 4u);
      if (branch_taken) {
          goto L_08AA0AB8;
      }
      goto L_08AA0AB0;
    }
L_08AA0AB0:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[20] | 4u);
    goto L_08AA0AB8;
L_08AA0AB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA0A2C;
      }
      goto L_08AA0AC0;
    }
L_08AA0AC0:
    ctx.gpr[4] = (0u | 43u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA0A2C;
      }
      goto L_08AA0AD0;
    }
L_08AA0AD0:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA0B08;
      }
      goto L_08AA0AE4;
    }
L_08AA0AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08AA0B00;
    }
    goto L_08AA0B00;
L_08AA0B00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA0A2C;
      }
      goto L_08AA0B08;
    }
L_08AA0B08:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA0B44;
      }
      goto L_08AA0B18;
    }
L_08AA0B18:
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA0B18;
      }
      goto L_08AA0B44;
    }
L_08AA0B44:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08AA0B54;
    }
    goto L_08AA0B54;
L_08AA0B54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA0A3C;
      }
      goto L_08AA0B5C;
    }
L_08AA0B5C:
    ctx.gpr[20] = (ctx.gpr[20] | 128u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA0A2C;
      }
      goto L_08AA0B68;
    }
L_08AA0B68:
    ctx.gpr[5] = (0u | 0u);
    goto L_08AA0B6C;
L_08AA0B6C:
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA0B6C;
      }
      goto L_08AA0B98;
    }
L_08AA0B98:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA0A3C;
      }
      goto L_08AA0BA8;
    }
L_08AA0BA8:
    ctx.gpr[20] = (ctx.gpr[20] | 8u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA0A2C;
      }
      goto L_08AA0BB4;
    }
L_08AA0BB4:
    ctx.gpr[20] = (ctx.gpr[20] | 64u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA0A2C;
      }
      goto L_08AA0BC0;
    }
L_08AA0BC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 108u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA0BE0;
      }
      goto L_08AA0BD0;
    }
L_08AA0BD0:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA0A2C;
      }
      goto L_08AA0BE0;
    }
L_08AA0BE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
      if (branch_taken) {
          goto L_08AA0A2C;
      }
      goto L_08AA0BE8;
    }
L_08AA0BE8:
    ctx.gpr[20] = (ctx.gpr[20] | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA0A2C;
      }
      goto L_08AA0BF4;
    }
L_08AA0BF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA1318;
      }
      goto L_08AA0C2C;
    }
L_08AA0C2C:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
      if (branch_taken) {
          goto L_08AA0C3C;
      }
      goto L_08AA0C38;
    }
L_08AA0C38:
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
    goto L_08AA0C3C;
L_08AA0C3C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AA0C58;
      }
      goto L_08AA0C44;
    }
L_08AA0C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA0CA8;
      }
      goto L_08AA0C58;
    }
L_08AA0C58:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AA0C74;
      }
      goto L_08AA0C60;
    }
L_08AA0C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA0CA4;
      }
      goto L_08AA0C74;
    }
L_08AA0C74:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
        goto L_08AA0C98;
    }
    goto L_08AA0C7C;
L_08AA0C7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
      if (branch_taken) {
          goto L_08AA0CA4;
      }
      goto L_08AA0C98;
    }
L_08AA0C98:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    goto L_08AA0CA4;
L_08AA0CA4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08AA0CA8;
L_08AA0CA8:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[31] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA0CC0;
      }
      goto L_08AA0CB4;
    }
L_08AA0CB4:
    ctx.gpr[4] = (0u | 45u);
    ctx.gpr[5] = (0u - ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AA0CC0;
L_08AA0CC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AA118C;
      }
      goto L_08AA0CC8;
    }
L_08AA0CC8:
    ctx.gpr[4] = (ctx.gpr[20] & 1u);
    ctx.gpr[5] = (ctx.gpr[20] & 132u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[5]);
    ctx.gpr[21] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[6]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[19] == ctx.gpr[4]) {
    ctx.gpr[19] = (0u | 6u);
        goto L_08AA0CF0;
    }
    goto L_08AA0CF0;
L_08AA0CF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[5] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 103u);
    if (ctx.gpr[16] == ctx.gpr[4]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[7]);
        goto L_08AA0D2C;
    }
    goto L_08AA0D18;
L_08AA0D18:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[7]);
    ctx.gpr[4] = (0u | 71u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AA0E28;
      }
      goto L_08AA0D28;
    }
L_08AA0D28:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[7]);
    goto L_08AA0D2C;
L_08AA0D2C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[6]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16332)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16328)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AA0D50u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 63u, 0x08AAC46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0D50u) goto L_08AA0D50;
    return;
L_08AA0D50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08AA0DAC;
      }
      goto L_08AA0D58;
    }
L_08AA0D58:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16332)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16328)));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AA0D78u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 63u, 0x08AAC46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0D78u) goto L_08AA0D78;
    return;
L_08AA0D78:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
        goto L_08AA0D98;
    }
    goto L_08AA0D80;
L_08AA0D80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[31] = (0x08AA0D8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 95u, 0x08AAC678u>(ctx, &aot_mem) && ctx.pc == 0x08AA0D8Cu) goto L_08AA0D8C;
    return;
L_08AA0D8C:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08AA0D98;
L_08AA0D98:
    ctx.gpr[31] = (0x08AA0DA0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 381u, 0x08AA5D88u>(ctx, &aot_mem) && ctx.pc == 0x08AA0DA0u) goto L_08AA0DA0;
    return;
L_08AA0DA0:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AA0DB4;
      }
      goto L_08AA0DAC;
    }
L_08AA0DAC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16340)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16336)));
    goto L_08AA0DB4;
L_08AA0DB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[6]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16412)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16408)));
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[21] = (0u | 102u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AA0DE0u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 63u, 0x08AAC46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0DE0u) goto L_08AA0DE0;
    return;
L_08AA0DE0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[5] = (0u | 69u);
      if (branch_taken) {
          goto L_08AA0E10;
      }
      goto L_08AA0DE8;
    }
L_08AA0DE8:
    ctx.gpr[31] = (0x08AA0DF0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 67u, 0x08AAC4C8u>(ctx, &aot_mem) && ctx.pc == 0x08AA0DF0u) goto L_08AA0DF0;
    return;
L_08AA0DF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AA0E04u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 63u, 0x08AAC46Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0E04u) goto L_08AA0E04;
    return;
L_08AA0E04:
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
        goto L_08AA0E24;
    }
    goto L_08AA0E0C;
L_08AA0E0C:
    ctx.gpr[5] = (0u | 69u);
    goto L_08AA0E10;
L_08AA0E10:
    ctx.gpr[4] = (0u | 103u);
    if (ctx.gpr[16] == ctx.gpr[4]) {
    ctx.gpr[5] = (0u | 101u);
        goto L_08AA0E1C;
    }
    goto L_08AA0E1C;
L_08AA0E1C:
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    goto L_08AA0E24;
L_08AA0E24:
    ctx.gpr[21] = (0u | 1u);
    goto L_08AA0E28;
L_08AA0E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[16] << 24u);
      if (branch_taken) {
          goto L_08AA0E44;
      }
      goto L_08AA0E34;
    }
L_08AA0E34:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[19] = (0u | 1u);
        goto L_08AA0E3C;
    }
    goto L_08AA0E3C;
L_08AA0E3C:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[16] << 24u);
    goto L_08AA0E44;
L_08AA0E44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08AA0E60u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 1110u, 0x08A9FE74u>(ctx, &aot_mem) && ctx.pc == 0x08AA0E60u) goto L_08AA0E60;
    return;
L_08AA0E60:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AA0E6Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08AA0E6Cu) goto L_08AA0E6C;
    return;
L_08AA0E6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[20] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AA1318;
      }
      goto L_08AA0E7C;
    }
L_08AA0E7C:
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08AA0E90u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08AA1C34;
L_08AA0E90:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AA1318;
      }
      goto L_08AA0E9C;
    }
L_08AA0E9C:
    ctx.gpr[4] = (ctx.gpr[20] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
      if (branch_taken) {
          goto L_08AA0EC0;
      }
      goto L_08AA0EA8;
    }
L_08AA0EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA08D8;
      }
      goto L_08AA0EC0;
    }
L_08AA0EC0:
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AA0EE4;
      }
      goto L_08AA0ECC;
    }
L_08AA0ECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA08D8;
      }
      goto L_08AA0EE4;
    }
L_08AA0EE4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
        goto L_08AA0F04;
    }
    goto L_08AA0EEC;
L_08AA0EEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AA08D8;
      }
      goto L_08AA0F04;
    }
L_08AA0F04:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA08D8;
      }
      goto L_08AA0F18;
    }
L_08AA0F18:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
      if (branch_taken) {
          goto L_08AA0F28;
      }
      goto L_08AA0F24;
    }
L_08AA0F24:
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
    goto L_08AA0F28;
L_08AA0F28:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AA0F44;
      }
      goto L_08AA0F30;
    }
L_08AA0F30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA0F8C;
      }
      goto L_08AA0F44;
    }
L_08AA0F44:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AA0F60;
      }
      goto L_08AA0F4C;
    }
L_08AA0F4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA0F8C;
      }
      goto L_08AA0F60;
    }
L_08AA0F60:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
        goto L_08AA0F80;
    }
    goto L_08AA0F68;
L_08AA0F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08AA0F8C;
      }
      goto L_08AA0F80;
    }
L_08AA0F80:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    goto L_08AA0F8C;
L_08AA0F8C:
    ctx.gpr[31] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AA1188;
      }
      goto L_08AA0F98;
    }
L_08AA0F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    ctx.gpr[31] = (0u | 2u);
    ctx.gpr[20] = (ctx.gpr[20] | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[6]);
    ctx.gpr[16] = (0u | 120u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AA1188;
      }
      goto L_08AA0FC4;
    }
L_08AA0FC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[5] = (ctx.gpr[20] & 132u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[4] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
        goto L_08AA0FF0;
    }
    goto L_08AA0FF0;
L_08AA0FF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AA1034;
      }
      goto L_08AA0FF8;
    }
L_08AA0FF8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AA1004u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 680u, 0x08AA75B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA1004u) goto L_08AA1004;
    return;
L_08AA1004:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AA1028;
      }
      goto L_08AA1010;
    }
L_08AA1010:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AA1044;
      }
      goto L_08AA101C;
    }
L_08AA101C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AA1044;
      }
      goto L_08AA1028;
    }
L_08AA1028:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AA1044;
      }
      goto L_08AA1034;
    }
L_08AA1034:
    ctx.gpr[31] = (0x08AA103Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08AA103Cu) goto L_08AA103C;
    return;
L_08AA103C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_08AA1044;
L_08AA1044:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AA1318;
      }
      goto L_08AA1050;
    }
L_08AA1050:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
      if (branch_taken) {
          goto L_08AA1068;
      }
      goto L_08AA1060;
    }
L_08AA1060:
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    goto L_08AA1068;
L_08AA1068:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AA1084;
      }
      goto L_08AA1070;
    }
L_08AA1070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA10CC;
      }
      goto L_08AA1084;
    }
L_08AA1084:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AA10A0;
      }
      goto L_08AA108C;
    }
L_08AA108C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA10CC;
      }
      goto L_08AA10A0;
    }
L_08AA10A0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
        goto L_08AA10C0;
    }
    goto L_08AA10A8;
L_08AA10A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08AA10CC;
      }
      goto L_08AA10C0;
    }
L_08AA10C0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    goto L_08AA10CC;
L_08AA10CC:
    ctx.gpr[31] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AA1188;
      }
      goto L_08AA10DC;
    }
L_08AA10DC:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[20] & 1u);
      if (branch_taken) {
          goto L_08AA10F8;
      }
      goto L_08AA10EC;
    }
L_08AA10EC:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[20] & 32u);
    ctx.gpr[7] = (ctx.gpr[20] & 1u);
    goto L_08AA10F8;
L_08AA10F8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AA1114;
      }
      goto L_08AA1100;
    }
L_08AA1100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA1160;
      }
      goto L_08AA1114;
    }
L_08AA1114:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AA1130;
      }
      goto L_08AA111C;
    }
L_08AA111C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA115C;
      }
      goto L_08AA1130;
    }
L_08AA1130:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
        goto L_08AA1150;
    }
    goto L_08AA1138;
L_08AA1138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
      if (branch_taken) {
          goto L_08AA115C;
      }
      goto L_08AA1150;
    }
L_08AA1150:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[4]);
    goto L_08AA115C;
L_08AA115C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08AA1160;
L_08AA1160:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    ctx.gpr[31] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AA1188;
      }
      goto L_08AA1178;
    }
L_08AA1178:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
      if (branch_taken) {
          goto L_08AA1188;
      }
      goto L_08AA1180;
    }
L_08AA1180:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    ctx.gpr[20] = (ctx.gpr[20] | 2u);
    goto L_08AA1188;
L_08AA1188:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    goto L_08AA118C;
L_08AA118C:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AA11A0;
      }
      goto L_08AA1198;
    }
L_08AA1198:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[20] = (ctx.gpr[20] & ctx.gpr[4]);
    goto L_08AA11A0;
L_08AA11A0:
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    ctx.gpr[6] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(388));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AA12A8;
      }
      goto L_08AA11B8;
    }
L_08AA11B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[31]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[31]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA11E4;
      }
      goto L_08AA11C0;
    }
L_08AA11C0:
    if (static_cast<std::int32_t>(ctx.gpr[31]) >= 0) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
        goto L_08AA1204;
    }
    goto L_08AA11C8;
L_08AA11C8:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    goto L_08AA11CC;
L_08AA11CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    ctx.gpr[31] = (0x08AA11D8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08AA11D8u) goto L_08AA11D8;
    return;
L_08AA11D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AA1318;
      }
      goto L_08AA11E4;
    }
L_08AA11E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA1244;
      }
      goto L_08AA11EC;
    }
L_08AA11EC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[31]) < 3 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
        goto L_08AA11CC;
    }
    goto L_08AA11F8;
L_08AA11F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 15u);
      if (branch_taken) {
          goto L_08AA1290;
      }
      goto L_08AA1200;
    }
L_08AA1200:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    goto L_08AA1204;
L_08AA1204:
    ctx.gpr[6] = (ctx.gpr[20] & 1u);
    goto L_08AA1208;
L_08AA1208:
    ctx.gpr[4] = (ctx.gpr[5] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 3u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AA1208;
      }
      goto L_08AA1220;
    }
L_08AA1220:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
      if (branch_taken) {
          goto L_08AA12A8;
      }
      goto L_08AA1228;
    }
L_08AA1228:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 48u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
        goto L_08AA12AC;
    }
    goto L_08AA1238;
L_08AA1238:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AA12A8;
      }
      goto L_08AA1244;
    }
L_08AA1244:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 10u);
      if (branch_taken) {
          goto L_08AA127C;
      }
      goto L_08AA124C;
    }
L_08AA124C:
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA124C;
      }
      goto L_08AA127C;
    }
L_08AA127C:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AA12A8;
      }
      goto L_08AA128C;
    }
L_08AA128C:
    ctx.gpr[4] = (ctx.gpr[5] & 15u);
    goto L_08AA1290;
L_08AA1290:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AA128C;
      }
      goto L_08AA12A8;
    }
L_08AA12A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), ctx.gpr[22]);
    goto L_08AA12AC;
L_08AA12AC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[31] != ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(388));
      if (branch_taken) {
          goto L_08AA12E4;
      }
      goto L_08AA12B8;
    }
L_08AA12B8:
    ctx.gpr[4] = (ctx.gpr[20] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AA12E8;
      }
      goto L_08AA12C4;
    }
L_08AA12C4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08AA12D8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08AA1C34;
L_08AA12D8:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AA1318;
      }
      goto L_08AA12E4;
    }
L_08AA12E4:
    ctx.gpr[7] = (ctx.gpr[5] - ctx.gpr[21]);
    goto L_08AA12E8;
L_08AA12E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AA1318;
      }
      goto L_08AA12F0;
    }
L_08AA12F0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08AA1BDC;
      }
      goto L_08AA12F8;
    }
L_08AA12F8:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), ctx.gpr[5]);
    goto L_08AA1318;
L_08AA1318:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
        goto L_08AA1334;
    }
    goto L_08AA1334;
L_08AA1334:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[22] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AA1344;
      }
      goto L_08AA133C;
    }
L_08AA133C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA1354;
      }
      goto L_08AA1344;
    }
L_08AA1344:
    ctx.gpr[4] = (ctx.gpr[20] & 2u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
        goto L_08AA1358;
    }
    goto L_08AA1350;
L_08AA1350:
    ctx.gpr[22] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    goto L_08AA1354;
L_08AA1354:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    goto L_08AA1358;
L_08AA1358:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[30] - ctx.gpr[22]);
      if (branch_taken) {
          goto L_08AA14EC;
      }
      goto L_08AA1360;
    }
L_08AA1360:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA14EC;
      }
      goto L_08AA1368;
    }
L_08AA1368:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
      if (branch_taken) {
          goto L_08AA142C;
      }
      goto L_08AA1370;
    }
L_08AA1370:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA13EC;
    }
    goto L_08AA1378;
L_08AA1378:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA13BC;
      }
      goto L_08AA1388;
    }
L_08AA1388:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AA1398u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA1398u) goto L_08AA1398;
    return;
L_08AA1398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA141C;
      }
      goto L_08AA13BC;
    }
L_08AA13BC:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA13CCu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA13CCu) goto L_08AA13CC;
    return;
L_08AA13CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA141C;
      }
      goto L_08AA13EC;
    }
L_08AA13EC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA1404;
    }
    goto L_08AA13F4;
L_08AA13F4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA1400;
      }
      goto L_08AA13FC;
    }
L_08AA13FC:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AA1400;
L_08AA1400:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AA1404;
L_08AA1404:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AA1414u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA05FC;
L_08AA1414:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AA141C;
L_08AA141C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1370;
      }
      goto L_08AA142C;
    }
L_08AA142C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA14B0;
    }
    goto L_08AA1434;
L_08AA1434:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA147C;
      }
      goto L_08AA1444;
    }
L_08AA1444:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AA1454u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA1454u) goto L_08AA1454;
    return;
L_08AA1454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[19]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08AA14EC;
      }
      goto L_08AA147C;
    }
L_08AA147C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA148Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA148Cu) goto L_08AA148C;
    return;
L_08AA148C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08AA14EC;
      }
      goto L_08AA14B0;
    }
L_08AA14B0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA14D0;
      }
      goto L_08AA14B8;
    }
L_08AA14B8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA14D0;
      }
      goto L_08AA14C0;
    }
L_08AA14C0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AA14D0;
L_08AA14D0:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA14E0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA05FC;
L_08AA14E0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AA14EC;
L_08AA14EC:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(388));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AA15B4;
      }
      goto L_08AA14FC;
    }
L_08AA14FC:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA1578;
    }
    goto L_08AA1504;
L_08AA1504:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA1548;
      }
      goto L_08AA1514;
    }
L_08AA1514:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AA1524u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA1524u) goto L_08AA1524;
    return;
L_08AA1524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA167C;
      }
      goto L_08AA1548;
    }
L_08AA1548:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA1558u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA1558u) goto L_08AA1558;
    return;
L_08AA1558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA167C;
      }
      goto L_08AA1578;
    }
L_08AA1578:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA1598;
      }
      goto L_08AA1580;
    }
L_08AA1580:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA1598;
      }
      goto L_08AA1588;
    }
L_08AA1588:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AA1598;
L_08AA1598:
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AA15A8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA05FC;
L_08AA15A8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA167C;
      }
      goto L_08AA15B4;
    }
L_08AA15B4:
    ctx.gpr[4] = (ctx.gpr[20] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 48u);
      if (branch_taken) {
          goto L_08AA167C;
      }
      goto L_08AA15C0;
    }
L_08AA15C0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(388), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(389), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08AA1640;
      }
      goto L_08AA15CC;
    }
L_08AA15CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA1610;
      }
      goto L_08AA15DC;
    }
L_08AA15DC:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AA15ECu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA15ECu) goto L_08AA15EC;
    return;
L_08AA15EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA167C;
      }
      goto L_08AA1610;
    }
L_08AA1610:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA1620u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA1620u) goto L_08AA1620;
    return;
L_08AA1620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA167C;
      }
      goto L_08AA1640;
    }
L_08AA1640:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA1664;
      }
      goto L_08AA164C;
    }
L_08AA164C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA1664;
      }
      goto L_08AA1654;
    }
L_08AA1654:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AA1664;
L_08AA1664:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AA1674u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA05FC;
L_08AA1674:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AA167C;
L_08AA167C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[4] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA180C;
      }
      goto L_08AA168C;
    }
L_08AA168C:
    ctx.gpr[16] = (ctx.gpr[30] - ctx.gpr[22]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA180C;
      }
      goto L_08AA1698;
    }
L_08AA1698:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
      if (branch_taken) {
          goto L_08AA175C;
      }
      goto L_08AA16A0;
    }
L_08AA16A0:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA171C;
    }
    goto L_08AA16A8;
L_08AA16A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA16EC;
      }
      goto L_08AA16B8;
    }
L_08AA16B8:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA16C8u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA16C8u) goto L_08AA16C8;
    return;
L_08AA16C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA174C;
      }
      goto L_08AA16EC;
    }
L_08AA16EC:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA16FCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA16FCu) goto L_08AA16FC;
    return;
L_08AA16FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA174C;
      }
      goto L_08AA171C;
    }
L_08AA171C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA1734;
    }
    goto L_08AA1724;
L_08AA1724:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA1734;
    }
    goto L_08AA172C;
L_08AA172C:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AA1734;
L_08AA1734:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AA1744u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA05FC;
L_08AA1744:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AA174C;
L_08AA174C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA16A0;
      }
      goto L_08AA175C;
    }
L_08AA175C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA17D8;
    }
    goto L_08AA1764;
L_08AA1764:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA17A8;
      }
      goto L_08AA1774;
    }
L_08AA1774:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA1784u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA1784u) goto L_08AA1784;
    return;
L_08AA1784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA180C;
      }
      goto L_08AA17A8;
    }
L_08AA17A8:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA17B8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA17B8u) goto L_08AA17B8;
    return;
L_08AA17B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA180C;
      }
      goto L_08AA17D8;
    }
L_08AA17D8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA17F4;
      }
      goto L_08AA17E0;
    }
L_08AA17E0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA17F4;
      }
      goto L_08AA17E8;
    }
L_08AA17E8:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AA17F4;
L_08AA17F4:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA1804u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA05FC;
L_08AA1804:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AA180C;
L_08AA180C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
      if (branch_taken) {
          goto L_08AA19A4;
      }
      goto L_08AA1820;
    }
L_08AA1820:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA18E8;
      }
      goto L_08AA182C;
    }
L_08AA182C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA18A8;
    }
    goto L_08AA1834;
L_08AA1834:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA1878;
      }
      goto L_08AA1844;
    }
L_08AA1844:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA1854u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA1854u) goto L_08AA1854;
    return;
L_08AA1854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA18D8;
      }
      goto L_08AA1878;
    }
L_08AA1878:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA1888u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA1888u) goto L_08AA1888;
    return;
L_08AA1888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA18D8;
      }
      goto L_08AA18A8;
    }
L_08AA18A8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA18C0;
    }
    goto L_08AA18B0;
L_08AA18B0:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA18C0;
    }
    goto L_08AA18B8;
L_08AA18B8:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AA18C0;
L_08AA18C0:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AA18D0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA05FC;
L_08AA18D0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AA18D8;
L_08AA18D8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA182C;
      }
      goto L_08AA18E8;
    }
L_08AA18E8:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA196C;
    }
    goto L_08AA18F0;
L_08AA18F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA1938;
      }
      goto L_08AA1900;
    }
L_08AA1900:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA1910u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA1910u) goto L_08AA1910;
    return;
L_08AA1910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AA19A4;
      }
      goto L_08AA1938;
    }
L_08AA1938:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA1948u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA1948u) goto L_08AA1948;
    return;
L_08AA1948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AA19A4;
      }
      goto L_08AA196C;
    }
L_08AA196C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AA1988;
      }
      goto L_08AA1974;
    }
L_08AA1974:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AA1988;
      }
      goto L_08AA197C;
    }
L_08AA197C:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08AA1988;
L_08AA1988:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA1998u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA05FC;
L_08AA1998:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AA19A4;
L_08AA19A4:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA1A14;
    }
    goto L_08AA19AC;
L_08AA19AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA19EC;
      }
      goto L_08AA19BC;
    }
L_08AA19BC:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AA19CCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA19CCu) goto L_08AA19CC;
    return;
L_08AA19CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA1A40;
      }
      goto L_08AA19EC;
    }
L_08AA19EC:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA19FCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA19FCu) goto L_08AA19FC;
    return;
L_08AA19FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA1A40;
      }
      goto L_08AA1A14;
    }
L_08AA1A14:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA1A30;
      }
      goto L_08AA1A1C;
    }
L_08AA1A1C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA1A30;
      }
      goto L_08AA1A24;
    }
L_08AA1A24:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AA1A30;
L_08AA1A30:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AA1A40u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA05FC;
L_08AA1A40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AA1BC0;
      }
      goto L_08AA1A4C;
    }
L_08AA1A4C:
    ctx.gpr[16] = (ctx.gpr[30] - ctx.gpr[22]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AA1BC0;
      }
      goto L_08AA1A58;
    }
L_08AA1A58:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA1B24;
      }
      goto L_08AA1A68;
    }
L_08AA1A68:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA1AE4;
    }
    goto L_08AA1A70;
L_08AA1A70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA1AB4;
      }
      goto L_08AA1A80;
    }
L_08AA1A80:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AA1A90u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA1A90u) goto L_08AA1A90;
    return;
L_08AA1A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA1B14;
      }
      goto L_08AA1AB4;
    }
L_08AA1AB4:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA1AC4u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA1AC4u) goto L_08AA1AC4;
    return;
L_08AA1AC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA1B14;
      }
      goto L_08AA1AE4;
    }
L_08AA1AE4:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA1AFC;
    }
    goto L_08AA1AEC;
L_08AA1AEC:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA1AFC;
    }
    goto L_08AA1AF4;
L_08AA1AF4:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AA1AFC;
L_08AA1AFC:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AA1B0Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA05FC;
L_08AA1B0C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AA1B14;
L_08AA1B14:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1A68;
      }
      goto L_08AA1B24;
    }
L_08AA1B24:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA1B90;
    }
    goto L_08AA1B2C;
L_08AA1B2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA1B68;
      }
      goto L_08AA1B3C;
    }
L_08AA1B3C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AA1B4Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA1B4Cu) goto L_08AA1B4C;
    return;
L_08AA1B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA1BBC;
      }
      goto L_08AA1B68;
    }
L_08AA1B68:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA1B78u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA1B78u) goto L_08AA1B78;
    return;
L_08AA1B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA1BBC;
      }
      goto L_08AA1B90;
    }
L_08AA1B90:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA1BAC;
      }
      goto L_08AA1B98;
    }
L_08AA1B98:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA1BAC;
      }
      goto L_08AA1BA0;
    }
L_08AA1BA0:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AA1BAC;
L_08AA1BAC:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA1BBCu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA05FC;
L_08AA1BBC:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08AA1BC0;
L_08AA1BC0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
        goto L_08AA1BCC;
    }
    goto L_08AA1BCC;
L_08AA1BCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA08D8;
      }
      goto L_08AA1BDC;
    }
L_08AA1BDC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    goto L_08AA1BE0;
L_08AA1BE0:
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1C00;
      }
      goto L_08AA1BEC;
    }
L_08AA1BEC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AA1C00u);
    ctx.gpr[7] = (0u | 1u);
    goto L_08AA05FC;
L_08AA1C00:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA1C34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] & ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[29] = (ctx.gpr[29] - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1CC0;
      }
      goto L_08AA1C84;
    }
L_08AA1C84:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1CC0;
      }
      goto L_08AA1C8C;
    }
L_08AA1C8C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1CC0;
      }
      goto L_08AA1C94;
    }
L_08AA1C94:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[13] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[11] = (0u | 2u);
    ctx.gpr[2] = (0u | 101u);
    ctx.gpr[3] = (0u | 69u);
    ctx.gpr[12] = (0u | 46u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[14] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[6] < ctx.gpr[13] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA1CE4;
      }
      goto L_08AA1CC0;
    }
L_08AA1CC0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[29] = (ctx.gpr[30] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA1CE4:
    if (ctx.gpr[10] != 0u) {
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
        goto L_08AA1D2C;
    }
    goto L_08AA1CEC;
L_08AA1CEC:
    if (ctx.gpr[9] == ctx.gpr[11]) {
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
        goto L_08AA1D2C;
    }
    goto L_08AA1CF4;
L_08AA1CF4:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[10] == ctx.gpr[2]) {
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
        goto L_08AA1D20;
    }
    goto L_08AA1D00;
L_08AA1D00:
    if (ctx.gpr[10] == ctx.gpr[3]) {
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
        goto L_08AA1D20;
    }
    goto L_08AA1D08;
L_08AA1D08:
    if (ctx.gpr[10] != ctx.gpr[12]) {
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
        goto L_08AA1D24;
    }
    goto L_08AA1D10;
L_08AA1D10:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[14] = (ctx.gpr[13] | 0u);
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA1D18;
    }
L_08AA1D18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA1D20;
      }
      goto L_08AA1D20;
    }
L_08AA1D20:
    ctx.gpr[13] = (ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_08AA1D24;
L_08AA1D24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[6] < ctx.gpr[13] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA1CE4;
      }
      goto L_08AA1D2C;
    }
L_08AA1D2C:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(20), ctx.gpr[14]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[11];
    ctx.gpr[10] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA1D4C;
      }
      goto L_08AA1D3C;
    }
L_08AA1D3C:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AA1D70;
      }
      goto L_08AA1D44;
    }
L_08AA1D44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
      if (branch_taken) {
          goto L_08AA1DC8;
      }
      goto L_08AA1D4C;
    }
L_08AA1D4C:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[29] = (ctx.gpr[30] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA1D70:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
    ctx.gpr[11] = (0u | 3u);
    ctx.gpr[2] = (0u | 44u);
    goto L_08AA1D7C;
L_08AA1D7C:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA1DB4;
      }
      goto L_08AA1D8C;
    }
L_08AA1D8C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[9] = (ctx.hi);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_08AA1DB4;
    }
    goto L_08AA1D9C;
L_08AA1D9C:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
        goto L_08AA1DB4;
    }
    goto L_08AA1DA4;
L_08AA1DA4:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08AA1DB4;
L_08AA1DB4:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[3] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AA1D7C;
      }
      goto L_08AA1DC4;
    }
L_08AA1DC4:
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    goto L_08AA1DC8;
L_08AA1DC8:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AA1DDCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA1DDCu) goto L_08AA1DDC;
    return;
L_08AA1DDC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[29] = (ctx.gpr[30] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA1E04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA1E5C;
      }
      goto L_08AA1E3C;
    }
L_08AA1E3C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (2223u << 16u);
      if (branch_taken) {
          goto L_08AA1F08;
      }
      goto L_08AA1E4C;
    }
L_08AA1E4C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-5208));
    ctx.gpr[20] = (2222u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2222u << 16u);
      if (branch_taken) {
          goto L_08AA1EAC;
      }
      goto L_08AA1E5C;
    }
L_08AA1E5C:
    ctx.gpr[4] = (2223u << 16u);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5208));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16416)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA1E78u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 559u, 0x0897FEF8u>(ctx, &aot_mem) && ctx.pc == 0x08AA1E78u) goto L_08AA1E78;
    return;
L_08AA1E78:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16416), 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16420), ctx.gpr[17]);
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
L_08AA1EAC:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[19]);
    goto L_08AA1EB0;
L_08AA1EB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16420)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16420)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16416)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16420), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16416), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA1EF8;
      }
      goto L_08AA1EDC;
    }
L_08AA1EDC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA1EECu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 559u, 0x0897FEF8u>(ctx, &aot_mem) && ctx.pc == 0x08AA1EECu) goto L_08AA1EEC;
    return;
L_08AA1EEC:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16420), ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16416), 0u);
      if (branch_taken) {
          goto L_08AA1F34;
      }
      goto L_08AA1EF8;
    }
L_08AA1EF8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AA1EB0;
      }
      goto L_08AA1F08;
    }
L_08AA1F08:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_08AA1F34:
    ctx.gpr[2] = (0u | 0u);
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
L_08AA1F88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16424));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16440));
    ctx.gpr[6] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7324));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7344));
    ctx.gpr[6] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-7316));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7296));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[30]);
    ctx.gpr[23] = (0u | 42u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    goto L_08AA2018;
L_08AA2018:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[21] = (0u | 37u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[19] = (2222u << 16u);
    goto L_08AA2028;
L_08AA2028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(15220)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17552)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(34));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA2044u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 243u, 0x08A9CD44u>(ctx, &aot_mem) && ctx.pc == 0x08AA2044u) goto L_08AA2044;
    return;
L_08AA2044:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    ctx.gpr[19] = (ctx.gpr[17] - ctx.gpr[20]);
        goto L_08AA2068;
    }
    goto L_08AA2050;
L_08AA2050:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AA2028;
      }
      goto L_08AA205C;
    }
L_08AA205C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[17] - ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AA2068;
      }
      goto L_08AA2068;
    }
L_08AA2068:
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2124;
      }
      goto L_08AA2074;
    }
L_08AA2074:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[6] & 512u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA20E8;
    }
    goto L_08AA2084;
L_08AA2084:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA20C0;
      }
      goto L_08AA2094;
    }
L_08AA2094:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA20A4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA20A4u) goto L_08AA20A4;
    return;
L_08AA20A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA2118;
      }
      goto L_08AA20C0;
    }
L_08AA20C0:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA20D0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA20D0u) goto L_08AA20D0;
    return;
L_08AA20D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA2118;
      }
      goto L_08AA20E8;
    }
L_08AA20E8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA2108;
      }
      goto L_08AA20F0;
    }
L_08AA20F0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA2108;
      }
      goto L_08AA20F8;
    }
L_08AA20F8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AA2108;
L_08AA2108:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA2118u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA1E04;
L_08AA2118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
    goto L_08AA2124;
L_08AA2124:
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
        goto L_08AA3108;
    }
    goto L_08AA212C;
L_08AA212C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA214C;
      }
      goto L_08AA2138;
    }
L_08AA2138:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
        goto L_08AA3108;
    }
    goto L_08AA2148;
L_08AA2148:
    ctx.gpr[4] = (0u | 0u);
    goto L_08AA214C;
L_08AA214C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[4]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08AA2168;
L_08AA2168:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    goto L_08AA2178;
L_08AA2178:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2818;
      }
      goto L_08AA2180;
    }
L_08AA2180:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2221u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7264)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA2198:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2168;
      }
      goto L_08AA21A4;
    }
L_08AA21A4:
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AA2168;
      }
      goto L_08AA21B0;
    }
L_08AA21B0:
    ctx.gpr[20] = (ctx.gpr[20] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2168;
      }
      goto L_08AA21BC;
    }
L_08AA21BC:
    ctx.gpr[20] = (ctx.gpr[20] | 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2168;
      }
      goto L_08AA21C8;
    }
L_08AA21C8:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2168;
      }
      goto L_08AA21D8;
    }
L_08AA21D8:
    ctx.gpr[22] = (0u - ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[20] | 4u);
      if (branch_taken) {
          goto L_08AA21EC;
      }
      goto L_08AA21E4;
    }
L_08AA21E4:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[20] | 4u);
    goto L_08AA21EC;
L_08AA21EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA2168;
      }
      goto L_08AA21F4;
    }
L_08AA21F4:
    ctx.gpr[4] = (0u | 43u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2168;
      }
      goto L_08AA2204;
    }
L_08AA2204:
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[23];
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA2230;
      }
      goto L_08AA2214;
    }
L_08AA2214:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08AA2228;
    }
    goto L_08AA2228;
L_08AA2228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA2168;
      }
      goto L_08AA2230;
    }
L_08AA2230:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA226C;
      }
      goto L_08AA2240;
    }
L_08AA2240:
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA2240;
      }
      goto L_08AA226C;
    }
L_08AA226C:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
        goto L_08AA227C;
    }
    goto L_08AA227C;
L_08AA227C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA2178;
      }
      goto L_08AA2284;
    }
L_08AA2284:
    ctx.gpr[20] = (ctx.gpr[20] | 128u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2168;
      }
      goto L_08AA2290;
    }
L_08AA2290:
    ctx.gpr[5] = (0u | 0u);
    goto L_08AA2294;
L_08AA2294:
    ctx.gpr[4] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA2294;
      }
      goto L_08AA22C0;
    }
L_08AA22C0:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-32));
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(89) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA2178;
      }
      goto L_08AA22D0;
    }
L_08AA22D0:
    ctx.gpr[20] = (ctx.gpr[20] | 64u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2168;
      }
      goto L_08AA22DC;
    }
L_08AA22DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 108u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA22FC;
      }
      goto L_08AA22EC;
    }
L_08AA22EC:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2168;
      }
      goto L_08AA22FC;
    }
L_08AA22FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
      if (branch_taken) {
          goto L_08AA2168;
      }
      goto L_08AA2304;
    }
L_08AA2304:
    ctx.gpr[20] = (ctx.gpr[20] | 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA2168;
      }
      goto L_08AA2310;
    }
L_08AA2310:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    ctx.gpr[8] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AA2850;
      }
      goto L_08AA2350;
    }
L_08AA2350:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
      if (branch_taken) {
          goto L_08AA2368;
      }
      goto L_08AA2360;
    }
L_08AA2360:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
    goto L_08AA2368;
L_08AA2368:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AA237C;
      }
      goto L_08AA2370;
    }
L_08AA2370:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA23B4;
      }
      goto L_08AA237C;
    }
L_08AA237C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AA2390;
      }
      goto L_08AA2384;
    }
L_08AA2384:
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08AA23B0;
      }
      goto L_08AA2390;
    }
L_08AA2390:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA23AC;
      }
      goto L_08AA2398;
    }
L_08AA2398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
      if (branch_taken) {
          goto L_08AA23B0;
      }
      goto L_08AA23AC;
    }
L_08AA23AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    goto L_08AA23B0;
L_08AA23B0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08AA23B4;
L_08AA23B4:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[31] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA23CC;
      }
      goto L_08AA23C0;
    }
L_08AA23C0:
    ctx.gpr[4] = (0u | 45u);
    ctx.gpr[5] = (0u - ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AA23CC;
L_08AA23CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AA267C;
      }
      goto L_08AA23D4;
    }
L_08AA23D4:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[20] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_08AA23F8;
      }
      goto L_08AA23E4;
    }
L_08AA23E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA2018;
      }
      goto L_08AA23F8;
    }
L_08AA23F8:
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AA2418;
      }
      goto L_08AA2404;
    }
L_08AA2404:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA2018;
      }
      goto L_08AA2418;
    }
L_08AA2418:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
        goto L_08AA2434;
    }
    goto L_08AA2420;
L_08AA2420:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AA2018;
      }
      goto L_08AA2434;
    }
L_08AA2434:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA2018;
      }
      goto L_08AA2444;
    }
L_08AA2444:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
      if (branch_taken) {
          goto L_08AA245C;
      }
      goto L_08AA2454;
    }
L_08AA2454:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
    goto L_08AA245C;
L_08AA245C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AA2470;
      }
      goto L_08AA2464;
    }
L_08AA2464:
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08AA24A0;
      }
      goto L_08AA2470;
    }
L_08AA2470:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AA2484;
      }
      goto L_08AA2478;
    }
L_08AA2478:
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08AA24A0;
      }
      goto L_08AA2484;
    }
L_08AA2484:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA249C;
      }
      goto L_08AA248C;
    }
L_08AA248C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_08AA24A0;
      }
      goto L_08AA249C;
    }
L_08AA249C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    goto L_08AA24A0;
L_08AA24A0:
    ctx.gpr[31] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AA2678;
      }
      goto L_08AA24AC;
    }
L_08AA24AC:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0u | 2u);
    ctx.gpr[20] = (ctx.gpr[20] | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[16] = (0u | 120u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AA2678;
      }
      goto L_08AA24D0;
    }
L_08AA24D0:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    ctx.gpr[5] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_08AA24F0;
    }
    goto L_08AA24F0;
L_08AA24F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AA2540;
      }
      goto L_08AA24F8;
    }
L_08AA24F8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AA2504u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 680u, 0x08AA75B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2504u) goto L_08AA2504;
    return;
L_08AA2504:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08AA2534;
      }
      goto L_08AA2518;
    }
L_08AA2518:
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[21]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AA255C;
      }
      goto L_08AA2528;
    }
L_08AA2528:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AA255C;
      }
      goto L_08AA2534;
    }
L_08AA2534:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AA255C;
      }
      goto L_08AA2540;
    }
L_08AA2540:
    ctx.gpr[31] = (0x08AA2548u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08AA2548u) goto L_08AA2548;
    return;
L_08AA2548:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    goto L_08AA255C;
L_08AA255C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[7]) < 0 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA2850;
      }
      goto L_08AA2570;
    }
L_08AA2570:
    ctx.gpr[20] = (ctx.gpr[20] | 16u);
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08AA2590;
      }
      goto L_08AA2584;
    }
L_08AA2584:
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    goto L_08AA2590;
L_08AA2590:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AA25A4;
      }
      goto L_08AA2598;
    }
L_08AA2598:
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08AA25D4;
      }
      goto L_08AA25A4;
    }
L_08AA25A4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AA25B8;
      }
      goto L_08AA25AC;
    }
L_08AA25AC:
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08AA25D4;
      }
      goto L_08AA25B8;
    }
L_08AA25B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA25D0;
      }
      goto L_08AA25C0;
    }
L_08AA25C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_08AA25D4;
      }
      goto L_08AA25D0;
    }
L_08AA25D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    goto L_08AA25D4;
L_08AA25D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    ctx.gpr[31] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AA2678;
      }
      goto L_08AA25E4;
    }
L_08AA25E4:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[20] & 1u);
      if (branch_taken) {
          goto L_08AA2608;
      }
      goto L_08AA25F8;
    }
L_08AA25F8:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[20] & 32u);
    ctx.gpr[7] = (ctx.gpr[20] & 1u);
    goto L_08AA2608;
L_08AA2608:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 16u);
      if (branch_taken) {
          goto L_08AA261C;
      }
      goto L_08AA2610;
    }
L_08AA2610:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA2650;
      }
      goto L_08AA261C;
    }
L_08AA261C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 64u);
      if (branch_taken) {
          goto L_08AA2630;
      }
      goto L_08AA2624;
    }
L_08AA2624:
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
      if (branch_taken) {
          goto L_08AA264C;
      }
      goto L_08AA2630;
    }
L_08AA2630:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA2648;
      }
      goto L_08AA2638;
    }
L_08AA2638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_08AA264C;
      }
      goto L_08AA2648;
    }
L_08AA2648:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    goto L_08AA264C;
L_08AA264C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08AA2650;
L_08AA2650:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    ctx.gpr[31] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AA2678;
      }
      goto L_08AA2668;
    }
L_08AA2668:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
      if (branch_taken) {
          goto L_08AA2678;
      }
      goto L_08AA2670;
    }
L_08AA2670:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    ctx.gpr[20] = (ctx.gpr[20] | 2u);
    goto L_08AA2678;
L_08AA2678:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    goto L_08AA267C;
L_08AA267C:
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AA2690;
      }
      goto L_08AA2688;
    }
L_08AA2688:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[20] = (ctx.gpr[20] & ctx.gpr[4]);
    goto L_08AA2690;
L_08AA2690:
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    ctx.gpr[6] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AA27B0;
      }
      goto L_08AA26A8;
    }
L_08AA26A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[31]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[31]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA26E4;
      }
      goto L_08AA26B0;
    }
L_08AA26B0:
    if (static_cast<std::int32_t>(ctx.gpr[31]) >= 0) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
        goto L_08AA2700;
    }
    goto L_08AA26B8;
L_08AA26B8:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_08AA26BC;
L_08AA26BC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    ctx.gpr[31] = (0x08AA26C8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08AA26C8u) goto L_08AA26C8;
    return;
L_08AA26C8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA2850;
      }
      goto L_08AA26E4;
    }
L_08AA26E4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[31]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA2740;
      }
      goto L_08AA26EC;
    }
L_08AA26EC:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
        goto L_08AA26BC;
    }
    goto L_08AA26F4;
L_08AA26F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 15u);
      if (branch_taken) {
          goto L_08AA2798;
      }
      goto L_08AA26FC;
    }
L_08AA26FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    goto L_08AA2700;
L_08AA2700:
    ctx.gpr[6] = (ctx.gpr[20] & 1u);
    goto L_08AA2704;
L_08AA2704:
    ctx.gpr[4] = (ctx.gpr[5] & 7u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 3u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AA2704;
      }
      goto L_08AA271C;
    }
L_08AA271C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08AA27B0;
      }
      goto L_08AA2724;
    }
L_08AA2724:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 48u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
        goto L_08AA27B4;
    }
    goto L_08AA2734;
L_08AA2734:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AA27B0;
      }
      goto L_08AA2740;
    }
L_08AA2740:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 10u);
      if (branch_taken) {
          goto L_08AA2780;
      }
      goto L_08AA2750;
    }
L_08AA2750:
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.hi);
    // nop
    // nop
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[6]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2750;
      }
      goto L_08AA2780;
    }
L_08AA2780:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08AA27B0;
      }
      goto L_08AA2794;
    }
L_08AA2794:
    ctx.gpr[4] = (ctx.gpr[5] & 15u);
    goto L_08AA2798;
L_08AA2798:
    ctx.gpr[4] = (ctx.gpr[15] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AA2794;
      }
      goto L_08AA27B0;
    }
L_08AA27B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[15]);
    goto L_08AA27B4;
L_08AA27B4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[31] != ctx.gpr[4];
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08AA27FC;
      }
      goto L_08AA27C0;
    }
L_08AA27C0:
    ctx.gpr[4] = (ctx.gpr[20] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[21]);
      if (branch_taken) {
          goto L_08AA2800;
      }
      goto L_08AA27CC;
    }
L_08AA27CC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AA27E0u);
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    goto L_08AA1C34;
L_08AA27E0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA2850;
      }
      goto L_08AA27FC;
    }
L_08AA27FC:
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[21]);
    goto L_08AA2800;
L_08AA2800:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA2850;
      }
      goto L_08AA2818;
    }
L_08AA2818:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_08AA3104;
      }
      goto L_08AA2820;
    }
L_08AA2820:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[20] & 132u);
    ctx.gpr[8] = (ctx.gpr[20] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[8]);
    goto L_08AA2850;
L_08AA2850:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
        goto L_08AA285C;
    }
    goto L_08AA285C;
L_08AA285C:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AA286C;
      }
      goto L_08AA2864;
    }
L_08AA2864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA287C;
      }
      goto L_08AA286C;
    }
L_08AA286C:
    ctx.gpr[4] = (ctx.gpr[20] & 2u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
        goto L_08AA2880;
    }
    goto L_08AA2878;
L_08AA2878:
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    goto L_08AA287C;
L_08AA287C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    goto L_08AA2880;
L_08AA2880:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AA2A1C;
      }
      goto L_08AA2888;
    }
L_08AA2888:
    ctx.gpr[19] = (ctx.gpr[22] - ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AA2A1C;
      }
      goto L_08AA2894;
    }
L_08AA2894:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA295C;
      }
      goto L_08AA28A0;
    }
L_08AA28A0:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA291C;
    }
    goto L_08AA28A8;
L_08AA28A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA28EC;
      }
      goto L_08AA28B8;
    }
L_08AA28B8:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08AA28C8u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA28C8u) goto L_08AA28C8;
    return;
L_08AA28C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA294C;
      }
      goto L_08AA28EC;
    }
L_08AA28EC:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA28FCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA28FCu) goto L_08AA28FC;
    return;
L_08AA28FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA294C;
      }
      goto L_08AA291C;
    }
L_08AA291C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA2934;
    }
    goto L_08AA2924;
L_08AA2924:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA2930;
      }
      goto L_08AA292C;
    }
L_08AA292C:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08AA2930;
L_08AA2930:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AA2934;
L_08AA2934:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AA2944u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA1E04;
L_08AA2944:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AA294C;
L_08AA294C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA28A0;
      }
      goto L_08AA295C;
    }
L_08AA295C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_08AA29DC;
      }
      goto L_08AA2964;
    }
L_08AA2964:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA29AC;
      }
      goto L_08AA2974;
    }
L_08AA2974:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AA2984u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA2984u) goto L_08AA2984;
    return;
L_08AA2984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[19]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08AA2A1C;
      }
      goto L_08AA29AC;
    }
L_08AA29AC:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA29B8u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA29B8u) goto L_08AA29B8;
    return;
L_08AA29B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
      if (branch_taken) {
          goto L_08AA2A1C;
      }
      goto L_08AA29DC;
    }
L_08AA29DC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA2A00;
      }
      goto L_08AA29E8;
    }
L_08AA29E8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA2A00;
      }
      goto L_08AA29F0;
    }
L_08AA29F0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AA2A00;
L_08AA2A00:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA2A10u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA1E04;
L_08AA2A10:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AA2A1C;
L_08AA2A1C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AA2AE0;
      }
      goto L_08AA2A2C;
    }
L_08AA2A2C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA2AA4;
    }
    goto L_08AA2A34;
L_08AA2A34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA2A78;
      }
      goto L_08AA2A44;
    }
L_08AA2A44:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08AA2A54u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA2A54u) goto L_08AA2A54;
    return;
L_08AA2A54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA2BA4;
      }
      goto L_08AA2A78;
    }
L_08AA2A78:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA2A84u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA2A84u) goto L_08AA2A84;
    return;
L_08AA2A84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA2BA4;
      }
      goto L_08AA2AA4;
    }
L_08AA2AA4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA2AC4;
      }
      goto L_08AA2AAC;
    }
L_08AA2AAC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA2AC4;
      }
      goto L_08AA2AB4;
    }
L_08AA2AB4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AA2AC4;
L_08AA2AC4:
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08AA2AD4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA1E04;
L_08AA2AD4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA2BA4;
      }
      goto L_08AA2AE0;
    }
L_08AA2AE0:
    ctx.gpr[4] = (ctx.gpr[20] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 48u);
      if (branch_taken) {
          goto L_08AA2BA4;
      }
      goto L_08AA2AEC;
    }
L_08AA2AEC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(81), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_08AA2B68;
      }
      goto L_08AA2AF8;
    }
L_08AA2AF8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA2B3C;
      }
      goto L_08AA2B08;
    }
L_08AA2B08:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AA2B18u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA2B18u) goto L_08AA2B18;
    return;
L_08AA2B18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA2BA4;
      }
      goto L_08AA2B3C;
    }
L_08AA2B3C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA2B48u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA2B48u) goto L_08AA2B48;
    return;
L_08AA2B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA2BA4;
      }
      goto L_08AA2B68;
    }
L_08AA2B68:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA2B8C;
      }
      goto L_08AA2B74;
    }
L_08AA2B74:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA2B8C;
      }
      goto L_08AA2B7C;
    }
L_08AA2B7C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AA2B8C;
L_08AA2B8C:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AA2B9Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA1E04;
L_08AA2B9C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AA2BA4;
L_08AA2BA4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA2D34;
      }
      goto L_08AA2BB4;
    }
L_08AA2BB4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (ctx.gpr[22] - ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA2D34;
      }
      goto L_08AA2BC4;
    }
L_08AA2BC4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2C88;
      }
      goto L_08AA2BCC;
    }
L_08AA2BCC:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA2C48;
    }
    goto L_08AA2BD4;
L_08AA2BD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA2C18;
      }
      goto L_08AA2BE4;
    }
L_08AA2BE4:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA2BF4u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA2BF4u) goto L_08AA2BF4;
    return;
L_08AA2BF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA2C78;
      }
      goto L_08AA2C18;
    }
L_08AA2C18:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA2C28u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA2C28u) goto L_08AA2C28;
    return;
L_08AA2C28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA2C78;
      }
      goto L_08AA2C48;
    }
L_08AA2C48:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA2C60;
    }
    goto L_08AA2C50;
L_08AA2C50:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA2C60;
    }
    goto L_08AA2C58;
L_08AA2C58:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AA2C60;
L_08AA2C60:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AA2C70u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA1E04;
L_08AA2C70:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AA2C78;
L_08AA2C78:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2BCC;
      }
      goto L_08AA2C88;
    }
L_08AA2C88:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA2D00;
    }
    goto L_08AA2C90;
L_08AA2C90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA2CD4;
      }
      goto L_08AA2CA0;
    }
L_08AA2CA0:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA2CB0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA2CB0u) goto L_08AA2CB0;
    return;
L_08AA2CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA2D34;
      }
      goto L_08AA2CD4;
    }
L_08AA2CD4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA2CE0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA2CE0u) goto L_08AA2CE0;
    return;
L_08AA2CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA2D34;
      }
      goto L_08AA2D00;
    }
L_08AA2D00:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA2D1C;
      }
      goto L_08AA2D08;
    }
L_08AA2D08:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA2D1C;
      }
      goto L_08AA2D10;
    }
L_08AA2D10:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AA2D1C;
L_08AA2D1C:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2D2Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA1E04;
L_08AA2D2C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AA2D34;
L_08AA2D34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[7]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA2EC4;
      }
      goto L_08AA2D48;
    }
L_08AA2D48:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2E0C;
      }
      goto L_08AA2D50;
    }
L_08AA2D50:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA2DCC;
    }
    goto L_08AA2D58;
L_08AA2D58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA2D9C;
      }
      goto L_08AA2D68;
    }
L_08AA2D68:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA2D78u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA2D78u) goto L_08AA2D78;
    return;
L_08AA2D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA2DFC;
      }
      goto L_08AA2D9C;
    }
L_08AA2D9C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA2DACu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA2DACu) goto L_08AA2DAC;
    return;
L_08AA2DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA2DFC;
      }
      goto L_08AA2DCC;
    }
L_08AA2DCC:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA2DE4;
    }
    goto L_08AA2DD4;
L_08AA2DD4:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA2DE4;
    }
    goto L_08AA2DDC;
L_08AA2DDC:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AA2DE4;
L_08AA2DE4:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AA2DF4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA1E04;
L_08AA2DF4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AA2DFC;
L_08AA2DFC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2D50;
      }
      goto L_08AA2E0C;
    }
L_08AA2E0C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA2E8C;
    }
    goto L_08AA2E14;
L_08AA2E14:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA2E5C;
      }
      goto L_08AA2E24;
    }
L_08AA2E24:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA2E34u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA2E34u) goto L_08AA2E34;
    return;
L_08AA2E34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AA2EC4;
      }
      goto L_08AA2E5C;
    }
L_08AA2E5C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA2E68u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA2E68u) goto L_08AA2E68;
    return;
L_08AA2E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08AA2EC4;
      }
      goto L_08AA2E8C;
    }
L_08AA2E8C:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AA2EA8;
      }
      goto L_08AA2E94;
    }
L_08AA2E94:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AA2EA8;
      }
      goto L_08AA2E9C;
    }
L_08AA2E9C:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08AA2EA8;
L_08AA2EA8:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2EB8u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA1E04;
L_08AA2EB8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AA2EC4;
L_08AA2EC4:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA2F34;
    }
    goto L_08AA2ECC;
L_08AA2ECC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA2F0C;
      }
      goto L_08AA2EDC;
    }
L_08AA2EDC:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AA2EECu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA2EECu) goto L_08AA2EEC;
    return;
L_08AA2EEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA2F60;
      }
      goto L_08AA2F0C;
    }
L_08AA2F0C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA2F1Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA2F1Cu) goto L_08AA2F1C;
    return;
L_08AA2F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA2F60;
      }
      goto L_08AA2F34;
    }
L_08AA2F34:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA2F50;
      }
      goto L_08AA2F3C;
    }
L_08AA2F3C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA2F50;
      }
      goto L_08AA2F44;
    }
L_08AA2F44:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AA2F50;
L_08AA2F50:
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AA2F60u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA1E04;
L_08AA2F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
        goto L_08AA30E8;
    }
    goto L_08AA2F6C;
L_08AA2F6C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (ctx.gpr[22] - ctx.gpr[16]);
    if (static_cast<std::int32_t>(ctx.gpr[16]) <= 0) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
        goto L_08AA30E8;
    }
    goto L_08AA2F7C;
L_08AA2F7C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_08AA304C;
      }
      goto L_08AA2F90;
    }
L_08AA2F90:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA300C;
    }
    goto L_08AA2F98;
L_08AA2F98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA2FDC;
      }
      goto L_08AA2FA8;
    }
L_08AA2FA8:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA2FB8u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA2FB8u) goto L_08AA2FB8;
    return;
L_08AA2FB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA303C;
      }
      goto L_08AA2FDC;
    }
L_08AA2FDC:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA2FECu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA2FECu) goto L_08AA2FEC;
    return;
L_08AA2FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
      if (branch_taken) {
          goto L_08AA303C;
      }
      goto L_08AA300C;
    }
L_08AA300C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA3024;
    }
    goto L_08AA3014;
L_08AA3014:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA3024;
    }
    goto L_08AA301C;
L_08AA301C:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    goto L_08AA3024;
L_08AA3024:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08AA3034u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA1E04;
L_08AA3034:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[5] = (ctx.gpr[6] & 512u);
    goto L_08AA303C;
L_08AA303C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 17 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2F90;
      }
      goto L_08AA304C;
    }
L_08AA304C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
        goto L_08AA30B8;
    }
    goto L_08AA3054;
L_08AA3054:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA3090;
      }
      goto L_08AA3064;
    }
L_08AA3064:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA3074u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA3074u) goto L_08AA3074;
    return;
L_08AA3074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA30E4;
      }
      goto L_08AA3090;
    }
L_08AA3090:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08AA30A0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08AA30A0u) goto L_08AA30A0;
    return;
L_08AA30A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA30E4;
      }
      goto L_08AA30B8;
    }
L_08AA30B8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA30D4;
      }
      goto L_08AA30C0;
    }
L_08AA30C0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA30D4;
      }
      goto L_08AA30C8;
    }
L_08AA30C8:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08AA30D4;
L_08AA30D4:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA30E4u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08AA1E04;
L_08AA30E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_08AA30E8;
L_08AA30E8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
        goto L_08AA30F4;
    }
    goto L_08AA30F4;
L_08AA30F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA2018;
      }
      goto L_08AA3104;
    }
L_08AA3104:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    goto L_08AA3108;
L_08AA3108:
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3128;
      }
      goto L_08AA3114;
    }
L_08AA3114:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(14))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AA3128u);
    ctx.gpr[7] = (0u | 1u);
    goto L_08AA1E04;
L_08AA3128:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA315C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    ctx.gpr[22] = (2222u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(16456));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[18] = (ctx.gpr[6] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(17492)));
    ctx.gpr[23] = (2222u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17496)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.gpr[5] = (0u | 4096u);
    ctx.gpr[30] = (ctx.gpr[21] + ctx.gpr[18]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[16];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA31E4;
      }
      goto L_08AA31D4;
    }
L_08AA31D4:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(4096));
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-4096));
    ctx.gpr[20] = (ctx.gpr[20] & ctx.gpr[4]);
    goto L_08AA31E4;
L_08AA31E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AA31F4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 401u, 0x08AA5FECu>(ctx, &aot_mem) && ctx.pc == 0x08AA31F4u) goto L_08AA31F4;
    return;
L_08AA31F4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[30] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA3414;
      }
      goto L_08AA3200;
    }
L_08AA3200:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (2222u << 16u);
      if (branch_taken) {
          goto L_08AA3214;
      }
      goto L_08AA3208;
    }
L_08AA3208:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AA3414;
      }
      goto L_08AA3210;
    }
L_08AA3210:
    ctx.gpr[19] = (2222u << 16u);
    goto L_08AA3214;
L_08AA3214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17508)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[30];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(17508), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA323C;
      }
      goto L_08AA3228;
    }
L_08AA3228:
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA33E4;
      }
      goto L_08AA323C;
    }
L_08AA323C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(17496)));
    if (ctx.gpr[4] != ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17508)));
        goto L_08AA3250;
    }
    goto L_08AA3248;
L_08AA3248:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(17496), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AA325C;
      }
      goto L_08AA3250;
    }
L_08AA3250:
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(17508), ctx.gpr[4]);
    goto L_08AA325C;
L_08AA325C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_08AA3284;
      }
      goto L_08AA326C;
    }
L_08AA326C:
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 4095u);
      if (branch_taken) {
          goto L_08AA328C;
      }
      goto L_08AA3284;
    }
L_08AA3284:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] & 4095u);
    goto L_08AA328C;
L_08AA328C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AA32B0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 401u, 0x08AA5FECu>(ctx, &aot_mem) && ctx.pc == 0x08AA32B0u) goto L_08AA32B0;
    return;
L_08AA32B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17508)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AA32EC;
      }
      goto L_08AA32C4;
    }
L_08AA32C4:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(17508), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[22];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA334C;
      }
      goto L_08AA32E4;
    }
L_08AA32E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17508)));
      if (branch_taken) {
          goto L_08AA33E8;
      }
      goto L_08AA32EC;
    }
L_08AA32EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(17508), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AA3314u);
    ctx.gpr[5] = (0u - ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 401u, 0x08AA5FECu>(ctx, &aot_mem) && ctx.pc == 0x08AA3314u) goto L_08AA3314;
    return;
L_08AA3314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(17496), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA334C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12));
      if (branch_taken) {
          goto L_08AA339C;
      }
      goto L_08AA335C;
    }
L_08AA335C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[21] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA33D8;
      }
      goto L_08AA3394;
    }
L_08AA3394:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17508)));
      if (branch_taken) {
          goto L_08AA33E8;
      }
      goto L_08AA339C;
    }
L_08AA339C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA33D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AA33E4u);
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    goto L_08AA3A78;
L_08AA33E4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(17508)));
    goto L_08AA33E8;
L_08AA33E8:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17500)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[19] ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17500), ctx.gpr[19]);
        goto L_08AA3400;
    }
    goto L_08AA3400;
L_08AA3400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17504)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3414;
      }
      goto L_08AA3410;
    }
L_08AA3410:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17504), ctx.gpr[19]);
    goto L_08AA3414;
L_08AA3414:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(19));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 31 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16456));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08AA3474;
      }
      goto L_08AA346C;
    }
L_08AA346C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[8] & ctx.gpr[5]);
    goto L_08AA3474;
L_08AA3474:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[31] = (0x08AA3488u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 177u, 0x08AA4D54u>(ctx, &aot_mem) && ctx.pc == 0x08AA3488u) goto L_08AA3488;
    return;
L_08AA3488:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (ctx.gpr[8] < static_cast<std::uint32_t>(504) ? 1u : 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AA3510;
      }
      goto L_08AA34A4;
    }
L_08AA34A4:
    ctx.gpr[9] = (ctx.gpr[5] >> 3u);
    ctx.gpr[10] = (ctx.gpr[9] << 3u);
    ctx.gpr[11] = (ctx.gpr[10] + ctx.gpr[6]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    ctx.gpr[13] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AA34C8;
      }
      goto L_08AA34BC;
    }
L_08AA34BC:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AA3620;
      }
      goto L_08AA34C8;
    }
L_08AA34C8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] | 1u);
    ctx.gpr[31] = (0x08AA34F8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 181u, 0x08AA4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AA34F8u) goto L_08AA34F8;
    return;
L_08AA34F8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3510:
    ctx.gpr[11] = (ctx.gpr[5] >> 9u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (ctx.gpr[11] < static_cast<std::uint32_t>(5) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA3524;
      }
      goto L_08AA351C;
    }
L_08AA351C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (ctx.gpr[5] >> 3u);
      if (branch_taken) {
          goto L_08AA3584;
      }
      goto L_08AA3524;
    }
L_08AA3524:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[11] < static_cast<std::uint32_t>(21) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA3538;
      }
      goto L_08AA352C;
    }
L_08AA352C:
    ctx.gpr[11] = (ctx.gpr[5] >> 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08AA3584;
      }
      goto L_08AA3538;
    }
L_08AA3538:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[11] < static_cast<std::uint32_t>(85) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA3548;
      }
      goto L_08AA3540;
    }
L_08AA3540:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(91));
      if (branch_taken) {
          goto L_08AA3584;
      }
      goto L_08AA3548;
    }
L_08AA3548:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[11] < static_cast<std::uint32_t>(341) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA355C;
      }
      goto L_08AA3550;
    }
L_08AA3550:
    ctx.gpr[11] = (ctx.gpr[5] >> 12u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(110));
      if (branch_taken) {
          goto L_08AA3584;
      }
      goto L_08AA355C;
    }
L_08AA355C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
      if (branch_taken) {
          goto L_08AA3570;
      }
      goto L_08AA3564;
    }
L_08AA3564:
    ctx.gpr[11] = (ctx.gpr[5] >> 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(119));
      if (branch_taken) {
          goto L_08AA3584;
      }
      goto L_08AA3570;
    }
L_08AA3570:
    ctx.gpr[9] = (ctx.gpr[9] < static_cast<std::uint32_t>(1365) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[11] = (0u | 126u);
      if (branch_taken) {
          goto L_08AA3584;
      }
      goto L_08AA357C;
    }
L_08AA357C:
    ctx.gpr[11] = (ctx.gpr[5] >> 18u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(124));
    goto L_08AA3584;
L_08AA3584:
    ctx.gpr[9] = (ctx.gpr[11] | 0u);
    ctx.gpr[12] = (ctx.gpr[9] << 3u);
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[6]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[12];
    ctx.gpr[13] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AA3618;
      }
      goto L_08AA359C;
    }
L_08AA359C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    goto L_08AA35A0;
L_08AA35A0:
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[13] = (static_cast<std::int32_t>(ctx.gpr[10]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.gpr[13] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_08AA35BC;
      }
      goto L_08AA35B4;
    }
L_08AA35B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[11] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA3614;
      }
      goto L_08AA35BC;
    }
L_08AA35BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) >= 0;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AA35D8;
      }
      goto L_08AA35C4;
    }
L_08AA35C4:
    ctx.gpr[3] = (ctx.gpr[10] | 0u);
    if (ctx.gpr[3] != ctx.gpr[12]) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
        goto L_08AA35A0;
    }
    goto L_08AA35D0;
L_08AA35D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[13] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AA3618;
      }
      goto L_08AA35D8;
    }
L_08AA35D8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[3] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] | 1u);
    ctx.gpr[31] = (0x08AA35FCu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 181u, 0x08AA4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AA35FCu) goto L_08AA35FC;
    return;
L_08AA35FC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3614:
    ctx.gpr[13] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    goto L_08AA3618;
L_08AA3618:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    goto L_08AA3620;
L_08AA3620:
    ctx.gpr[12] = (ctx.gpr[10] | 0u);
    if (ctx.gpr[12] == ctx.gpr[13]) {
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 2u));
        goto L_08AA3800;
    }
    goto L_08AA362C;
L_08AA362C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (ctx.gpr[3] & ctx.gpr[7]);
    ctx.gpr[11] = (ctx.gpr[3] - ctx.gpr[5]);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < 16 ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[7] = (ctx.gpr[5] | 1u);
        goto L_08AA36D4;
    }
    goto L_08AA3644;
L_08AA3644:
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(12), ctx.gpr[13]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) >= 0;
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(8), ctx.gpr[13]);
      if (branch_taken) {
          goto L_08AA36A4;
      }
      goto L_08AA3650;
    }
L_08AA3650:
    ctx.gpr[10] = (ctx.gpr[3] < static_cast<std::uint32_t>(512) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[2] = (ctx.gpr[3] >> 9u);
      if (branch_taken) {
          goto L_08AA371C;
      }
      goto L_08AA365C;
    }
L_08AA365C:
    ctx.gpr[10] = (ctx.gpr[3] >> 3u);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 2u));
    ctx.gpr[11] = (ctx.gpr[11] >> 30u);
    ctx.gpr[11] = (ctx.gpr[10] + ctx.gpr[11]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 2u));
    ctx.gpr[3] = (0u | 1u);
    ctx.gpr[11] = (ctx.gpr[3] << (ctx.gpr[11] & 31u));
    ctx.gpr[11] = (ctx.gpr[2] | ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] << 3u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[6]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), ctx.gpr[12]);
      if (branch_taken) {
          goto L_08AA37FC;
      }
      goto L_08AA36A4;
    }
L_08AA36A4:
    ctx.gpr[5] = (ctx.gpr[12] + ctx.gpr[3]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[12]);
    ctx.gpr[6] = (ctx.gpr[6] | 1u);
    ctx.gpr[31] = (0x08AA36BCu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 181u, 0x08AA4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AA36BCu) goto L_08AA36BC;
    return;
L_08AA36BC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA36D4:
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[13]);
    ctx.gpr[6] = (ctx.gpr[11] | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[11]);
    ctx.gpr[31] = (0x08AA3704u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 181u, 0x08AA4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AA3704u) goto L_08AA3704;
    return;
L_08AA3704:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA371C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[10] = (ctx.gpr[2] < static_cast<std::uint32_t>(5) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA372C;
      }
      goto L_08AA3724;
    }
L_08AA3724:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[3] >> 3u);
      if (branch_taken) {
          goto L_08AA378C;
      }
      goto L_08AA372C;
    }
L_08AA372C:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[2] < static_cast<std::uint32_t>(21) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA3740;
      }
      goto L_08AA3734;
    }
L_08AA3734:
    ctx.gpr[2] = (ctx.gpr[3] >> 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08AA378C;
      }
      goto L_08AA3740;
    }
L_08AA3740:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[2] < static_cast<std::uint32_t>(85) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA3750;
      }
      goto L_08AA3748;
    }
L_08AA3748:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(91));
      if (branch_taken) {
          goto L_08AA378C;
      }
      goto L_08AA3750;
    }
L_08AA3750:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[2] < static_cast<std::uint32_t>(341) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA3764;
      }
      goto L_08AA3758;
    }
L_08AA3758:
    ctx.gpr[2] = (ctx.gpr[3] >> 12u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(110));
      if (branch_taken) {
          goto L_08AA378C;
      }
      goto L_08AA3764;
    }
L_08AA3764:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AA3778;
      }
      goto L_08AA376C;
    }
L_08AA376C:
    ctx.gpr[2] = (ctx.gpr[3] >> 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(119));
      if (branch_taken) {
          goto L_08AA378C;
      }
      goto L_08AA3778;
    }
L_08AA3778:
    ctx.gpr[10] = (ctx.gpr[10] < static_cast<std::uint32_t>(1365) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[2] = (0u | 126u);
      if (branch_taken) {
          goto L_08AA378C;
      }
      goto L_08AA3784;
    }
L_08AA3784:
    ctx.gpr[2] = (ctx.gpr[3] >> 18u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(124));
    goto L_08AA378C;
L_08AA378C:
    ctx.gpr[10] = (ctx.gpr[2] << 3u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[6]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08AA37C8;
      }
      goto L_08AA37A0;
    }
L_08AA37A0:
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.gpr[3] = (ctx.gpr[3] >> 30u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[3]);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    ctx.gpr[3] = (0u | 1u);
    ctx.gpr[2] = (ctx.gpr[3] << (ctx.gpr[2] & 31u));
    ctx.gpr[2] = (ctx.gpr[14] | ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA37EC;
      }
      goto L_08AA37C8;
    }
L_08AA37C8:
    if (ctx.gpr[11] == ctx.gpr[10]) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
        goto L_08AA37EC;
    }
    goto L_08AA37D0;
L_08AA37D0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[7]);
    ctx.gpr[2] = (ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
        goto L_08AA37EC;
    }
    goto L_08AA37E4;
L_08AA37E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AA37C8;
      }
      goto L_08AA37EC;
    }
L_08AA37EC:
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    goto L_08AA37FC;
L_08AA37FC:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 2u));
    goto L_08AA3800;
L_08AA3800:
    ctx.gpr[10] = (ctx.gpr[10] >> 30u);
    ctx.gpr[10] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 2u));
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[14] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[15] = (ctx.gpr[10] << (ctx.gpr[15] & 31u));
    ctx.gpr[10] = (ctx.gpr[14] < ctx.gpr[15] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[10] = (ctx.gpr[15] & ctx.gpr[14]);
      if (branch_taken) {
          goto L_08AA39C0;
      }
      goto L_08AA3824;
    }
L_08AA3824:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[3] = (ctx.gpr[9] << 3u);
      if (branch_taken) {
          goto L_08AA3854;
      }
      goto L_08AA382C;
    }
L_08AA382C:
    ctx.gpr[9] = (ctx.gpr[9] & ctx.gpr[7]);
    ctx.gpr[15] = (ctx.gpr[15] << 1u);
    ctx.gpr[10] = (ctx.gpr[15] & ctx.gpr[14]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA3850;
      }
      goto L_08AA3840;
    }
L_08AA3840:
    ctx.gpr[15] = (ctx.gpr[15] << 1u);
    ctx.gpr[10] = (ctx.gpr[15] & ctx.gpr[14]);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA3840;
      }
      goto L_08AA3850;
    }
L_08AA3850:
    ctx.gpr[3] = (ctx.gpr[9] << 3u);
    goto L_08AA3854;
L_08AA3854:
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[6]);
    goto L_08AA3858;
L_08AA3858:
    ctx.gpr[24] = (ctx.gpr[9] | 0u);
    ctx.gpr[10] = (ctx.gpr[3] | 0u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    goto L_08AA3864;
L_08AA3864:
    if (ctx.gpr[11] == ctx.gpr[3]) {
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < 63 ? 1u : 0u);
        goto L_08AA393C;
    }
    goto L_08AA386C;
L_08AA386C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    goto L_08AA3870;
L_08AA3870:
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[7]);
    ctx.gpr[12] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[25] = (static_cast<std::int32_t>(ctx.gpr[12]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[25] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA38E0;
      }
      goto L_08AA3884;
    }
L_08AA3884:
    ctx.gpr[7] = (ctx.gpr[5] | 1u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[11] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[13]);
    ctx.gpr[6] = (ctx.gpr[12] | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[12]);
    ctx.gpr[31] = (0x08AA38C8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 181u, 0x08AA4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AA38C8u) goto L_08AA38C8;
    return;
L_08AA38C8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA38E0:
    if (static_cast<std::int32_t>(ctx.gpr[12]) >= 0) {
    ctx.gpr[6] = (ctx.gpr[11] + ctx.gpr[2]);
        goto L_08AA3900;
    }
    goto L_08AA38E8;
L_08AA38E8:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[11] != ctx.gpr[3]) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
        goto L_08AA3870;
    }
    goto L_08AA38F4;
L_08AA38F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[9]) < 63 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA393C;
      }
      goto L_08AA38FC;
    }
L_08AA38FC:
    ctx.gpr[6] = (ctx.gpr[11] + ctx.gpr[2]);
    goto L_08AA3900;
L_08AA3900:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    ctx.gpr[7] = (ctx.gpr[7] | 1u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[31] = (0x08AA3924u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 181u, 0x08AA4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AA3924u) goto L_08AA3924;
    return;
L_08AA3924:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA393C:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA3950;
      }
      goto L_08AA3948;
    }
L_08AA3948:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(8));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_08AA3950;
L_08AA3950:
    ctx.gpr[11] = (ctx.gpr[9] & 3u);
    if (ctx.gpr[11] != 0u) {
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
        goto L_08AA3864;
    }
    goto L_08AA395C;
L_08AA395C:
    ctx.gpr[11] = (ctx.gpr[24] & 3u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08AA3978;
      }
      goto L_08AA3968;
    }
L_08AA3968:
    ctx.gpr[10] = (~(ctx.gpr[15] | 0u));
    ctx.gpr[14] = (ctx.gpr[14] & ctx.gpr[10]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[14]);
      if (branch_taken) {
          goto L_08AA3984;
      }
      goto L_08AA3978;
    }
L_08AA3978:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[10];
    ctx.gpr[24] = (ctx.gpr[24] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA395C;
      }
      goto L_08AA3984;
    }
L_08AA3984:
    ctx.gpr[15] = (ctx.gpr[15] << 1u);
    ctx.gpr[10] = (ctx.gpr[14] < ctx.gpr[15] ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
        goto L_08AA39C4;
    }
    goto L_08AA3994;
L_08AA3994:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.gpr[10] = (ctx.gpr[15] & ctx.gpr[14]);
      if (branch_taken) {
          goto L_08AA39C0;
      }
      goto L_08AA399C;
    }
L_08AA399C:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[3] = (ctx.gpr[9] << 3u);
      if (branch_taken) {
          goto L_08AA39B8;
      }
      goto L_08AA39A4;
    }
L_08AA39A4:
    ctx.gpr[15] = (ctx.gpr[15] << 1u);
    ctx.gpr[10] = (ctx.gpr[15] & ctx.gpr[14]);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA39A4;
      }
      goto L_08AA39B4;
    }
L_08AA39B4:
    ctx.gpr[3] = (ctx.gpr[9] << 3u);
    goto L_08AA39B8;
L_08AA39B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AA3858;
      }
      goto L_08AA39C0;
    }
L_08AA39C0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    goto L_08AA39C4;
L_08AA39C4:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[10] & ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[11] - ctx.gpr[5]);
    ctx.gpr[11] = (ctx.gpr[11] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < 16 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA39E4;
      }
      goto L_08AA39DC;
    }
L_08AA39DC:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[16] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AA3A48;
      }
      goto L_08AA39E4;
    }
L_08AA39E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[31] = (0x08AA39F8u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    goto L_08AA315C;
L_08AA39F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[8] & ctx.gpr[7]);
    ctx.gpr[10] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08AA3A2C;
      }
      goto L_08AA3A20;
    }
L_08AA3A20:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[10]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AA3A48;
      }
      goto L_08AA3A2C;
    }
L_08AA3A2C:
    ctx.gpr[31] = (0x08AA3A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 181u, 0x08AA4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AA3A34u) goto L_08AA3A34;
    return;
L_08AA3A34:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3A48:
    ctx.gpr[7] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[10] | 1u);
    ctx.gpr[31] = (0x08AA3A64u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 181u, 0x08AA4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AA3A64u) goto L_08AA3A64;
    return;
L_08AA3A64:
    ctx.gpr[2] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3A78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3D18;
      }
      goto L_08AA3A88;
    }
L_08AA3A88:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AA3A94u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 177u, 0x08AA4D54u>(ctx, &aot_mem) && ctx.pc == 0x08AA3A94u) goto L_08AA3A94;
    return;
L_08AA3A94:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-8));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[7] = (ctx.gpr[10] & ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16456));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (ctx.gpr[11] & ctx.gpr[6]);
    ctx.gpr[10] = (ctx.gpr[10] & 1u);
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[2];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08AA3B3C;
      }
      goto L_08AA3AD0;
    }
L_08AA3AD0:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AA3AF4;
      }
      goto L_08AA3AD8;
    }
L_08AA3AD8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[6]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    goto L_08AA3AF4;
L_08AA3AF4:
    ctx.gpr[6] = (ctx.gpr[7] | 1u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(17488)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3B28;
      }
      goto L_08AA3B14;
    }
L_08AA3B14:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[31] = (0x08AA3B24u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17492)));
    goto L_08AA3D24;
L_08AA3B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08AA3B28;
L_08AA3B28:
    ctx.gpr[31] = (0x08AA3B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 181u, 0x08AA4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AA3B30u) goto L_08AA3B30;
    return;
L_08AA3B30:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3B3C:
    ctx.gpr[2] = (ctx.gpr[10] | 0u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA3B78;
      }
      goto L_08AA3B4C;
    }
L_08AA3B4C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[12] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[3]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[12];
    ctx.gpr[7] = (ctx.gpr[3] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AA3B6C;
      }
      goto L_08AA3B64;
    }
L_08AA3B64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA3B78;
      }
      goto L_08AA3B6C;
    }
L_08AA3B6C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08AA3B78;
L_08AA3B78:
    ctx.gpr[2] = (ctx.gpr[9] + ctx.gpr[11]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] & 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[9] = (ctx.gpr[7] | 1u);
        goto L_08AA3BCC;
    }
    goto L_08AA3B8C;
L_08AA3B8C:
    ctx.gpr[7] = (ctx.gpr[11] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AA3BBC;
      }
      goto L_08AA3B98;
    }
L_08AA3B98:
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    if (ctx.gpr[11] != ctx.gpr[2]) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
        goto L_08AA3BC0;
    }
    goto L_08AA3BA4;
L_08AA3BA4:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[10] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA3BC8;
      }
      goto L_08AA3BBC;
    }
L_08AA3BBC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    goto L_08AA3BC0;
L_08AA3BC0:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    goto L_08AA3BC8;
L_08AA3BC8:
    ctx.gpr[9] = (ctx.gpr[7] | 1u);
    goto L_08AA3BCC;
L_08AA3BCC:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AA3D10;
      }
      goto L_08AA3BDC;
    }
L_08AA3BDC:
    ctx.gpr[9] = (ctx.gpr[7] < static_cast<std::uint32_t>(512) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[7] >> 9u);
      if (branch_taken) {
          goto L_08AA3C30;
      }
      goto L_08AA3BE8;
    }
L_08AA3BE8:
    ctx.gpr[6] = (ctx.gpr[7] >> 3u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 2u));
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[10] << (ctx.gpr[7] & 31u));
    ctx.gpr[7] = (ctx.gpr[9] | ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08AA3D10;
      }
      goto L_08AA3C30;
    }
L_08AA3C30:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(5) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA3C40;
      }
      goto L_08AA3C38;
    }
L_08AA3C38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[7] >> 3u);
      if (branch_taken) {
          goto L_08AA3CA0;
      }
      goto L_08AA3C40;
    }
L_08AA3C40:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(21) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA3C54;
      }
      goto L_08AA3C48;
    }
L_08AA3C48:
    ctx.gpr[9] = (ctx.gpr[7] >> 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_08AA3CA0;
      }
      goto L_08AA3C54;
    }
L_08AA3C54:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(85) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA3C64;
      }
      goto L_08AA3C5C;
    }
L_08AA3C5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(91));
      if (branch_taken) {
          goto L_08AA3CA0;
      }
      goto L_08AA3C64;
    }
L_08AA3C64:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[9] < static_cast<std::uint32_t>(341) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA3C78;
      }
      goto L_08AA3C6C;
    }
L_08AA3C6C:
    ctx.gpr[9] = (ctx.gpr[7] >> 12u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(110));
      if (branch_taken) {
          goto L_08AA3CA0;
      }
      goto L_08AA3C78;
    }
L_08AA3C78:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08AA3C8C;
      }
      goto L_08AA3C80;
    }
L_08AA3C80:
    ctx.gpr[9] = (ctx.gpr[7] >> 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(119));
      if (branch_taken) {
          goto L_08AA3CA0;
      }
      goto L_08AA3C8C;
    }
L_08AA3C8C:
    ctx.gpr[10] = (ctx.gpr[10] < static_cast<std::uint32_t>(1365) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[9] = (0u | 126u);
      if (branch_taken) {
          goto L_08AA3CA0;
      }
      goto L_08AA3C98;
    }
L_08AA3C98:
    ctx.gpr[9] = (ctx.gpr[7] >> 18u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(124));
    goto L_08AA3CA0;
L_08AA3CA0:
    ctx.gpr[11] = (ctx.gpr[9] << 3u);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08AA3CDC;
      }
      goto L_08AA3CB4;
    }
L_08AA3CB4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[6] = (ctx.gpr[9] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 2u));
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[9] << (ctx.gpr[6] & 31u));
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AA3D00;
      }
      goto L_08AA3CDC;
    }
L_08AA3CDC:
    if (ctx.gpr[10] == ctx.gpr[11]) {
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
        goto L_08AA3D00;
    }
    goto L_08AA3CE4;
L_08AA3CE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
        goto L_08AA3D00;
    }
    goto L_08AA3CF8;
L_08AA3CF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08AA3CDC;
      }
      goto L_08AA3D00;
    }
L_08AA3D00:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    goto L_08AA3D10;
L_08AA3D10:
    ctx.gpr[31] = (0x08AA3D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 181u, 0x08AA4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AA3D18u) goto L_08AA3D18;
    return;
L_08AA3D18:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3D24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA3D50u);
    ctx.gpr[20] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 177u, 0x08AA4D54u>(ctx, &aot_mem) && ctx.pc == 0x08AA3D50u) goto L_08AA3D50;
    return;
L_08AA3D50:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(16456));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[19] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4096));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[20]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[4] << 12u);
    ctx.gpr[18] = (0u + ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4096 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA3E64;
      }
      goto L_08AA3D94;
    }
L_08AA3D94:
    ctx.gpr[31] = (0x08AA3D9Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 401u, 0x08AA5FECu>(ctx, &aot_mem) && ctx.pc == 0x08AA3D9Cu) goto L_08AA3D9C;
    return;
L_08AA3D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[5] = (0u - ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AA3E38;
      }
      goto L_08AA3DAC;
    }
L_08AA3DAC:
    ctx.gpr[31] = (0x08AA3DB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 401u, 0x08AA5FECu>(ctx, &aot_mem) && ctx.pc == 0x08AA3DB4u) goto L_08AA3DB4;
    return;
L_08AA3DB4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AA3DF0;
      }
      goto L_08AA3DC0;
    }
L_08AA3DC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA3DCCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 401u, 0x08AA5FECu>(ctx, &aot_mem) && ctx.pc == 0x08AA3DCCu) goto L_08AA3DCC;
    return;
L_08AA3DCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (2222u << 16u);
      if (branch_taken) {
          goto L_08AA3E90;
      }
      goto L_08AA3DE4;
    }
L_08AA3DE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3EA8;
      }
      goto L_08AA3DEC;
    }
L_08AA3DEC:
    ctx.gpr[4] = (ctx.gpr[19] - ctx.gpr[18]);
    goto L_08AA3DF0;
L_08AA3DF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(17508)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[18]);
    ctx.gpr[31] = (0x08AA3E14u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(17508), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 181u, 0x08AA4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AA3E14u) goto L_08AA3E14;
    return;
L_08AA3E14:
    ctx.gpr[2] = (0u | 1u);
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
L_08AA3E38:
    ctx.gpr[31] = (0x08AA3E40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 181u, 0x08AA4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AA3E40u) goto L_08AA3E40;
    return;
L_08AA3E40:
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
L_08AA3E64:
    ctx.gpr[31] = (0x08AA3E6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 181u, 0x08AA4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AA3E6Cu) goto L_08AA3E6C;
    return;
L_08AA3E6C:
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
L_08AA3E90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(17496)));
    ctx.gpr[7] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(17508), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08AA3EA8;
L_08AA3EA8:
    ctx.gpr[31] = (0x08AA3EB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 181u, 0x08AA4D90u>(ctx, &aot_mem) && ctx.pc == 0x08AA3EB0u) goto L_08AA3EB0;
    return;
L_08AA3EB0:
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
L_08AA3ED4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA3F48;
      }
      goto L_08AA3F08;
    }
L_08AA3F08:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[31] = (0x08AA3F14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 177u, 0x08AA4D54u>(ctx, &aot_mem) && ctx.pc == 0x08AA3F14u) goto L_08AA3F14;
    return;
L_08AA3F14:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-8));
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[10] & ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(19));
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 31 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[19] = (0u | 16u);
      if (branch_taken) {
          goto L_08AA3F80;
      }
      goto L_08AA3F40;
    }
L_08AA3F40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA3F8C;
      }
      goto L_08AA3F48;
    }
L_08AA3F48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA3F54u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08AA3444;
L_08AA3F54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3F80:
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[19] = (ctx.gpr[8] & ctx.gpr[19]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    goto L_08AA3F8C;
L_08AA3F8C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[20] = (2222u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 54u, 0x08AA4578u>(ctx, &aot_mem); return;
      }
      goto L_08AA3F94;
    }
L_08AA3F94:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16456));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AA3FC4;
      }
      goto L_08AA3FA8;
    }
L_08AA3FA8:
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[11] = (ctx.gpr[22] & ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[8] + ctx.gpr[11]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[11] & 1u);
    if (ctx.gpr[11] != 0u) {
    ctx.gpr[8] = (0u | 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 5u, 0x08AA4080u>(ctx, &aot_mem); return;
    }
    goto L_08AA3FC4;
L_08AA3FC4:
    ctx.gpr[22] = (ctx.gpr[22] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[11] = (ctx.gpr[4] + ctx.gpr[22]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 3u, 0x08AA405Cu>(ctx, &aot_mem); return;
      }
      goto L_08AA3FD0;
    }
L_08AA3FD0:
    ctx.gpr[2] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_08AA3FF8;
    }
    goto L_08AA3FE0;
L_08AA3FE0:
    ctx.gpr[10] = (ctx.gpr[10] & 1u);
    goto L_08AA3FE4;
L_08AA3FE4:
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        (void)rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 6u, 0x08AA4088u>(ctx, &aot_mem); return;
    }
    goto L_08AA3FEC;
L_08AA3FEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 38u, 0x08AA43E0u>(ctx, &aot_mem); return;
      }
      goto L_08AA3FF4;
    }
L_08AA3FF4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08AA3FF8;
L_08AA3FF8:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[7] = (ctx.gpr[11] - ctx.gpr[19]);
    ctx.pc = 0x08AA4000u; return;
}

void recomp_unit_0167(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0167_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_167(Runtime &runtime) {
    runtime.register_generated_unit(167u, 0x08AA0000u, 16384u, &recomp_unit_0167, &recomp_unit_0167_entry);
    runtime.register_function(0x08AA0000u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA000Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0018u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0024u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA004Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0058u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0070u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0084u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0098u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0110u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0118u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0124u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0138u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0140u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0160u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA016Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0184u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA018Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0198u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0204u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0218u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0238u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0248u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0254u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0260u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0268u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA026Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA028Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA030Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0314u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA032Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0340u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0348u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA037Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0398u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0404u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA041Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA042Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0434u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA044Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0454u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA045Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0468u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0478u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA047Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0494u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0508u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA051Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0534u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0540u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0550u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0558u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA056Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA057Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0580u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0590u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0598u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0634u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0644u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0654u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0670u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0700u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA072Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0758u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA077Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0780u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0788u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0794u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0804u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0810u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0814u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0820u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA083Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0848u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0884u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0908u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0914u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0920u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA092Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0938u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0948u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0958u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0968u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0984u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0994u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0EA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0EC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0ECCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0EE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0EECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1004u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1010u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA101Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1028u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1034u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA103Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1044u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1050u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1060u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1068u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1070u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1084u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA108Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1100u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1114u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA111Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1130u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1138u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1150u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA115Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1160u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1178u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1180u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1188u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA118Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1198u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1200u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1204u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1208u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1220u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1228u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1238u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1244u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA124Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA127Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA128Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1290u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1318u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1334u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA133Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1344u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1350u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1354u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1358u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1360u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1368u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1370u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1378u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1388u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1398u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1400u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1404u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1414u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA141Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA142Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1434u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1444u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1454u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA147Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA148Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1504u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1514u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1524u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1548u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1558u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1578u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1580u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1588u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1598u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1610u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1620u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1640u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA164Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1654u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1664u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1674u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA167Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA168Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1698u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA171Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1724u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA172Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1734u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1744u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA174Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA175Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1764u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1774u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1784u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1804u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA180Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1820u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA182Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1834u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1844u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1854u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1878u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1888u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1900u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1910u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1938u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1948u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA196Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1974u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA197Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1988u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1998u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA19A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA19ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA19BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA19CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA19ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA19FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1AFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BCCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D20u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1DA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1DB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1DC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1DC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1DDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2018u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2028u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2044u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2050u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA205Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2068u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2074u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2084u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2094u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2108u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2118u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2124u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA212Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2138u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2148u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA214Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2168u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2178u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2180u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2198u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2204u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2214u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2228u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2230u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2240u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA226Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA227Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2284u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2290u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2294u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2304u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2310u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2350u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2360u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2368u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2370u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA237Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2384u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2390u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2398u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2404u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2418u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2420u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2434u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2444u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2454u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA245Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2464u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2470u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2478u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2484u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA248Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA249Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2504u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2518u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2528u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2534u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2540u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2548u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA255Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2570u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2584u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2590u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2598u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2608u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2610u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA261Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2624u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2630u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2638u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2648u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA264Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2650u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2668u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2670u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2678u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA267Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2688u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2690u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2700u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2704u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA271Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2724u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2734u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2740u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2750u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2780u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2794u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2798u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2800u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2818u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2820u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2850u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA285Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2864u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA286Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2878u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA287Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2880u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2888u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2894u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA291Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2924u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA292Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2930u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2934u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2944u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA294Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA295Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2964u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2974u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2984u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BCCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DCCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2ECCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA300Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3014u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA301Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3024u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3034u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA303Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA304Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3054u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3064u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3074u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3090u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3104u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3108u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3114u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3128u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA315Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3200u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3208u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3210u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3214u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3228u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA323Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3248u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3250u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA325Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA326Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3284u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA328Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3314u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA334Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA335Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3394u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA339Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3400u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3410u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3414u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3444u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA346Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3474u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3488u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3510u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA351Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3524u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA352Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3538u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3540u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3548u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3550u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA355Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3564u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3570u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA357Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3584u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA359Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3614u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3618u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3620u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA362Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3644u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3650u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA365Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3704u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA371Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3724u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA372Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3734u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3740u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3748u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3750u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3758u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3764u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA376Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3778u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3784u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA378Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3800u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3824u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA382Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3840u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3850u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3854u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3858u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3864u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA386Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3870u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3884u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA38FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3900u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3924u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA393Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3948u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3950u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA395Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3968u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3978u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3984u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3994u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA399Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A20u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3AD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3AD8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3AF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BCCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CF8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DCCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3ED4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FF8u, &recomp_unit_0167, "recomp_unit_0167");
}
} // namespace psprecomp

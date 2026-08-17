#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0060[4091] = {
    1, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 6, 7, 0, 0, 8, 0, 9, 0, 10, 0, 11, 0, 0, 12,
    0, 13, 0, 0, 0, 0, 0, 0, 14, 15, 0, 16, 0, 17, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24,
    0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 0,
    33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 36, 0, 0, 37, 0,
    38, 0, 39, 0, 0, 0, 0, 40, 0, 0, 41, 42, 43, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 49, 0,
    0, 0, 50, 0, 51, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 59, 0, 60, 0, 0,
    0, 61, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66,
    0, 0, 67, 0, 0, 68, 0, 0, 69, 0, 0, 70, 71, 0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0,
    0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 84, 0, 85, 0, 0, 86, 0, 0, 87, 0,
    0, 88, 0, 0, 89, 0, 0, 90, 0, 0, 91, 92, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 0,
    98, 99, 0, 0, 0, 100, 0, 101, 0, 102, 0, 0, 0, 0, 103, 0, 104, 0, 105, 0, 0, 0, 106, 107, 0, 108, 0, 0, 109, 0, 0, 110,
    0, 0, 111, 112, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 119, 0, 120,
    0, 0, 0, 0, 0, 121, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0,
    0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0,
    0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 139,
    0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 148, 0,
    149, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 153, 0, 154, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0,
    159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0, 171, 0, 172, 0, 0, 0, 173, 0,
    174, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185,
    0, 186, 0, 187, 0, 188, 0, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0,
    201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0,
    0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0,
    0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 217, 0, 218, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0,
    0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0,
    0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 234, 0, 0, 235, 0, 236, 0, 0, 0, 237, 238, 0, 0,
    239, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 243, 0, 0, 0, 244, 0, 245, 0, 0, 246, 0, 0, 0, 247, 0, 0, 248, 0, 249,
    0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 254, 0, 255, 0,
    0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0,
    0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0,
    264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 270, 0, 271, 0, 0, 0, 272, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0,
    0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0,
    286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 294, 0, 295, 0, 0, 0, 0, 296,
    0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303,
    0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 310, 0,
    0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 318,
    0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0,
    0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0,
    330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 343, 0, 344, 0, 345, 0,
    346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359, 0, 360, 0, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367,
    0, 368, 0, 369, 370, 0, 371, 0, 372, 0, 373, 0, 374, 0, 375, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 379,
    0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0,
    0, 385, 0, 386, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 391, 0, 0, 392, 393, 0, 0, 0,
    394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0,
    0, 0, 398, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 404, 0, 405, 0, 406, 0, 407, 0, 408, 0, 409, 0, 0, 410, 0, 411, 0,
    412, 0, 413, 0, 414, 0, 415, 0, 416, 0, 417, 0, 418, 419, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 424,
    0, 425, 0, 426, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 433, 434, 435, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 443, 0, 0, 444, 0,
    445, 0, 446, 0, 0, 0, 447, 0, 0, 448, 0, 449, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 453, 0, 0, 454, 0, 0, 0, 455, 0, 456,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 460, 0, 461, 0, 462, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 465, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 469, 0, 470, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 473, 0, 474, 0, 0, 0, 475, 0, 0, 476, 0, 477, 0, 478, 0, 479, 0, 480, 0,
    481, 0, 482, 0, 483, 0, 484, 485, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 489, 490, 0, 0, 0, 491, 0, 0, 0,
    492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 496, 0, 497, 0, 0, 0, 498,
    0, 499, 0, 500, 0, 501, 0, 502, 0, 0, 503, 0, 0, 0, 504, 0, 505, 0, 0, 506, 0, 507, 0, 0, 0, 508, 0, 0, 0, 509, 0, 0,
    0, 510, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 514, 0, 515, 0, 516, 0, 517, 0, 518, 0, 0, 519, 0, 520, 0, 521,
    0, 522, 0, 523, 0, 524, 0, 525, 526, 527, 0, 0, 528, 529, 0, 0, 0, 0, 530, 0, 0, 0, 531, 532, 0, 533, 0, 534, 0, 535, 0, 536,
    0, 537, 0, 538, 0, 0, 539, 0, 540, 0, 541, 0, 542, 0, 543, 544, 0, 545, 0, 546, 0, 0, 0, 547, 0, 548, 0, 549, 0, 0, 0, 550,
    0, 551, 0, 0, 552, 553, 0, 0, 554, 0, 555, 0, 0, 0, 556, 0, 557, 0, 558, 0, 0, 0, 559, 0, 0, 560, 0, 0, 0, 0, 0, 0,
    561, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 0, 564, 0, 0, 0, 0, 565, 566, 0, 567, 0, 568, 0, 0, 0, 569, 570, 0, 0,
    571, 0, 572, 0, 573, 0, 0, 574, 0, 0, 0, 0, 575, 576, 0, 577, 0, 578, 0, 0, 0, 579, 580, 0, 0, 581, 0, 0, 0, 0, 0, 0,
    0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0,
    588, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0,
    603, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 0, 614, 0,
    0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 618, 0, 619, 0, 620, 0, 621, 0, 622, 0, 0, 623, 0, 624, 0, 0, 625, 0, 626,
    0, 627, 0, 628, 0, 629, 0, 630, 0, 0, 631, 0, 632, 0, 0, 633, 0, 634, 0, 0, 635, 0, 636, 0, 0, 637, 0, 638, 639, 640, 0, 641,
    642, 0, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 645, 0, 646, 0, 647, 0, 648, 649, 650, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 653, 0, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 656, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 659, 0, 660, 0, 661, 0, 0, 0, 662,
    0, 0, 0, 663, 0, 664, 0, 665, 0, 0, 666, 0, 0, 0, 667, 0, 668, 0, 0, 0, 669, 0, 0, 0, 670, 0, 0, 0, 0, 0, 671, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0,
    0, 0, 0, 0, 676, 0, 677, 0, 0, 0, 0, 678, 0, 679, 0, 680, 0, 681, 0, 682, 0, 683, 0, 684, 0, 685, 0, 686, 0, 687, 0, 688,
    0, 689, 0, 690, 0, 691, 0, 692, 0, 693, 0, 694, 0, 695, 0, 696, 697, 0, 0, 698, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 700,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 702, 0, 703, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0,
    0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 707, 0, 708, 0, 0, 709, 0, 710, 0, 711, 0, 712, 0, 713, 0, 714, 0, 715, 0, 716, 0,
    717, 0, 718, 0, 0, 0, 0, 719, 0, 720, 0, 721, 0, 0, 0, 0, 722, 0, 723, 0, 724, 0, 0, 0, 725, 0, 726, 0, 727, 0, 0, 0,
    0, 728, 0, 729, 0, 0, 730, 0, 731, 0, 732, 0, 733, 0, 734, 0, 735, 0, 0, 0, 0, 736, 0, 737, 0, 0, 0, 738, 0, 0, 739, 0,
    740, 741, 0, 742, 0, 0, 0, 743, 0, 744, 0, 0, 0, 745, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 748, 0,
    0, 0, 749, 0, 750, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 0, 0, 753, 0, 754, 0, 755,
    0, 756, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 759, 0, 760, 0, 761, 0, 762, 0,
    763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 765, 0, 766, 0, 767, 0, 768, 0, 769, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 771, 0, 772, 0, 773, 0, 774, 0, 775, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 777, 0, 778, 0, 779, 0, 780, 0, 781, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 783, 0, 784, 0, 785, 0, 786, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 790, 0, 0, 0, 0, 0, 791, 0, 792, 0, 0, 0,
    793, 0, 794, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 797, 0, 798, 0, 799, 0, 800,
    0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 803, 0, 804, 0, 805, 0, 806, 0, 807, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 0, 809, 0, 810, 0, 811, 0, 812, 0, 813, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 0, 0, 815, 0, 816, 0, 817, 0, 818, 0, 819, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 0, 0, 0, 0, 821, 0, 822, 0, 823, 0, 824, 0, 825, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 827, 0, 828, 0, 829, 0, 830, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 835, 0, 836, 0, 0, 0, 837, 0,
    838, 0, 839, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0, 841, 0, 842, 0, 843, 0, 844, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 845, 0, 846, 0, 847, 0, 848, 0, 849, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 850, 0, 851, 0, 852, 0, 853, 0, 854, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 855, 0, 856, 0, 857, 0, 858, 0, 859, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 860, 0, 861, 0, 862, 0, 863, 0, 864, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 865,
    0, 866, 0, 867, 0, 868, 0, 869, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 870, 0, 0,
    0, 0, 871, 0, 0, 0, 0, 0, 0, 872, 0, 873, 0, 0, 0, 874, 0, 0, 0, 875, 0, 876, 0, 877, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 878, 0, 879, 0, 880, 0, 881, 0, 882, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 883, 0, 884, 0, 885, 0, 886, 0, 887, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 888, 0, 889, 0, 890, 0, 891, 0, 892, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 893, 0, 0, 0, 0, 0, 894, 0, 0, 0, 0, 895, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 897, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 898, 0, 0, 899, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 900, 0, 901, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 902, 903, 0,
    0, 0, 0, 0, 0, 0, 904, 0, 905, 0, 906, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 907, 0, 0, 0, 0, 0, 0, 0,
    908, 0, 0, 0, 0, 909, 0, 0, 0, 910, 0, 0, 0, 0, 0, 0, 0, 911, 0, 0, 0, 0, 912, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 913, 0, 914, 0, 915, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 916, 0, 0, 0, 0, 0, 917, 0, 0, 0, 0, 0, 918, 0, 0,
    0, 919, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 920, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 921, 0, 0, 0, 0, 0, 0, 0, 922, 0, 0, 0, 923, 0, 0, 0, 0, 924, 0, 925,
};
void recomp_unit_0060_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088F4004u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0060[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088F4004;
    case 2u: goto L_088F400C;
    case 3u: goto L_088F4014;
    case 4u: goto L_088F403C;
    case 5u: goto L_088F4044;
    case 6u: goto L_088F404C;
    case 7u: goto L_088F4050;
    case 8u: goto L_088F405C;
    case 9u: goto L_088F4064;
    case 10u: goto L_088F406C;
    case 11u: goto L_088F4074;
    case 12u: goto L_088F4080;
    case 13u: goto L_088F4088;
    case 14u: goto L_088F40A4;
    case 15u: goto L_088F40A8;
    case 16u: goto L_088F40B0;
    case 17u: goto L_088F40B8;
    case 18u: goto L_088F40C0;
    case 19u: goto L_088F40D8;
    case 20u: goto L_088F4124;
    case 21u: goto L_088F4130;
    case 22u: goto L_088F4148;
    case 23u: goto L_088F416C;
    case 24u: goto L_088F4180;
    case 25u: goto L_088F4190;
    case 26u: goto L_088F4198;
    case 27u: goto L_088F41B8;
    case 28u: goto L_088F41CC;
    case 29u: goto L_088F41D4;
    case 30u: goto L_088F41E8;
    case 31u: goto L_088F41F0;
    case 32u: goto L_088F41F8;
    case 33u: goto L_088F4204;
    case 34u: goto L_088F4254;
    case 35u: goto L_088F4264;
    case 36u: goto L_088F4270;
    case 37u: goto L_088F427C;
    case 38u: goto L_088F4284;
    case 39u: goto L_088F428C;
    case 40u: goto L_088F42A0;
    case 41u: goto L_088F42AC;
    case 42u: goto L_088F42B0;
    case 43u: goto L_088F42B4;
    case 44u: goto L_088F42C0;
    case 45u: goto L_088F42C8;
    case 46u: goto L_088F42D0;
    case 47u: goto L_088F42E0;
    case 48u: goto L_088F42F0;
    case 49u: goto L_088F42FC;
    case 50u: goto L_088F430C;
    case 51u: goto L_088F4314;
    case 52u: goto L_088F4320;
    case 53u: goto L_088F4328;
    case 54u: goto L_088F4330;
    case 55u: goto L_088F4338;
    case 56u: goto L_088F4350;
    case 57u: goto L_088F435C;
    case 58u: goto L_088F4368;
    case 59u: goto L_088F4370;
    case 60u: goto L_088F4378;
    case 61u: goto L_088F4388;
    case 62u: goto L_088F438C;
    case 63u: goto L_088F43B4;
    case 64u: goto L_088F43E8;
    case 65u: goto L_088F43F4;
    case 66u: goto L_088F4400;
    case 67u: goto L_088F440C;
    case 68u: goto L_088F4418;
    case 69u: goto L_088F4424;
    case 70u: goto L_088F4430;
    case 71u: goto L_088F4434;
    case 72u: goto L_088F444C;
    case 73u: goto L_088F4458;
    case 74u: goto L_088F4460;
    case 75u: goto L_088F4468;
    case 76u: goto L_088F4470;
    case 77u: goto L_088F4488;
    case 78u: goto L_088F4490;
    case 79u: goto L_088F4498;
    case 80u: goto L_088F44B0;
    case 81u: goto L_088F44B8;
    case 82u: goto L_088F44C0;
    case 83u: goto L_088F44D8;
    case 84u: goto L_088F44DC;
    case 85u: goto L_088F44E4;
    case 86u: goto L_088F44F0;
    case 87u: goto L_088F44FC;
    case 88u: goto L_088F4508;
    case 89u: goto L_088F4514;
    case 90u: goto L_088F4520;
    case 91u: goto L_088F452C;
    case 92u: goto L_088F4530;
    case 93u: goto L_088F454C;
    case 94u: goto L_088F4554;
    case 95u: goto L_088F4560;
    case 96u: goto L_088F456C;
    case 97u: goto L_088F4578;
    case 98u: goto L_088F4584;
    case 99u: goto L_088F4588;
    case 100u: goto L_088F4598;
    case 101u: goto L_088F45A0;
    case 102u: goto L_088F45A8;
    case 103u: goto L_088F45BC;
    case 104u: goto L_088F45C4;
    case 105u: goto L_088F45CC;
    case 106u: goto L_088F45DC;
    case 107u: goto L_088F45E0;
    case 108u: goto L_088F45E8;
    case 109u: goto L_088F45F4;
    case 110u: goto L_088F4600;
    case 111u: goto L_088F460C;
    case 112u: goto L_088F4610;
    case 113u: goto L_088F4624;
    case 114u: goto L_088F4630;
    case 115u: goto L_088F4648;
    case 116u: goto L_088F4650;
    case 117u: goto L_088F4658;
    case 118u: goto L_088F4670;
    case 119u: goto L_088F4678;
    case 120u: goto L_088F4680;
    case 121u: goto L_088F4698;
    case 122u: goto L_088F469C;
    case 123u: goto L_088F46C0;
    case 124u: goto L_088F46D4;
    case 125u: goto L_088F46F8;
    case 126u: goto L_088F4710;
    case 127u: goto L_088F4740;
    case 128u: goto L_088F4750;
    case 129u: goto L_088F4764;
    case 130u: goto L_088F477C;
    case 131u: goto L_088F4790;
    case 132u: goto L_088F47A8;
    case 133u: goto L_088F47B8;
    case 134u: goto L_088F47C4;
    case 135u: goto L_088F47D0;
    case 136u: goto L_088F47DC;
    case 137u: goto L_088F47E8;
    case 138u: goto L_088F47F4;
    case 139u: goto L_088F4800;
    case 140u: goto L_088F480C;
    case 141u: goto L_088F481C;
    case 142u: goto L_088F4830;
    case 143u: goto L_088F4838;
    case 144u: goto L_088F4848;
    case 145u: goto L_088F4854;
    case 146u: goto L_088F4864;
    case 147u: goto L_088F4874;
    case 148u: goto L_088F487C;
    case 149u: goto L_088F4884;
    case 150u: goto L_088F488C;
    case 151u: goto L_088F4898;
    case 152u: goto L_088F48A8;
    case 153u: goto L_088F48B0;
    case 154u: goto L_088F48B8;
    case 155u: goto L_088F48C0;
    case 156u: goto L_088F48CC;
    case 157u: goto L_088F48E8;
    case 158u: goto L_088F48F8;
    case 159u: goto L_088F4904;
    case 160u: goto L_088F490C;
    case 161u: goto L_088F4914;
    case 162u: goto L_088F491C;
    case 163u: goto L_088F4924;
    case 164u: goto L_088F492C;
    case 165u: goto L_088F4934;
    case 166u: goto L_088F493C;
    case 167u: goto L_088F4944;
    case 168u: goto L_088F494C;
    case 169u: goto L_088F4954;
    case 170u: goto L_088F495C;
    case 171u: goto L_088F4964;
    case 172u: goto L_088F496C;
    case 173u: goto L_088F497C;
    case 174u: goto L_088F4984;
    case 175u: goto L_088F498C;
    case 176u: goto L_088F49A4;
    case 177u: goto L_088F49B4;
    case 178u: goto L_088F49C8;
    case 179u: goto L_088F49D0;
    case 180u: goto L_088F49D8;
    case 181u: goto L_088F49E0;
    case 182u: goto L_088F49E8;
    case 183u: goto L_088F49F0;
    case 184u: goto L_088F49F8;
    case 185u: goto L_088F4A00;
    case 186u: goto L_088F4A08;
    case 187u: goto L_088F4A10;
    case 188u: goto L_088F4A18;
    case 189u: goto L_088F4A24;
    case 190u: goto L_088F4A34;
    case 191u: goto L_088F4A3C;
    case 192u: goto L_088F4A48;
    case 193u: goto L_088F4A70;
    case 194u: goto L_088F4A80;
    case 195u: goto L_088F4A98;
    case 196u: goto L_088F4AAC;
    case 197u: goto L_088F4AC0;
    case 198u: goto L_088F4AD4;
    case 199u: goto L_088F4AE4;
    case 200u: goto L_088F4AF4;
    case 201u: goto L_088F4B04;
    case 202u: goto L_088F4B14;
    case 203u: goto L_088F4B24;
    case 204u: goto L_088F4B30;
    case 205u: goto L_088F4B48;
    case 206u: goto L_088F4B58;
    case 207u: goto L_088F4B6C;
    case 208u: goto L_088F4B74;
    case 209u: goto L_088F4B8C;
    case 210u: goto L_088F4B9C;
    case 211u: goto L_088F4BC0;
    case 212u: goto L_088F4BE8;
    case 213u: goto L_088F4BF4;
    case 214u: goto L_088F4C0C;
    case 215u: goto L_088F4C14;
    case 216u: goto L_088F4C1C;
    case 217u: goto L_088F4C2C;
    case 218u: goto L_088F4C34;
    case 219u: goto L_088F4C3C;
    case 220u: goto L_088F4C48;
    case 221u: goto L_088F4C54;
    case 222u: goto L_088F4C64;
    case 223u: goto L_088F4C7C;
    case 224u: goto L_088F4C90;
    case 225u: goto L_088F4CAC;
    case 226u: goto L_088F4CBC;
    case 227u: goto L_088F4CCC;
    case 228u: goto L_088F4CD8;
    case 229u: goto L_088F4CE8;
    case 230u: goto L_088F4D0C;
    case 231u: goto L_088F4D28;
    case 232u: goto L_088F4D38;
    case 233u: goto L_088F4D48;
    case 234u: goto L_088F4D50;
    case 235u: goto L_088F4D5C;
    case 236u: goto L_088F4D64;
    case 237u: goto L_088F4D74;
    case 238u: goto L_088F4D78;
    case 239u: goto L_088F4D84;
    case 240u: goto L_088F4D90;
    case 241u: goto L_088F4DA0;
    case 242u: goto L_088F4DB0;
    case 243u: goto L_088F4DB8;
    case 244u: goto L_088F4DC8;
    case 245u: goto L_088F4DD0;
    case 246u: goto L_088F4DDC;
    case 247u: goto L_088F4DEC;
    case 248u: goto L_088F4DF8;
    case 249u: goto L_088F4E00;
    case 250u: goto L_088F4E10;
    case 251u: goto L_088F4E20;
    case 252u: goto L_088F4E48;
    case 253u: goto L_088F4E60;
    case 254u: goto L_088F4E74;
    case 255u: goto L_088F4E7C;
    case 256u: goto L_088F4E94;
    case 257u: goto L_088F4EA4;
    case 258u: goto L_088F4EB8;
    case 259u: goto L_088F4EC0;
    case 260u: goto L_088F4ED8;
    case 261u: goto L_088F4EE8;
    case 262u: goto L_088F4F0C;
    case 263u: goto L_088F4F6C;
    case 264u: goto L_088F4F84;
    case 265u: goto L_088F4FA0;
    case 266u: goto L_088F4FAC;
    case 267u: goto L_088F4FB8;
    case 268u: goto L_088F4FC8;
    case 269u: goto L_088F4FD4;
    case 270u: goto L_088F4FE4;
    case 271u: goto L_088F4FEC;
    case 272u: goto L_088F4FFC;
    case 273u: goto L_088F500C;
    case 274u: goto L_088F5028;
    case 275u: goto L_088F5070;
    case 276u: goto L_088F5088;
    case 277u: goto L_088F50D0;
    case 278u: goto L_088F50F0;
    case 279u: goto L_088F5138;
    case 280u: goto L_088F5164;
    case 281u: goto L_088F5190;
    case 282u: goto L_088F5198;
    case 283u: goto L_088F51B0;
    case 284u: goto L_088F51D8;
    case 285u: goto L_088F51EC;
    case 286u: goto L_088F5204;
    case 287u: goto L_088F5234;
    case 288u: goto L_088F5244;
    case 289u: goto L_088F5280;
    case 290u: goto L_088F52B4;
    case 291u: goto L_088F52C0;
    case 292u: goto L_088F52CC;
    case 293u: goto L_088F52D8;
    case 294u: goto L_088F52E4;
    case 295u: goto L_088F52EC;
    case 296u: goto L_088F5300;
    case 297u: goto L_088F5310;
    case 298u: goto L_088F5320;
    case 299u: goto L_088F5330;
    case 300u: goto L_088F5340;
    case 301u: goto L_088F5350;
    case 302u: goto L_088F5370;
    case 303u: goto L_088F5380;
    case 304u: goto L_088F5388;
    case 305u: goto L_088F5394;
    case 306u: goto L_088F53BC;
    case 307u: goto L_088F53CC;
    case 308u: goto L_088F53DC;
    case 309u: goto L_088F53F0;
    case 310u: goto L_088F53FC;
    case 311u: goto L_088F5414;
    case 312u: goto L_088F541C;
    case 313u: goto L_088F542C;
    case 314u: goto L_088F543C;
    case 315u: goto L_088F544C;
    case 316u: goto L_088F545C;
    case 317u: goto L_088F546C;
    case 318u: goto L_088F5480;
    case 319u: goto L_088F5494;
    case 320u: goto L_088F549C;
    case 321u: goto L_088F54B4;
    case 322u: goto L_088F54C4;
    case 323u: goto L_088F54D8;
    case 324u: goto L_088F54E0;
    case 325u: goto L_088F54F8;
    case 326u: goto L_088F5508;
    case 327u: goto L_088F552C;
    case 328u: goto L_088F5568;
    case 329u: goto L_088F5578;
    case 330u: goto L_088F5584;
    case 331u: goto L_088F55C0;
    case 332u: goto L_088F55D0;
    case 333u: goto L_088F55E0;
    case 334u: goto L_088F5620;
    case 335u: goto L_088F5634;
    case 336u: goto L_088F563C;
    case 337u: goto L_088F565C;
    case 338u: goto L_088F568C;
    case 339u: goto L_088F56B8;
    case 340u: goto L_088F56C0;
    case 341u: goto L_088F56DC;
    case 342u: goto L_088F56E4;
    case 343u: goto L_088F56EC;
    case 344u: goto L_088F56F4;
    case 345u: goto L_088F56FC;
    case 346u: goto L_088F5704;
    case 347u: goto L_088F5718;
    case 348u: goto L_088F5744;
    case 349u: goto L_088F5754;
    case 350u: goto L_088F576C;
    case 351u: goto L_088F5774;
    case 352u: goto L_088F57AC;
    case 353u: goto L_088F580C;
    case 354u: goto L_088F5814;
    case 355u: goto L_088F581C;
    case 356u: goto L_088F5824;
    case 357u: goto L_088F582C;
    case 358u: goto L_088F5834;
    case 359u: goto L_088F583C;
    case 360u: goto L_088F5844;
    case 361u: goto L_088F5850;
    case 362u: goto L_088F5858;
    case 363u: goto L_088F5860;
    case 364u: goto L_088F5868;
    case 365u: goto L_088F5870;
    case 366u: goto L_088F5878;
    case 367u: goto L_088F5880;
    case 368u: goto L_088F5888;
    case 369u: goto L_088F5890;
    case 370u: goto L_088F5894;
    case 371u: goto L_088F589C;
    case 372u: goto L_088F58A4;
    case 373u: goto L_088F58AC;
    case 374u: goto L_088F58B4;
    case 375u: goto L_088F58BC;
    case 376u: goto L_088F58C4;
    case 377u: goto L_088F58CC;
    case 378u: goto L_088F58F8;
    case 379u: goto L_088F5900;
    case 380u: goto L_088F5924;
    case 381u: goto L_088F592C;
    case 382u: goto L_088F5958;
    case 383u: goto L_088F5960;
    case 384u: goto L_088F5968;
    case 385u: goto L_088F5988;
    case 386u: goto L_088F5990;
    case 387u: goto L_088F5998;
    case 388u: goto L_088F59B0;
    case 389u: goto L_088F59C8;
    case 390u: goto L_088F59E0;
    case 391u: goto L_088F59E4;
    case 392u: goto L_088F59F0;
    case 393u: goto L_088F59F4;
    case 394u: goto L_088F5A04;
    case 395u: goto L_088F5A28;
    case 396u: goto L_088F5A30;
    case 397u: goto L_088F5A7C;
    case 398u: goto L_088F5A8C;
    case 399u: goto L_088F5A90;
    case 400u: goto L_088F5AA0;
    case 401u: goto L_088F5AE0;
    case 402u: goto L_088F5B20;
    case 403u: goto L_088F5B38;
    case 404u: goto L_088F5B40;
    case 405u: goto L_088F5B48;
    case 406u: goto L_088F5B50;
    case 407u: goto L_088F5B58;
    case 408u: goto L_088F5B60;
    case 409u: goto L_088F5B68;
    case 410u: goto L_088F5B74;
    case 411u: goto L_088F5B7C;
    case 412u: goto L_088F5B84;
    case 413u: goto L_088F5B8C;
    case 414u: goto L_088F5B94;
    case 415u: goto L_088F5B9C;
    case 416u: goto L_088F5BA4;
    case 417u: goto L_088F5BAC;
    case 418u: goto L_088F5BB4;
    case 419u: goto L_088F5BB8;
    case 420u: goto L_088F5BC0;
    case 421u: goto L_088F5BC8;
    case 422u: goto L_088F5BEC;
    case 423u: goto L_088F5BFC;
    case 424u: goto L_088F5C00;
    case 425u: goto L_088F5C08;
    case 426u: goto L_088F5C10;
    case 427u: goto L_088F5C18;
    case 428u: goto L_088F5C20;
    case 429u: goto L_088F5C4C;
    case 430u: goto L_088F5C54;
    case 431u: goto L_088F5C5C;
    case 432u: goto L_088F5C68;
    case 433u: goto L_088F5C90;
    case 434u: goto L_088F5C94;
    case 435u: goto L_088F5C98;
    case 436u: goto L_088F5CA0;
    case 437u: goto L_088F5CB8;
    case 438u: goto L_088F5D0C;
    case 439u: goto L_088F5D14;
    case 440u: goto L_088F5D40;
    case 441u: goto L_088F5D58;
    case 442u: goto L_088F5D60;
    case 443u: goto L_088F5D70;
    case 444u: goto L_088F5D7C;
    case 445u: goto L_088F5D84;
    case 446u: goto L_088F5D8C;
    case 447u: goto L_088F5D9C;
    case 448u: goto L_088F5DA8;
    case 449u: goto L_088F5DB0;
    case 450u: goto L_088F5DB8;
    case 451u: goto L_088F5DC8;
    case 452u: goto L_088F5DD4;
    case 453u: goto L_088F5DDC;
    case 454u: goto L_088F5DE8;
    case 455u: goto L_088F5DF8;
    case 456u: goto L_088F5E00;
    case 457u: goto L_088F5E28;
    case 458u: goto L_088F5E34;
    case 459u: goto L_088F5E50;
    case 460u: goto L_088F5E64;
    case 461u: goto L_088F5E6C;
    case 462u: goto L_088F5E74;
    case 463u: goto L_088F5EA8;
    case 464u: goto L_088F5EBC;
    case 465u: goto L_088F5F20;
    case 466u: goto L_088F5F28;
    case 467u: goto L_088F5F30;
    case 468u: goto L_088F5F68;
    case 469u: goto L_088F5F70;
    case 470u: goto L_088F5F78;
    case 471u: goto L_088F5FA8;
    case 472u: goto L_088F5FB0;
    case 473u: goto L_088F5FB8;
    case 474u: goto L_088F5FC0;
    case 475u: goto L_088F5FD0;
    case 476u: goto L_088F5FDC;
    case 477u: goto L_088F5FE4;
    case 478u: goto L_088F5FEC;
    case 479u: goto L_088F5FF4;
    case 480u: goto L_088F5FFC;
    case 481u: goto L_088F6004;
    case 482u: goto L_088F600C;
    case 483u: goto L_088F6014;
    case 484u: goto L_088F601C;
    case 485u: goto L_088F6020;
    case 486u: goto L_088F6024;
    case 487u: goto L_088F6034;
    case 488u: goto L_088F604C;
    case 489u: goto L_088F6060;
    case 490u: goto L_088F6064;
    case 491u: goto L_088F6074;
    case 492u: goto L_088F6084;
    case 493u: goto L_088F60B8;
    case 494u: goto L_088F60D8;
    case 495u: goto L_088F60E0;
    case 496u: goto L_088F60E8;
    case 497u: goto L_088F60F0;
    case 498u: goto L_088F6100;
    case 499u: goto L_088F6108;
    case 500u: goto L_088F6110;
    case 501u: goto L_088F6118;
    case 502u: goto L_088F6120;
    case 503u: goto L_088F612C;
    case 504u: goto L_088F613C;
    case 505u: goto L_088F6144;
    case 506u: goto L_088F6150;
    case 507u: goto L_088F6158;
    case 508u: goto L_088F6168;
    case 509u: goto L_088F6178;
    case 510u: goto L_088F6188;
    case 511u: goto L_088F6198;
    case 512u: goto L_088F61A8;
    case 513u: goto L_088F61B8;
    case 514u: goto L_088F61C4;
    case 515u: goto L_088F61CC;
    case 516u: goto L_088F61D4;
    case 517u: goto L_088F61DC;
    case 518u: goto L_088F61E4;
    case 519u: goto L_088F61F0;
    case 520u: goto L_088F61F8;
    case 521u: goto L_088F6200;
    case 522u: goto L_088F6208;
    case 523u: goto L_088F6210;
    case 524u: goto L_088F6218;
    case 525u: goto L_088F6220;
    case 526u: goto L_088F6224;
    case 527u: goto L_088F6228;
    case 528u: goto L_088F6234;
    case 529u: goto L_088F6238;
    case 530u: goto L_088F624C;
    case 531u: goto L_088F625C;
    case 532u: goto L_088F6260;
    case 533u: goto L_088F6268;
    case 534u: goto L_088F6270;
    case 535u: goto L_088F6278;
    case 536u: goto L_088F6280;
    case 537u: goto L_088F6288;
    case 538u: goto L_088F6290;
    case 539u: goto L_088F629C;
    case 540u: goto L_088F62A4;
    case 541u: goto L_088F62AC;
    case 542u: goto L_088F62B4;
    case 543u: goto L_088F62BC;
    case 544u: goto L_088F62C0;
    case 545u: goto L_088F62C8;
    case 546u: goto L_088F62D0;
    case 547u: goto L_088F62E0;
    case 548u: goto L_088F62E8;
    case 549u: goto L_088F62F0;
    case 550u: goto L_088F6300;
    case 551u: goto L_088F6308;
    case 552u: goto L_088F6314;
    case 553u: goto L_088F6318;
    case 554u: goto L_088F6324;
    case 555u: goto L_088F632C;
    case 556u: goto L_088F633C;
    case 557u: goto L_088F6344;
    case 558u: goto L_088F634C;
    case 559u: goto L_088F635C;
    case 560u: goto L_088F6368;
    case 561u: goto L_088F6384;
    case 562u: goto L_088F63A8;
    case 563u: goto L_088F63B0;
    case 564u: goto L_088F63BC;
    case 565u: goto L_088F63D0;
    case 566u: goto L_088F63D4;
    case 567u: goto L_088F63DC;
    case 568u: goto L_088F63E4;
    case 569u: goto L_088F63F4;
    case 570u: goto L_088F63F8;
    case 571u: goto L_088F6404;
    case 572u: goto L_088F640C;
    case 573u: goto L_088F6414;
    case 574u: goto L_088F6420;
    case 575u: goto L_088F6434;
    case 576u: goto L_088F6438;
    case 577u: goto L_088F6440;
    case 578u: goto L_088F6448;
    case 579u: goto L_088F6458;
    case 580u: goto L_088F645C;
    case 581u: goto L_088F6468;
    case 582u: goto L_088F6488;
    case 583u: goto L_088F64B0;
    case 584u: goto L_088F64C0;
    case 585u: goto L_088F64D0;
    case 586u: goto L_088F64E8;
    case 587u: goto L_088F64FC;
    case 588u: goto L_088F6504;
    case 589u: goto L_088F651C;
    case 590u: goto L_088F652C;
    case 591u: goto L_088F6550;
    case 592u: goto L_088F6590;
    case 593u: goto L_088F65D0;
    case 594u: goto L_088F65DC;
    case 595u: goto L_088F65EC;
    case 596u: goto L_088F6640;
    case 597u: goto L_088F664C;
    case 598u: goto L_088F6658;
    case 599u: goto L_088F669C;
    case 600u: goto L_088F66A4;
    case 601u: goto L_088F66C0;
    case 602u: goto L_088F66F8;
    case 603u: goto L_088F6704;
    case 604u: goto L_088F6718;
    case 605u: goto L_088F6720;
    case 606u: goto L_088F6740;
    case 607u: goto L_088F6788;
    case 608u: goto L_088F67CC;
    case 609u: goto L_088F67DC;
    case 610u: goto L_088F6814;
    case 611u: goto L_088F6828;
    case 612u: goto L_088F6860;
    case 613u: goto L_088F6868;
    case 614u: goto L_088F687C;
    case 615u: goto L_088F688C;
    case 616u: goto L_088F68BC;
    case 617u: goto L_088F6930;
    case 618u: goto L_088F6938;
    case 619u: goto L_088F6940;
    case 620u: goto L_088F6948;
    case 621u: goto L_088F6950;
    case 622u: goto L_088F6958;
    case 623u: goto L_088F6964;
    case 624u: goto L_088F696C;
    case 625u: goto L_088F6978;
    case 626u: goto L_088F6980;
    case 627u: goto L_088F6988;
    case 628u: goto L_088F6990;
    case 629u: goto L_088F6998;
    case 630u: goto L_088F69A0;
    case 631u: goto L_088F69AC;
    case 632u: goto L_088F69B4;
    case 633u: goto L_088F69C0;
    case 634u: goto L_088F69C8;
    case 635u: goto L_088F69D4;
    case 636u: goto L_088F69DC;
    case 637u: goto L_088F69E8;
    case 638u: goto L_088F69F0;
    case 639u: goto L_088F69F4;
    case 640u: goto L_088F69F8;
    case 641u: goto L_088F6A00;
    case 642u: goto L_088F6A04;
    case 643u: goto L_088F6A10;
    case 644u: goto L_088F6A2C;
    case 645u: goto L_088F6A44;
    case 646u: goto L_088F6A4C;
    case 647u: goto L_088F6A54;
    case 648u: goto L_088F6A5C;
    case 649u: goto L_088F6A60;
    case 650u: goto L_088F6A64;
    case 651u: goto L_088F6A94;
    case 652u: goto L_088F6AB4;
    case 653u: goto L_088F6AC0;
    case 654u: goto L_088F6ADC;
    case 655u: goto L_088F6AE4;
    case 656u: goto L_088F6AF8;
    case 657u: goto L_088F6B2C;
    case 658u: goto L_088F6B58;
    case 659u: goto L_088F6B60;
    case 660u: goto L_088F6B68;
    case 661u: goto L_088F6B70;
    case 662u: goto L_088F6B80;
    case 663u: goto L_088F6B90;
    case 664u: goto L_088F6B98;
    case 665u: goto L_088F6BA0;
    case 666u: goto L_088F6BAC;
    case 667u: goto L_088F6BBC;
    case 668u: goto L_088F6BC4;
    case 669u: goto L_088F6BD4;
    case 670u: goto L_088F6BE4;
    case 671u: goto L_088F6BFC;
    case 672u: goto L_088F6C28;
    case 673u: goto L_088F6C38;
    case 674u: goto L_088F6C58;
    case 675u: goto L_088F6C7C;
    case 676u: goto L_088F6C94;
    case 677u: goto L_088F6C9C;
    case 678u: goto L_088F6CB0;
    case 679u: goto L_088F6CB8;
    case 680u: goto L_088F6CC0;
    case 681u: goto L_088F6CC8;
    case 682u: goto L_088F6CD0;
    case 683u: goto L_088F6CD8;
    case 684u: goto L_088F6CE0;
    case 685u: goto L_088F6CE8;
    case 686u: goto L_088F6CF0;
    case 687u: goto L_088F6CF8;
    case 688u: goto L_088F6D00;
    case 689u: goto L_088F6D08;
    case 690u: goto L_088F6D10;
    case 691u: goto L_088F6D18;
    case 692u: goto L_088F6D20;
    case 693u: goto L_088F6D28;
    case 694u: goto L_088F6D30;
    case 695u: goto L_088F6D38;
    case 696u: goto L_088F6D40;
    case 697u: goto L_088F6D44;
    case 698u: goto L_088F6D50;
    case 699u: goto L_088F6D68;
    case 700u: goto L_088F6D80;
    case 701u: goto L_088F6DB0;
    case 702u: goto L_088F6DB4;
    case 703u: goto L_088F6DBC;
    case 704u: goto L_088F6DD8;
    case 705u: goto L_088F6DEC;
    case 706u: goto L_088F6E10;
    case 707u: goto L_088F6E30;
    case 708u: goto L_088F6E38;
    case 709u: goto L_088F6E44;
    case 710u: goto L_088F6E4C;
    case 711u: goto L_088F6E54;
    case 712u: goto L_088F6E5C;
    case 713u: goto L_088F6E64;
    case 714u: goto L_088F6E6C;
    case 715u: goto L_088F6E74;
    case 716u: goto L_088F6E7C;
    case 717u: goto L_088F6E84;
    case 718u: goto L_088F6E8C;
    case 719u: goto L_088F6EA0;
    case 720u: goto L_088F6EA8;
    case 721u: goto L_088F6EB0;
    case 722u: goto L_088F6EC4;
    case 723u: goto L_088F6ECC;
    case 724u: goto L_088F6ED4;
    case 725u: goto L_088F6EE4;
    case 726u: goto L_088F6EEC;
    case 727u: goto L_088F6EF4;
    case 728u: goto L_088F6F08;
    case 729u: goto L_088F6F10;
    case 730u: goto L_088F6F1C;
    case 731u: goto L_088F6F24;
    case 732u: goto L_088F6F2C;
    case 733u: goto L_088F6F34;
    case 734u: goto L_088F6F3C;
    case 735u: goto L_088F6F44;
    case 736u: goto L_088F6F58;
    case 737u: goto L_088F6F60;
    case 738u: goto L_088F6F70;
    case 739u: goto L_088F6F7C;
    case 740u: goto L_088F6F84;
    case 741u: goto L_088F6F88;
    case 742u: goto L_088F6F90;
    case 743u: goto L_088F6FA0;
    case 744u: goto L_088F6FA8;
    case 745u: goto L_088F6FB8;
    case 746u: goto L_088F6FC8;
    case 747u: goto L_088F6FE4;
    case 748u: goto L_088F6FFC;
    case 749u: goto L_088F700C;
    case 750u: goto L_088F7014;
    case 751u: goto L_088F701C;
    case 752u: goto L_088F7050;
    case 753u: goto L_088F7070;
    case 754u: goto L_088F7078;
    case 755u: goto L_088F7080;
    case 756u: goto L_088F7088;
    case 757u: goto L_088F7090;
    case 758u: goto L_088F70C4;
    case 759u: goto L_088F70E4;
    case 760u: goto L_088F70EC;
    case 761u: goto L_088F70F4;
    case 762u: goto L_088F70FC;
    case 763u: goto L_088F7104;
    case 764u: goto L_088F7138;
    case 765u: goto L_088F7158;
    case 766u: goto L_088F7160;
    case 767u: goto L_088F7168;
    case 768u: goto L_088F7170;
    case 769u: goto L_088F7178;
    case 770u: goto L_088F71AC;
    case 771u: goto L_088F71CC;
    case 772u: goto L_088F71D4;
    case 773u: goto L_088F71DC;
    case 774u: goto L_088F71E4;
    case 775u: goto L_088F71EC;
    case 776u: goto L_088F722C;
    case 777u: goto L_088F724C;
    case 778u: goto L_088F7254;
    case 779u: goto L_088F725C;
    case 780u: goto L_088F7264;
    case 781u: goto L_088F726C;
    case 782u: goto L_088F72A0;
    case 783u: goto L_088F72C0;
    case 784u: goto L_088F72C8;
    case 785u: goto L_088F72D0;
    case 786u: goto L_088F72D8;
    case 787u: goto L_088F72E0;
    case 788u: goto L_088F7320;
    case 789u: goto L_088F7340;
    case 790u: goto L_088F7354;
    case 791u: goto L_088F736C;
    case 792u: goto L_088F7374;
    case 793u: goto L_088F7384;
    case 794u: goto L_088F738C;
    case 795u: goto L_088F7394;
    case 796u: goto L_088F73C8;
    case 797u: goto L_088F73E8;
    case 798u: goto L_088F73F0;
    case 799u: goto L_088F73F8;
    case 800u: goto L_088F7400;
    case 801u: goto L_088F7408;
    case 802u: goto L_088F743C;
    case 803u: goto L_088F745C;
    case 804u: goto L_088F7464;
    case 805u: goto L_088F746C;
    case 806u: goto L_088F7474;
    case 807u: goto L_088F747C;
    case 808u: goto L_088F74B0;
    case 809u: goto L_088F74D0;
    case 810u: goto L_088F74D8;
    case 811u: goto L_088F74E0;
    case 812u: goto L_088F74E8;
    case 813u: goto L_088F74F0;
    case 814u: goto L_088F7524;
    case 815u: goto L_088F7544;
    case 816u: goto L_088F754C;
    case 817u: goto L_088F7554;
    case 818u: goto L_088F755C;
    case 819u: goto L_088F7564;
    case 820u: goto L_088F75A4;
    case 821u: goto L_088F75C4;
    case 822u: goto L_088F75CC;
    case 823u: goto L_088F75D4;
    case 824u: goto L_088F75DC;
    case 825u: goto L_088F75E4;
    case 826u: goto L_088F7618;
    case 827u: goto L_088F7638;
    case 828u: goto L_088F7640;
    case 829u: goto L_088F7648;
    case 830u: goto L_088F7650;
    case 831u: goto L_088F7658;
    case 832u: goto L_088F7698;
    case 833u: goto L_088F76B8;
    case 834u: goto L_088F76CC;
    case 835u: goto L_088F76E4;
    case 836u: goto L_088F76EC;
    case 837u: goto L_088F76FC;
    case 838u: goto L_088F7704;
    case 839u: goto L_088F770C;
    case 840u: goto L_088F7758;
    case 841u: goto L_088F7760;
    case 842u: goto L_088F7768;
    case 843u: goto L_088F7770;
    case 844u: goto L_088F7778;
    case 845u: goto L_088F77C4;
    case 846u: goto L_088F77CC;
    case 847u: goto L_088F77D4;
    case 848u: goto L_088F77DC;
    case 849u: goto L_088F77E4;
    case 850u: goto L_088F7830;
    case 851u: goto L_088F7838;
    case 852u: goto L_088F7840;
    case 853u: goto L_088F7848;
    case 854u: goto L_088F7850;
    case 855u: goto L_088F789C;
    case 856u: goto L_088F78A4;
    case 857u: goto L_088F78AC;
    case 858u: goto L_088F78B4;
    case 859u: goto L_088F78BC;
    case 860u: goto L_088F7914;
    case 861u: goto L_088F791C;
    case 862u: goto L_088F7924;
    case 863u: goto L_088F792C;
    case 864u: goto L_088F7934;
    case 865u: goto L_088F7980;
    case 866u: goto L_088F7988;
    case 867u: goto L_088F7990;
    case 868u: goto L_088F7998;
    case 869u: goto L_088F79A0;
    case 870u: goto L_088F79F8;
    case 871u: goto L_088F7A0C;
    case 872u: goto L_088F7A28;
    case 873u: goto L_088F7A30;
    case 874u: goto L_088F7A40;
    case 875u: goto L_088F7A50;
    case 876u: goto L_088F7A58;
    case 877u: goto L_088F7A60;
    case 878u: goto L_088F7AB4;
    case 879u: goto L_088F7ABC;
    case 880u: goto L_088F7AC4;
    case 881u: goto L_088F7ACC;
    case 882u: goto L_088F7AD4;
    case 883u: goto L_088F7B28;
    case 884u: goto L_088F7B30;
    case 885u: goto L_088F7B38;
    case 886u: goto L_088F7B40;
    case 887u: goto L_088F7B48;
    case 888u: goto L_088F7BA0;
    case 889u: goto L_088F7BA8;
    case 890u: goto L_088F7BB0;
    case 891u: goto L_088F7BB8;
    case 892u: goto L_088F7BC0;
    case 893u: goto L_088F7C18;
    case 894u: goto L_088F7C30;
    case 895u: goto L_088F7C44;
    case 896u: goto L_088F7C4C;
    case 897u: goto L_088F7C70;
    case 898u: goto L_088F7CE8;
    case 899u: goto L_088F7CF4;
    case 900u: goto L_088F7D38;
    case 901u: goto L_088F7D40;
    case 902u: goto L_088F7D78;
    case 903u: goto L_088F7D7C;
    case 904u: goto L_088F7D9C;
    case 905u: goto L_088F7DA4;
    case 906u: goto L_088F7DAC;
    case 907u: goto L_088F7DE4;
    case 908u: goto L_088F7E04;
    case 909u: goto L_088F7E18;
    case 910u: goto L_088F7E28;
    case 911u: goto L_088F7E48;
    case 912u: goto L_088F7E5C;
    case 913u: goto L_088F7E8C;
    case 914u: goto L_088F7E94;
    case 915u: goto L_088F7E9C;
    case 916u: goto L_088F7EC8;
    case 917u: goto L_088F7EE0;
    case 918u: goto L_088F7EF8;
    case 919u: goto L_088F7F08;
    case 920u: goto L_088F7F40;
    case 921u: goto L_088F7FA0;
    case 922u: goto L_088F7FC0;
    case 923u: goto L_088F7FD0;
    case 924u: goto L_088F7FE4;
    case 925u: goto L_088F7FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088F4004:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F4044;
      }
      goto L_088F400C;
    }
L_088F400C:
    ctx.gpr[31] = (0x088F4014u);
    ctx.gpr[4] = (0u | 29u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F4014u) goto L_088F4014;
    return;
L_088F4014:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 7u);
      if (branch_taken) {
          goto L_088F4044;
      }
      goto L_088F403C;
    }
L_088F403C:
    ctx.gpr[31] = (0x088F4044u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F4044u) goto L_088F4044;
    return;
L_088F4044:
    ctx.gpr[31] = (0x088F404Cu);
    ctx.gpr[4] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F404Cu) goto L_088F404C;
    return;
L_088F404C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_088F4050;
L_088F4050:
    ctx.gpr[5] = (0u | 64u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F40A8;
    }
    goto L_088F405C;
L_088F405C:
    ctx.gpr[31] = (0x088F4064u);
    // nop
    goto L_088F4854;
L_088F4064:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088F40A4;
      }
      goto L_088F406C;
    }
L_088F406C:
    ctx.gpr[31] = (0x088F4074u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 811u, 0x08833D24u>(ctx, &aot_mem) && ctx.pc == 0x088F4074u) goto L_088F4074;
    return;
L_088F4074:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x088F4080u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 275u, 0x088ED6C0u>(ctx, &aot_mem) && ctx.pc == 0x088F4080u) goto L_088F4080;
    return;
L_088F4080:
    ctx.gpr[31] = (0x088F4088u);
    ctx.gpr[4] = (0u | 27u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 333u, 0x088E65ACu>(ctx, &aot_mem) && ctx.pc == 0x088F4088u) goto L_088F4088;
    return;
L_088F4088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(460), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x088F40A4u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(459), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F40A4u) goto L_088F40A4;
    return;
L_088F40A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F40A8;
L_088F40A8:
    if (ctx.gpr[4] != ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F41F8;
    }
    goto L_088F40B0;
L_088F40B0:
    ctx.gpr[31] = (0x088F40B8u);
    // nop
    goto L_088F4854;
L_088F40B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F40D8;
      }
      goto L_088F40C0;
    }
L_088F40C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F41F8;
    }
    goto L_088F40D8;
L_088F40D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F4148;
      }
      goto L_088F4124;
    }
L_088F4124:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F4130u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F4130u) goto L_088F4130;
    return;
L_088F4130:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F41E8;
      }
      goto L_088F4148;
    }
L_088F4148:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[21]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F41CC;
      }
      goto L_088F416C;
    }
L_088F416C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F4190;
      }
      goto L_088F4180;
    }
L_088F4180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    goto L_088F4190;
L_088F4190:
    ctx.gpr[31] = (0x088F4198u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088F43B4;
L_088F4198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[22] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[31] = (0x088F41B8u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F41B8u) goto L_088F41B8;
    return;
L_088F41B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F41E8;
      }
      goto L_088F41CC;
    }
L_088F41CC:
    ctx.gpr[31] = (0x088F41D4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F41D4u) goto L_088F41D4;
    return;
L_088F41D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    goto L_088F41E8;
L_088F41E8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F41F8;
    }
    goto L_088F41F0;
L_088F41F0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F41F8;
L_088F41F8:
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F42B4;
    }
    goto L_088F4204;
L_088F4204:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[8] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
      if (branch_taken) {
          goto L_088F427C;
      }
      goto L_088F4254;
    }
L_088F4254:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F427C;
      }
      goto L_088F4264;
    }
L_088F4264:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F4270u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F4270u) goto L_088F4270;
    return;
L_088F4270:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088F428C;
      }
      goto L_088F427C;
    }
L_088F427C:
    ctx.gpr[31] = (0x088F4284u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F4284u) goto L_088F4284;
    return;
L_088F4284:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    goto L_088F428C;
L_088F428C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F42B0;
      }
      goto L_088F42A0;
    }
L_088F42A0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F42B0;
      }
      goto L_088F42AC;
    }
L_088F42AC:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_088F42B0;
L_088F42B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F42B4;
L_088F42B4:
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F4330;
    }
    goto L_088F42C0;
L_088F42C0:
    ctx.gpr[31] = (0x088F42C8u);
    // nop
    goto L_088F4854;
L_088F42C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
      if (branch_taken) {
          goto L_088F42E0;
      }
      goto L_088F42D0;
    }
L_088F42D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F4330;
    }
    goto L_088F42E0;
L_088F42E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088F430C;
      }
      goto L_088F42F0;
    }
L_088F42F0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088F42FCu);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F42FCu) goto L_088F42FC;
    return;
L_088F42FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_088F4320;
      }
      goto L_088F430C;
    }
L_088F430C:
    ctx.gpr[31] = (0x088F4314u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F4314u) goto L_088F4314;
    return;
L_088F4314:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[17]);
    goto L_088F4320;
L_088F4320:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_088F4330;
    }
    goto L_088F4328;
L_088F4328:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_088F4330;
L_088F4330:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088F438C;
      }
      goto L_088F4338;
    }
L_088F4338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F4368;
      }
      goto L_088F4350;
    }
L_088F4350:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[31] = (0x088F435Cu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F435Cu) goto L_088F435C;
    return;
L_088F435C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_088F4378;
      }
      goto L_088F4368;
    }
L_088F4368:
    ctx.gpr[31] = (0x088F4370u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088F4370u) goto L_088F4370;
    return;
L_088F4370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    goto L_088F4378;
L_088F4378:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[18]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[17]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F438C;
      }
      goto L_088F4388;
    }
L_088F4388:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    goto L_088F438C;
L_088F438C:
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
L_088F43B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[18] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[19] = (0u | 4u);
      if (branch_taken) {
          goto L_088F4430;
      }
      goto L_088F43E8;
    }
L_088F43E8:
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F4434;
      }
      goto L_088F43F4;
    }
L_088F43F4:
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F4434;
      }
      goto L_088F4400;
    }
L_088F4400:
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F4434;
      }
      goto L_088F440C;
    }
L_088F440C:
    ctx.gpr[5] = (0u | 21u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F4434;
      }
      goto L_088F4418;
    }
L_088F4418:
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F4434;
      }
      goto L_088F4424;
    }
L_088F4424:
    ctx.gpr[5] = (0u | 27u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F44DC;
      }
      goto L_088F4430;
    }
L_088F4430:
    ctx.gpr[5] = (2221u << 16u);
    goto L_088F4434;
L_088F4434:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[7]);
      if (branch_taken) {
          goto L_088F4470;
      }
      goto L_088F444C;
    }
L_088F444C:
    ctx.gpr[6] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 21u);
      if (branch_taken) {
          goto L_088F4470;
      }
      goto L_088F4458;
    }
L_088F4458:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 24u);
      if (branch_taken) {
          goto L_088F4470;
      }
      goto L_088F4460;
    }
L_088F4460:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 27u);
      if (branch_taken) {
          goto L_088F4470;
      }
      goto L_088F4468;
    }
L_088F4468:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 7u);
      if (branch_taken) {
          goto L_088F4490;
      }
      goto L_088F4470;
    }
L_088F4470:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u | 10u);
      if (branch_taken) {
          goto L_088F44DC;
      }
      goto L_088F4488;
    }
L_088F4488:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F44DC;
      }
      goto L_088F4490;
    }
L_088F4490:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 12u);
      if (branch_taken) {
          goto L_088F44B8;
      }
      goto L_088F4498;
    }
L_088F4498:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088F44DC;
      }
      goto L_088F44B0;
    }
L_088F44B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F44DC;
      }
      goto L_088F44B8;
    }
L_088F44B8:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088F44DC;
      }
      goto L_088F44C0;
    }
L_088F44C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u | 6u);
      if (branch_taken) {
          goto L_088F44DC;
      }
      goto L_088F44D8;
    }
L_088F44D8:
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    goto L_088F44DC;
L_088F44DC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F4530;
      }
      goto L_088F44E4;
    }
L_088F44E4:
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F4530;
      }
      goto L_088F44F0;
    }
L_088F44F0:
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F4530;
      }
      goto L_088F44FC;
    }
L_088F44FC:
    ctx.gpr[4] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F4530;
      }
      goto L_088F4508;
    }
L_088F4508:
    ctx.gpr[4] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F4530;
      }
      goto L_088F4514;
    }
L_088F4514:
    ctx.gpr[4] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F4530;
      }
      goto L_088F4520;
    }
L_088F4520:
    ctx.gpr[4] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088F45E0;
      }
      goto L_088F452C;
    }
L_088F452C:
    ctx.gpr[4] = (2221u << 16u);
    goto L_088F4530;
L_088F4530:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F454Cu);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 521u, 0x088EA30Cu>(ctx, &aot_mem) && ctx.pc == 0x088F454Cu) goto L_088F454C;
    return;
L_088F454C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[20];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F4584;
      }
      goto L_088F4554;
    }
L_088F4554:
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F4588;
      }
      goto L_088F4560;
    }
L_088F4560:
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F4588;
      }
      goto L_088F456C;
    }
L_088F456C:
    ctx.gpr[5] = (0u | 25u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F4588;
      }
      goto L_088F4578;
    }
L_088F4578:
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_088F45A0;
      }
      goto L_088F4584;
    }
L_088F4584:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_088F4588;
L_088F4588:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 10u);
      if (branch_taken) {
          goto L_088F45E0;
      }
      goto L_088F4598;
    }
L_088F4598:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_088F45E0;
      }
      goto L_088F45A0;
    }
L_088F45A0:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 13u);
      if (branch_taken) {
          goto L_088F45C4;
      }
      goto L_088F45A8;
    }
L_088F45A8:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088F45E0;
      }
      goto L_088F45BC;
    }
L_088F45BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_088F45E0;
      }
      goto L_088F45C4;
    }
L_088F45C4:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F45E0;
      }
      goto L_088F45CC;
    }
L_088F45CC:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(6));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 6u);
      if (branch_taken) {
          goto L_088F45E0;
      }
      goto L_088F45DC;
    }
L_088F45DC:
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[18]);
    goto L_088F45E0;
L_088F45E0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F4610;
      }
      goto L_088F45E8;
    }
L_088F45E8:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F4610;
      }
      goto L_088F45F4;
    }
L_088F45F4:
    ctx.gpr[4] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F4610;
      }
      goto L_088F4600;
    }
L_088F4600:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088F469C;
      }
      goto L_088F460C;
    }
L_088F460C:
    ctx.gpr[4] = (2221u << 16u);
    goto L_088F4610;
L_088F4610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18704)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[19];
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_088F4630;
      }
      goto L_088F4624;
    }
L_088F4624:
    ctx.gpr[6] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 9u);
      if (branch_taken) {
          goto L_088F4650;
      }
      goto L_088F4630;
    }
L_088F4630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u | 10u);
      if (branch_taken) {
          goto L_088F469C;
      }
      goto L_088F4648;
    }
L_088F4648:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_088F469C;
      }
      goto L_088F4650;
    }
L_088F4650:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 14u);
      if (branch_taken) {
          goto L_088F4678;
      }
      goto L_088F4658;
    }
L_088F4658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u | 4u);
      if (branch_taken) {
          goto L_088F469C;
      }
      goto L_088F4670;
    }
L_088F4670:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_088F469C;
      }
      goto L_088F4678;
    }
L_088F4678:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088F469C;
      }
      goto L_088F4680;
    }
L_088F4680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(6));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (0u | 6u);
      if (branch_taken) {
          goto L_088F469C;
      }
      goto L_088F4698;
    }
L_088F4698:
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[5]);
    goto L_088F469C;
L_088F469C:
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
L_088F46C0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(18568)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(18572), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F46D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 96u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088F46F8u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F46F8u) goto L_088F46F8;
    return;
L_088F46F8:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19568), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088F4710u);
    ctx.gpr[6] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088F4710u) goto L_088F4710;
    return;
L_088F4710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), 0u);
    ctx.gpr[31] = (0x088F4740u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    goto L_088F4864;
L_088F4740:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4750:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F4764u);
    // nop
    goto L_088F4898;
L_088F4764:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    ctx.gpr[16] = (2221u << 16u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088F477Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F477Cu) goto L_088F477C;
    return;
L_088F477C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(19568), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4790:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F47A8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 509u, 0x088EA24Cu>(ctx, &aot_mem) && ctx.pc == 0x088F47A8u) goto L_088F47A8;
    return;
L_088F47A8:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F47B8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 534u, 0x088EA4ECu>(ctx, &aot_mem) && ctx.pc == 0x088F47B8u) goto L_088F47B8;
    return;
L_088F47B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F47C4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 513u, 0x088EA28Cu>(ctx, &aot_mem) && ctx.pc == 0x088F47C4u) goto L_088F47C4;
    return;
L_088F47C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F47D0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 514u, 0x088EA29Cu>(ctx, &aot_mem) && ctx.pc == 0x088F47D0u) goto L_088F47D0;
    return;
L_088F47D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F47DCu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088F47DCu) goto L_088F47DC;
    return;
L_088F47DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F47E8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 516u, 0x088EA2BCu>(ctx, &aot_mem) && ctx.pc == 0x088F47E8u) goto L_088F47E8;
    return;
L_088F47E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F47F4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 517u, 0x088EA2CCu>(ctx, &aot_mem) && ctx.pc == 0x088F47F4u) goto L_088F47F4;
    return;
L_088F47F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F4800u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 518u, 0x088EA2DCu>(ctx, &aot_mem) && ctx.pc == 0x088F4800u) goto L_088F4800;
    return;
L_088F4800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F480Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 512u, 0x088EA27Cu>(ctx, &aot_mem) && ctx.pc == 0x088F480Cu) goto L_088F480C;
    return;
L_088F480C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F481Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_088F48CC;
L_088F481C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4830:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4838:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F4848u);
    // nop
    goto L_088F49A4;
L_088F4848:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4854:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4864:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F4874u);
    // nop
    goto L_088F4A24;
L_088F4874:
    ctx.gpr[31] = (0x088F487Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 444u, 0x088F9C00u>(ctx, &aot_mem) && ctx.pc == 0x088F487Cu) goto L_088F487C;
    return;
L_088F487C:
    ctx.gpr[31] = (0x088F4884u);
    // nop
    goto L_088F5370;
L_088F4884:
    ctx.gpr[31] = (0x088F488Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 545u, 0x088FADDCu>(ctx, &aot_mem) && ctx.pc == 0x088F488Cu) goto L_088F488C;
    return;
L_088F488C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4898:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F48A8u);
    // nop
    goto L_088F4A48;
L_088F48A8:
    ctx.gpr[31] = (0x088F48B0u);
    // nop
    goto L_088F4E20;
L_088F48B0:
    ctx.gpr[31] = (0x088F48B8u);
    // nop
    goto L_088F5394;
L_088F48B8:
    ctx.gpr[31] = (0x088F48C0u);
    // nop
    goto L_088F6488;
L_088F48C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F48CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F48E8u);
    // nop
    goto L_088F4BC0;
L_088F48E8:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F48F8u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 581u, 0x088EA884u>(ctx, &aot_mem) && ctx.pc == 0x088F48F8u) goto L_088F48F8;
    return;
L_088F48F8:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088F490C;
      }
      goto L_088F4904;
    }
L_088F4904:
    ctx.gpr[31] = (0x088F490Cu);
    // nop
    goto L_088F6D80;
L_088F490C:
    ctx.gpr[31] = (0x088F4914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 580u, 0x088EA874u>(ctx, &aot_mem) && ctx.pc == 0x088F4914u) goto L_088F4914;
    return;
L_088F4914:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088F4924;
      }
      goto L_088F491C;
    }
L_088F491C:
    ctx.gpr[31] = (0x088F4924u);
    // nop
    goto L_088F6BFC;
L_088F4924:
    ctx.gpr[31] = (0x088F492Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 582u, 0x088EA894u>(ctx, &aot_mem) && ctx.pc == 0x088F492Cu) goto L_088F492C;
    return;
L_088F492C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F4954;
      }
      goto L_088F4934;
    }
L_088F4934:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    ctx.gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_088F4954;
      }
      goto L_088F493C;
    }
L_088F493C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 11u);
      if (branch_taken) {
          goto L_088F4954;
      }
      goto L_088F4944;
    }
L_088F4944:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 16u);
      if (branch_taken) {
          goto L_088F4954;
      }
      goto L_088F494C;
    }
L_088F494C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088F4964;
      }
      goto L_088F4954;
    }
L_088F4954:
    ctx.gpr[31] = (0x088F495Cu);
    // nop
    goto L_088F4F0C;
L_088F495C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F4984;
      }
      goto L_088F4964;
    }
L_088F4964:
    ctx.gpr[31] = (0x088F496Cu);
    // nop
    goto L_088F552C;
L_088F496C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F4984;
      }
      goto L_088F497C;
    }
L_088F497C:
    ctx.gpr[31] = (0x088F4984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 568u, 0x088FB2CCu>(ctx, &aot_mem) && ctx.pc == 0x088F4984u) goto L_088F4984;
    return;
L_088F4984:
    ctx.gpr[31] = (0x088F498Cu);
    // nop
    goto L_088F6550;
L_088F498C:
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
L_088F49A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F49B4u);
    // nop
    goto L_088F4D0C;
L_088F49B4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088F49E8;
      }
      goto L_088F49C8;
    }
L_088F49C8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 6u);
      if (branch_taken) {
          goto L_088F49E8;
      }
      goto L_088F49D0;
    }
L_088F49D0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_088F49E8;
      }
      goto L_088F49D8;
    }
L_088F49D8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_088F49E8;
      }
      goto L_088F49E0;
    }
L_088F49E0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F49F8;
      }
      goto L_088F49E8;
    }
L_088F49E8:
    ctx.gpr[31] = (0x088F49F0u);
    // nop
    goto L_088F5280;
L_088F49F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F4A10;
      }
      goto L_088F49F8;
    }
L_088F49F8:
    ctx.gpr[31] = (0x088F4A00u);
    // nop
    goto L_088F60B8;
L_088F4A00:
    ctx.gpr[31] = (0x088F4A08u);
    // nop
    goto L_088F6E10;
L_088F4A08:
    ctx.gpr[31] = (0x088F4A10u);
    // nop
    goto L_088F6384;
L_088F4A10:
    ctx.gpr[31] = (0x088F4A18u);
    // nop
    goto L_088F6B2C;
L_088F4A18:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4A24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F4A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 400u, 0x088F94F4u>(ctx, &aot_mem) && ctx.pc == 0x088F4A34u) goto L_088F4A34;
    return;
L_088F4A34:
    ctx.gpr[31] = (0x088F4A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 419u, 0x088F9864u>(ctx, &aot_mem) && ctx.pc == 0x088F4A3Cu) goto L_088F4A3C;
    return;
L_088F4A3C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4A48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F4A70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 283u, 0x0883A3DCu>(ctx, &aot_mem) && ctx.pc == 0x088F4A70u) goto L_088F4A70;
    return;
L_088F4A70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x088F4A80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(188));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 283u, 0x0883A3DCu>(ctx, &aot_mem) && ctx.pc == 0x088F4A80u) goto L_088F4A80;
    return;
L_088F4A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088F4A98u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F4A98u) goto L_088F4A98;
    return;
L_088F4A98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[31] = (0x088F4AACu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 244u, 0x08839E60u>(ctx, &aot_mem) && ctx.pc == 0x088F4AACu) goto L_088F4AAC;
    return;
L_088F4AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088F4AC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F4AC0u) goto L_088F4AC0;
    return;
L_088F4AC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[31] = (0x088F4AD4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 60u, 0x08838878u>(ctx, &aot_mem) && ctx.pc == 0x088F4AD4u) goto L_088F4AD4;
    return;
L_088F4AD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088F4AE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x088F4AE4u) goto L_088F4AE4;
    return;
L_088F4AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088F4AF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x088F4AF4u) goto L_088F4AF4;
    return;
L_088F4AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088F4B04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 185u, 0x088397D4u>(ctx, &aot_mem) && ctx.pc == 0x088F4B04u) goto L_088F4B04;
    return;
L_088F4B04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088F4B14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 206u, 0x08839AC8u>(ctx, &aot_mem) && ctx.pc == 0x088F4B14u) goto L_088F4B14;
    return;
L_088F4B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (0u | 0u);
    goto L_088F4B24;
L_088F4B24:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088F4B30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088F4B30u) goto L_088F4B30;
    return;
L_088F4B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_088F4B24;
      }
      goto L_088F4B48;
    }
L_088F4B48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088F4B58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F4B58u) goto L_088F4B58;
    return;
L_088F4B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (0u | 0u);
    goto L_088F4B6C;
L_088F4B6C:
    ctx.gpr[31] = (0x088F4B74u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4B74u) goto L_088F4B74;
    return;
L_088F4B74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088F4B6C;
      }
      goto L_088F4B8C;
    }
L_088F4B8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088F4B9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F4B9Cu) goto L_088F4B9C;
    return;
L_088F4B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
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
L_088F4BC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F4BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 510u, 0x088EA25Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4BE8u) goto L_088F4BE8;
    return;
L_088F4BE8:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F4C0C;
      }
      goto L_088F4BF4;
    }
L_088F4BF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088F4C48;
      }
      goto L_088F4C0C;
    }
L_088F4C0C:
    ctx.gpr[31] = (0x088F4C14u);
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 510u, 0x088EA25Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4C14u) goto L_088F4C14;
    return;
L_088F4C14:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_088F4C2C;
      }
      goto L_088F4C1C;
    }
L_088F4C1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088F4C48;
      }
      goto L_088F4C2C;
    }
L_088F4C2C:
    ctx.gpr[31] = (0x088F4C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 510u, 0x088EA25Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4C34u) goto L_088F4C34;
    return;
L_088F4C34:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
      if (branch_taken) {
          goto L_088F4C48;
      }
      goto L_088F4C3C;
    }
L_088F4C3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), ctx.gpr[6]);
    goto L_088F4C48;
L_088F4C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088F4C54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 264u, 0x088F8ED8u>(ctx, &aot_mem) && ctx.pc == 0x088F4C54u) goto L_088F4C54;
    return;
L_088F4C54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088F4C64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088F4C64u) goto L_088F4C64;
    return;
L_088F4C64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3048));
    ctx.gpr[31] = (0x088F4C7Cu);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(392));
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 73u, 0x088F8378u>(ctx, &aot_mem) && ctx.pc == 0x088F4C7Cu) goto L_088F4C7C;
    return;
L_088F4C7C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(19572));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088F4C90u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 619u, 0x088FB628u>(ctx, &aot_mem) && ctx.pc == 0x088F4C90u) goto L_088F4C90;
    return;
L_088F4C90:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088F4CACu);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088F4CACu) goto L_088F4CAC;
    return;
L_088F4CAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088F4CBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088F4CBCu) goto L_088F4CBC;
    return;
L_088F4CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088F4CCCu);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(572));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 535u, 0x088EA4FCu>(ctx, &aot_mem) && ctx.pc == 0x088F4CCCu) goto L_088F4CCC;
    return;
L_088F4CCC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F4CD8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 84u, 0x088F8498u>(ctx, &aot_mem) && ctx.pc == 0x088F4CD8u) goto L_088F4CD8;
    return;
L_088F4CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088F4CE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(540));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088F4CE8u) goto L_088F4CE8;
    return;
L_088F4CE8:
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
L_088F4D0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F4D28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 62u, 0x08838894u>(ctx, &aot_mem) && ctx.pc == 0x088F4D28u) goto L_088F4D28;
    return;
L_088F4D28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088F4D38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x088F4D38u) goto L_088F4D38;
    return;
L_088F4D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088F4D48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x088F4D48u) goto L_088F4D48;
    return;
L_088F4D48:
    ctx.gpr[31] = (0x088F4D50u);
    ctx.gpr[4] = (0u | 32768u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 170u, 0x08944C38u>(ctx, &aot_mem) && ctx.pc == 0x088F4D50u) goto L_088F4D50;
    return;
L_088F4D50:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
      if (branch_taken) {
          goto L_088F4D78;
      }
      goto L_088F4D5C;
    }
L_088F4D5C:
    ctx.gpr[31] = (0x088F4D64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 286u, 0x0883A40Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4D64u) goto L_088F4D64;
    return;
L_088F4D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x088F4D74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(188));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 286u, 0x0883A40Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4D74u) goto L_088F4D74;
    return;
L_088F4D74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    goto L_088F4D78;
L_088F4D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088F4D84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 187u, 0x088397F0u>(ctx, &aot_mem) && ctx.pc == 0x088F4D84u) goto L_088F4D84;
    return;
L_088F4D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F4D90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 250u, 0x08839F40u>(ctx, &aot_mem) && ctx.pc == 0x088F4D90u) goto L_088F4D90;
    return;
L_088F4D90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x088F4DA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 208u, 0x08839AE4u>(ctx, &aot_mem) && ctx.pc == 0x088F4DA0u) goto L_088F4DA0;
    return;
L_088F4DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_088F4DC8;
      }
      goto L_088F4DB0;
    }
L_088F4DB0:
    ctx.gpr[31] = (0x088F4DB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088F4DB8u) goto L_088F4DB8;
    return;
L_088F4DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
      if (branch_taken) {
          goto L_088F4DF8;
      }
      goto L_088F4DC8;
    }
L_088F4DC8:
    ctx.gpr[31] = (0x088F4DD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(552));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088F4DD0u) goto L_088F4DD0;
    return;
L_088F4DD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F4DDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088F4DDCu) goto L_088F4DDC;
    return;
L_088F4DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088F4DECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088F4DECu) goto L_088F4DEC;
    return;
L_088F4DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    goto L_088F4DF8;
L_088F4DF8:
    ctx.gpr[31] = (0x088F4E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088F4E00u) goto L_088F4E00;
    return;
L_088F4E00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088F4E10u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(540));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088F4E10u) goto L_088F4E10;
    return;
L_088F4E10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F4E20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F4E48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 244u, 0x08839E60u>(ctx, &aot_mem) && ctx.pc == 0x088F4E48u) goto L_088F4E48;
    return;
L_088F4E48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088F4E60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F4E60u) goto L_088F4E60;
    return;
L_088F4E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (0u | 0u);
    goto L_088F4E74;
L_088F4E74:
    ctx.gpr[31] = (0x088F4E7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088F4E7Cu) goto L_088F4E7C;
    return;
L_088F4E7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_088F4E74;
      }
      goto L_088F4E94;
    }
L_088F4E94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088F4EA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F4EA4u) goto L_088F4EA4;
    return;
L_088F4EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (0u | 0u);
    goto L_088F4EB8;
L_088F4EB8:
    ctx.gpr[31] = (0x088F4EC0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4EC0u) goto L_088F4EC0;
    return;
L_088F4EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_088F4EB8;
      }
      goto L_088F4ED8;
    }
L_088F4ED8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088F4EE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F4EE8u) goto L_088F4EE8;
    return;
L_088F4EE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
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
L_088F4F0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F4F6Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 512u, 0x088EA27Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4F6Cu) goto L_088F4F6C;
    return;
L_088F4F6C:
    ctx.gpr[5] = (16900u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088F4FAC;
      }
      goto L_088F4F84;
    }
L_088F4F84:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16776u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088F4FA0u);
    ctx.gpr[19] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 511u, 0x088EA26Cu>(ctx, &aot_mem) && ctx.pc == 0x088F4FA0u) goto L_088F4FA0;
    return;
L_088F4FA0:
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088F4FAC;
L_088F4FAC:
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[8];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088F4FC8;
      }
      goto L_088F4FB8;
    }
L_088F4FB8:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[7] = (0u | 4u);
    goto L_088F4FC8;
L_088F4FC8:
    ctx.gpr[8] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[8];
    ctx.gpr[8] = (0u | 11u);
      if (branch_taken) {
          goto L_088F4FE4;
      }
      goto L_088F4FD4;
    }
L_088F4FD4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[7] = (0u | 9u);
    goto L_088F4FE4;
L_088F4FE4:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[8];
    ctx.gpr[8] = (16776u << 16u);
      if (branch_taken) {
          goto L_088F4FFC;
      }
      goto L_088F4FEC;
    }
L_088F4FEC:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[7] = (0u | 12u);
    goto L_088F4FFC;
L_088F4FFC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[7] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[7];
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F5028;
      }
      goto L_088F500C;
    }
L_088F500C:
    ctx.gpr[7] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[7] = (16776u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_088F5028;
L_088F5028:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[7] = (17042u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[31] = (0x088F5070u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 247u, 0x08839E90u>(ctx, &aot_mem) && ctx.pc == 0x088F5070u) goto L_088F5070;
    return;
L_088F5070:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_088F51D8;
      }
      goto L_088F5088;
    }
L_088F5088:
    ctx.gpr[4] = (17054u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.fpr[20] = ctx.fpr[22] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.gpr[20] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19688));
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    goto L_088F50D0;
L_088F50D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088F50F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F50F0u) goto L_088F50F0;
    return;
L_088F50F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
      if (branch_taken) {
          goto L_088F5164;
      }
      goto L_088F5138;
    }
L_088F5138:
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088F5190;
      }
      goto L_088F5164;
    }
L_088F5164:
    ctx.gpr[23] = (0u | 64u);
    ctx.gpr[23] = (ctx.gpr[23] & 255u);
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    goto L_088F5190;
L_088F5190:
    ctx.gpr[31] = (0x088F5198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088F5198u) goto L_088F5198;
    return;
L_088F5198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088F50D0;
      }
      goto L_088F51B0;
    }
L_088F51B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_088F51D8;
L_088F51D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (17100u << 16u);
      if (branch_taken) {
          goto L_088F5244;
      }
      goto L_088F51EC;
    }
L_088F51EC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (2221u << 16u);
    goto L_088F5204;
L_088F5204:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[19]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x088F5234u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088F5234u) goto L_088F5234;
    return;
L_088F5234:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088F5204;
      }
      goto L_088F5244;
    }
L_088F5244:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F5280:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (0u | 4u);
        goto L_088F52B4;
    }
    goto L_088F52B4;
L_088F52B4:
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[16] = (0u | 5u);
        goto L_088F52C0;
    }
    goto L_088F52C0;
L_088F52C0:
    ctx.gpr[5] = (0u | 6u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[16] = (0u | 3u);
        goto L_088F52CC;
    }
    goto L_088F52CC;
L_088F52CC:
    ctx.gpr[5] = (0u | 11u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[16] = (0u | 4u);
        goto L_088F52D8;
    }
    goto L_088F52D8;
L_088F52D8:
    ctx.gpr[5] = (0u | 16u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[16] = (0u | 4u);
        goto L_088F52E4;
    }
    goto L_088F52E4;
L_088F52E4:
    ctx.gpr[31] = (0x088F52ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 250u, 0x08839F40u>(ctx, &aot_mem) && ctx.pc == 0x088F52ECu) goto L_088F52EC;
    return;
L_088F52EC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088F5320;
      }
      goto L_088F5300;
    }
L_088F5300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x088F5310u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088F5310u) goto L_088F5310;
    return;
L_088F5310:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088F5300;
      }
      goto L_088F5320;
    }
L_088F5320:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088F5350;
      }
      goto L_088F5330;
    }
L_088F5330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x088F5340u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088F5340u) goto L_088F5340;
    return;
L_088F5340:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088F5330;
      }
      goto L_088F5350;
    }
L_088F5350:
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
L_088F5370:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F5380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 461u, 0x088F9F94u>(ctx, &aot_mem) && ctx.pc == 0x088F5380u) goto L_088F5380;
    return;
L_088F5380:
    ctx.gpr[31] = (0x088F5388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 484u, 0x088FA63Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5388u) goto L_088F5388;
    return;
L_088F5388:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F5394:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F53BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 321u, 0x0883A768u>(ctx, &aot_mem) && ctx.pc == 0x088F53BCu) goto L_088F53BC;
    return;
L_088F53BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088F53CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088F53CCu) goto L_088F53CC;
    return;
L_088F53CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088F53DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 304u, 0x0883A5BCu>(ctx, &aot_mem) && ctx.pc == 0x088F53DCu) goto L_088F53DC;
    return;
L_088F53DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (2222u << 16u);
    goto L_088F53F0;
L_088F53F0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088F53FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088F53FCu) goto L_088F53FC;
    return;
L_088F53FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088F53F0;
      }
      goto L_088F5414;
    }
L_088F5414:
    ctx.gpr[31] = (0x088F541Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088F541Cu) goto L_088F541C;
    return;
L_088F541C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088F542Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088F542Cu) goto L_088F542C;
    return;
L_088F542C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088F543Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 199u, 0x088399CCu>(ctx, &aot_mem) && ctx.pc == 0x088F543Cu) goto L_088F543C;
    return;
L_088F543C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088F544Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(828));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 321u, 0x0883A768u>(ctx, &aot_mem) && ctx.pc == 0x088F544Cu) goto L_088F544C;
    return;
L_088F544C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088F545Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(920));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088F545Cu) goto L_088F545C;
    return;
L_088F545C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088F546Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1012));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088F546Cu) goto L_088F546C;
    return;
L_088F546C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088F5480u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F5480u) goto L_088F5480;
    return;
L_088F5480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (0u | 0u);
    goto L_088F5494;
L_088F5494:
    ctx.gpr[31] = (0x088F549Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 263u, 0x0883A13Cu>(ctx, &aot_mem) && ctx.pc == 0x088F549Cu) goto L_088F549C;
    return;
L_088F549C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(288));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_088F5494;
      }
      goto L_088F54B4;
    }
L_088F54B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088F54C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F54C4u) goto L_088F54C4;
    return;
L_088F54C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (0u | 0u);
    goto L_088F54D8;
L_088F54D8:
    ctx.gpr[31] = (0x088F54E0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088F54E0u) goto L_088F54E0;
    return;
L_088F54E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_088F54D8;
      }
      goto L_088F54F8;
    }
L_088F54F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088F5508u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F5508u) goto L_088F5508;
    return;
L_088F5508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
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
L_088F552C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F5568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 391u, 0x088F949Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5568u) goto L_088F5568;
    return;
L_088F5568:
    ctx.gpr[4] = (17213u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F56E4;
      }
      goto L_088F5578;
    }
L_088F5578:
    ctx.gpr[4] = (16924u << 16u);
    ctx.gpr[31] = (0x088F5584u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 533u, 0x088EA4DCu>(ctx, &aot_mem) && ctx.pc == 0x088F5584u) goto L_088F5584;
    return;
L_088F5584:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (17028u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[16] = (2221u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17032u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1012), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088F55C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1012));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088F55C0u) goto L_088F55C0;
    return;
L_088F55C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x088F55D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(392));
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 291u, 0x088F9060u>(ctx, &aot_mem) && ctx.pc == 0x088F55D0u) goto L_088F55D0;
    return;
L_088F55D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x088F55E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088F55E0u) goto L_088F55E0;
    return;
L_088F55E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(22)));
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(23)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(19572));
    goto L_088F5620;
L_088F5620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088F5634u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(572));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F5634u) goto L_088F5634;
    return;
L_088F5634:
    ctx.gpr[31] = (0x088F563Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 533u, 0x088EA4DCu>(ctx, &aot_mem) && ctx.pc == 0x088F563Cu) goto L_088F563C;
    return;
L_088F563C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(708));
      if (branch_taken) {
          goto L_088F568C;
      }
      goto L_088F565C;
    }
L_088F565C:
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(540));
      if (branch_taken) {
          goto L_088F56B8;
      }
      goto L_088F568C;
    }
L_088F568C:
    ctx.gpr[23] = (0u & 255u);
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(540));
    goto L_088F56B8;
L_088F56B8:
    ctx.gpr[31] = (0x088F56C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088F56C0u) goto L_088F56C0;
    return;
L_088F56C0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
      if (branch_taken) {
          goto L_088F5620;
      }
      goto L_088F56DC;
    }
L_088F56DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088F5718;
      }
      goto L_088F56E4;
    }
L_088F56E4:
    ctx.gpr[31] = (0x088F56ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 507u, 0x088FAA8Cu>(ctx, &aot_mem) && ctx.pc == 0x088F56ECu) goto L_088F56EC;
    return;
L_088F56EC:
    ctx.gpr[31] = (0x088F56F4u);
    // nop
    goto L_088F5EBC;
L_088F56F4:
    ctx.gpr[31] = (0x088F56FCu);
    // nop
    goto L_088F5AE0;
L_088F56FC:
    ctx.gpr[31] = (0x088F5704u);
    // nop
    goto L_088F57AC;
L_088F5704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088F5744;
      }
      goto L_088F5718;
    }
L_088F5718:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (2221u << 16u);
    goto L_088F5744;
L_088F5744:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088F5754u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 323u, 0x0883A784u>(ctx, &aot_mem) && ctx.pc == 0x088F5754u) goto L_088F5754;
    return;
L_088F5754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088F576Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088F576Cu) goto L_088F576C;
    return;
L_088F576C:
    ctx.gpr[31] = (0x088F5774u);
    // nop
    goto L_088F5D40;
L_088F5774:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
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
L_088F57AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F580Cu);
    ctx.gpr[22] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 367u, 0x088F93ACu>(ctx, &aot_mem) && ctx.pc == 0x088F580Cu) goto L_088F580C;
    return;
L_088F580C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5834;
      }
      goto L_088F5814;
    }
L_088F5814:
    ctx.gpr[31] = (0x088F581Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 519u, 0x088EA2ECu>(ctx, &aot_mem) && ctx.pc == 0x088F581Cu) goto L_088F581C;
    return;
L_088F581C:
    ctx.gpr[31] = (0x088F5824u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 513u, 0x088EA28Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5824u) goto L_088F5824;
    return;
L_088F5824:
    ctx.gpr[31] = (0x088F582Cu);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 514u, 0x088EA29Cu>(ctx, &aot_mem) && ctx.pc == 0x088F582Cu) goto L_088F582C;
    return;
L_088F582C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_088F5894;
      }
      goto L_088F5834;
    }
L_088F5834:
    ctx.gpr[31] = (0x088F583Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 376u, 0x088F9404u>(ctx, &aot_mem) && ctx.pc == 0x088F583Cu) goto L_088F583C;
    return;
L_088F583C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F5868;
      }
      goto L_088F5844;
    }
L_088F5844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F5850u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 521u, 0x088EA30Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5850u) goto L_088F5850;
    return;
L_088F5850:
    ctx.gpr[31] = (0x088F5858u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088F5858u) goto L_088F5858;
    return;
L_088F5858:
    ctx.gpr[31] = (0x088F5860u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 516u, 0x088EA2BCu>(ctx, &aot_mem) && ctx.pc == 0x088F5860u) goto L_088F5860;
    return;
L_088F5860:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_088F5894;
      }
      goto L_088F5868;
    }
L_088F5868:
    ctx.gpr[31] = (0x088F5870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 518u, 0x088EA2DCu>(ctx, &aot_mem) && ctx.pc == 0x088F5870u) goto L_088F5870;
    return;
L_088F5870:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5894;
      }
      goto L_088F5878;
    }
L_088F5878:
    ctx.gpr[31] = (0x088F5880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 531u, 0x088EA4BCu>(ctx, &aot_mem) && ctx.pc == 0x088F5880u) goto L_088F5880;
    return;
L_088F5880:
    ctx.gpr[31] = (0x088F5888u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 517u, 0x088EA2CCu>(ctx, &aot_mem) && ctx.pc == 0x088F5888u) goto L_088F5888;
    return;
L_088F5888:
    ctx.gpr[31] = (0x088F5890u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 518u, 0x088EA2DCu>(ctx, &aot_mem) && ctx.pc == 0x088F5890u) goto L_088F5890;
    return;
L_088F5890:
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[2]);
    goto L_088F5894;
L_088F5894:
    ctx.gpr[31] = (0x088F589Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 367u, 0x088F93ACu>(ctx, &aot_mem) && ctx.pc == 0x088F589Cu) goto L_088F589C;
    return;
L_088F589C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F58B4;
      }
      goto L_088F58A4;
    }
L_088F58A4:
    ctx.gpr[31] = (0x088F58ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 376u, 0x088F9404u>(ctx, &aot_mem) && ctx.pc == 0x088F58ACu) goto L_088F58AC;
    return;
L_088F58AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5AA0;
      }
      goto L_088F58B4;
    }
L_088F58B4:
    ctx.gpr[31] = (0x088F58BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 321u, 0x088F91DCu>(ctx, &aot_mem) && ctx.pc == 0x088F58BCu) goto L_088F58BC;
    return;
L_088F58BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_088F5958;
      }
      goto L_088F58C4;
    }
L_088F58C4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_088F58F8;
      }
      goto L_088F58CC;
    }
L_088F58CC:
    ctx.gpr[4] = (16924u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 2u);
    ctx.gpr[4] = (17086u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 5u);
    ctx.gpr[4] = (16932u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16960u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F59E0;
      }
      goto L_088F58F8;
    }
L_088F58F8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088F5924;
      }
      goto L_088F5900;
    }
L_088F5900:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (17134u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 4u);
    ctx.gpr[4] = (16984u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F59E0;
      }
      goto L_088F5924;
    }
L_088F5924:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088F59E4;
      }
      goto L_088F592C;
    }
L_088F592C:
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (17134u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 3u);
    ctx.gpr[4] = (16976u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16960u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F59E0;
      }
      goto L_088F5958;
    }
L_088F5958:
    ctx.gpr[31] = (0x088F5960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 315u, 0x088F919Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5960u) goto L_088F5960;
    return;
L_088F5960:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16984u << 16u);
      if (branch_taken) {
          goto L_088F5988;
      }
      goto L_088F5968;
    }
L_088F5968:
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (17161u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 4u);
    ctx.gpr[4] = (16960u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F59E0;
      }
      goto L_088F5988;
    }
L_088F5988:
    ctx.gpr[31] = (0x088F5990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 309u, 0x088F915Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5990u) goto L_088F5990;
    return;
L_088F5990:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088F59E4;
      }
      goto L_088F5998;
    }
L_088F5998:
    ctx.gpr[5] = (16960u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 5 ? 1u : 0u);
    ctx.gpr[5] = (17090u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088F59C8;
      }
      goto L_088F59B0;
    }
L_088F59B0:
    ctx.gpr[4] = (17034u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 2u);
    ctx.gpr[17] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_088F59E0;
      }
      goto L_088F59C8;
    }
L_088F59C8:
    ctx.gpr[4] = (17084u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 2u);
    ctx.gpr[4] = (17072u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088F59E0;
L_088F59E0:
    ctx.gpr[19] = (0u | 0u);
    goto L_088F59E4;
L_088F59E4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_088F5AA0;
      }
      goto L_088F59F0;
    }
L_088F59F0:
    ctx.gpr[18] = (2221u << 16u);
    goto L_088F59F4;
L_088F59F4:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_088F5A90;
    }
    goto L_088F5A04;
L_088F5A04:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[23] = (ctx.gpr[21] << 8u);
    ctx.gpr[4] = (ctx.gpr[21] << 5u);
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[30] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F5A28;
L_088F5A28:
    ctx.gpr[31] = (0x088F5A30u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[20]);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 155u, 0x088F8890u>(ctx, &aot_mem) && ctx.pc == 0x088F5A30u) goto L_088F5A30;
    return;
L_088F5A30:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x088F5A7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 266u, 0x0883A16Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5A7Cu) goto L_088F5A7C;
    return;
L_088F5A7C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(288));
      if (branch_taken) {
          goto L_088F5A28;
      }
      goto L_088F5A8C;
    }
L_088F5A8C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088F5A90;
L_088F5A90:
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_088F59F4;
      }
      goto L_088F5AA0;
    }
L_088F5AA0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F5AE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F5B20u);
    ctx.gpr[20] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 367u, 0x088F93ACu>(ctx, &aot_mem) && ctx.pc == 0x088F5B20u) goto L_088F5B20;
    return;
L_088F5B20:
    ctx.gpr[4] = (17092u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[4] = (17040u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F5B58;
      }
      goto L_088F5B38;
    }
L_088F5B38:
    ctx.gpr[31] = (0x088F5B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 519u, 0x088EA2ECu>(ctx, &aot_mem) && ctx.pc == 0x088F5B40u) goto L_088F5B40;
    return;
L_088F5B40:
    ctx.gpr[31] = (0x088F5B48u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 513u, 0x088EA28Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5B48u) goto L_088F5B48;
    return;
L_088F5B48:
    ctx.gpr[31] = (0x088F5B50u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 514u, 0x088EA29Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5B50u) goto L_088F5B50;
    return;
L_088F5B50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_088F5BB8;
      }
      goto L_088F5B58;
    }
L_088F5B58:
    ctx.gpr[31] = (0x088F5B60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 376u, 0x088F9404u>(ctx, &aot_mem) && ctx.pc == 0x088F5B60u) goto L_088F5B60;
    return;
L_088F5B60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5B8C;
      }
      goto L_088F5B68;
    }
L_088F5B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F5B74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 521u, 0x088EA30Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5B74u) goto L_088F5B74;
    return;
L_088F5B74:
    ctx.gpr[31] = (0x088F5B7Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088F5B7Cu) goto L_088F5B7C;
    return;
L_088F5B7C:
    ctx.gpr[31] = (0x088F5B84u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 516u, 0x088EA2BCu>(ctx, &aot_mem) && ctx.pc == 0x088F5B84u) goto L_088F5B84;
    return;
L_088F5B84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_088F5BB8;
      }
      goto L_088F5B8C;
    }
L_088F5B8C:
    ctx.gpr[31] = (0x088F5B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 385u, 0x088F945Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5B94u) goto L_088F5B94;
    return;
L_088F5B94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5BB8;
      }
      goto L_088F5B9C;
    }
L_088F5B9C:
    ctx.gpr[31] = (0x088F5BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 531u, 0x088EA4BCu>(ctx, &aot_mem) && ctx.pc == 0x088F5BA4u) goto L_088F5BA4;
    return;
L_088F5BA4:
    ctx.gpr[31] = (0x088F5BACu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 517u, 0x088EA2CCu>(ctx, &aot_mem) && ctx.pc == 0x088F5BACu) goto L_088F5BAC;
    return;
L_088F5BAC:
    ctx.gpr[31] = (0x088F5BB4u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 518u, 0x088EA2DCu>(ctx, &aot_mem) && ctx.pc == 0x088F5BB4u) goto L_088F5BB4;
    return;
L_088F5BB4:
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[2]);
    goto L_088F5BB8;
L_088F5BB8:
    ctx.gpr[31] = (0x088F5BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 315u, 0x088F919Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5BC0u) goto L_088F5BC0;
    return;
L_088F5BC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
      if (branch_taken) {
          goto L_088F5C10;
      }
      goto L_088F5BC8;
    }
L_088F5BC8:
    ctx.gpr[4] = (ctx.gpr[4] >> 30u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[19] = (0u | 4u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088F5BFC;
      }
      goto L_088F5BEC;
    }
L_088F5BEC:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F5C00;
      }
      goto L_088F5BFC;
    }
L_088F5BFC:
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    goto L_088F5C00;
L_088F5C00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088F5C98;
      }
      goto L_088F5C08;
    }
L_088F5C08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F5C94;
      }
      goto L_088F5C10;
    }
L_088F5C10:
    ctx.gpr[31] = (0x088F5C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 309u, 0x088F915Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5C18u) goto L_088F5C18;
    return;
L_088F5C18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088F5C54;
      }
      goto L_088F5C20;
    }
L_088F5C20:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[19] = (0u | 6u);
    ctx.gpr[20] = (0u | 2u);
    ctx.gpr[18] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088F5C94;
      }
      goto L_088F5C4C;
    }
L_088F5C4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088F5C94;
      }
      goto L_088F5C54;
    }
L_088F5C54:
    ctx.gpr[31] = (0x088F5C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 321u, 0x088F91DCu>(ctx, &aot_mem) && ctx.pc == 0x088F5C5Cu) goto L_088F5C5C;
    return;
L_088F5C5C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(19568)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088F5C94;
      }
      goto L_088F5C68;
    }
L_088F5C68:
    ctx.gpr[4] = (0u | 5u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[19] = (0u | 10u);
    ctx.gpr[18] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[20] = (0u | 2u);
      if (branch_taken) {
          goto L_088F5C94;
      }
      goto L_088F5C90;
    }
L_088F5C90:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_088F5C94;
L_088F5C94:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_088F5C98;
L_088F5C98:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F5CB8;
      }
      goto L_088F5CA0;
    }
L_088F5CA0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(276));
      if (branch_taken) {
          goto L_088F5D0C;
      }
      goto L_088F5CB8;
    }
L_088F5CB8:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[19]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(276));
    goto L_088F5D0C;
L_088F5D0C:
    ctx.gpr[31] = (0x088F5D14u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088F5D14u) goto L_088F5D14;
    return;
L_088F5D14:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_088F5D40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F5D58u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 367u, 0x088F93ACu>(ctx, &aot_mem) && ctx.pc == 0x088F5D58u) goto L_088F5D58;
    return;
L_088F5D58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F5D7C;
      }
      goto L_088F5D60;
    }
L_088F5D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x088F5D70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 658u, 0x088FB7A0u>(ctx, &aot_mem) && ctx.pc == 0x088F5D70u) goto L_088F5D70;
    return;
L_088F5D70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_088F5E00;
      }
      goto L_088F5D7C;
    }
L_088F5D7C:
    ctx.gpr[31] = (0x088F5D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 376u, 0x088F9404u>(ctx, &aot_mem) && ctx.pc == 0x088F5D84u) goto L_088F5D84;
    return;
L_088F5D84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5DA8;
      }
      goto L_088F5D8C;
    }
L_088F5D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x088F5D9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 725u, 0x088FBACCu>(ctx, &aot_mem) && ctx.pc == 0x088F5D9Cu) goto L_088F5D9C;
    return;
L_088F5D9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_088F5E00;
      }
      goto L_088F5DA8;
    }
L_088F5DA8:
    ctx.gpr[31] = (0x088F5DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 385u, 0x088F945Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5DB0u) goto L_088F5DB0;
    return;
L_088F5DB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5DD4;
      }
      goto L_088F5DB8;
    }
L_088F5DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x088F5DC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 813u, 0x088FBFD4u>(ctx, &aot_mem) && ctx.pc == 0x088F5DC8u) goto L_088F5DC8;
    return;
L_088F5DC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_088F5E00;
      }
      goto L_088F5DD4;
    }
L_088F5DD4:
    ctx.gpr[31] = (0x088F5DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 391u, 0x088F949Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5DDCu) goto L_088F5DDC;
    return;
L_088F5DDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_088F5E00;
      }
      goto L_088F5DE8;
    }
L_088F5DE8:
    ctx.gpr[5] = (16924u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088F5DF8u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 658u, 0x088FB7A0u>(ctx, &aot_mem) && ctx.pc == 0x088F5DF8u) goto L_088F5DF8;
    return;
L_088F5DF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    goto L_088F5E00;
L_088F5E00:
    ctx.gpr[6] = (16688u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17225u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = ctx.fpr[13] - ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088F5E28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088F5E28u) goto L_088F5E28;
    return;
L_088F5E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F5E34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 171u, 0x08844E28u>(ctx, &aot_mem) && ctx.pc == 0x088F5E34u) goto L_088F5E34;
    return;
L_088F5E34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (17238u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_088F5E6C;
      }
      goto L_088F5E50;
    }
L_088F5E50:
    ctx.gpr[6] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088F5E64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088F5E64u) goto L_088F5E64;
    return;
L_088F5E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    goto L_088F5E6C;
L_088F5E6C:
    ctx.gpr[31] = (0x088F5E74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(212));
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 105u, 0x088F8624u>(ctx, &aot_mem) && ctx.pc == 0x088F5E74u) goto L_088F5E74;
    return;
L_088F5E74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (16768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (16720u << 16u);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x088F5EA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088F5EA8u) goto L_088F5EA8;
    return;
L_088F5EA8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F5EBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (16960u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (17040u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (17088u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (17235u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (17232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    goto L_088F5F20;
L_088F5F20:
    ctx.gpr[31] = (0x088F5F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 309u, 0x088F915Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5F28u) goto L_088F5F28;
    return;
L_088F5F28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5F68;
      }
      goto L_088F5F30;
    }
L_088F5F30:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (17234u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088F6060;
      }
      goto L_088F5F68;
    }
L_088F5F68:
    ctx.gpr[31] = (0x088F5F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 315u, 0x088F919Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5F70u) goto L_088F5F70;
    return;
L_088F5F70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F5FA8;
      }
      goto L_088F5F78;
    }
L_088F5F78:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_088F6060;
      }
      goto L_088F5FA8;
    }
L_088F5FA8:
    ctx.gpr[31] = (0x088F5FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 321u, 0x088F91DCu>(ctx, &aot_mem) && ctx.pc == 0x088F5FB0u) goto L_088F5FB0;
    return;
L_088F5FB0:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
        goto L_088F6064;
    }
    goto L_088F5FB8;
L_088F5FB8:
    ctx.gpr[31] = (0x088F5FC0u);
    ctx.gpr[19] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 376u, 0x088F9404u>(ctx, &aot_mem) && ctx.pc == 0x088F5FC0u) goto L_088F5FC0;
    return;
L_088F5FC0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_088F5FE4;
      }
      goto L_088F5FD0;
    }
L_088F5FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F5FDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 521u, 0x088EA30Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5FDCu) goto L_088F5FDC;
    return;
L_088F5FDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F6020;
      }
      goto L_088F5FE4;
    }
L_088F5FE4:
    ctx.gpr[31] = (0x088F5FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 385u, 0x088F945Cu>(ctx, &aot_mem) && ctx.pc == 0x088F5FECu) goto L_088F5FEC;
    return;
L_088F5FEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F6004;
      }
      goto L_088F5FF4;
    }
L_088F5FF4:
    ctx.gpr[31] = (0x088F5FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 531u, 0x088EA4BCu>(ctx, &aot_mem) && ctx.pc == 0x088F5FFCu) goto L_088F5FFC;
    return;
L_088F5FFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F6020;
      }
      goto L_088F6004;
    }
L_088F6004:
    ctx.gpr[31] = (0x088F600Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 367u, 0x088F93ACu>(ctx, &aot_mem) && ctx.pc == 0x088F600Cu) goto L_088F600C;
    return;
L_088F600C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_088F6024;
      }
      goto L_088F6014;
    }
L_088F6014:
    ctx.gpr[31] = (0x088F601Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 519u, 0x088EA2ECu>(ctx, &aot_mem) && ctx.pc == 0x088F601Cu) goto L_088F601C;
    return;
L_088F601C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_088F6020;
L_088F6020:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 5 ? 1u : 0u);
    goto L_088F6024;
L_088F6024:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_088F604C;
      }
      goto L_088F6034;
    }
L_088F6034:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_088F6060;
      }
      goto L_088F604C;
    }
L_088F604C:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_088F6060;
L_088F6060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    goto L_088F6064;
L_088F6064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088F6074u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x088F6074u) goto L_088F6074;
    return;
L_088F6074:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088F5F20;
      }
      goto L_088F6084;
    }
L_088F6084:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F60B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F60D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 367u, 0x088F93ACu>(ctx, &aot_mem) && ctx.pc == 0x088F60D8u) goto L_088F60D8;
    return;
L_088F60D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F60F0;
      }
      goto L_088F60E0;
    }
L_088F60E0:
    ctx.gpr[31] = (0x088F60E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 391u, 0x088F949Cu>(ctx, &aot_mem) && ctx.pc == 0x088F60E8u) goto L_088F60E8;
    return;
L_088F60E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F6108;
      }
      goto L_088F60F0;
    }
L_088F60F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x088F6100u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088F6100u) goto L_088F6100;
    return;
L_088F6100:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F613C;
      }
      goto L_088F6108;
    }
L_088F6108:
    ctx.gpr[31] = (0x088F6110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 376u, 0x088F9404u>(ctx, &aot_mem) && ctx.pc == 0x088F6110u) goto L_088F6110;
    return;
L_088F6110:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F613C;
      }
      goto L_088F6118;
    }
L_088F6118:
    ctx.gpr[31] = (0x088F6120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 536u, 0x088EA6B4u>(ctx, &aot_mem) && ctx.pc == 0x088F6120u) goto L_088F6120;
    return;
L_088F6120:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088F613C;
      }
      goto L_088F612C;
    }
L_088F612C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x088F613Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088F613Cu) goto L_088F613C;
    return;
L_088F613C:
    ctx.gpr[31] = (0x088F6144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 391u, 0x088F949Cu>(ctx, &aot_mem) && ctx.pc == 0x088F6144u) goto L_088F6144;
    return;
L_088F6144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088F61C4;
      }
      goto L_088F6150;
    }
L_088F6150:
    ctx.gpr[31] = (0x088F6158u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(736));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 201u, 0x088399E8u>(ctx, &aot_mem) && ctx.pc == 0x088F6158u) goto L_088F6158;
    return;
L_088F6158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088F6168u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(828));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 334u, 0x0883A8B4u>(ctx, &aot_mem) && ctx.pc == 0x088F6168u) goto L_088F6168;
    return;
L_088F6168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088F6178u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(920));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088F6178u) goto L_088F6178;
    return;
L_088F6178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088F6188u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1012));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088F6188u) goto L_088F6188;
    return;
L_088F6188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x088F6198u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088F6198u) goto L_088F6198;
    return;
L_088F6198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x088F61A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(540));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088F61A8u) goto L_088F61A8;
    return;
L_088F61A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x088F61B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(720));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088F61B8u) goto L_088F61B8;
    return;
L_088F61B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088F6344;
      }
      goto L_088F61C4;
    }
L_088F61C4:
    ctx.gpr[31] = (0x088F61CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(368));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 308u, 0x0883A5F4u>(ctx, &aot_mem) && ctx.pc == 0x088F61CCu) goto L_088F61CC;
    return;
L_088F61CC:
    ctx.gpr[31] = (0x088F61D4u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 321u, 0x088F91DCu>(ctx, &aot_mem) && ctx.pc == 0x088F61D4u) goto L_088F61D4;
    return;
L_088F61D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F61F8;
      }
      goto L_088F61DC;
    }
L_088F61DC:
    ctx.gpr[31] = (0x088F61E4u);
    ctx.gpr[17] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 519u, 0x088EA2ECu>(ctx, &aot_mem) && ctx.pc == 0x088F61E4u) goto L_088F61E4;
    return;
L_088F61E4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 2u);
        goto L_088F61F0;
    }
    goto L_088F61F0;
L_088F61F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088F6228;
      }
      goto L_088F61F8;
    }
L_088F61F8:
    ctx.gpr[31] = (0x088F6200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 315u, 0x088F919Cu>(ctx, &aot_mem) && ctx.pc == 0x088F6200u) goto L_088F6200;
    return;
L_088F6200:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F6210;
      }
      goto L_088F6208;
    }
L_088F6208:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 2u);
      if (branch_taken) {
          goto L_088F6224;
      }
      goto L_088F6210;
    }
L_088F6210:
    ctx.gpr[31] = (0x088F6218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 309u, 0x088F915Cu>(ctx, &aot_mem) && ctx.pc == 0x088F6218u) goto L_088F6218;
    return;
L_088F6218:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088F6228;
      }
      goto L_088F6220;
    }
L_088F6220:
    ctx.gpr[17] = (0u | 3u);
    goto L_088F6224;
L_088F6224:
    ctx.gpr[19] = (0u | 0u);
    goto L_088F6228;
L_088F6228:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088F6260;
      }
      goto L_088F6234;
    }
L_088F6234:
    ctx.gpr[18] = (0u | 0u);
    goto L_088F6238;
L_088F6238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088F624Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(460));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088F624Cu) goto L_088F624C;
    return;
L_088F624C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_088F6238;
      }
      goto L_088F625C;
    }
L_088F625C:
    ctx.gpr[18] = (0u | 0u);
    goto L_088F6260;
L_088F6260:
    ctx.gpr[31] = (0x088F6268u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 367u, 0x088F93ACu>(ctx, &aot_mem) && ctx.pc == 0x088F6268u) goto L_088F6268;
    return;
L_088F6268:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F6280;
      }
      goto L_088F6270;
    }
L_088F6270:
    ctx.gpr[31] = (0x088F6278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 519u, 0x088EA2ECu>(ctx, &aot_mem) && ctx.pc == 0x088F6278u) goto L_088F6278;
    return;
L_088F6278:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F62C0;
      }
      goto L_088F6280;
    }
L_088F6280:
    ctx.gpr[31] = (0x088F6288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 376u, 0x088F9404u>(ctx, &aot_mem) && ctx.pc == 0x088F6288u) goto L_088F6288;
    return;
L_088F6288:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F62A4;
      }
      goto L_088F6290;
    }
L_088F6290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F629Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 521u, 0x088EA30Cu>(ctx, &aot_mem) && ctx.pc == 0x088F629Cu) goto L_088F629C;
    return;
L_088F629C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088F62C0;
      }
      goto L_088F62A4;
    }
L_088F62A4:
    ctx.gpr[31] = (0x088F62ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 385u, 0x088F945Cu>(ctx, &aot_mem) && ctx.pc == 0x088F62ACu) goto L_088F62AC;
    return;
L_088F62AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F62C0;
      }
      goto L_088F62B4;
    }
L_088F62B4:
    ctx.gpr[31] = (0x088F62BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 531u, 0x088EA4BCu>(ctx, &aot_mem) && ctx.pc == 0x088F62BCu) goto L_088F62BC;
    return;
L_088F62BC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_088F62C0;
L_088F62C0:
    ctx.gpr[31] = (0x088F62C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 315u, 0x088F919Cu>(ctx, &aot_mem) && ctx.pc == 0x088F62C8u) goto L_088F62C8;
    return;
L_088F62C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F62E0;
      }
      goto L_088F62D0;
    }
L_088F62D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[17] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088F6318;
      }
      goto L_088F62E0;
    }
L_088F62E0:
    ctx.gpr[31] = (0x088F62E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 309u, 0x088F915Cu>(ctx, &aot_mem) && ctx.pc == 0x088F62E8u) goto L_088F62E8;
    return;
L_088F62E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F6300;
      }
      goto L_088F62F0;
    }
L_088F62F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[17] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088F6318;
      }
      goto L_088F6300;
    }
L_088F6300:
    ctx.gpr[31] = (0x088F6308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 321u, 0x088F91DCu>(ctx, &aot_mem) && ctx.pc == 0x088F6308u) goto L_088F6308;
    return;
L_088F6308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_088F6318;
      }
      goto L_088F6314;
    }
L_088F6314:
    ctx.gpr[17] = (0u | 10u);
    goto L_088F6318;
L_088F6318:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F6344;
      }
      goto L_088F6324;
    }
L_088F6324:
    ctx.gpr[31] = (0x088F632Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088F632Cu) goto L_088F632C;
    return;
L_088F632C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088F633Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088F633Cu) goto L_088F633C;
    return;
L_088F633C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    goto L_088F6344;
L_088F6344:
    ctx.gpr[31] = (0x088F634Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 334u, 0x0883A8B4u>(ctx, &aot_mem) && ctx.pc == 0x088F634Cu) goto L_088F634C;
    return;
L_088F634C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x088F635Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088F635Cu) goto L_088F635C;
    return;
L_088F635C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F6368u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088F6368u) goto L_088F6368;
    return;
L_088F6368:
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
L_088F6384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F63A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 367u, 0x088F93ACu>(ctx, &aot_mem) && ctx.pc == 0x088F63A8u) goto L_088F63A8;
    return;
L_088F63A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F6404;
      }
      goto L_088F63B0;
    }
L_088F63B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F63BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088F43B4;
L_088F63BC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088F6404;
      }
      goto L_088F63D0;
    }
L_088F63D0:
    ctx.gpr[18] = (0u | 0u);
    goto L_088F63D4;
L_088F63D4:
    ctx.gpr[31] = (0x088F63DCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 196u, 0x088F8B08u>(ctx, &aot_mem) && ctx.pc == 0x088F63DCu) goto L_088F63DC;
    return;
L_088F63DC:
    if (ctx.gpr[2] != ctx.gpr[16]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_088F63F8;
    }
    goto L_088F63E4;
L_088F63E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x088F63F4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 272u, 0x0883A230u>(ctx, &aot_mem) && ctx.pc == 0x088F63F4u) goto L_088F63F4;
    return;
L_088F63F4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088F63F8;
L_088F63F8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(288));
      if (branch_taken) {
          goto L_088F63D4;
      }
      goto L_088F6404;
    }
L_088F6404:
    ctx.gpr[31] = (0x088F640Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 376u, 0x088F9404u>(ctx, &aot_mem) && ctx.pc == 0x088F640Cu) goto L_088F640C;
    return;
L_088F640C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F6468;
      }
      goto L_088F6414;
    }
L_088F6414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F6420u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088F43B4;
L_088F6420:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088F6468;
      }
      goto L_088F6434;
    }
L_088F6434:
    ctx.gpr[18] = (0u | 0u);
    goto L_088F6438;
L_088F6438:
    ctx.gpr[31] = (0x088F6440u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 235u, 0x088F8D84u>(ctx, &aot_mem) && ctx.pc == 0x088F6440u) goto L_088F6440;
    return;
L_088F6440:
    if (ctx.gpr[2] != ctx.gpr[16]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_088F645C;
    }
    goto L_088F6448;
L_088F6448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x088F6458u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 272u, 0x0883A230u>(ctx, &aot_mem) && ctx.pc == 0x088F6458u) goto L_088F6458;
    return;
L_088F6458:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088F645C;
L_088F645C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(288));
      if (branch_taken) {
          goto L_088F6438;
      }
      goto L_088F6468;
    }
L_088F6468:
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
L_088F6488:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F64B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 192u, 0x088398D0u>(ctx, &aot_mem) && ctx.pc == 0x088F64B0u) goto L_088F64B0;
    return;
L_088F64B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x088F64C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 31u, 0x0883852Cu>(ctx, &aot_mem) && ctx.pc == 0x088F64C0u) goto L_088F64C0;
    return;
L_088F64C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x088F64D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 225u, 0x08839CD0u>(ctx, &aot_mem) && ctx.pc == 0x088F64D0u) goto L_088F64D0;
    return;
L_088F64D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088F64E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F64E8u) goto L_088F64E8;
    return;
L_088F64E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (0u | 0u);
    goto L_088F64FC;
L_088F64FC:
    ctx.gpr[31] = (0x088F6504u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088F6504u) goto L_088F6504;
    return;
L_088F6504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088F64FC;
      }
      goto L_088F651C;
    }
L_088F651C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088F652Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F652Cu) goto L_088F652C;
    return;
L_088F652C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), 0u);
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
L_088F6550:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F688C;
      }
      goto L_088F6590;
    }
L_088F6590:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    ctx.gpr[17] = (ctx.gpr[8] + static_cast<std::uint32_t>(19572));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[8]);
    ctx.gpr[22] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    ctx.gpr[16] = (0u | 0u);
    goto L_088F65D0;
L_088F65D0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088F6640;
      }
      goto L_088F65DC;
    }
L_088F65DC:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x088F65ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F65ECu) goto L_088F65EC;
    return;
L_088F65EC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (0u | 147u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (0u | 13u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(168));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[30] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[30]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088F669C;
      }
      goto L_088F6640;
    }
L_088F6640:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_088F669C;
      }
      goto L_088F664C;
    }
L_088F664C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088F6658u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F6658u) goto L_088F6658;
    return;
L_088F6658:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[23] = (0u | 75u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (0u | 40u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[23] = (ctx.gpr[23] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[21] = (0u | 101u);
    ctx.gpr[22] = (ctx.gpr[22] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.gpr[20] = (0u | 255u);
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    goto L_088F669C;
L_088F669C:
    ctx.gpr[31] = (0x088F66A4u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088F66A4u) goto L_088F66A4;
    return;
L_088F66A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088F65D0;
      }
      goto L_088F66C0;
    }
L_088F66C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[18] = (0u | 255u);
      if (branch_taken) {
          goto L_088F688C;
      }
      goto L_088F66F8;
    }
L_088F66F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x088F6704u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 533u, 0x088EA4DCu>(ctx, &aot_mem) && ctx.pc == 0x088F6704u) goto L_088F6704;
    return;
L_088F6704:
    ctx.gpr[5] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F6718u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 227u, 0x08839CECu>(ctx, &aot_mem) && ctx.pc == 0x088F6718u) goto L_088F6718;
    return;
L_088F6718:
    ctx.gpr[31] = (0x088F6720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 533u, 0x088EA4DCu>(ctx, &aot_mem) && ctx.pc == 0x088F6720u) goto L_088F6720;
    return;
L_088F6720:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[8] = (0u | 147u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_088F6788;
      }
      goto L_088F6740;
    }
L_088F6740:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(392));
      if (branch_taken) {
          goto L_088F67CC;
      }
      goto L_088F6788;
    }
L_088F6788:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[7]));
    rt.memory().aot_store_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(47), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store_word_right(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[17] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(392));
    goto L_088F67CC;
L_088F67CC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x088F67DCu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F67DCu) goto L_088F67DC;
    return;
L_088F67DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(528));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088F6814u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088F6814u) goto L_088F6814;
    return;
L_088F6814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088F6828u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(572));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F6828u) goto L_088F6828;
    return;
L_088F6828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(708));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088F6860u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(540));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088F6860u) goto L_088F6860;
    return;
L_088F6860:
    ctx.gpr[31] = (0x088F6868u);
    // nop
    goto L_088F68BC;
L_088F6868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088F687Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1832));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F687Cu) goto L_088F687C;
    return;
L_088F687C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088F688Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1800));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088F688Cu) goto L_088F688C;
    return;
L_088F688C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F68BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[4] = (0u | 28u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[22] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[23] = (0u | 4u);
    ctx.gpr[20] = (0u | 5u);
    ctx.gpr[30] = (0u | 27u);
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(19572));
    ctx.gpr[19] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    goto L_088F6930;
L_088F6930:
    ctx.gpr[31] = (0x088F6938u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 578u, 0x088EA84Cu>(ctx, &aot_mem) && ctx.pc == 0x088F6938u) goto L_088F6938;
    return;
L_088F6938:
    if (ctx.gpr[2] != ctx.gpr[21]) {
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_088F6A04;
    }
    goto L_088F6940;
L_088F6940:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (0u | 18u);
      if (branch_taken) {
          goto L_088F6950;
      }
      goto L_088F6948;
    }
L_088F6948:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F69F4;
      }
      goto L_088F6950;
    }
L_088F6950:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[21];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088F6964;
      }
      goto L_088F6958;
    }
L_088F6958:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F69F4;
      }
      goto L_088F6964;
    }
L_088F6964:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088F6978;
      }
      goto L_088F696C;
    }
L_088F696C:
    ctx.gpr[4] = (0u | 20u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F69F4;
      }
      goto L_088F6978;
    }
L_088F6978:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 21u);
      if (branch_taken) {
          goto L_088F6988;
      }
      goto L_088F6980;
    }
L_088F6980:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F69F4;
      }
      goto L_088F6988;
    }
L_088F6988:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[23];
    ctx.gpr[4] = (0u | 22u);
      if (branch_taken) {
          goto L_088F6998;
      }
      goto L_088F6990;
    }
L_088F6990:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F69F4;
      }
      goto L_088F6998;
    }
L_088F6998:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[20];
    ctx.gpr[4] = (0u | 6u);
      if (branch_taken) {
          goto L_088F69AC;
      }
      goto L_088F69A0;
    }
L_088F69A0:
    ctx.gpr[4] = (0u | 23u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F69F4;
      }
      goto L_088F69AC;
    }
L_088F69AC:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 7u);
      if (branch_taken) {
          goto L_088F69C0;
      }
      goto L_088F69B4;
    }
L_088F69B4:
    ctx.gpr[4] = (0u | 24u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F69F4;
      }
      goto L_088F69C0;
    }
L_088F69C0:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 8u);
      if (branch_taken) {
          goto L_088F69D4;
      }
      goto L_088F69C8;
    }
L_088F69C8:
    ctx.gpr[4] = (0u | 25u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F69F4;
      }
      goto L_088F69D4;
    }
L_088F69D4:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 9u);
      if (branch_taken) {
          goto L_088F69E8;
      }
      goto L_088F69DC;
    }
L_088F69DC:
    ctx.gpr[4] = (0u | 26u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F69F4;
      }
      goto L_088F69E8;
    }
L_088F69E8:
    if (ctx.gpr[16] != ctx.gpr[4]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_088F69F8;
    }
    goto L_088F69F0;
L_088F69F0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[30]);
    goto L_088F69F4;
L_088F69F4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_088F69F8;
L_088F69F8:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[20];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088F6A10;
      }
      goto L_088F6A00;
    }
L_088F6A00:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_088F6A04;
L_088F6A04:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F6930;
      }
      goto L_088F6A10;
    }
L_088F6A10:
    ctx.gpr[18] = (2220u << 16u);
    ctx.gpr[4] = (16720u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-3036));
    goto L_088F6A2C;
L_088F6A2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(752));
      if (branch_taken) {
          goto L_088F6AB4;
      }
      goto L_088F6A44;
    }
L_088F6A44:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[23];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088F6A54;
      }
      goto L_088F6A4C;
    }
L_088F6A4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088F6A60;
      }
      goto L_088F6A54;
    }
L_088F6A54:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[20];
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_088F6A64;
      }
      goto L_088F6A5C;
    }
L_088F6A5C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_088F6A60;
L_088F6A60:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    goto L_088F6A64;
L_088F6A64:
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088F6A94u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088F6A94u) goto L_088F6A94;
    return;
L_088F6A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(720));
      if (branch_taken) {
          goto L_088F6ADC;
      }
      goto L_088F6AB4;
    }
L_088F6AB4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088F6AC0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088F6AC0u) goto L_088F6AC0;
    return;
L_088F6AC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(736), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(720));
    goto L_088F6ADC;
L_088F6ADC:
    ctx.gpr[31] = (0x088F6AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 256u, 0x08845328u>(ctx, &aot_mem) && ctx.pc == 0x088F6AE4u) goto L_088F6AE4;
    return;
L_088F6AE4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088F6A2C;
      }
      goto L_088F6AF8;
    }
L_088F6AF8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F6B2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_088F6B60;
      }
      goto L_088F6B58;
    }
L_088F6B58:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_088F6B98;
      }
      goto L_088F6B60;
    }
L_088F6B60:
    ctx.gpr[31] = (0x088F6B68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 194u, 0x088398ECu>(ctx, &aot_mem) && ctx.pc == 0x088F6B68u) goto L_088F6B68;
    return;
L_088F6B68:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    goto L_088F6B70;
L_088F6B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088F6B80u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088F6B80u) goto L_088F6B80;
    return;
L_088F6B80:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088F6B70;
      }
      goto L_088F6B90;
    }
L_088F6B90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F6BE4;
      }
      goto L_088F6B98;
    }
L_088F6B98:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088F6BE4;
      }
      goto L_088F6BA0;
    }
L_088F6BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x088F6BACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 33u, 0x08838548u>(ctx, &aot_mem) && ctx.pc == 0x088F6BACu) goto L_088F6BAC;
    return;
L_088F6BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x088F6BBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(184));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 242u, 0x08839E44u>(ctx, &aot_mem) && ctx.pc == 0x088F6BBCu) goto L_088F6BBC;
    return;
L_088F6BBC:
    ctx.gpr[18] = (0u | 2u);
    ctx.gpr[17] = (0u | 360u);
    goto L_088F6BC4;
L_088F6BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088F6BD4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x088F6BD4u) goto L_088F6BD4;
    return;
L_088F6BD4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_088F6BC4;
      }
      goto L_088F6BE4;
    }
L_088F6BE4:
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
L_088F6BFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F6C28u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 9u, 0x088F813Cu>(ctx, &aot_mem) && ctx.pc == 0x088F6C28u) goto L_088F6C28;
    return;
L_088F6C28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088F6D68;
      }
      goto L_088F6C38;
    }
L_088F6C38:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088F6C58u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F6C58u) goto L_088F6C58;
    return;
L_088F6C58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[31] = (0x088F6C7Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088F6C7Cu) goto L_088F6C7C;
    return;
L_088F6C7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088F6D68;
      }
      goto L_088F6C94;
    }
L_088F6C94:
    ctx.gpr[31] = (0x088F6C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 25u, 0x088F81D4u>(ctx, &aot_mem) && ctx.pc == 0x088F6C9Cu) goto L_088F6C9C;
    return;
L_088F6C9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x088F6CB0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 391u, 0x088F949Cu>(ctx, &aot_mem) && ctx.pc == 0x088F6CB0u) goto L_088F6CB0;
    return;
L_088F6CB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F6CD0;
      }
      goto L_088F6CB8;
    }
L_088F6CB8:
    ctx.gpr[31] = (0x088F6CC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088F7354;
L_088F6CC0:
    ctx.gpr[31] = (0x088F6CC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088F7FD0;
L_088F6CC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
      if (branch_taken) {
          goto L_088F6D44;
      }
      goto L_088F6CD0;
    }
L_088F6CD0:
    ctx.gpr[31] = (0x088F6CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 385u, 0x088F945Cu>(ctx, &aot_mem) && ctx.pc == 0x088F6CD8u) goto L_088F6CD8;
    return;
L_088F6CD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F6CF8;
      }
      goto L_088F6CE0;
    }
L_088F6CE0:
    ctx.gpr[31] = (0x088F6CE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088F7A0C;
L_088F6CE8:
    ctx.gpr[31] = (0x088F6CF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088F7C30;
L_088F6CF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
      if (branch_taken) {
          goto L_088F6D44;
      }
      goto L_088F6CF8;
    }
L_088F6CF8:
    ctx.gpr[31] = (0x088F6D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 376u, 0x088F9404u>(ctx, &aot_mem) && ctx.pc == 0x088F6D00u) goto L_088F6D00;
    return;
L_088F6D00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F6D20;
      }
      goto L_088F6D08;
    }
L_088F6D08:
    ctx.gpr[31] = (0x088F6D10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088F76CC;
L_088F6D10:
    ctx.gpr[31] = (0x088F6D18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088F7C30;
L_088F6D18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
      if (branch_taken) {
          goto L_088F6D44;
      }
      goto L_088F6D20;
    }
L_088F6D20:
    ctx.gpr[31] = (0x088F6D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 367u, 0x088F93ACu>(ctx, &aot_mem) && ctx.pc == 0x088F6D28u) goto L_088F6D28;
    return;
L_088F6D28:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
        goto L_088F6D44;
    }
    goto L_088F6D30;
L_088F6D30:
    ctx.gpr[31] = (0x088F6D38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088F6FE4;
L_088F6D38:
    ctx.gpr[31] = (0x088F6D40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088F7C30;
L_088F6D40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    goto L_088F6D44;
L_088F6D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088F6D50u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 271u, 0x08906E70u>(ctx, &aot_mem) && ctx.pc == 0x088F6D50u) goto L_088F6D50;
    return;
L_088F6D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088F6C94;
      }
      goto L_088F6D68;
    }
L_088F6D68:
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
L_088F6D80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_088F6DD8;
      }
      goto L_088F6DB0;
    }
L_088F6DB0:
    ctx.gpr[16] = (0u | 0u);
    goto L_088F6DB4;
L_088F6DB4:
    ctx.gpr[31] = (0x088F6DBCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 273u, 0x08906E8Cu>(ctx, &aot_mem) && ctx.pc == 0x088F6DBCu) goto L_088F6DBC;
    return;
L_088F6DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
      if (branch_taken) {
          goto L_088F6DB4;
      }
      goto L_088F6DD8;
    }
L_088F6DD8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088F6DECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088F6DECu) goto L_088F6DEC;
    return;
L_088F6DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(19568)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), 0u);
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
L_088F6E10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F6E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 391u, 0x088F949Cu>(ctx, &aot_mem) && ctx.pc == 0x088F6E30u) goto L_088F6E30;
    return;
L_088F6E30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F6E4C;
      }
      goto L_088F6E38;
    }
L_088F6E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[31] = (0x088F6E44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 285u, 0x08906F3Cu>(ctx, &aot_mem) && ctx.pc == 0x088F6E44u) goto L_088F6E44;
    return;
L_088F6E44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F6FC8;
      }
      goto L_088F6E4C;
    }
L_088F6E4C:
    ctx.gpr[31] = (0x088F6E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 367u, 0x088F93ACu>(ctx, &aot_mem) && ctx.pc == 0x088F6E54u) goto L_088F6E54;
    return;
L_088F6E54:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F6E7C;
      }
      goto L_088F6E5C;
    }
L_088F6E5C:
    ctx.gpr[31] = (0x088F6E64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 376u, 0x088F9404u>(ctx, &aot_mem) && ctx.pc == 0x088F6E64u) goto L_088F6E64;
    return;
L_088F6E64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088F6E7C;
      }
      goto L_088F6E6C;
    }
L_088F6E6C:
    ctx.gpr[31] = (0x088F6E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 385u, 0x088F945Cu>(ctx, &aot_mem) && ctx.pc == 0x088F6E74u) goto L_088F6E74;
    return;
L_088F6E74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F6FC8;
      }
      goto L_088F6E7C;
    }
L_088F6E7C:
    ctx.gpr[31] = (0x088F6E84u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 367u, 0x088F93ACu>(ctx, &aot_mem) && ctx.pc == 0x088F6E84u) goto L_088F6E84;
    return;
L_088F6E84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F6EA0;
      }
      goto L_088F6E8C;
    }
L_088F6E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F6EE4;
      }
      goto L_088F6EA0;
    }
L_088F6EA0:
    ctx.gpr[31] = (0x088F6EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 376u, 0x088F9404u>(ctx, &aot_mem) && ctx.pc == 0x088F6EA8u) goto L_088F6EA8;
    return;
L_088F6EA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F6EC4;
      }
      goto L_088F6EB0;
    }
L_088F6EB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_088F6EE4;
      }
      goto L_088F6EC4;
    }
L_088F6EC4:
    ctx.gpr[31] = (0x088F6ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 385u, 0x088F945Cu>(ctx, &aot_mem) && ctx.pc == 0x088F6ECCu) goto L_088F6ECC;
    return;
L_088F6ECC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F6EE4;
      }
      goto L_088F6ED4;
    }
L_088F6ED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (ctx.gpr[17] - ctx.gpr[4]);
    goto L_088F6EE4;
L_088F6EE4:
    ctx.gpr[31] = (0x088F6EECu);
    ctx.gpr[16] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 321u, 0x088F91DCu>(ctx, &aot_mem) && ctx.pc == 0x088F6EECu) goto L_088F6EEC;
    return;
L_088F6EEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F6F34;
      }
      goto L_088F6EF4;
    }
L_088F6EF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F6F10;
      }
      goto L_088F6F08;
    }
L_088F6F08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_088F6F84;
      }
      goto L_088F6F10;
    }
L_088F6F10:
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088F6F24;
      }
      goto L_088F6F1C;
    }
L_088F6F1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088F6F84;
      }
      goto L_088F6F24;
    }
L_088F6F24:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
        goto L_088F6F88;
    }
    goto L_088F6F2C;
L_088F6F2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088F6F84;
      }
      goto L_088F6F34;
    }
L_088F6F34:
    ctx.gpr[31] = (0x088F6F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 315u, 0x088F919Cu>(ctx, &aot_mem) && ctx.pc == 0x088F6F3Cu) goto L_088F6F3C;
    return;
L_088F6F3C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F6F58;
      }
      goto L_088F6F44;
    }
L_088F6F44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F6F84;
      }
      goto L_088F6F58;
    }
L_088F6F58:
    ctx.gpr[31] = (0x088F6F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 309u, 0x088F915Cu>(ctx, &aot_mem) && ctx.pc == 0x088F6F60u) goto L_088F6F60;
    return;
L_088F6F60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088F6F84;
      }
      goto L_088F6F70;
    }
L_088F6F70:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088F6F84;
      }
      goto L_088F6F7C;
    }
L_088F6F7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_088F6F84;
      }
      goto L_088F6F84;
    }
L_088F6F84:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_088F6F88;
L_088F6F88:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
        goto L_088F6F90;
    }
    goto L_088F6F90;
L_088F6F90:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] << 6u);
      if (branch_taken) {
          goto L_088F6FC8;
      }
      goto L_088F6FA0;
    }
L_088F6FA0:
    ctx.gpr[17] = (ctx.gpr[17] << 3u);
    ctx.gpr[17] = (ctx.gpr[4] - ctx.gpr[17]);
    goto L_088F6FA8;
L_088F6FA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x088F6FB8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 285u, 0x08906F3Cu>(ctx, &aot_mem) && ctx.pc == 0x088F6FB8u) goto L_088F6FB8;
    return;
L_088F6FB8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(56));
      if (branch_taken) {
          goto L_088F6FA8;
      }
      goto L_088F6FC8;
    }
L_088F6FC8:
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
L_088F6FE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F6FFCu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 520u, 0x088EA2FCu>(ctx, &aot_mem) && ctx.pc == 0x088F6FFCu) goto L_088F6FFC;
    return;
L_088F6FFC:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088F700Cu);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 340u, 0x088F9284u>(ctx, &aot_mem) && ctx.pc == 0x088F700Cu) goto L_088F700C;
    return;
L_088F700C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7078;
      }
      goto L_088F7014;
    }
L_088F7014:
    ctx.gpr[31] = (0x088F701Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 583u, 0x088EA8A8u>(ctx, &aot_mem) && ctx.pc == 0x088F701Cu) goto L_088F701C;
    return;
L_088F701C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2484));
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] << 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x088F7050u);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088F7050u) goto L_088F7050;
    return;
L_088F7050:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F7070u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F7070u) goto L_088F7070;
    return;
L_088F7070:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7340;
      }
      goto L_088F7078;
    }
L_088F7078:
    ctx.gpr[31] = (0x088F7080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 315u, 0x088F919Cu>(ctx, &aot_mem) && ctx.pc == 0x088F7080u) goto L_088F7080;
    return;
L_088F7080:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F70EC;
      }
      goto L_088F7088;
    }
L_088F7088:
    ctx.gpr[31] = (0x088F7090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 584u, 0x088EA8B8u>(ctx, &aot_mem) && ctx.pc == 0x088F7090u) goto L_088F7090;
    return;
L_088F7090:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8360));
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] << 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x088F70C4u);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088F70C4u) goto L_088F70C4;
    return;
L_088F70C4:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F70E4u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F70E4u) goto L_088F70E4;
    return;
L_088F70E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7340;
      }
      goto L_088F70EC;
    }
L_088F70EC:
    ctx.gpr[31] = (0x088F70F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 309u, 0x088F915Cu>(ctx, &aot_mem) && ctx.pc == 0x088F70F4u) goto L_088F70F4;
    return;
L_088F70F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7160;
      }
      goto L_088F70FC;
    }
L_088F70FC:
    ctx.gpr[31] = (0x088F7104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 585u, 0x088EA8C8u>(ctx, &aot_mem) && ctx.pc == 0x088F7104u) goto L_088F7104;
    return;
L_088F7104:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1236));
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] << 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x088F7138u);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088F7138u) goto L_088F7138;
    return;
L_088F7138:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F7158u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F7158u) goto L_088F7158;
    return;
L_088F7158:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7340;
      }
      goto L_088F7160;
    }
L_088F7160:
    ctx.gpr[31] = (0x088F7168u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 346u, 0x088F92C4u>(ctx, &aot_mem) && ctx.pc == 0x088F7168u) goto L_088F7168;
    return;
L_088F7168:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F71D4;
      }
      goto L_088F7170;
    }
L_088F7170:
    ctx.gpr[31] = (0x088F7178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 586u, 0x088EA8D8u>(ctx, &aot_mem) && ctx.pc == 0x088F7178u) goto L_088F7178;
    return;
L_088F7178:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2808));
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] << 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x088F71ACu);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088F71ACu) goto L_088F71AC;
    return;
L_088F71AC:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F71CCu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F71CCu) goto L_088F71CC;
    return;
L_088F71CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7340;
      }
      goto L_088F71D4;
    }
L_088F71D4:
    ctx.gpr[31] = (0x088F71DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 352u, 0x088F9304u>(ctx, &aot_mem) && ctx.pc == 0x088F71DCu) goto L_088F71DC;
    return;
L_088F71DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7254;
      }
      goto L_088F71E4;
    }
L_088F71E4:
    ctx.gpr[31] = (0x088F71ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 587u, 0x088EA8E8u>(ctx, &aot_mem) && ctx.pc == 0x088F71ECu) goto L_088F71EC;
    return;
L_088F71EC:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (0u - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088F722Cu);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088F722Cu) goto L_088F722C;
    return;
L_088F722C:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F724Cu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F724Cu) goto L_088F724C;
    return;
L_088F724C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7340;
      }
      goto L_088F7254;
    }
L_088F7254:
    ctx.gpr[31] = (0x088F725Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 357u, 0x088F933Cu>(ctx, &aot_mem) && ctx.pc == 0x088F725Cu) goto L_088F725C;
    return;
L_088F725C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F72C8;
      }
      goto L_088F7264;
    }
L_088F7264:
    ctx.gpr[31] = (0x088F726Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 588u, 0x088EA8F8u>(ctx, &aot_mem) && ctx.pc == 0x088F726Cu) goto L_088F726C;
    return;
L_088F726C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(600));
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] << 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x088F72A0u);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088F72A0u) goto L_088F72A0;
    return;
L_088F72A0:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F72C0u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F72C0u) goto L_088F72C0;
    return;
L_088F72C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7340;
      }
      goto L_088F72C8;
    }
L_088F72C8:
    ctx.gpr[31] = (0x088F72D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 362u, 0x088F9374u>(ctx, &aot_mem) && ctx.pc == 0x088F72D0u) goto L_088F72D0;
    return;
L_088F72D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7340;
      }
      goto L_088F72D8;
    }
L_088F72D8:
    ctx.gpr[31] = (0x088F72E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 589u, 0x088EA908u>(ctx, &aot_mem) && ctx.pc == 0x088F72E0u) goto L_088F72E0;
    return;
L_088F72E0:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[6] = (ctx.gpr[17] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088F7320u);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088F7320u) goto L_088F7320;
    return;
L_088F7320:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F7340u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F7340u) goto L_088F7340;
    return;
L_088F7340:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F736Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 520u, 0x088EA2FCu>(ctx, &aot_mem) && ctx.pc == 0x088F736Cu) goto L_088F736C;
    return;
L_088F736C:
    ctx.gpr[31] = (0x088F7374u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 513u, 0x088EA28Cu>(ctx, &aot_mem) && ctx.pc == 0x088F7374u) goto L_088F7374;
    return;
L_088F7374:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088F7384u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 340u, 0x088F9284u>(ctx, &aot_mem) && ctx.pc == 0x088F7384u) goto L_088F7384;
    return;
L_088F7384:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F73F0;
      }
      goto L_088F738C;
    }
L_088F738C:
    ctx.gpr[31] = (0x088F7394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 583u, 0x088EA8A8u>(ctx, &aot_mem) && ctx.pc == 0x088F7394u) goto L_088F7394;
    return;
L_088F7394:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2484));
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] << 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x088F73C8u);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088F73C8u) goto L_088F73C8;
    return;
L_088F73C8:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F73E8u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F73E8u) goto L_088F73E8;
    return;
L_088F73E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F76B8;
      }
      goto L_088F73F0;
    }
L_088F73F0:
    ctx.gpr[31] = (0x088F73F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 315u, 0x088F919Cu>(ctx, &aot_mem) && ctx.pc == 0x088F73F8u) goto L_088F73F8;
    return;
L_088F73F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7464;
      }
      goto L_088F7400;
    }
L_088F7400:
    ctx.gpr[31] = (0x088F7408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 584u, 0x088EA8B8u>(ctx, &aot_mem) && ctx.pc == 0x088F7408u) goto L_088F7408;
    return;
L_088F7408:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8360));
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] << 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x088F743Cu);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088F743Cu) goto L_088F743C;
    return;
L_088F743C:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F745Cu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F745Cu) goto L_088F745C;
    return;
L_088F745C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F76B8;
      }
      goto L_088F7464;
    }
L_088F7464:
    ctx.gpr[31] = (0x088F746Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 309u, 0x088F915Cu>(ctx, &aot_mem) && ctx.pc == 0x088F746Cu) goto L_088F746C;
    return;
L_088F746C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F74D8;
      }
      goto L_088F7474;
    }
L_088F7474:
    ctx.gpr[31] = (0x088F747Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 585u, 0x088EA8C8u>(ctx, &aot_mem) && ctx.pc == 0x088F747Cu) goto L_088F747C;
    return;
L_088F747C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1236));
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] << 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x088F74B0u);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088F74B0u) goto L_088F74B0;
    return;
L_088F74B0:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F74D0u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F74D0u) goto L_088F74D0;
    return;
L_088F74D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F76B8;
      }
      goto L_088F74D8;
    }
L_088F74D8:
    ctx.gpr[31] = (0x088F74E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 346u, 0x088F92C4u>(ctx, &aot_mem) && ctx.pc == 0x088F74E0u) goto L_088F74E0;
    return;
L_088F74E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F754C;
      }
      goto L_088F74E8;
    }
L_088F74E8:
    ctx.gpr[31] = (0x088F74F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 586u, 0x088EA8D8u>(ctx, &aot_mem) && ctx.pc == 0x088F74F0u) goto L_088F74F0;
    return;
L_088F74F0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2808));
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] << 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x088F7524u);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088F7524u) goto L_088F7524;
    return;
L_088F7524:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F7544u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F7544u) goto L_088F7544;
    return;
L_088F7544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F76B8;
      }
      goto L_088F754C;
    }
L_088F754C:
    ctx.gpr[31] = (0x088F7554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 352u, 0x088F9304u>(ctx, &aot_mem) && ctx.pc == 0x088F7554u) goto L_088F7554;
    return;
L_088F7554:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F75CC;
      }
      goto L_088F755C;
    }
L_088F755C:
    ctx.gpr[31] = (0x088F7564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 587u, 0x088EA8E8u>(ctx, &aot_mem) && ctx.pc == 0x088F7564u) goto L_088F7564;
    return;
L_088F7564:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (0u - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088F75A4u);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088F75A4u) goto L_088F75A4;
    return;
L_088F75A4:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F75C4u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F75C4u) goto L_088F75C4;
    return;
L_088F75C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F76B8;
      }
      goto L_088F75CC;
    }
L_088F75CC:
    ctx.gpr[31] = (0x088F75D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 357u, 0x088F933Cu>(ctx, &aot_mem) && ctx.pc == 0x088F75D4u) goto L_088F75D4;
    return;
L_088F75D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7640;
      }
      goto L_088F75DC;
    }
L_088F75DC:
    ctx.gpr[31] = (0x088F75E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 588u, 0x088EA8F8u>(ctx, &aot_mem) && ctx.pc == 0x088F75E4u) goto L_088F75E4;
    return;
L_088F75E4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(600));
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] << 3u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x088F7618u);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088F7618u) goto L_088F7618;
    return;
L_088F7618:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F7638u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F7638u) goto L_088F7638;
    return;
L_088F7638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F76B8;
      }
      goto L_088F7640;
    }
L_088F7640:
    ctx.gpr[31] = (0x088F7648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 362u, 0x088F9374u>(ctx, &aot_mem) && ctx.pc == 0x088F7648u) goto L_088F7648;
    return;
L_088F7648:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F76B8;
      }
      goto L_088F7650;
    }
L_088F7650:
    ctx.gpr[31] = (0x088F7658u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 589u, 0x088EA908u>(ctx, &aot_mem) && ctx.pc == 0x088F7658u) goto L_088F7658;
    return;
L_088F7658:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[6] = (ctx.gpr[17] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x088F7698u);
    ctx.gpr[17] = (ctx.gpr[2] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 515u, 0x088EA2ACu>(ctx, &aot_mem) && ctx.pc == 0x088F7698u) goto L_088F7698;
    return;
L_088F7698:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088F76B8u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F76B8u) goto L_088F76B8;
    return;
L_088F76B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F76CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F76E4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 520u, 0x088EA2FCu>(ctx, &aot_mem) && ctx.pc == 0x088F76E4u) goto L_088F76E4;
    return;
L_088F76E4:
    ctx.gpr[31] = (0x088F76ECu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 513u, 0x088EA28Cu>(ctx, &aot_mem) && ctx.pc == 0x088F76ECu) goto L_088F76EC;
    return;
L_088F76EC:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088F76FCu);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 340u, 0x088F9284u>(ctx, &aot_mem) && ctx.pc == 0x088F76FCu) goto L_088F76FC;
    return;
L_088F76FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7760;
      }
      goto L_088F7704;
    }
L_088F7704:
    ctx.gpr[31] = (0x088F770Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 583u, 0x088EA8A8u>(ctx, &aot_mem) && ctx.pc == 0x088F770Cu) goto L_088F770C;
    return;
L_088F770C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2484));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[31] = (0x088F7758u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F7758u) goto L_088F7758;
    return;
L_088F7758:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F79F8;
      }
      goto L_088F7760;
    }
L_088F7760:
    ctx.gpr[31] = (0x088F7768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 315u, 0x088F919Cu>(ctx, &aot_mem) && ctx.pc == 0x088F7768u) goto L_088F7768;
    return;
L_088F7768:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F77CC;
      }
      goto L_088F7770;
    }
L_088F7770:
    ctx.gpr[31] = (0x088F7778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 584u, 0x088EA8B8u>(ctx, &aot_mem) && ctx.pc == 0x088F7778u) goto L_088F7778;
    return;
L_088F7778:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8360));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[31] = (0x088F77C4u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F77C4u) goto L_088F77C4;
    return;
L_088F77C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F79F8;
      }
      goto L_088F77CC;
    }
L_088F77CC:
    ctx.gpr[31] = (0x088F77D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 309u, 0x088F915Cu>(ctx, &aot_mem) && ctx.pc == 0x088F77D4u) goto L_088F77D4;
    return;
L_088F77D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7838;
      }
      goto L_088F77DC;
    }
L_088F77DC:
    ctx.gpr[31] = (0x088F77E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 585u, 0x088EA8C8u>(ctx, &aot_mem) && ctx.pc == 0x088F77E4u) goto L_088F77E4;
    return;
L_088F77E4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1236));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[31] = (0x088F7830u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F7830u) goto L_088F7830;
    return;
L_088F7830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F79F8;
      }
      goto L_088F7838;
    }
L_088F7838:
    ctx.gpr[31] = (0x088F7840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 346u, 0x088F92C4u>(ctx, &aot_mem) && ctx.pc == 0x088F7840u) goto L_088F7840;
    return;
L_088F7840:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F78A4;
      }
      goto L_088F7848;
    }
L_088F7848:
    ctx.gpr[31] = (0x088F7850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 586u, 0x088EA8D8u>(ctx, &aot_mem) && ctx.pc == 0x088F7850u) goto L_088F7850;
    return;
L_088F7850:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2808));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[31] = (0x088F789Cu);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F789Cu) goto L_088F789C;
    return;
L_088F789C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F79F8;
      }
      goto L_088F78A4;
    }
L_088F78A4:
    ctx.gpr[31] = (0x088F78ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 352u, 0x088F9304u>(ctx, &aot_mem) && ctx.pc == 0x088F78ACu) goto L_088F78AC;
    return;
L_088F78AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F791C;
      }
      goto L_088F78B4;
    }
L_088F78B4:
    ctx.gpr[31] = (0x088F78BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 587u, 0x088EA8E8u>(ctx, &aot_mem) && ctx.pc == 0x088F78BCu) goto L_088F78BC;
    return;
L_088F78BC:
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] << 3u);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[8] = (0u - ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[31] = (0x088F7914u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F7914u) goto L_088F7914;
    return;
L_088F7914:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F79F8;
      }
      goto L_088F791C;
    }
L_088F791C:
    ctx.gpr[31] = (0x088F7924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 357u, 0x088F933Cu>(ctx, &aot_mem) && ctx.pc == 0x088F7924u) goto L_088F7924;
    return;
L_088F7924:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7988;
      }
      goto L_088F792C;
    }
L_088F792C:
    ctx.gpr[31] = (0x088F7934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 588u, 0x088EA8F8u>(ctx, &aot_mem) && ctx.pc == 0x088F7934u) goto L_088F7934;
    return;
L_088F7934:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(600));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[31] = (0x088F7980u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F7980u) goto L_088F7980;
    return;
L_088F7980:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F79F8;
      }
      goto L_088F7988;
    }
L_088F7988:
    ctx.gpr[31] = (0x088F7990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 362u, 0x088F9374u>(ctx, &aot_mem) && ctx.pc == 0x088F7990u) goto L_088F7990;
    return;
L_088F7990:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F79F8;
      }
      goto L_088F7998;
    }
L_088F7998:
    ctx.gpr[31] = (0x088F79A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 589u, 0x088EA908u>(ctx, &aot_mem) && ctx.pc == 0x088F79A0u) goto L_088F79A0;
    return;
L_088F79A0:
    ctx.gpr[5] = (ctx.gpr[17] << 3u);
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] << 3u);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[8] = (0u + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[31] = (0x088F79F8u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F79F8u) goto L_088F79F8;
    return;
L_088F79F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7A0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F7A28u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 520u, 0x088EA2FCu>(ctx, &aot_mem) && ctx.pc == 0x088F7A28u) goto L_088F7A28;
    return;
L_088F7A28:
    ctx.gpr[31] = (0x088F7A30u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 513u, 0x088EA28Cu>(ctx, &aot_mem) && ctx.pc == 0x088F7A30u) goto L_088F7A30;
    return;
L_088F7A30:
    ctx.gpr[4] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088F7A40u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 532u, 0x088EA4CCu>(ctx, &aot_mem) && ctx.pc == 0x088F7A40u) goto L_088F7A40;
    return;
L_088F7A40:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088F7A50u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 340u, 0x088F9284u>(ctx, &aot_mem) && ctx.pc == 0x088F7A50u) goto L_088F7A50;
    return;
L_088F7A50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7ABC;
      }
      goto L_088F7A58;
    }
L_088F7A58:
    ctx.gpr[31] = (0x088F7A60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 583u, 0x088EA8A8u>(ctx, &aot_mem) && ctx.pc == 0x088F7A60u) goto L_088F7A60;
    return;
L_088F7A60:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2484));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.gpr[17] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(724));
    ctx.gpr[31] = (0x088F7AB4u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F7AB4u) goto L_088F7AB4;
    return;
L_088F7AB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7C18;
      }
      goto L_088F7ABC;
    }
L_088F7ABC:
    ctx.gpr[31] = (0x088F7AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 315u, 0x088F919Cu>(ctx, &aot_mem) && ctx.pc == 0x088F7AC4u) goto L_088F7AC4;
    return;
L_088F7AC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7B30;
      }
      goto L_088F7ACC;
    }
L_088F7ACC:
    ctx.gpr[31] = (0x088F7AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 584u, 0x088EA8B8u>(ctx, &aot_mem) && ctx.pc == 0x088F7AD4u) goto L_088F7AD4;
    return;
L_088F7AD4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8360));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.gpr[17] << 7u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[17] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[2] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(820));
    ctx.gpr[31] = (0x088F7B28u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F7B28u) goto L_088F7B28;
    return;
L_088F7B28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7C18;
      }
      goto L_088F7B30;
    }
L_088F7B30:
    ctx.gpr[31] = (0x088F7B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 309u, 0x088F915Cu>(ctx, &aot_mem) && ctx.pc == 0x088F7B38u) goto L_088F7B38;
    return;
L_088F7B38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7BA8;
      }
      goto L_088F7B40;
    }
L_088F7B40:
    ctx.gpr[31] = (0x088F7B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 585u, 0x088EA8C8u>(ctx, &aot_mem) && ctx.pc == 0x088F7B48u) goto L_088F7B48;
    return;
L_088F7B48:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1236));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (ctx.gpr[17] << 5u);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(676));
    ctx.gpr[31] = (0x088F7BA0u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F7BA0u) goto L_088F7BA0;
    return;
L_088F7BA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7C18;
      }
      goto L_088F7BA8;
    }
L_088F7BA8:
    ctx.gpr[31] = (0x088F7BB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 346u, 0x088F92C4u>(ctx, &aot_mem) && ctx.pc == 0x088F7BB0u) goto L_088F7BB0;
    return;
L_088F7BB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088F7C18;
      }
      goto L_088F7BB8;
    }
L_088F7BB8:
    ctx.gpr[31] = (0x088F7BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 586u, 0x088EA8D8u>(ctx, &aot_mem) && ctx.pc == 0x088F7BC0u) goto L_088F7BC0;
    return;
L_088F7BC0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(2808));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[17] << 8u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[17] - ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] << 4u);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(724));
    ctx.gpr[31] = (0x088F7C18u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x088F7C18u) goto L_088F7C18;
    return;
L_088F7C18:
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
L_088F7C30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F7C44u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 321u, 0x088F91DCu>(ctx, &aot_mem) && ctx.pc == 0x088F7C44u) goto L_088F7C44;
    return;
L_088F7C44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F7D9C;
      }
      goto L_088F7C4C;
    }
L_088F7C4C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[9] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[9]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088F7CE8;
      }
      goto L_088F7C70;
    }
L_088F7C70:
    ctx.gpr[7] = (0u | 5u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (16932u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (16808u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (16960u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (17050u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.lo);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088F7D78;
      }
      goto L_088F7CE8;
    }
L_088F7CE8:
    ctx.gpr[8] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088F7D38;
      }
      goto L_088F7CF4;
    }
L_088F7CF4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[7] = (16984u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (16816u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (17098u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088F7D78;
      }
      goto L_088F7D38;
    }
L_088F7D38:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (16920u << 16u);
      if (branch_taken) {
          goto L_088F7D7C;
      }
      goto L_088F7D40;
    }
L_088F7D40:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[7] = (16976u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (17098u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_088F7D78;
L_088F7D78:
    ctx.gpr[7] = (16920u << 16u);
    goto L_088F7D7C;
L_088F7D7C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088F7FC0;
      }
      goto L_088F7D9C;
    }
L_088F7D9C:
    ctx.gpr[31] = (0x088F7DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 315u, 0x088F919Cu>(ctx, &aot_mem) && ctx.pc == 0x088F7DA4u) goto L_088F7DA4;
    return;
L_088F7DA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
      if (branch_taken) {
          goto L_088F7E8C;
      }
      goto L_088F7DAC;
    }
L_088F7DAC:
    ctx.gpr[8] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[8]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[8] = (16960u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19568)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (16880u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (17062u << 16u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088F7E04;
      }
      goto L_088F7DE4;
    }
L_088F7DE4:
    ctx.gpr[7] = (0u - ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] & 3u);
    ctx.gpr[7] = (0u - ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
      if (branch_taken) {
          goto L_088F7E18;
      }
      goto L_088F7E04;
    }
L_088F7E04:
    ctx.gpr[7] = (ctx.gpr[7] & 3u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    goto L_088F7E18;
L_088F7E18:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088F7E48;
      }
      goto L_088F7E28;
    }
L_088F7E28:
    ctx.gpr[7] = (0u - ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[7] & 3u);
    ctx.gpr[7] = (0u - ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
      if (branch_taken) {
          goto L_088F7E5C;
      }
      goto L_088F7E48;
    }
L_088F7E48:
    ctx.gpr[7] = (ctx.gpr[16] & 3u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    goto L_088F7E5C;
L_088F7E5C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (16948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[6] = (17046u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088F7FC0;
      }
      goto L_088F7E8C;
    }
L_088F7E8C:
    ctx.gpr[31] = (0x088F7E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 309u, 0x088F915Cu>(ctx, &aot_mem) && ctx.pc == 0x088F7E94u) goto L_088F7E94;
    return;
L_088F7E94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (2221u << 16u);
      if (branch_taken) {
          goto L_088F7FC0;
      }
      goto L_088F7E9C;
    }
L_088F7E9C:
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[7] = (17146u << 16u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_088F7F40;
      }
      goto L_088F7EC8;
    }
L_088F7EC8:
    ctx.gpr[8] = (17072u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[16] & 1u);
    ctx.gpr[8] = (16952u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
      if (branch_taken) {
          goto L_088F7EF8;
      }
      goto L_088F7EE0;
    }
L_088F7EE0:
    ctx.gpr[7] = (0u - ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
      if (branch_taken) {
          goto L_088F7F08;
      }
      goto L_088F7EF8;
    }
L_088F7EF8:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    goto L_088F7F08;
L_088F7F08:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088F7FA0;
      }
      goto L_088F7F40;
    }
L_088F7F40:
    ctx.gpr[7] = (0u | 3u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[8] = (17034u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (16808u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (ctx.hi);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[16]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_088F7FA0;
L_088F7FA0:
    ctx.gpr[7] = (17028u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.gpr[7] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088F7FC0;
L_088F7FC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088F7FD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x088F7FE4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 321u, 0x088F91DCu>(ctx, &aot_mem) && ctx.pc == 0x088F7FE4u) goto L_088F7FE4;
    return;
L_088F7FE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[6] = (2221u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 2u, 0x088F8048u>(ctx, &aot_mem); return;
      }
      goto L_088F7FEC;
    }
L_088F7FEC:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(19568)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.pc = 0x088F8000u; return;
}

void recomp_unit_0060(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0060_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_60(Runtime &runtime) {
    runtime.register_generated_unit(60u, 0x088F4000u, 16384u, &recomp_unit_0060, &recomp_unit_0060_entry);
    runtime.register_function(0x088F4004u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F400Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4014u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F403Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4044u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F404Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4050u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F405Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4064u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F406Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4074u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4080u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4088u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F40A4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F40A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F40B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F40B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F40C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F40D8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4124u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4130u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4148u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F416Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4180u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4190u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4198u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F41B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F41CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F41D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F41E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F41F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F41F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4204u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4254u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4264u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4270u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F427Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4284u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F428Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F42FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F430Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4314u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4320u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4328u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4330u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4338u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4350u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F435Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4368u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4370u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4378u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4388u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F438Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F43B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F43E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F43F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4400u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F440Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4418u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4424u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4430u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4434u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F444Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4458u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4460u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4468u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4470u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4488u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4490u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4498u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F44B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F44B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F44C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F44D8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F44DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F44E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F44F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F44FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4508u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4514u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4520u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F452Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4530u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F454Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4554u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4560u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F456Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4578u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4584u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4588u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4598u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F45A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F45A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F45BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F45C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F45CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F45DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F45E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F45E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F45F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4600u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F460Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4610u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4624u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4630u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4648u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4650u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4658u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4670u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4678u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4680u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4698u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F469Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F46C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F46D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F46F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4710u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4740u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4750u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4764u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F477Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4790u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F47A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F47B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F47C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F47D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F47DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F47E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F47F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4800u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F480Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F481Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4830u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4838u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4848u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4854u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4864u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4874u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F487Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4884u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F488Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4898u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F48A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F48B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F48B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F48C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F48CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F48E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F48F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4904u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F490Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4914u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F491Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4924u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F492Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4934u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F493Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4944u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F494Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4954u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F495Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4964u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F496Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F497Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4984u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F498Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49A4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49D8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F49F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A00u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A08u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A10u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A18u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A24u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A34u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A3Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A48u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A70u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A80u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4A98u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4AACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4AC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4AD4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4AE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4AF4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B04u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B14u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B24u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B30u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B48u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B58u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B6Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B74u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B8Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4B9Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4BC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4BE8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4BF4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C0Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C14u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C1Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C2Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C34u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C3Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C48u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C54u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C64u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4C90u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4CACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4CBCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4CCCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4CD8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4CE8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D0Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D28u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D38u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D48u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D50u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D64u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D74u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D78u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D84u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4D90u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4DA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4DB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4DB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4DC8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4DD0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4DDCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4DECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4DF8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E00u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E10u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E20u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E48u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E60u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E74u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4E94u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4EA4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4EB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4EC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4ED8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4EE8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4F0Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4F6Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4F84u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4FA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4FACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4FB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4FC8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4FD4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4FE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4FECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F4FFCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F500Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5028u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5070u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5088u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F50D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F50F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5138u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5164u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5190u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5198u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F51B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F51D8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F51ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5204u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5234u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5244u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5280u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F52B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F52C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F52CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F52D8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F52E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F52ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5300u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5310u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5320u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5330u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5340u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5350u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5370u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5380u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5388u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5394u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F53BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F53CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F53DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F53F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F53FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5414u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F541Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F542Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F543Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F544Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F545Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F546Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5480u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5494u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F549Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F54B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F54C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F54D8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F54E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F54F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5508u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F552Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5568u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5578u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5584u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F55C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F55D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F55E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5620u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5634u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F563Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F565Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F568Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F56B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F56C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F56DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F56E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F56ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F56F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F56FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5704u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5718u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5744u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5754u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F576Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5774u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F57ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F580Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5814u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F581Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5824u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F582Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5834u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F583Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5844u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5850u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5858u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5860u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5868u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5870u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5878u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5880u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5888u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5890u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5894u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F589Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F58A4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F58ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F58B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F58BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F58C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F58CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F58F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5900u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5924u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F592Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5958u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5960u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5968u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5988u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5990u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5998u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F59B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F59C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F59E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F59E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F59F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F59F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5A04u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5A28u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5A30u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5A7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5A8Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5A90u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5AA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5AE0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B20u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B38u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B40u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B48u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B50u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B58u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B60u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B68u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B74u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B84u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B8Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B94u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5B9Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BA4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BB4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BC8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5BFCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C00u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C08u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C10u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C18u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C20u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C4Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C54u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C68u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C90u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C94u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5C98u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5CA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5CB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D0Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D14u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D40u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D58u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D60u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D70u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D84u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D8Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5D9Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5DA8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5DB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5DB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5DC8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5DD4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5DDCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5DE8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5DF8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E00u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E28u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E34u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E50u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E64u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E6Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5E74u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5EA8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5EBCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5F20u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5F28u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5F30u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5F68u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5F70u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5F78u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5FA8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5FB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5FB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5FC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5FD0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5FDCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5FE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5FECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5FF4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F5FFCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6004u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F600Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6014u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F601Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6020u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6024u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6034u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F604Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6060u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6064u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6074u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6084u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F60B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F60D8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F60E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F60E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F60F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6100u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6108u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6110u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6118u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6120u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F612Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F613Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6144u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6150u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6158u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6168u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6178u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6188u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6198u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F61A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F61B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F61C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F61CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F61D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F61DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F61E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F61F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F61F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6200u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6208u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6210u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6218u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6220u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6224u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6228u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6234u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6238u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F624Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F625Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6260u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6268u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6270u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6278u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6280u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6288u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6290u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F629Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F62A4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F62ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F62B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F62BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F62C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F62C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F62D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F62E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F62E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F62F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6300u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6308u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6314u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6318u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6324u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F632Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F633Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6344u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F634Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F635Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6368u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6384u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F63A8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F63B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F63BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F63D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F63D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F63DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F63E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F63F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F63F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6404u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F640Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6414u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6420u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6434u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6438u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6440u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6448u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6458u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F645Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6468u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6488u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F64B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F64C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F64D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F64E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F64FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6504u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F651Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F652Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6550u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6590u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F65D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F65DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F65ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6640u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F664Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6658u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F669Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F66A4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F66C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F66F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6704u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6718u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6720u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6740u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6788u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F67CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F67DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6814u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6828u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6860u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6868u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F687Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F688Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F68BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6930u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6938u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6940u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6948u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6950u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6958u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6964u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F696Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6978u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6980u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6988u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6990u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6998u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F69A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F69ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F69B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F69C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F69C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F69D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F69DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F69E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F69F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F69F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F69F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6A00u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6A04u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6A10u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6A2Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6A44u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6A4Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6A54u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6A5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6A60u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6A64u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6A94u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6AB4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6AC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6ADCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6AE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6AF8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B2Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B58u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B60u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B68u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B70u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B80u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B90u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6B98u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6BA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6BACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6BBCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6BC4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6BD4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6BE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6BFCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6C28u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6C38u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6C58u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6C7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6C94u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6C9Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6CB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6CB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6CC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6CC8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6CD0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6CD8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6CE0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6CE8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6CF0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6CF8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D00u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D08u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D10u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D18u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D20u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D28u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D30u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D38u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D40u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D44u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D50u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D68u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6D80u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6DB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6DB4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6DBCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6DD8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6DECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E10u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E30u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E38u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E44u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E4Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E54u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E64u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E6Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E74u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E84u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6E8Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6EA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6EA8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6EB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6EC4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6ECCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6ED4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6EE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6EECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6EF4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F08u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F10u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F1Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F24u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F2Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F34u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F3Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F44u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F58u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F60u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F70u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F84u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F88u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6F90u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6FA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6FA8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6FB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6FC8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6FE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F6FFCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F700Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7014u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F701Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7050u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7070u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7078u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7080u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7088u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7090u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F70C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F70E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F70ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F70F4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F70FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7104u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7138u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7158u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7160u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7168u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7170u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7178u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F71ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F71CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F71D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F71DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F71E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F71ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F722Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F724Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7254u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F725Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7264u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F726Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72C0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72D8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F72E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7320u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7340u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7354u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F736Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7374u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7384u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F738Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7394u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F73C8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F73E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F73F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F73F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7400u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7408u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F743Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F745Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7464u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F746Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7474u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F747Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F74B0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F74D0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F74D8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F74E0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F74E8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F74F0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7524u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7544u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F754Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7554u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F755Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7564u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F75A4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F75C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F75CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F75D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F75DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F75E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7618u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7638u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7640u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7648u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7650u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7658u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7698u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F76B8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F76CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F76E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F76ECu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F76FCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7704u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F770Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7758u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7760u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7768u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7770u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7778u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F77C4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F77CCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F77D4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F77DCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F77E4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7830u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7838u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7840u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7848u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7850u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F789Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F78A4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F78ACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F78B4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F78BCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7914u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F791Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7924u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F792Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7934u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7980u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7988u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7990u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7998u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F79A0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F79F8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A0Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A28u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A30u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A40u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A50u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A58u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7A60u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7AB4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7ABCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7AC4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7ACCu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7AD4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B28u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B30u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B38u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B40u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7B48u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7BA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7BA8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7BB0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7BB8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7BC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7C18u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7C30u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7C44u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7C4Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7C70u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7CE8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7CF4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7D38u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7D40u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7D78u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7D7Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7D9Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7DA4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7DACu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7DE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7E04u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7E18u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7E28u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7E48u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7E5Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7E8Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7E94u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7E9Cu, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7EC8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7EE0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7EF8u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7F08u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7F40u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7FA0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7FC0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7FD0u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7FE4u, &recomp_unit_0060, "recomp_unit_0060");
    runtime.register_function(0x088F7FECu, &recomp_unit_0060, "recomp_unit_0060");
}
} // namespace psprecomp

#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0006[4095] = {
    1, 0, 2, 3, 0, 4, 0, 0, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13,
    0, 0, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0,
    20, 0, 0, 21, 0, 0, 22, 23, 0, 0, 0, 24, 0, 25, 0, 0, 26, 27, 0, 28, 0, 0, 0, 29, 0, 30, 31, 0, 32, 33, 0, 0,
    34, 0, 35, 0, 0, 0, 36, 0, 0, 37, 38, 0, 39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0,
    49, 0, 50, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 55, 0, 0,
    0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 61, 0, 62, 0, 63, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 67, 0, 0, 68, 0, 0,
    69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 79, 0, 0,
    80, 0, 0, 81, 0, 0, 82, 0, 0, 83, 0, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 89, 0, 0, 90, 0,
    91, 0, 0, 92, 0, 0, 0, 93, 0, 94, 0, 95, 0, 0, 96, 0, 0, 97, 0, 98, 0, 0, 99, 0, 0, 100, 0, 101, 0, 0, 102, 0,
    103, 0, 104, 0, 105, 0, 106, 0, 0, 107, 0, 0, 108, 0, 109, 110, 0, 111, 0, 0, 112, 113, 0, 114, 0, 115, 0, 116, 0, 117, 0, 0,
    118, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0,
    128, 129, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 135, 0, 136, 0,
    0, 137, 0, 138, 0, 0, 139, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0,
    147, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 154, 0, 0, 0,
    0, 155, 0, 156, 157, 0, 0, 0, 158, 159, 0, 160, 0, 161, 0, 0, 162, 0, 0, 0, 0, 163, 0, 164, 0, 0, 0, 0, 165, 166, 0, 167,
    0, 0, 0, 168, 0, 169, 0, 0, 0, 0, 170, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 173, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0,
    177, 0, 0, 178, 0, 0, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 185, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0,
    198, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 204, 0, 205, 0, 0, 0,
    0, 0, 206, 0, 207, 0, 0, 0, 208, 0, 209, 0, 0, 210, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 215,
    0, 216, 0, 0, 0, 0, 0, 0, 217, 218, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 222, 0, 223, 0, 0, 0, 224,
    225, 0, 226, 0, 0, 0, 227, 0, 228, 229, 0, 230, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0,
    0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0,
    243, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 251, 0,
    0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0,
    0, 0, 260, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0,
    267, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0, 271, 0, 272, 0, 273, 274, 0, 275, 0, 276, 0, 0, 277, 0, 0,
    0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 280, 0, 281, 0, 282, 283, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 286,
    0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 289, 290, 0, 0, 291, 0, 0, 292, 0, 293, 0, 294, 0, 295, 0, 296, 0, 0, 0, 297, 0,
    0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 300, 0, 301, 302, 0, 303, 0, 304, 305, 0, 306, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0,
    0, 309, 0, 0, 310, 0, 311, 0, 0, 312, 0, 0, 313, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0,
    0, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 322, 323, 0, 0, 0, 0, 0, 324, 0, 0, 325, 326, 0, 0, 0,
    327, 0, 0, 328, 0, 329, 0, 330, 0, 331, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 0, 0, 0, 338, 339, 0,
    0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0, 344, 0, 345, 0, 0, 0, 0, 346, 0,
    0, 0, 0, 0, 347, 0, 0, 348, 0, 349, 0, 0, 0, 350, 0, 351, 0, 0, 352, 0, 353, 0, 0, 354, 0, 355, 0, 356, 0, 0, 0, 357,
    0, 358, 0, 0, 359, 0, 360, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 364, 0, 365, 0, 0, 366, 0, 367, 0, 368, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 0, 372, 0, 0, 373, 0, 374, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 377, 0, 378, 379, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 392, 0, 0, 393, 394, 0, 395, 0,
    0, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 400, 0, 0, 401, 402, 0, 403, 0, 0, 0, 404, 0, 0,
    405, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 415, 0,
    416, 0, 417, 0, 418, 0, 419, 0, 420, 0, 421, 0, 422, 0, 0, 423, 0, 424, 0, 0, 425, 426, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0,
    428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 430, 0, 0, 0, 431, 0, 432, 0, 0, 433,
    0, 0, 0, 0, 434, 435, 0, 436, 0, 0, 0, 0, 437, 438, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 444, 0, 445, 0, 0,
    0, 0, 0, 0, 446, 0, 447, 448, 0, 0, 0, 0, 0, 0, 449, 450, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0,
    0, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 0,
    460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 0, 469, 0, 0, 0, 0, 0, 0,
    470, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 474, 0, 475, 0, 0, 476, 0, 477, 0, 478, 0, 0, 479, 0, 0, 0,
    0, 0, 0, 0, 480, 0, 0, 481, 0, 482, 0, 0, 0, 483, 0, 484, 0, 485, 0, 0, 486, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0,
    489, 0, 0, 490, 0, 491, 0, 0, 492, 0, 0, 493, 0, 494, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 498, 0, 0,
    499, 0, 0, 500, 0, 501, 0, 0, 502, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0,
    505, 0, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0, 514, 0, 515, 0, 516,
    0, 517, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0, 520, 521, 0, 0, 522, 0, 0, 0, 523, 0, 524, 0, 0, 0, 525, 0, 526, 0, 0, 0,
    0, 0, 0, 527, 0, 528, 0, 529, 0, 530, 0, 0, 0, 0, 531, 0, 532, 0, 533, 0, 0, 0, 534, 535, 0, 0, 0, 0, 536, 0, 537, 0,
    0, 538, 0, 0, 0, 0, 539, 0, 540, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 547, 0,
    548, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0,
    0, 554, 555, 0, 556, 0, 0, 0, 0, 557, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0,
    0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 566, 0, 0, 0, 567, 0, 568, 0, 569, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 579, 0, 0, 580, 0,
    581, 0, 0, 0, 0, 582, 0, 583, 0, 0, 0, 584, 0, 585, 0, 586, 0, 587, 0, 588, 0, 589, 0, 0, 590, 591, 0, 0, 592, 0, 0, 593,
    0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 600, 0, 601, 0, 0, 0, 602, 0, 0, 0, 603, 0, 604, 0, 605, 0, 606, 0, 0, 607, 0, 0, 0, 608, 0,
    609, 0, 610, 0, 0, 0, 611, 612, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 616, 0, 0, 617, 0, 0, 0, 0,
    0, 618, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 623, 0, 624, 0,
    0, 625, 626, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 630, 0, 0, 631, 0, 0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 636, 0, 0, 637, 638, 0, 0, 0, 639,
    0, 0, 640, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 644, 0, 0,
    0, 645, 0, 0, 0, 646, 0, 0, 647, 648, 0, 649, 0, 0, 0, 0, 0, 650, 651, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0,
    0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0, 656, 0, 0, 657, 0, 0, 658, 0, 659, 0, 0, 0, 0, 0, 660, 661, 0, 0, 0, 0,
    0, 662, 0, 0, 0, 663, 0, 0, 0, 0, 664, 0, 665, 0, 666, 0, 0, 667, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0,
    0, 670, 0, 0, 0, 0, 671, 0, 672, 0, 0, 0, 673, 674, 0, 675, 0, 0, 676, 0, 677, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 681, 0, 682, 0, 0, 0, 683, 0, 0, 0, 0, 0, 684, 0,
    0, 685, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 688, 0,
    0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    691, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 694, 0, 695, 0, 696, 0, 0, 0, 697, 0, 0, 0,
    698, 0, 0, 699, 0, 0, 0, 0, 700, 0, 701, 0, 702, 0, 0, 0, 0, 703, 0, 0, 704, 0, 0, 705, 706, 0, 707, 0, 708, 0, 709, 0,
    710, 0, 711, 0, 712, 0, 713, 0, 714, 0, 715, 0, 716, 0, 717, 0, 718, 0, 719, 0, 720, 0, 721, 0, 722, 0, 723, 0, 724, 0, 725, 0,
    726, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 728, 729, 0, 730, 0, 0, 0, 0, 731, 0, 732, 0, 733, 0, 734, 0, 735, 0, 736, 0, 737,
    0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 741, 0, 0, 742, 743, 0, 744, 0, 745,
    0, 746, 0, 747, 0, 748, 0, 749, 0, 750, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 752, 0, 0, 753, 0, 0, 0, 754, 0, 0, 0,
    0, 0, 0, 0, 755, 0, 756, 0, 0, 757, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 760, 0, 761, 0, 762, 0, 763, 0,
    764, 0, 765, 0, 766, 0, 767, 0, 768, 0, 0, 769, 0, 770, 0, 771, 0, 0, 772, 0, 773, 0, 0, 774, 0, 0, 775, 0, 0, 776, 0, 0,
    777, 0, 0, 778, 0, 0, 779, 0, 780, 0, 781, 0, 782, 0, 783, 0, 0, 784, 0, 0, 785, 0, 0, 786, 0, 0, 787, 0, 0, 788, 0, 0,
    789, 0, 790, 0, 791, 0, 792, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 795, 0, 0, 796, 0, 797,
    0, 0, 798, 0, 799, 800, 0, 0, 801, 0, 802, 0, 803, 0, 0, 804, 805, 0, 806, 0, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 809, 0, 0, 810, 0, 0, 0, 811, 0, 812, 0, 813, 0, 0, 814, 0, 815, 816, 0,
    817, 0, 818, 0, 819, 0, 820, 0, 821, 0, 822, 0, 823, 0, 824, 0, 825, 0, 826, 0, 827, 0, 0, 828, 0, 829, 0, 0, 830, 0, 831, 0,
    832, 0, 833, 0, 834, 0, 0, 835, 0, 836, 0, 0, 837, 0, 0, 838, 0, 839, 840, 0, 841, 842, 0, 0, 843, 0, 0, 844, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 845, 0, 0, 0, 0, 0, 0, 846, 0, 847, 0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 0, 0, 0, 0, 850, 0, 0, 0, 851, 0, 0, 0, 852, 0, 0,
    0, 853, 0, 0, 0, 854, 0, 0, 0, 855, 0, 0, 0, 856, 0, 0, 0, 0, 857, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 858, 0, 0,
    0, 859, 0, 0, 0, 860, 0, 0, 0, 0, 0, 0, 861, 0, 0, 0, 0, 0, 862, 0, 0, 0, 0, 0, 0, 863, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 864, 0, 0, 865, 0, 0, 0, 866, 0, 867, 0, 0, 868, 0, 0, 0, 0, 0, 0, 0, 869, 0, 0, 0, 870,
    0, 0, 871, 0, 0, 0, 0, 0, 0, 872, 0, 873, 0, 0, 0, 0, 874, 875, 0, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 0, 877, 0,
    0, 878, 0, 0, 0, 0, 879, 0, 0, 0, 880, 0, 0, 881, 0, 882, 0, 0, 0, 0, 0, 0, 883, 0, 0, 0, 0, 0, 0, 884, 0, 885,
    0, 886, 887, 0, 0, 0, 888, 0, 0, 0, 889, 0, 0, 0, 0, 0, 890, 0, 0, 0, 891, 0, 0, 0, 0, 0, 0, 892, 0, 0, 0, 0,
    0, 0, 0, 0, 893, 0, 894, 0, 0, 895, 0, 0, 0, 0, 0, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    897, 898, 0, 0, 0, 0, 0, 0, 899, 0, 0, 0, 0, 0, 0, 0, 0, 900, 0, 0, 901, 0, 902, 0, 0, 0, 903, 0, 904, 0, 0, 905,
    0, 0, 0, 0, 0, 906, 0, 0, 907, 0, 0, 0, 0, 0, 908, 0, 909, 0, 910, 0, 0, 0, 911, 0, 0, 912, 0, 0, 0, 913, 0, 0,
    914, 0, 0, 0, 915, 0, 916, 0, 917, 0, 0, 918, 0, 0, 0, 919, 0, 920, 0, 921, 0, 0, 922, 0, 0, 0, 923, 0, 924, 0, 925, 0,
    0, 926, 0, 0, 0, 927, 0, 928, 0, 929, 0, 0, 930, 0, 0, 0, 0, 0, 0, 931, 0, 0, 932, 0, 0, 933, 0, 934, 0, 0, 0, 0,
    0, 0, 935, 0, 936, 0, 0, 937, 0, 938, 0, 0, 0, 0, 0, 0, 939, 0, 0, 0, 0, 0, 0, 0, 940, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 941, 0, 0, 0, 0, 942, 0, 0, 943, 0, 944, 945, 0, 0, 0, 0, 946, 0,
    0, 0, 0, 947, 0, 0, 948, 0, 949, 0, 950, 951, 0, 0, 0, 952, 0, 0, 0, 0, 953, 0, 0, 0, 954, 0, 0, 0, 955, 0, 956, 0,
    0, 0, 957, 0, 0, 0, 0, 958, 0, 0, 0, 959, 0, 0, 0, 960, 0, 0, 0, 961, 0, 0, 0, 962, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 963, 0, 0, 0, 0, 0, 0, 0, 0, 0, 964, 0, 0, 0, 0, 965, 0, 966, 0, 0, 967,
    968, 0, 0, 0, 0, 0, 969, 0, 0, 0, 0, 0, 0, 0, 0, 0, 970, 0, 971, 0, 0, 0, 972, 0, 973, 0, 0, 0, 0, 974, 0, 975,
    0, 0, 976, 0, 977, 0, 0, 978, 0, 979, 0, 980, 981, 0, 0, 0, 0, 0, 0, 982, 0, 0, 0, 0, 0, 0, 0, 983, 0, 984, 0, 0,
    0, 0, 985, 986, 0, 0, 0, 987, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 988, 0, 0, 989, 0, 0, 990, 0, 0, 991, 992, 0, 0,
    0, 993, 0, 0, 0, 0, 0, 0, 0, 994, 0, 0, 0, 0, 0, 0, 995, 0, 996, 0, 0, 997, 0, 0, 0, 998, 0, 0, 0, 999, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 1000, 0, 0, 0, 0, 0, 1001, 0, 0, 0, 1002, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1003, 0, 0, 0, 0,
    0, 0, 0, 0, 1004, 0, 0, 0, 1005, 0, 0, 0, 0, 0, 1006, 0, 0, 0, 1007, 0, 0, 0, 1008, 0, 0, 0, 1009, 0, 0, 0, 1010,
};
void recomp_unit_0006_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0881C004u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0006[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0881C004;
    case 2u: goto L_0881C00C;
    case 3u: goto L_0881C010;
    case 4u: goto L_0881C018;
    case 5u: goto L_0881C028;
    case 6u: goto L_0881C030;
    case 7u: goto L_0881C038;
    case 8u: goto L_0881C040;
    case 9u: goto L_0881C048;
    case 10u: goto L_0881C04C;
    case 11u: goto L_0881C058;
    case 12u: goto L_0881C078;
    case 13u: goto L_0881C080;
    case 14u: goto L_0881C090;
    case 15u: goto L_0881C09C;
    case 16u: goto L_0881C0AC;
    case 17u: goto L_0881C0D4;
    case 18u: goto L_0881C0E4;
    case 19u: goto L_0881C0F4;
    case 20u: goto L_0881C104;
    case 21u: goto L_0881C110;
    case 22u: goto L_0881C11C;
    case 23u: goto L_0881C120;
    case 24u: goto L_0881C130;
    case 25u: goto L_0881C138;
    case 26u: goto L_0881C144;
    case 27u: goto L_0881C148;
    case 28u: goto L_0881C150;
    case 29u: goto L_0881C160;
    case 30u: goto L_0881C168;
    case 31u: goto L_0881C16C;
    case 32u: goto L_0881C174;
    case 33u: goto L_0881C178;
    case 34u: goto L_0881C184;
    case 35u: goto L_0881C18C;
    case 36u: goto L_0881C19C;
    case 37u: goto L_0881C1A8;
    case 38u: goto L_0881C1AC;
    case 39u: goto L_0881C1B4;
    case 40u: goto L_0881C1BC;
    case 41u: goto L_0881C1C4;
    case 42u: goto L_0881C1CC;
    case 43u: goto L_0881C1D4;
    case 44u: goto L_0881C1DC;
    case 45u: goto L_0881C1E4;
    case 46u: goto L_0881C1EC;
    case 47u: goto L_0881C1F4;
    case 48u: goto L_0881C1FC;
    case 49u: goto L_0881C204;
    case 50u: goto L_0881C20C;
    case 51u: goto L_0881C218;
    case 52u: goto L_0881C220;
    case 53u: goto L_0881C250;
    case 54u: goto L_0881C274;
    case 55u: goto L_0881C278;
    case 56u: goto L_0881C28C;
    case 57u: goto L_0881C2A8;
    case 58u: goto L_0881C2E8;
    case 59u: goto L_0881C318;
    case 60u: goto L_0881C324;
    case 61u: goto L_0881C32C;
    case 62u: goto L_0881C334;
    case 63u: goto L_0881C33C;
    case 64u: goto L_0881C348;
    case 65u: goto L_0881C354;
    case 66u: goto L_0881C360;
    case 67u: goto L_0881C36C;
    case 68u: goto L_0881C378;
    case 69u: goto L_0881C384;
    case 70u: goto L_0881C390;
    case 71u: goto L_0881C39C;
    case 72u: goto L_0881C3A8;
    case 73u: goto L_0881C3B4;
    case 74u: goto L_0881C3C0;
    case 75u: goto L_0881C3CC;
    case 76u: goto L_0881C3D8;
    case 77u: goto L_0881C3E4;
    case 78u: goto L_0881C3F0;
    case 79u: goto L_0881C3F8;
    case 80u: goto L_0881C404;
    case 81u: goto L_0881C410;
    case 82u: goto L_0881C41C;
    case 83u: goto L_0881C428;
    case 84u: goto L_0881C434;
    case 85u: goto L_0881C440;
    case 86u: goto L_0881C44C;
    case 87u: goto L_0881C458;
    case 88u: goto L_0881C464;
    case 89u: goto L_0881C470;
    case 90u: goto L_0881C47C;
    case 91u: goto L_0881C484;
    case 92u: goto L_0881C490;
    case 93u: goto L_0881C4A0;
    case 94u: goto L_0881C4A8;
    case 95u: goto L_0881C4B0;
    case 96u: goto L_0881C4BC;
    case 97u: goto L_0881C4C8;
    case 98u: goto L_0881C4D0;
    case 99u: goto L_0881C4DC;
    case 100u: goto L_0881C4E8;
    case 101u: goto L_0881C4F0;
    case 102u: goto L_0881C4FC;
    case 103u: goto L_0881C504;
    case 104u: goto L_0881C50C;
    case 105u: goto L_0881C514;
    case 106u: goto L_0881C51C;
    case 107u: goto L_0881C528;
    case 108u: goto L_0881C534;
    case 109u: goto L_0881C53C;
    case 110u: goto L_0881C540;
    case 111u: goto L_0881C548;
    case 112u: goto L_0881C554;
    case 113u: goto L_0881C558;
    case 114u: goto L_0881C560;
    case 115u: goto L_0881C568;
    case 116u: goto L_0881C570;
    case 117u: goto L_0881C578;
    case 118u: goto L_0881C584;
    case 119u: goto L_0881C58C;
    case 120u: goto L_0881C598;
    case 121u: goto L_0881C5A8;
    case 122u: goto L_0881C604;
    case 123u: goto L_0881C60C;
    case 124u: goto L_0881C634;
    case 125u: goto L_0881C640;
    case 126u: goto L_0881C648;
    case 127u: goto L_0881C67C;
    case 128u: goto L_0881C684;
    case 129u: goto L_0881C688;
    case 130u: goto L_0881C694;
    case 131u: goto L_0881C6A8;
    case 132u: goto L_0881C6C0;
    case 133u: goto L_0881C6E0;
    case 134u: goto L_0881C6E8;
    case 135u: goto L_0881C6F4;
    case 136u: goto L_0881C6FC;
    case 137u: goto L_0881C708;
    case 138u: goto L_0881C710;
    case 139u: goto L_0881C71C;
    case 140u: goto L_0881C724;
    case 141u: goto L_0881C730;
    case 142u: goto L_0881C738;
    case 143u: goto L_0881C748;
    case 144u: goto L_0881C750;
    case 145u: goto L_0881C75C;
    case 146u: goto L_0881C764;
    case 147u: goto L_0881C784;
    case 148u: goto L_0881C78C;
    case 149u: goto L_0881C7BC;
    case 150u: goto L_0881C7C4;
    case 151u: goto L_0881C7CC;
    case 152u: goto L_0881C7DC;
    case 153u: goto L_0881C7EC;
    case 154u: goto L_0881C7F4;
    case 155u: goto L_0881C808;
    case 156u: goto L_0881C810;
    case 157u: goto L_0881C814;
    case 158u: goto L_0881C824;
    case 159u: goto L_0881C828;
    case 160u: goto L_0881C830;
    case 161u: goto L_0881C838;
    case 162u: goto L_0881C844;
    case 163u: goto L_0881C858;
    case 164u: goto L_0881C860;
    case 165u: goto L_0881C874;
    case 166u: goto L_0881C878;
    case 167u: goto L_0881C880;
    case 168u: goto L_0881C890;
    case 169u: goto L_0881C898;
    case 170u: goto L_0881C8AC;
    case 171u: goto L_0881C8B4;
    case 172u: goto L_0881C8C8;
    case 173u: goto L_0881C8D8;
    case 174u: goto L_0881C8E0;
    case 175u: goto L_0881C8EC;
    case 176u: goto L_0881C8FC;
    case 177u: goto L_0881C904;
    case 178u: goto L_0881C910;
    case 179u: goto L_0881C920;
    case 180u: goto L_0881C928;
    case 181u: goto L_0881C938;
    case 182u: goto L_0881C944;
    case 183u: goto L_0881C94C;
    case 184u: goto L_0881C980;
    case 185u: goto L_0881CA08;
    case 186u: goto L_0881CA14;
    case 187u: goto L_0881CA2C;
    case 188u: goto L_0881CA34;
    case 189u: goto L_0881CA3C;
    case 190u: goto L_0881CA44;
    case 191u: goto L_0881CA4C;
    case 192u: goto L_0881CA54;
    case 193u: goto L_0881CA5C;
    case 194u: goto L_0881CA64;
    case 195u: goto L_0881CA6C;
    case 196u: goto L_0881CA74;
    case 197u: goto L_0881CA7C;
    case 198u: goto L_0881CA84;
    case 199u: goto L_0881CA88;
    case 200u: goto L_0881CAA4;
    case 201u: goto L_0881CABC;
    case 202u: goto L_0881CAD8;
    case 203u: goto L_0881CAE0;
    case 204u: goto L_0881CAEC;
    case 205u: goto L_0881CAF4;
    case 206u: goto L_0881CB0C;
    case 207u: goto L_0881CB14;
    case 208u: goto L_0881CB24;
    case 209u: goto L_0881CB2C;
    case 210u: goto L_0881CB38;
    case 211u: goto L_0881CB40;
    case 212u: goto L_0881CB50;
    case 213u: goto L_0881CB6C;
    case 214u: goto L_0881CB74;
    case 215u: goto L_0881CB80;
    case 216u: goto L_0881CB88;
    case 217u: goto L_0881CBA4;
    case 218u: goto L_0881CBA8;
    case 219u: goto L_0881CBB4;
    case 220u: goto L_0881CBC4;
    case 221u: goto L_0881CBDC;
    case 222u: goto L_0881CBE8;
    case 223u: goto L_0881CBF0;
    case 224u: goto L_0881CC00;
    case 225u: goto L_0881CC04;
    case 226u: goto L_0881CC0C;
    case 227u: goto L_0881CC1C;
    case 228u: goto L_0881CC24;
    case 229u: goto L_0881CC28;
    case 230u: goto L_0881CC30;
    case 231u: goto L_0881CC34;
    case 232u: goto L_0881CC40;
    case 233u: goto L_0881CC70;
    case 234u: goto L_0881CC8C;
    case 235u: goto L_0881CCE0;
    case 236u: goto L_0881CD24;
    case 237u: goto L_0881CD34;
    case 238u: goto L_0881CD40;
    case 239u: goto L_0881CD4C;
    case 240u: goto L_0881CD58;
    case 241u: goto L_0881CD68;
    case 242u: goto L_0881CD78;
    case 243u: goto L_0881CD84;
    case 244u: goto L_0881CD90;
    case 245u: goto L_0881CDA0;
    case 246u: goto L_0881CDAC;
    case 247u: goto L_0881CDB8;
    case 248u: goto L_0881CDC0;
    case 249u: goto L_0881CDE0;
    case 250u: goto L_0881CDE8;
    case 251u: goto L_0881CDFC;
    case 252u: goto L_0881CE10;
    case 253u: goto L_0881CE24;
    case 254u: goto L_0881CE34;
    case 255u: goto L_0881CE4C;
    case 256u: goto L_0881CE54;
    case 257u: goto L_0881CE88;
    case 258u: goto L_0881CED4;
    case 259u: goto L_0881CEF4;
    case 260u: goto L_0881CF0C;
    case 261u: goto L_0881CF18;
    case 262u: goto L_0881CF28;
    case 263u: goto L_0881CF38;
    case 264u: goto L_0881CF40;
    case 265u: goto L_0881CF50;
    case 266u: goto L_0881CF60;
    case 267u: goto L_0881CF84;
    case 268u: goto L_0881CF90;
    case 269u: goto L_0881CFA8;
    case 270u: goto L_0881CFB0;
    case 271u: goto L_0881CFC8;
    case 272u: goto L_0881CFD0;
    case 273u: goto L_0881CFD8;
    case 274u: goto L_0881CFDC;
    case 275u: goto L_0881CFE4;
    case 276u: goto L_0881CFEC;
    case 277u: goto L_0881CFF8;
    case 278u: goto L_0881D010;
    case 279u: goto L_0881D018;
    case 280u: goto L_0881D030;
    case 281u: goto L_0881D038;
    case 282u: goto L_0881D040;
    case 283u: goto L_0881D044;
    case 284u: goto L_0881D05C;
    case 285u: goto L_0881D070;
    case 286u: goto L_0881D080;
    case 287u: goto L_0881D08C;
    case 288u: goto L_0881D0A8;
    case 289u: goto L_0881D0B0;
    case 290u: goto L_0881D0B4;
    case 291u: goto L_0881D0C0;
    case 292u: goto L_0881D0CC;
    case 293u: goto L_0881D0D4;
    case 294u: goto L_0881D0DC;
    case 295u: goto L_0881D0E4;
    case 296u: goto L_0881D0EC;
    case 297u: goto L_0881D0FC;
    case 298u: goto L_0881D11C;
    case 299u: goto L_0881D128;
    case 300u: goto L_0881D130;
    case 301u: goto L_0881D138;
    case 302u: goto L_0881D13C;
    case 303u: goto L_0881D144;
    case 304u: goto L_0881D14C;
    case 305u: goto L_0881D150;
    case 306u: goto L_0881D158;
    case 307u: goto L_0881D160;
    case 308u: goto L_0881D170;
    case 309u: goto L_0881D188;
    case 310u: goto L_0881D194;
    case 311u: goto L_0881D19C;
    case 312u: goto L_0881D1A8;
    case 313u: goto L_0881D1B4;
    case 314u: goto L_0881D1BC;
    case 315u: goto L_0881D1C8;
    case 316u: goto L_0881D1F0;
    case 317u: goto L_0881D1FC;
    case 318u: goto L_0881D20C;
    case 319u: goto L_0881D21C;
    case 320u: goto L_0881D224;
    case 321u: goto L_0881D238;
    case 322u: goto L_0881D248;
    case 323u: goto L_0881D24C;
    case 324u: goto L_0881D264;
    case 325u: goto L_0881D270;
    case 326u: goto L_0881D274;
    case 327u: goto L_0881D284;
    case 328u: goto L_0881D290;
    case 329u: goto L_0881D298;
    case 330u: goto L_0881D2A0;
    case 331u: goto L_0881D2A8;
    case 332u: goto L_0881D2BC;
    case 333u: goto L_0881D2C4;
    case 334u: goto L_0881D2CC;
    case 335u: goto L_0881D2D4;
    case 336u: goto L_0881D2DC;
    case 337u: goto L_0881D2E4;
    case 338u: goto L_0881D2F8;
    case 339u: goto L_0881D2FC;
    case 340u: goto L_0881D31C;
    case 341u: goto L_0881D33C;
    case 342u: goto L_0881D348;
    case 343u: goto L_0881D354;
    case 344u: goto L_0881D360;
    case 345u: goto L_0881D368;
    case 346u: goto L_0881D37C;
    case 347u: goto L_0881D394;
    case 348u: goto L_0881D3A0;
    case 349u: goto L_0881D3A8;
    case 350u: goto L_0881D3B8;
    case 351u: goto L_0881D3C0;
    case 352u: goto L_0881D3CC;
    case 353u: goto L_0881D3D4;
    case 354u: goto L_0881D3E0;
    case 355u: goto L_0881D3E8;
    case 356u: goto L_0881D3F0;
    case 357u: goto L_0881D400;
    case 358u: goto L_0881D408;
    case 359u: goto L_0881D414;
    case 360u: goto L_0881D41C;
    case 361u: goto L_0881D428;
    case 362u: goto L_0881D43C;
    case 363u: goto L_0881D44C;
    case 364u: goto L_0881D458;
    case 365u: goto L_0881D460;
    case 366u: goto L_0881D46C;
    case 367u: goto L_0881D474;
    case 368u: goto L_0881D47C;
    case 369u: goto L_0881D4E0;
    case 370u: goto L_0881D530;
    case 371u: goto L_0881D53C;
    case 372u: goto L_0881D544;
    case 373u: goto L_0881D550;
    case 374u: goto L_0881D558;
    case 375u: goto L_0881D568;
    case 376u: goto L_0881D570;
    case 377u: goto L_0881D598;
    case 378u: goto L_0881D5A0;
    case 379u: goto L_0881D5A4;
    case 380u: goto L_0881D5A8;
    case 381u: goto L_0881D5D4;
    case 382u: goto L_0881D5EC;
    case 383u: goto L_0881D638;
    case 384u: goto L_0881D644;
    case 385u: goto L_0881D64C;
    case 386u: goto L_0881D660;
    case 387u: goto L_0881D698;
    case 388u: goto L_0881D6A4;
    case 389u: goto L_0881D6AC;
    case 390u: goto L_0881D6D0;
    case 391u: goto L_0881D6DC;
    case 392u: goto L_0881D6E4;
    case 393u: goto L_0881D6F0;
    case 394u: goto L_0881D6F4;
    case 395u: goto L_0881D6FC;
    case 396u: goto L_0881D70C;
    case 397u: goto L_0881D718;
    case 398u: goto L_0881D73C;
    case 399u: goto L_0881D748;
    case 400u: goto L_0881D750;
    case 401u: goto L_0881D75C;
    case 402u: goto L_0881D760;
    case 403u: goto L_0881D768;
    case 404u: goto L_0881D778;
    case 405u: goto L_0881D784;
    case 406u: goto L_0881D78C;
    case 407u: goto L_0881D7C0;
    case 408u: goto L_0881D7D4;
    case 409u: goto L_0881D7E0;
    case 410u: goto L_0881D800;
    case 411u: goto L_0881D840;
    case 412u: goto L_0881D84C;
    case 413u: goto L_0881D860;
    case 414u: goto L_0881D86C;
    case 415u: goto L_0881D87C;
    case 416u: goto L_0881D884;
    case 417u: goto L_0881D88C;
    case 418u: goto L_0881D894;
    case 419u: goto L_0881D89C;
    case 420u: goto L_0881D8A4;
    case 421u: goto L_0881D8AC;
    case 422u: goto L_0881D8B4;
    case 423u: goto L_0881D8C0;
    case 424u: goto L_0881D8C8;
    case 425u: goto L_0881D8D4;
    case 426u: goto L_0881D8D8;
    case 427u: goto L_0881D8E4;
    case 428u: goto L_0881D904;
    case 429u: goto L_0881D950;
    case 430u: goto L_0881D95C;
    case 431u: goto L_0881D96C;
    case 432u: goto L_0881D974;
    case 433u: goto L_0881D980;
    case 434u: goto L_0881D994;
    case 435u: goto L_0881D998;
    case 436u: goto L_0881D9A0;
    case 437u: goto L_0881D9B4;
    case 438u: goto L_0881D9B8;
    case 439u: goto L_0881D9C0;
    case 440u: goto L_0881D9DC;
    case 441u: goto L_0881DA24;
    case 442u: goto L_0881DA54;
    case 443u: goto L_0881DA68;
    case 444u: goto L_0881DA70;
    case 445u: goto L_0881DA78;
    case 446u: goto L_0881DA94;
    case 447u: goto L_0881DA9C;
    case 448u: goto L_0881DAA0;
    case 449u: goto L_0881DABC;
    case 450u: goto L_0881DAC0;
    case 451u: goto L_0881DAC8;
    case 452u: goto L_0881DAD8;
    case 453u: goto L_0881DAF8;
    case 454u: goto L_0881DB18;
    case 455u: goto L_0881DB28;
    case 456u: goto L_0881DB48;
    case 457u: goto L_0881DB54;
    case 458u: goto L_0881DB5C;
    case 459u: goto L_0881DB78;
    case 460u: goto L_0881DB84;
    case 461u: goto L_0881DB94;
    case 462u: goto L_0881DBBC;
    case 463u: goto L_0881DBC8;
    case 464u: goto L_0881DBD0;
    case 465u: goto L_0881DBD8;
    case 466u: goto L_0881DC34;
    case 467u: goto L_0881DC54;
    case 468u: goto L_0881DC60;
    case 469u: goto L_0881DC68;
    case 470u: goto L_0881DC84;
    case 471u: goto L_0881DC90;
    case 472u: goto L_0881DCA0;
    case 473u: goto L_0881DCB8;
    case 474u: goto L_0881DCC4;
    case 475u: goto L_0881DCCC;
    case 476u: goto L_0881DCD8;
    case 477u: goto L_0881DCE0;
    case 478u: goto L_0881DCE8;
    case 479u: goto L_0881DCF4;
    case 480u: goto L_0881DD14;
    case 481u: goto L_0881DD20;
    case 482u: goto L_0881DD28;
    case 483u: goto L_0881DD38;
    case 484u: goto L_0881DD40;
    case 485u: goto L_0881DD48;
    case 486u: goto L_0881DD54;
    case 487u: goto L_0881DD5C;
    case 488u: goto L_0881DD6C;
    case 489u: goto L_0881DD84;
    case 490u: goto L_0881DD90;
    case 491u: goto L_0881DD98;
    case 492u: goto L_0881DDA4;
    case 493u: goto L_0881DDB0;
    case 494u: goto L_0881DDB8;
    case 495u: goto L_0881DDC4;
    case 496u: goto L_0881DDDC;
    case 497u: goto L_0881DDEC;
    case 498u: goto L_0881DDF8;
    case 499u: goto L_0881DE04;
    case 500u: goto L_0881DE10;
    case 501u: goto L_0881DE18;
    case 502u: goto L_0881DE24;
    case 503u: goto L_0881DE30;
    case 504u: goto L_0881DE78;
    case 505u: goto L_0881DE84;
    case 506u: goto L_0881DE8C;
    case 507u: goto L_0881DE94;
    case 508u: goto L_0881DE9C;
    case 509u: goto L_0881DEA4;
    case 510u: goto L_0881DEAC;
    case 511u: goto L_0881DEB4;
    case 512u: goto L_0881DEDC;
    case 513u: goto L_0881DEE8;
    case 514u: goto L_0881DEF0;
    case 515u: goto L_0881DEF8;
    case 516u: goto L_0881DF00;
    case 517u: goto L_0881DF08;
    case 518u: goto L_0881DF10;
    case 519u: goto L_0881DF18;
    case 520u: goto L_0881DF34;
    case 521u: goto L_0881DF38;
    case 522u: goto L_0881DF44;
    case 523u: goto L_0881DF54;
    case 524u: goto L_0881DF5C;
    case 525u: goto L_0881DF6C;
    case 526u: goto L_0881DF74;
    case 527u: goto L_0881DF90;
    case 528u: goto L_0881DF98;
    case 529u: goto L_0881DFA0;
    case 530u: goto L_0881DFA8;
    case 531u: goto L_0881DFBC;
    case 532u: goto L_0881DFC4;
    case 533u: goto L_0881DFCC;
    case 534u: goto L_0881DFDC;
    case 535u: goto L_0881DFE0;
    case 536u: goto L_0881DFF4;
    case 537u: goto L_0881DFFC;
    case 538u: goto L_0881E008;
    case 539u: goto L_0881E01C;
    case 540u: goto L_0881E024;
    case 541u: goto L_0881E02C;
    case 542u: goto L_0881E034;
    case 543u: goto L_0881E050;
    case 544u: goto L_0881E0BC;
    case 545u: goto L_0881E0E0;
    case 546u: goto L_0881E0EC;
    case 547u: goto L_0881E0FC;
    case 548u: goto L_0881E104;
    case 549u: goto L_0881E108;
    case 550u: goto L_0881E118;
    case 551u: goto L_0881E134;
    case 552u: goto L_0881E13C;
    case 553u: goto L_0881E164;
    case 554u: goto L_0881E188;
    case 555u: goto L_0881E18C;
    case 556u: goto L_0881E194;
    case 557u: goto L_0881E1A8;
    case 558u: goto L_0881E1B4;
    case 559u: goto L_0881E1CC;
    case 560u: goto L_0881E1F0;
    case 561u: goto L_0881E210;
    case 562u: goto L_0881E230;
    case 563u: goto L_0881E258;
    case 564u: goto L_0881E294;
    case 565u: goto L_0881E2BC;
    case 566u: goto L_0881E2C4;
    case 567u: goto L_0881E2D4;
    case 568u: goto L_0881E2DC;
    case 569u: goto L_0881E2E4;
    case 570u: goto L_0881E318;
    case 571u: goto L_0881E334;
    case 572u: goto L_0881E34C;
    case 573u: goto L_0881E358;
    case 574u: goto L_0881E38C;
    case 575u: goto L_0881E3B0;
    case 576u: goto L_0881E3B8;
    case 577u: goto L_0881E3D0;
    case 578u: goto L_0881E3E8;
    case 579u: goto L_0881E3F0;
    case 580u: goto L_0881E3FC;
    case 581u: goto L_0881E404;
    case 582u: goto L_0881E418;
    case 583u: goto L_0881E420;
    case 584u: goto L_0881E430;
    case 585u: goto L_0881E438;
    case 586u: goto L_0881E440;
    case 587u: goto L_0881E448;
    case 588u: goto L_0881E450;
    case 589u: goto L_0881E458;
    case 590u: goto L_0881E464;
    case 591u: goto L_0881E468;
    case 592u: goto L_0881E474;
    case 593u: goto L_0881E480;
    case 594u: goto L_0881E49C;
    case 595u: goto L_0881E4AC;
    case 596u: goto L_0881E4BC;
    case 597u: goto L_0881E4CC;
    case 598u: goto L_0881E4D8;
    case 599u: goto L_0881E4F8;
    case 600u: goto L_0881E520;
    case 601u: goto L_0881E528;
    case 602u: goto L_0881E538;
    case 603u: goto L_0881E548;
    case 604u: goto L_0881E550;
    case 605u: goto L_0881E558;
    case 606u: goto L_0881E560;
    case 607u: goto L_0881E56C;
    case 608u: goto L_0881E57C;
    case 609u: goto L_0881E584;
    case 610u: goto L_0881E58C;
    case 611u: goto L_0881E59C;
    case 612u: goto L_0881E5A0;
    case 613u: goto L_0881E5B8;
    case 614u: goto L_0881E5D0;
    case 615u: goto L_0881E5DC;
    case 616u: goto L_0881E5E4;
    case 617u: goto L_0881E5F0;
    case 618u: goto L_0881E608;
    case 619u: goto L_0881E614;
    case 620u: goto L_0881E61C;
    case 621u: goto L_0881E658;
    case 622u: goto L_0881E668;
    case 623u: goto L_0881E674;
    case 624u: goto L_0881E67C;
    case 625u: goto L_0881E688;
    case 626u: goto L_0881E68C;
    case 627u: goto L_0881E694;
    case 628u: goto L_0881E700;
    case 629u: goto L_0881E748;
    case 630u: goto L_0881E78C;
    case 631u: goto L_0881E798;
    case 632u: goto L_0881E7A8;
    case 633u: goto L_0881E7B4;
    case 634u: goto L_0881E7C0;
    case 635u: goto L_0881E7D8;
    case 636u: goto L_0881E7E0;
    case 637u: goto L_0881E7EC;
    case 638u: goto L_0881E7F0;
    case 639u: goto L_0881E800;
    case 640u: goto L_0881E80C;
    case 641u: goto L_0881E818;
    case 642u: goto L_0881E828;
    case 643u: goto L_0881E870;
    case 644u: goto L_0881E878;
    case 645u: goto L_0881E888;
    case 646u: goto L_0881E898;
    case 647u: goto L_0881E8A4;
    case 648u: goto L_0881E8A8;
    case 649u: goto L_0881E8B0;
    case 650u: goto L_0881E8C8;
    case 651u: goto L_0881E8CC;
    case 652u: goto L_0881E8E8;
    case 653u: goto L_0881E8F8;
    case 654u: goto L_0881E914;
    case 655u: goto L_0881E92C;
    case 656u: goto L_0881E934;
    case 657u: goto L_0881E940;
    case 658u: goto L_0881E94C;
    case 659u: goto L_0881E954;
    case 660u: goto L_0881E96C;
    case 661u: goto L_0881E970;
    case 662u: goto L_0881E988;
    case 663u: goto L_0881E998;
    case 664u: goto L_0881E9AC;
    case 665u: goto L_0881E9B4;
    case 666u: goto L_0881E9BC;
    case 667u: goto L_0881E9C8;
    case 668u: goto L_0881E9E0;
    case 669u: goto L_0881E9F8;
    case 670u: goto L_0881EA08;
    case 671u: goto L_0881EA1C;
    case 672u: goto L_0881EA24;
    case 673u: goto L_0881EA34;
    case 674u: goto L_0881EA38;
    case 675u: goto L_0881EA40;
    case 676u: goto L_0881EA4C;
    case 677u: goto L_0881EA54;
    case 678u: goto L_0881EA6C;
    case 679u: goto L_0881EA9C;
    case 680u: goto L_0881EAAC;
    case 681u: goto L_0881EACC;
    case 682u: goto L_0881EAD4;
    case 683u: goto L_0881EAE4;
    case 684u: goto L_0881EAFC;
    case 685u: goto L_0881EB08;
    case 686u: goto L_0881EB10;
    case 687u: goto L_0881EB78;
    case 688u: goto L_0881EB7C;
    case 689u: goto L_0881EB8C;
    case 690u: goto L_0881EBC0;
    case 691u: goto L_0881EC04;
    case 692u: goto L_0881EC20;
    case 693u: goto L_0881EC34;
    case 694u: goto L_0881EC54;
    case 695u: goto L_0881EC5C;
    case 696u: goto L_0881EC64;
    case 697u: goto L_0881EC74;
    case 698u: goto L_0881EC84;
    case 699u: goto L_0881EC90;
    case 700u: goto L_0881ECA4;
    case 701u: goto L_0881ECAC;
    case 702u: goto L_0881ECB4;
    case 703u: goto L_0881ECC8;
    case 704u: goto L_0881ECD4;
    case 705u: goto L_0881ECE0;
    case 706u: goto L_0881ECE4;
    case 707u: goto L_0881ECEC;
    case 708u: goto L_0881ECF4;
    case 709u: goto L_0881ECFC;
    case 710u: goto L_0881ED04;
    case 711u: goto L_0881ED0C;
    case 712u: goto L_0881ED14;
    case 713u: goto L_0881ED1C;
    case 714u: goto L_0881ED24;
    case 715u: goto L_0881ED2C;
    case 716u: goto L_0881ED34;
    case 717u: goto L_0881ED3C;
    case 718u: goto L_0881ED44;
    case 719u: goto L_0881ED4C;
    case 720u: goto L_0881ED54;
    case 721u: goto L_0881ED5C;
    case 722u: goto L_0881ED64;
    case 723u: goto L_0881ED6C;
    case 724u: goto L_0881ED74;
    case 725u: goto L_0881ED7C;
    case 726u: goto L_0881ED84;
    case 727u: goto L_0881EDA0;
    case 728u: goto L_0881EDB0;
    case 729u: goto L_0881EDB4;
    case 730u: goto L_0881EDBC;
    case 731u: goto L_0881EDD0;
    case 732u: goto L_0881EDD8;
    case 733u: goto L_0881EDE0;
    case 734u: goto L_0881EDE8;
    case 735u: goto L_0881EDF0;
    case 736u: goto L_0881EDF8;
    case 737u: goto L_0881EE00;
    case 738u: goto L_0881EE10;
    case 739u: goto L_0881EE2C;
    case 740u: goto L_0881EE54;
    case 741u: goto L_0881EE60;
    case 742u: goto L_0881EE6C;
    case 743u: goto L_0881EE70;
    case 744u: goto L_0881EE78;
    case 745u: goto L_0881EE80;
    case 746u: goto L_0881EE88;
    case 747u: goto L_0881EE90;
    case 748u: goto L_0881EE98;
    case 749u: goto L_0881EEA0;
    case 750u: goto L_0881EEA8;
    case 751u: goto L_0881EEB8;
    case 752u: goto L_0881EED8;
    case 753u: goto L_0881EEE4;
    case 754u: goto L_0881EEF4;
    case 755u: goto L_0881EF14;
    case 756u: goto L_0881EF1C;
    case 757u: goto L_0881EF28;
    case 758u: goto L_0881EF38;
    case 759u: goto L_0881EF5C;
    case 760u: goto L_0881EF64;
    case 761u: goto L_0881EF6C;
    case 762u: goto L_0881EF74;
    case 763u: goto L_0881EF7C;
    case 764u: goto L_0881EF84;
    case 765u: goto L_0881EF8C;
    case 766u: goto L_0881EF94;
    case 767u: goto L_0881EF9C;
    case 768u: goto L_0881EFA4;
    case 769u: goto L_0881EFB0;
    case 770u: goto L_0881EFB8;
    case 771u: goto L_0881EFC0;
    case 772u: goto L_0881EFCC;
    case 773u: goto L_0881EFD4;
    case 774u: goto L_0881EFE0;
    case 775u: goto L_0881EFEC;
    case 776u: goto L_0881EFF8;
    case 777u: goto L_0881F004;
    case 778u: goto L_0881F010;
    case 779u: goto L_0881F01C;
    case 780u: goto L_0881F024;
    case 781u: goto L_0881F02C;
    case 782u: goto L_0881F034;
    case 783u: goto L_0881F03C;
    case 784u: goto L_0881F048;
    case 785u: goto L_0881F054;
    case 786u: goto L_0881F060;
    case 787u: goto L_0881F06C;
    case 788u: goto L_0881F078;
    case 789u: goto L_0881F084;
    case 790u: goto L_0881F08C;
    case 791u: goto L_0881F094;
    case 792u: goto L_0881F09C;
    case 793u: goto L_0881F0B0;
    case 794u: goto L_0881F0E4;
    case 795u: goto L_0881F0EC;
    case 796u: goto L_0881F0F8;
    case 797u: goto L_0881F100;
    case 798u: goto L_0881F10C;
    case 799u: goto L_0881F114;
    case 800u: goto L_0881F118;
    case 801u: goto L_0881F124;
    case 802u: goto L_0881F12C;
    case 803u: goto L_0881F134;
    case 804u: goto L_0881F140;
    case 805u: goto L_0881F144;
    case 806u: goto L_0881F14C;
    case 807u: goto L_0881F168;
    case 808u: goto L_0881F1A0;
    case 809u: goto L_0881F1B8;
    case 810u: goto L_0881F1C4;
    case 811u: goto L_0881F1D4;
    case 812u: goto L_0881F1DC;
    case 813u: goto L_0881F1E4;
    case 814u: goto L_0881F1F0;
    case 815u: goto L_0881F1F8;
    case 816u: goto L_0881F1FC;
    case 817u: goto L_0881F204;
    case 818u: goto L_0881F20C;
    case 819u: goto L_0881F214;
    case 820u: goto L_0881F21C;
    case 821u: goto L_0881F224;
    case 822u: goto L_0881F22C;
    case 823u: goto L_0881F234;
    case 824u: goto L_0881F23C;
    case 825u: goto L_0881F244;
    case 826u: goto L_0881F24C;
    case 827u: goto L_0881F254;
    case 828u: goto L_0881F260;
    case 829u: goto L_0881F268;
    case 830u: goto L_0881F274;
    case 831u: goto L_0881F27C;
    case 832u: goto L_0881F284;
    case 833u: goto L_0881F28C;
    case 834u: goto L_0881F294;
    case 835u: goto L_0881F2A0;
    case 836u: goto L_0881F2A8;
    case 837u: goto L_0881F2B4;
    case 838u: goto L_0881F2C0;
    case 839u: goto L_0881F2C8;
    case 840u: goto L_0881F2CC;
    case 841u: goto L_0881F2D4;
    case 842u: goto L_0881F2D8;
    case 843u: goto L_0881F2E4;
    case 844u: goto L_0881F2F0;
    case 845u: goto L_0881F318;
    case 846u: goto L_0881F334;
    case 847u: goto L_0881F33C;
    case 848u: goto L_0881F348;
    case 849u: goto L_0881F3C0;
    case 850u: goto L_0881F3D8;
    case 851u: goto L_0881F3E8;
    case 852u: goto L_0881F3F8;
    case 853u: goto L_0881F408;
    case 854u: goto L_0881F418;
    case 855u: goto L_0881F428;
    case 856u: goto L_0881F438;
    case 857u: goto L_0881F44C;
    case 858u: goto L_0881F478;
    case 859u: goto L_0881F488;
    case 860u: goto L_0881F498;
    case 861u: goto L_0881F4B4;
    case 862u: goto L_0881F4CC;
    case 863u: goto L_0881F4E8;
    case 864u: goto L_0881F520;
    case 865u: goto L_0881F52C;
    case 866u: goto L_0881F53C;
    case 867u: goto L_0881F544;
    case 868u: goto L_0881F550;
    case 869u: goto L_0881F570;
    case 870u: goto L_0881F580;
    case 871u: goto L_0881F58C;
    case 872u: goto L_0881F5A8;
    case 873u: goto L_0881F5B0;
    case 874u: goto L_0881F5C4;
    case 875u: goto L_0881F5C8;
    case 876u: goto L_0881F5D8;
    case 877u: goto L_0881F5FC;
    case 878u: goto L_0881F608;
    case 879u: goto L_0881F61C;
    case 880u: goto L_0881F62C;
    case 881u: goto L_0881F638;
    case 882u: goto L_0881F640;
    case 883u: goto L_0881F65C;
    case 884u: goto L_0881F678;
    case 885u: goto L_0881F680;
    case 886u: goto L_0881F688;
    case 887u: goto L_0881F68C;
    case 888u: goto L_0881F69C;
    case 889u: goto L_0881F6AC;
    case 890u: goto L_0881F6C4;
    case 891u: goto L_0881F6D4;
    case 892u: goto L_0881F6F0;
    case 893u: goto L_0881F714;
    case 894u: goto L_0881F71C;
    case 895u: goto L_0881F728;
    case 896u: goto L_0881F74C;
    case 897u: goto L_0881F804;
    case 898u: goto L_0881F808;
    case 899u: goto L_0881F824;
    case 900u: goto L_0881F848;
    case 901u: goto L_0881F854;
    case 902u: goto L_0881F85C;
    case 903u: goto L_0881F86C;
    case 904u: goto L_0881F874;
    case 905u: goto L_0881F880;
    case 906u: goto L_0881F898;
    case 907u: goto L_0881F8A4;
    case 908u: goto L_0881F8BC;
    case 909u: goto L_0881F8C4;
    case 910u: goto L_0881F8CC;
    case 911u: goto L_0881F8DC;
    case 912u: goto L_0881F8E8;
    case 913u: goto L_0881F8F8;
    case 914u: goto L_0881F904;
    case 915u: goto L_0881F914;
    case 916u: goto L_0881F91C;
    case 917u: goto L_0881F924;
    case 918u: goto L_0881F930;
    case 919u: goto L_0881F940;
    case 920u: goto L_0881F948;
    case 921u: goto L_0881F950;
    case 922u: goto L_0881F95C;
    case 923u: goto L_0881F96C;
    case 924u: goto L_0881F974;
    case 925u: goto L_0881F97C;
    case 926u: goto L_0881F988;
    case 927u: goto L_0881F998;
    case 928u: goto L_0881F9A0;
    case 929u: goto L_0881F9A8;
    case 930u: goto L_0881F9B4;
    case 931u: goto L_0881F9D0;
    case 932u: goto L_0881F9DC;
    case 933u: goto L_0881F9E8;
    case 934u: goto L_0881F9F0;
    case 935u: goto L_0881FA0C;
    case 936u: goto L_0881FA14;
    case 937u: goto L_0881FA20;
    case 938u: goto L_0881FA28;
    case 939u: goto L_0881FA44;
    case 940u: goto L_0881FA64;
    case 941u: goto L_0881FABC;
    case 942u: goto L_0881FAD0;
    case 943u: goto L_0881FADC;
    case 944u: goto L_0881FAE4;
    case 945u: goto L_0881FAE8;
    case 946u: goto L_0881FAFC;
    case 947u: goto L_0881FB10;
    case 948u: goto L_0881FB1C;
    case 949u: goto L_0881FB24;
    case 950u: goto L_0881FB2C;
    case 951u: goto L_0881FB30;
    case 952u: goto L_0881FB40;
    case 953u: goto L_0881FB54;
    case 954u: goto L_0881FB64;
    case 955u: goto L_0881FB74;
    case 956u: goto L_0881FB7C;
    case 957u: goto L_0881FB8C;
    case 958u: goto L_0881FBA0;
    case 959u: goto L_0881FBB0;
    case 960u: goto L_0881FBC0;
    case 961u: goto L_0881FBD0;
    case 962u: goto L_0881FBE0;
    case 963u: goto L_0881FCB0;
    case 964u: goto L_0881FCD8;
    case 965u: goto L_0881FCEC;
    case 966u: goto L_0881FCF4;
    case 967u: goto L_0881FD00;
    case 968u: goto L_0881FD04;
    case 969u: goto L_0881FD1C;
    case 970u: goto L_0881FD44;
    case 971u: goto L_0881FD4C;
    case 972u: goto L_0881FD5C;
    case 973u: goto L_0881FD64;
    case 974u: goto L_0881FD78;
    case 975u: goto L_0881FD80;
    case 976u: goto L_0881FD8C;
    case 977u: goto L_0881FD94;
    case 978u: goto L_0881FDA0;
    case 979u: goto L_0881FDA8;
    case 980u: goto L_0881FDB0;
    case 981u: goto L_0881FDB4;
    case 982u: goto L_0881FDD0;
    case 983u: goto L_0881FDF0;
    case 984u: goto L_0881FDF8;
    case 985u: goto L_0881FE0C;
    case 986u: goto L_0881FE10;
    case 987u: goto L_0881FE20;
    case 988u: goto L_0881FE50;
    case 989u: goto L_0881FE5C;
    case 990u: goto L_0881FE68;
    case 991u: goto L_0881FE74;
    case 992u: goto L_0881FE78;
    case 993u: goto L_0881FE88;
    case 994u: goto L_0881FEA8;
    case 995u: goto L_0881FEC4;
    case 996u: goto L_0881FECC;
    case 997u: goto L_0881FED8;
    case 998u: goto L_0881FEE8;
    case 999u: goto L_0881FEF8;
    case 1000u: goto L_0881FF20;
    case 1001u: goto L_0881FF38;
    case 1002u: goto L_0881FF48;
    case 1003u: goto L_0881FF70;
    case 1004u: goto L_0881FF94;
    case 1005u: goto L_0881FFA4;
    case 1006u: goto L_0881FFBC;
    case 1007u: goto L_0881FFCC;
    case 1008u: goto L_0881FFDC;
    case 1009u: goto L_0881FFEC;
    case 1010u: goto L_0881FFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0881C004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-460)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    goto L_0881C00C;
L_0881C00C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-460), ctx.gpr[4]);
    goto L_0881C010;
L_0881C010:
    ctx.gpr[31] = (0x0881C018u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 174u, 0x08818B84u>(ctx, &aot_mem) && ctx.pc == 0x0881C018u) goto L_0881C018;
    return;
L_0881C018:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 33 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881C1AC;
      }
      goto L_0881C028;
    }
L_0881C028:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C1B4;
      }
      goto L_0881C030;
    }
L_0881C030:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881C04C;
      }
      goto L_0881C038;
    }
L_0881C038:
    ctx.gpr[31] = (0x0881C040u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 504u, 0x0881645Cu>(ctx, &aot_mem) && ctx.pc == 0x0881C040u) goto L_0881C040;
    return;
L_0881C040:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881C178;
      }
      goto L_0881C048;
    }
L_0881C048:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    goto L_0881C04C;
L_0881C04C:
    ctx.gpr[4] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 16u);
      if (branch_taken) {
          goto L_0881C130;
      }
      goto L_0881C058;
    }
L_0881C058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[20] << 6u);
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1628)));
    ctx.gpr[31] = (0x0881C078u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881C078u) goto L_0881C078;
    return;
L_0881C078:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0881C174;
      }
      goto L_0881C080;
    }
L_0881C080:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0881C090u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0881C090u) goto L_0881C090;
    return;
L_0881C090:
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[31] = (0x0881C09Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27104));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0881C09Cu) goto L_0881C09C;
    return;
L_0881C09C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0881C0ACu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0881C0ACu) goto L_0881C0AC;
    return;
L_0881C0AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1600)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1648)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0881C0D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27188));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881C0D4u) goto L_0881C0D4;
    return;
L_0881C0D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(424));
    ctx.gpr[31] = (0x0881C0E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x0881C0E4u) goto L_0881C0E4;
    return;
L_0881C0E4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881C120;
      }
      goto L_0881C0F4;
    }
L_0881C0F4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(424));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(264));
    ctx.gpr[31] = (0x0881C104u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x0881C104u) goto L_0881C104;
    return;
L_0881C104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[31] = (0x0881C110u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(264));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 522u, 0x0880A0E8u>(ctx, &aot_mem) && ctx.pc == 0x0881C110u) goto L_0881C110;
    return;
L_0881C110:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C11Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 321u, 0x08819550u>(ctx, &aot_mem) && ctx.pc == 0x0881C11Cu) goto L_0881C11C;
    return;
L_0881C11C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    goto L_0881C120;
L_0881C120:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(480), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(320), 0u);
      if (branch_taken) {
          goto L_0881C174;
      }
      goto L_0881C130;
    }
L_0881C130:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0881C16C;
      }
      goto L_0881C138;
    }
L_0881C138:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 21 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
        goto L_0881C178;
    }
    goto L_0881C144;
L_0881C144:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881C148;
L_0881C148:
    ctx.gpr[31] = (0x0881C150u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 321u, 0x08819550u>(ctx, &aot_mem) && ctx.pc == 0x0881C150u) goto L_0881C150;
    return;
L_0881C150:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0881C148;
      }
      goto L_0881C160;
    }
L_0881C160:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881C178;
      }
      goto L_0881C168;
    }
L_0881C168:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881C16C;
L_0881C16C:
    ctx.gpr[31] = (0x0881C174u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 321u, 0x08819550u>(ctx, &aot_mem) && ctx.pc == 0x0881C174u) goto L_0881C174;
    return;
L_0881C174:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    goto L_0881C178;
L_0881C178:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0881C184u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 555u, 0x0880A5E8u>(ctx, &aot_mem) && ctx.pc == 0x0881C184u) goto L_0881C184;
    return;
L_0881C184:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    goto L_0881C18C;
L_0881C18C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x0881C19Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 305u, 0x088193F0u>(ctx, &aot_mem) && ctx.pc == 0x0881C19Cu) goto L_0881C19C;
    return;
L_0881C19C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_0881C18C;
      }
      goto L_0881C1A8;
    }
L_0881C1A8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 33 ? 1u : 0u);
    goto L_0881C1AC;
L_0881C1AC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881C220;
      }
      goto L_0881C1B4;
    }
L_0881C1B4:
    ctx.gpr[31] = (0x0881C1BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 310u, 0x08819454u>(ctx, &aot_mem) && ctx.pc == 0x0881C1BCu) goto L_0881C1BC;
    return;
L_0881C1BC:
    ctx.gpr[31] = (0x0881C1C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 633u, 0x08816E9Cu>(ctx, &aot_mem) && ctx.pc == 0x0881C1C4u) goto L_0881C1C4;
    return;
L_0881C1C4:
    ctx.gpr[31] = (0x0881C1CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 310u, 0x08819454u>(ctx, &aot_mem) && ctx.pc == 0x0881C1CCu) goto L_0881C1CC;
    return;
L_0881C1CC:
    ctx.gpr[31] = (0x0881C1D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 534u, 0x08816714u>(ctx, &aot_mem) && ctx.pc == 0x0881C1D4u) goto L_0881C1D4;
    return;
L_0881C1D4:
    ctx.gpr[31] = (0x0881C1DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 548u, 0x08816858u>(ctx, &aot_mem) && ctx.pc == 0x0881C1DCu) goto L_0881C1DC;
    return;
L_0881C1DC:
    ctx.gpr[31] = (0x0881C1E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 291u, 0x08835694u>(ctx, &aot_mem) && ctx.pc == 0x0881C1E4u) goto L_0881C1E4;
    return;
L_0881C1E4:
    ctx.gpr[31] = (0x0881C1ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816A80u>(ctx, &aot_mem) && ctx.pc == 0x0881C1ECu) goto L_0881C1EC;
    return;
L_0881C1EC:
    ctx.gpr[31] = (0x0881C1F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 586u, 0x08816BA4u>(ctx, &aot_mem) && ctx.pc == 0x0881C1F4u) goto L_0881C1F4;
    return;
L_0881C1F4:
    ctx.gpr[31] = (0x0881C1FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 310u, 0x08819454u>(ctx, &aot_mem) && ctx.pc == 0x0881C1FCu) goto L_0881C1FC;
    return;
L_0881C1FC:
    ctx.gpr[31] = (0x0881C204u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 315u, 0x088194C4u>(ctx, &aot_mem) && ctx.pc == 0x0881C204u) goto L_0881C204;
    return;
L_0881C204:
    ctx.gpr[31] = (0x0881C20Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 310u, 0x08819454u>(ctx, &aot_mem) && ctx.pc == 0x0881C20Cu) goto L_0881C20C;
    return;
L_0881C20C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_0881C250;
    }
    goto L_0881C218;
L_0881C218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881C278;
      }
      goto L_0881C220;
    }
L_0881C220:
    ctx.gpr[2] = (0u | 0u);
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
L_0881C250:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2177u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0881C274u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(9628));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 174u, 0x089B100Cu>(ctx, &aot_mem) && ctx.pc == 0x0881C274u) goto L_0881C274;
    return;
L_0881C274:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    goto L_0881C278;
L_0881C278:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), 0u);
    goto L_0881C28C;
L_0881C28C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881C28C;
      }
      goto L_0881C2A8;
    }
L_0881C2A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-460), ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_0881C2E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C598;
      }
      goto L_0881C318;
    }
L_0881C318:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0881C484;
      }
      goto L_0881C324;
    }
L_0881C324:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0881C578;
      }
      goto L_0881C32C;
    }
L_0881C32C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0881C3F8;
      }
      goto L_0881C334;
    }
L_0881C334:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0881C58C;
      }
      goto L_0881C33C;
    }
L_0881C33C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C348u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C348u) goto L_0881C348;
    return;
L_0881C348:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C354u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C354u) goto L_0881C354;
    return;
L_0881C354:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C360u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C360u) goto L_0881C360;
    return;
L_0881C360:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C36Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C36Cu) goto L_0881C36C;
    return;
L_0881C36C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C378u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C378u) goto L_0881C378;
    return;
L_0881C378:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C384u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C384u) goto L_0881C384;
    return;
L_0881C384:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C390u);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C390u) goto L_0881C390;
    return;
L_0881C390:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C39Cu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C39Cu) goto L_0881C39C;
    return;
L_0881C39C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C3A8u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C3A8u) goto L_0881C3A8;
    return;
L_0881C3A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C3B4u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C3B4u) goto L_0881C3B4;
    return;
L_0881C3B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C3C0u);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C3C0u) goto L_0881C3C0;
    return;
L_0881C3C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C3CCu);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C3CCu) goto L_0881C3CC;
    return;
L_0881C3CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C3D8u);
    ctx.gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C3D8u) goto L_0881C3D8;
    return;
L_0881C3D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C3E4u);
    ctx.gpr[5] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C3E4u) goto L_0881C3E4;
    return;
L_0881C3E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C3F0u);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C3F0u) goto L_0881C3F0;
    return;
L_0881C3F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C598;
      }
      goto L_0881C3F8;
    }
L_0881C3F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C404u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C404u) goto L_0881C404;
    return;
L_0881C404:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C410u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C410u) goto L_0881C410;
    return;
L_0881C410:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C41Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C41Cu) goto L_0881C41C;
    return;
L_0881C41C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C428u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C428u) goto L_0881C428;
    return;
L_0881C428:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C434u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C434u) goto L_0881C434;
    return;
L_0881C434:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C440u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C440u) goto L_0881C440;
    return;
L_0881C440:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C44Cu);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C44Cu) goto L_0881C44C;
    return;
L_0881C44C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C458u);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C458u) goto L_0881C458;
    return;
L_0881C458:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C464u);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C464u) goto L_0881C464;
    return;
L_0881C464:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C470u);
    ctx.gpr[5] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C470u) goto L_0881C470;
    return;
L_0881C470:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C47Cu);
    ctx.gpr[5] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C47Cu) goto L_0881C47C;
    return;
L_0881C47C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C598;
      }
      goto L_0881C484;
    }
L_0881C484:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881C514;
      }
      goto L_0881C490;
    }
L_0881C490:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_0881C4F0;
      }
      goto L_0881C4A0;
    }
L_0881C4A0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0881C4D0;
      }
      goto L_0881C4A8;
    }
L_0881C4A8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0881C504;
      }
      goto L_0881C4B0;
    }
L_0881C4B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C4BCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C4BCu) goto L_0881C4BC;
    return;
L_0881C4BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C4C8u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C4C8u) goto L_0881C4C8;
    return;
L_0881C4C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C598;
      }
      goto L_0881C4D0;
    }
L_0881C4D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C4DCu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C4DCu) goto L_0881C4DC;
    return;
L_0881C4DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C4E8u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C4E8u) goto L_0881C4E8;
    return;
L_0881C4E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C598;
      }
      goto L_0881C4F0;
    }
L_0881C4F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C4FCu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C4FCu) goto L_0881C4FC;
    return;
L_0881C4FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C598;
      }
      goto L_0881C504;
    }
L_0881C504:
    ctx.gpr[31] = (0x0881C50Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C50Cu) goto L_0881C50C;
    return;
L_0881C50C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C598;
      }
      goto L_0881C514;
    }
L_0881C514:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0881C568;
      }
      goto L_0881C51C;
    }
L_0881C51C:
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 20u);
      if (branch_taken) {
          goto L_0881C540;
      }
      goto L_0881C528;
    }
L_0881C528:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C534u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C534u) goto L_0881C534;
    return;
L_0881C534:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0881C558;
      }
      goto L_0881C53C;
    }
L_0881C53C:
    ctx.gpr[5] = (0u | 20u);
    goto L_0881C540;
L_0881C540:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0881C558;
      }
      goto L_0881C548;
    }
L_0881C548:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C554u);
    ctx.gpr[5] = (0u | 13u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C554u) goto L_0881C554;
    return;
L_0881C554:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881C558;
L_0881C558:
    ctx.gpr[31] = (0x0881C560u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C560u) goto L_0881C560;
    return;
L_0881C560:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C598;
      }
      goto L_0881C568;
    }
L_0881C568:
    ctx.gpr[31] = (0x0881C570u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C570u) goto L_0881C570;
    return;
L_0881C570:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C598;
      }
      goto L_0881C578;
    }
L_0881C578:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0881C584u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C584u) goto L_0881C584;
    return;
L_0881C584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C598;
      }
      goto L_0881C58C;
    }
L_0881C58C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C598u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 320u, 0x08819534u>(ctx, &aot_mem) && ctx.pc == 0x0881C598u) goto L_0881C598;
    return;
L_0881C598:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C5A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[22]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-464)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[21] << 6u);
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-1632)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881C604u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881C604u) goto L_0881C604;
    return;
L_0881C604:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
      if (branch_taken) {
          goto L_0881C648;
      }
      goto L_0881C60C;
    }
L_0881C60C:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[21] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C648;
      }
      goto L_0881C634;
    }
L_0881C634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C67C;
      }
      goto L_0881C640;
    }
L_0881C640:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0881C688;
      }
      goto L_0881C648;
    }
L_0881C648:
    ctx.gpr[2] = (0u | 0u);
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
L_0881C67C:
    ctx.gpr[31] = (0x0881C684u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 273u, 0x08811604u>(ctx, &aot_mem) && ctx.pc == 0x0881C684u) goto L_0881C684;
    return;
L_0881C684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_0881C688;
L_0881C688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881C94C;
      }
      goto L_0881C694;
    }
L_0881C694:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[21] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (0u | 1u);
      if (branch_taken) {
          goto L_0881C78C;
      }
      goto L_0881C6A8;
    }
L_0881C6A8:
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
    ctx.gpr[1] = (2219u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[21]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28208)));
    jump_target = ctx.gpr[1];
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881C6C0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1560));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C6E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26660));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881C6E0u) goto L_0881C6E0;
    return;
L_0881C6E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C7BC;
      }
      goto L_0881C6E8;
    }
L_0881C6E8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881C6F4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 787u, 0x08817818u>(ctx, &aot_mem) && ctx.pc == 0x0881C6F4u) goto L_0881C6F4;
    return;
L_0881C6F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C7BC;
      }
      goto L_0881C6FC;
    }
L_0881C6FC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881C708u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 793u, 0x08817898u>(ctx, &aot_mem) && ctx.pc == 0x0881C708u) goto L_0881C708;
    return;
L_0881C708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C7BC;
      }
      goto L_0881C710;
    }
L_0881C710:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881C71Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 836u, 0x08817BF8u>(ctx, &aot_mem) && ctx.pc == 0x0881C71Cu) goto L_0881C71C;
    return;
L_0881C71C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C7BC;
      }
      goto L_0881C724;
    }
L_0881C724:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881C730u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 843u, 0x08817CB4u>(ctx, &aot_mem) && ctx.pc == 0x0881C730u) goto L_0881C730;
    return;
L_0881C730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C7BC;
      }
      goto L_0881C738;
    }
L_0881C738:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881C748u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 876u, 0x08817FB8u>(ctx, &aot_mem) && ctx.pc == 0x0881C748u) goto L_0881C748;
    return;
L_0881C748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C7BC;
      }
      goto L_0881C750;
    }
L_0881C750:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881C75Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 817u, 0x08817A78u>(ctx, &aot_mem) && ctx.pc == 0x0881C75Cu) goto L_0881C75C;
    return;
L_0881C75C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0881C7BC;
      }
      goto L_0881C764;
    }
L_0881C764:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1560));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C784u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26660));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881C784u) goto L_0881C784;
    return;
L_0881C784:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881C7BC;
      }
      goto L_0881C78C;
    }
L_0881C78C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1560));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C7BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(26660));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881C7BCu) goto L_0881C7BC;
    return;
L_0881C7BC:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0881C94C;
      }
      goto L_0881C7C4;
    }
L_0881C7C4:
    ctx.gpr[31] = (0x0881C7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 334u, 0x089DE2ACu>(ctx, &aot_mem) && ctx.pc == 0x0881C7CCu) goto L_0881C7CC;
    return;
L_0881C7CC:
    ctx.gpr[4] = (2177u << 16u);
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881C7DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9620));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 333u, 0x089DE28Cu>(ctx, &aot_mem) && ctx.pc == 0x0881C7DCu) goto L_0881C7DC;
    return;
L_0881C7DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_0881C838;
      }
      goto L_0881C7EC;
    }
L_0881C7EC:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_0881C814;
      }
      goto L_0881C7F4;
    }
L_0881C7F4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1668)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C808u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 168u, 0x08814BECu>(ctx, &aot_mem) && ctx.pc == 0x0881C808u) goto L_0881C808;
    return;
L_0881C808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0881C828;
      }
      goto L_0881C810;
    }
L_0881C810:
    ctx.gpr[4] = (2221u << 16u);
    goto L_0881C814;
L_0881C814:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1664)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C824u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 168u, 0x08814BECu>(ctx, &aot_mem) && ctx.pc == 0x0881C824u) goto L_0881C824;
    return;
L_0881C824:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0881C828;
L_0881C828:
    ctx.gpr[31] = (0x0881C830u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 277u, 0x08811730u>(ctx, &aot_mem) && ctx.pc == 0x0881C830u) goto L_0881C830;
    return;
L_0881C830:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0881C8AC;
      }
      goto L_0881C838;
    }
L_0881C838:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-464)));
    { const bool branch_taken = ctx.gpr[21] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(264));
      if (branch_taken) {
          goto L_0881C860;
      }
      goto L_0881C844;
    }
L_0881C844:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1668)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C858u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 173u, 0x08814C5Cu>(ctx, &aot_mem) && ctx.pc == 0x0881C858u) goto L_0881C858;
    return;
L_0881C858:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0881C878;
      }
      goto L_0881C860;
    }
L_0881C860:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1664)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C874u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 173u, 0x08814C5Cu>(ctx, &aot_mem) && ctx.pc == 0x0881C874u) goto L_0881C874;
    return;
L_0881C874:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0881C878;
L_0881C878:
    ctx.gpr[31] = (0x0881C880u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x0881C880u) goto L_0881C880;
    return;
L_0881C880:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881C890u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x0881C890u) goto L_0881C890;
    return;
L_0881C890:
    ctx.gpr[31] = (0x0881C898u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 411u, 0x08812510u>(ctx, &aot_mem) && ctx.pc == 0x0881C898u) goto L_0881C898;
    return;
L_0881C898:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    goto L_0881C8AC;
L_0881C8AC:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[23];
    ctx.gpr[16] = (2219u << 16u);
      if (branch_taken) {
          goto L_0881C944;
      }
      goto L_0881C8B4;
    }
L_0881C8B4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(27104));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C8C8u);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(27608));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0881C8C8u) goto L_0881C8C8;
    return;
L_0881C8C8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0881C8D8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x0881C8D8u) goto L_0881C8D8;
    return;
L_0881C8D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2219u << 16u);
      if (branch_taken) {
          goto L_0881C928;
      }
      goto L_0881C8E0;
    }
L_0881C8E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C8ECu);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(27620));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0881C8ECu) goto L_0881C8EC;
    return;
L_0881C8EC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0881C8FCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x0881C8FCu) goto L_0881C8FC;
    return;
L_0881C8FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0881C928;
      }
      goto L_0881C904;
    }
L_0881C904:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[31] = (0x0881C910u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(27632));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0881C910u) goto L_0881C910;
    return;
L_0881C910:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881C920u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 628u, 0x08A9E368u>(ctx, &aot_mem) && ctx.pc == 0x0881C920u) goto L_0881C920;
    return;
L_0881C920:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
        goto L_0881C938;
    }
    goto L_0881C928;
L_0881C928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881C944;
      }
      goto L_0881C938;
    }
L_0881C938:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_0881C944;
L_0881C944:
    ctx.gpr[31] = (0x0881C94Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 333u, 0x089DE28Cu>(ctx, &aot_mem) && ctx.pc == 0x0881C94Cu) goto L_0881C94C;
    return;
L_0881C94C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_0881C980:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27416));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27432));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27104));
    ctx.gpr[6] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(27188));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27448));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[30]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[30] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    goto L_0881CA08;
L_0881CA08:
    ctx.gpr[5] = (ctx.gpr[20] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881CA88;
      }
      goto L_0881CA14;
    }
L_0881CA14:
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[1] = (2219u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[20]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28272)));
    jump_target = ctx.gpr[1];
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CA2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 16u);
      if (branch_taken) {
          goto L_0881CA88;
      }
      goto L_0881CA34;
    }
L_0881CA34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 21u);
      if (branch_taken) {
          goto L_0881CA88;
      }
      goto L_0881CA3C;
    }
L_0881CA3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 22u);
      if (branch_taken) {
          goto L_0881CA88;
      }
      goto L_0881CA44;
    }
L_0881CA44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 23u);
      if (branch_taken) {
          goto L_0881CA88;
      }
      goto L_0881CA4C;
    }
L_0881CA4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 24u);
      if (branch_taken) {
          goto L_0881CA88;
      }
      goto L_0881CA54;
    }
L_0881CA54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 25u);
      if (branch_taken) {
          goto L_0881CA88;
      }
      goto L_0881CA5C;
    }
L_0881CA5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 26u);
      if (branch_taken) {
          goto L_0881CA88;
      }
      goto L_0881CA64;
    }
L_0881CA64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 27u);
      if (branch_taken) {
          goto L_0881CA88;
      }
      goto L_0881CA6C;
    }
L_0881CA6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 28u);
      if (branch_taken) {
          goto L_0881CA88;
      }
      goto L_0881CA74;
    }
L_0881CA74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 29u);
      if (branch_taken) {
          goto L_0881CA88;
      }
      goto L_0881CA7C;
    }
L_0881CA7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 30u);
      if (branch_taken) {
          goto L_0881CA88;
      }
      goto L_0881CA84;
    }
L_0881CA84:
    ctx.gpr[17] = (0u | 31u);
    goto L_0881CA88;
L_0881CA88:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[17] << 6u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-16));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
        goto L_0881CBA8;
    }
    goto L_0881CAA4;
L_0881CAA4:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2219u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28320)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CABC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-1600)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-1648)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x0881CAD8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881CAD8u) goto L_0881CAD8;
    return;
L_0881CAD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881CBA8;
      }
      goto L_0881CAE0;
    }
L_0881CAE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-1628)));
    ctx.gpr[31] = (0x0881CAECu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881CAECu) goto L_0881CAEC;
    return;
L_0881CAEC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
        goto L_0881CBA8;
    }
    goto L_0881CAF4;
L_0881CAF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-1600)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-1648)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[31] = (0x0881CB0Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881CB0Cu) goto L_0881CB0C;
    return;
L_0881CB0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881CBA8;
      }
      goto L_0881CB14;
    }
L_0881CB14:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-1628)));
    ctx.gpr[31] = (0x0881CB24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881CB24u) goto L_0881CB24;
    return;
L_0881CB24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_0881CBA4;
      }
      goto L_0881CB2C;
    }
L_0881CB2C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0881CB38u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0881CB38u) goto L_0881CB38;
    return;
L_0881CB38:
    ctx.gpr[31] = (0x0881CB40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x0881CB40u) goto L_0881CB40;
    return;
L_0881CB40:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881CB50u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x0881CB50u) goto L_0881CB50;
    return;
L_0881CB50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-1600)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-1648)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x0881CB6Cu);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881CB6Cu) goto L_0881CB6C;
    return;
L_0881CB6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
      if (branch_taken) {
          goto L_0881CBA8;
      }
      goto L_0881CB74;
    }
L_0881CB74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-1628)));
    ctx.gpr[31] = (0x0881CB80u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881CB80u) goto L_0881CB80;
    return;
L_0881CB80:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
        goto L_0881CBA8;
    }
    goto L_0881CB88;
L_0881CB88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-1600)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-1648)));
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-22));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[31] = (0x0881CBA4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0881CBA4u) goto L_0881CBA4;
    return;
L_0881CBA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    goto L_0881CBA8;
L_0881CBA8:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(424));
    ctx.gpr[31] = (0x0881CBB4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x0881CBB4u) goto L_0881CBB4;
    return;
L_0881CBB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_0881CC34;
    }
    goto L_0881CBC4;
L_0881CBC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(264));
    ctx.gpr[16] = (0u | 16u);
    ctx.gpr[31] = (0x0881CBDCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(424));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x0881CBDCu) goto L_0881CBDC;
    return;
L_0881CBDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-464)));
    ctx.gpr[31] = (0x0881CBE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(264));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 522u, 0x0880A0E8u>(ctx, &aot_mem) && ctx.pc == 0x0881CBE8u) goto L_0881CBE8;
    return;
L_0881CBE8:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0881CC28;
      }
      goto L_0881CBF0;
    }
L_0881CBF0:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 21 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_0881CC34;
    }
    goto L_0881CC00;
L_0881CC00:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0881CC04;
L_0881CC04:
    ctx.gpr[31] = (0x0881CC0Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 321u, 0x08819550u>(ctx, &aot_mem) && ctx.pc == 0x0881CC0Cu) goto L_0881CC0C;
    return;
L_0881CC0C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0881CC04;
      }
      goto L_0881CC1C;
    }
L_0881CC1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0881CC34;
      }
      goto L_0881CC24;
    }
L_0881CC24:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0881CC28;
L_0881CC28:
    ctx.gpr[31] = (0x0881CC30u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 321u, 0x08819550u>(ctx, &aot_mem) && ctx.pc == 0x0881CC30u) goto L_0881CC30;
    return;
L_0881CC30:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0881CC34;
L_0881CC34:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0881CA08;
      }
      goto L_0881CC40;
    }
L_0881CC40:
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
L_0881CC70:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-460), 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1624)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-1620), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CC8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(296));
    ctx.gpr[4] = (ctx.gpr[30] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881CCE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0881CCE0u) goto L_0881CCE0;
    return;
L_0881CCE0:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(140), 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(124), 0u);
    ctx.gpr[23] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[17] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_0881CD68;
      }
      goto L_0881CD24;
    }
L_0881CD24:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 204u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881CD34u);
    ctx.gpr[5] = (0u | 143u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881CD34u) goto L_0881CD34;
    return;
L_0881CD34:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0881CDAC;
      }
      goto L_0881CD40;
    }
L_0881CD40:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0881CD4Cu);
    ctx.gpr[6] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0881CD4Cu) goto L_0881CD4C;
    return;
L_0881CD4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0881CD58u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 495u, 0x08819FECu>(ctx, &aot_mem) && ctx.pc == 0x0881CD58u) goto L_0881CD58;
    return;
L_0881CD58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881CDAC;
      }
      goto L_0881CD68;
    }
L_0881CD68:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 196u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881CD78u);
    ctx.gpr[5] = (0u | 143u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881CD78u) goto L_0881CD78;
    return;
L_0881CD78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0881CDAC;
      }
      goto L_0881CD84;
    }
L_0881CD84:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0881CD90u);
    ctx.gpr[6] = (0u | 196u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0881CD90u) goto L_0881CD90;
    return;
L_0881CD90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881CDA0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 539u, 0x08813560u>(ctx, &aot_mem) && ctx.pc == 0x0881CDA0u) goto L_0881CDA0;
    return;
L_0881CDA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_0881CDAC;
L_0881CDAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0881CE34;
      }
      goto L_0881CDB8;
    }
L_0881CDB8:
    ctx.gpr[22] = (0u | 10u);
    ctx.gpr[19] = (0u | 0u);
    goto L_0881CDC0;
L_0881CDC0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (0u | 360u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881CDE0u);
    ctx.gpr[5] = (0u | 143u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881CDE0u) goto L_0881CDE0;
    return;
L_0881CDE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0881CE24;
      }
      goto L_0881CDE8;
    }
L_0881CDE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0881CE24;
      }
      goto L_0881CDFC;
    }
L_0881CDFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0881CE10u);
    ctx.gpr[6] = (0u | 36u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0881CE10u) goto L_0881CE10;
    return;
L_0881CE10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_0881CDFC;
      }
      goto L_0881CE24;
    }
L_0881CE24:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0881CDC0;
      }
      goto L_0881CE34;
    }
L_0881CE34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[31] = (0x0881CE4Cu);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    goto L_0881CE88;
L_0881CE4C:
    ctx.gpr[31] = (0x0881CE54u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 93u, 0x089486CCu>(ctx, &aot_mem) && ctx.pc == 0x0881CE54u) goto L_0881CE54;
    return;
L_0881CE54:
    ctx.gpr[2] = (0u | 1u);
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
L_0881CE88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881CED4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881E658;
L_0881CED4:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CEF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0881CF38;
    }
    goto L_0881CF0C;
L_0881CF0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0881CF50;
      }
      goto L_0881CF18;
    }
L_0881CF18:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0881CF28u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 178u, 0x08814CC8u>(ctx, &aot_mem) && ctx.pc == 0x0881CF28u) goto L_0881CF28;
    return;
L_0881CF28:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CF38:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0881CF50;
      }
      goto L_0881CF40;
    }
L_0881CF40:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0881CF50u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 59u, 0x08814488u>(ctx, &aot_mem) && ctx.pc == 0x0881CF50u) goto L_0881CF50;
    return;
L_0881CF50:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881CF60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0881CFEC;
      }
      goto L_0881CF84;
    }
L_0881CF84:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (2224u << 16u);
      if (branch_taken) {
          goto L_0881D044;
      }
      goto L_0881CF90;
    }
L_0881CF90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[6] = (ctx.gpr[6] & 32u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] & 2u);
      if (branch_taken) {
          goto L_0881CFD0;
      }
      goto L_0881CFA8;
    }
L_0881CFA8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
      if (branch_taken) {
          goto L_0881CFC8;
      }
      goto L_0881CFB0;
    }
L_0881CFB0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0881CFC8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 178u, 0x08814CC8u>(ctx, &aot_mem) && ctx.pc == 0x0881CFC8u) goto L_0881CFC8;
    return;
L_0881CFC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0881CFDC;
      }
      goto L_0881CFD0;
    }
L_0881CFD0:
    ctx.gpr[31] = (0x0881CFD8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 196u, 0x08818CB8u>(ctx, &aot_mem) && ctx.pc == 0x0881CFD8u) goto L_0881CFD8;
    return;
L_0881CFD8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_0881CFDC;
L_0881CFDC:
    ctx.gpr[31] = (0x0881CFE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881DC34;
L_0881CFE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D044;
      }
      goto L_0881CFEC;
    }
L_0881CFEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (2224u << 16u);
      if (branch_taken) {
          goto L_0881D044;
      }
      goto L_0881CFF8;
    }
L_0881CFF8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17320)));
    ctx.gpr[6] = (ctx.gpr[6] & 32u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[4] & 2u);
      if (branch_taken) {
          goto L_0881D038;
      }
      goto L_0881D010;
    }
L_0881D010:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
      if (branch_taken) {
          goto L_0881D030;
      }
      goto L_0881D018;
    }
L_0881D018:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0881D030u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 59u, 0x08814488u>(ctx, &aot_mem) && ctx.pc == 0x0881D030u) goto L_0881D030;
    return;
L_0881D030:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0881D044;
      }
      goto L_0881D038;
    }
L_0881D038:
    ctx.gpr[31] = (0x0881D040u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08813D74u>(ctx, &aot_mem) && ctx.pc == 0x0881D040u) goto L_0881D040;
    return;
L_0881D040:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_0881D044;
L_0881D044:
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
L_0881D05C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D080;
      }
      goto L_0881D070;
    }
L_0881D070:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x0881D080u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 294u, 0x0893DE94u>(ctx, &aot_mem) && ctx.pc == 0x0881D080u) goto L_0881D080;
    return;
L_0881D080:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D08C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
        goto L_0881D0B4;
    }
    goto L_0881D0A8;
L_0881D0A8:
    ctx.gpr[31] = (0x0881D0B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 271u, 0x0893DBD0u>(ctx, &aot_mem) && ctx.pc == 0x0881D0B0u) goto L_0881D0B0;
    return;
L_0881D0B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    goto L_0881D0B4;
L_0881D0B4:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0881D0DC;
    }
    goto L_0881D0C0;
L_0881D0C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D0EC;
      }
      goto L_0881D0CC;
    }
L_0881D0CC:
    ctx.gpr[31] = (0x0881D0D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 207u, 0x08814F58u>(ctx, &aot_mem) && ctx.pc == 0x0881D0D4u) goto L_0881D0D4;
    return;
L_0881D0D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D0EC;
      }
      goto L_0881D0DC;
    }
L_0881D0DC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D0EC;
      }
      goto L_0881D0E4;
    }
L_0881D0E4:
    ctx.gpr[31] = (0x0881D0ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 623u, 0x08813A64u>(ctx, &aot_mem) && ctx.pc == 0x0881D0ECu) goto L_0881D0EC;
    return;
L_0881D0EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D0FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0881D13C;
    }
    goto L_0881D11C;
L_0881D11C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
        goto L_0881D150;
    }
    goto L_0881D128;
L_0881D128:
    ctx.gpr[31] = (0x0881D130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 208u, 0x08814F68u>(ctx, &aot_mem) && ctx.pc == 0x0881D130u) goto L_0881D130;
    return;
L_0881D130:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0881D150;
      }
      goto L_0881D138;
    }
L_0881D138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0881D13C;
L_0881D13C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
        goto L_0881D150;
    }
    goto L_0881D144;
L_0881D144:
    ctx.gpr[31] = (0x0881D14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 628u, 0x08813AB0u>(ctx, &aot_mem) && ctx.pc == 0x0881D14Cu) goto L_0881D14C;
    return;
L_0881D14C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    goto L_0881D150;
L_0881D150:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D160;
      }
      goto L_0881D158;
    }
L_0881D158:
    ctx.gpr[31] = (0x0881D160u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 274u, 0x0893DC10u>(ctx, &aot_mem) && ctx.pc == 0x0881D160u) goto L_0881D160;
    return;
L_0881D160:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D170:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0881D1A8;
      }
      goto L_0881D188;
    }
L_0881D188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D1BC;
      }
      goto L_0881D194;
    }
L_0881D194:
    ctx.gpr[31] = (0x0881D19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 209u, 0x08814F7Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D19Cu) goto L_0881D19C;
    return;
L_0881D19C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D1BC;
      }
      goto L_0881D1B4;
    }
L_0881D1B4:
    ctx.gpr[31] = (0x0881D1BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 629u, 0x08813AC4u>(ctx, &aot_mem) && ctx.pc == 0x0881D1BCu) goto L_0881D1BC;
    return;
L_0881D1BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D1C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0881D24C;
      }
      goto L_0881D1F0;
    }
L_0881D1F0:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (2222u << 16u);
    goto L_0881D1FC;
L_0881D1FC:
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
        goto L_0881D224;
    }
    goto L_0881D20C;
L_0881D20C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881D21Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881D21Cu) goto L_0881D21C;
    return;
L_0881D21C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    goto L_0881D224;
L_0881D224:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0881D1FC;
      }
      goto L_0881D238;
    }
L_0881D238:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881D248u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881D248u) goto L_0881D248;
    return;
L_0881D248:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    goto L_0881D24C;
L_0881D24C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
      if (branch_taken) {
          goto L_0881D274;
      }
      goto L_0881D264;
    }
L_0881D264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0881D270u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 654u, 0x0897AC40u>(ctx, &aot_mem) && ctx.pc == 0x0881D270u) goto L_0881D270;
    return;
L_0881D270:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    goto L_0881D274;
L_0881D274:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0881D2C4;
    }
    goto L_0881D284;
L_0881D284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D2FC;
      }
      goto L_0881D290;
    }
L_0881D290:
    ctx.gpr[31] = (0x0881D298u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881E658;
L_0881D298:
    ctx.gpr[31] = (0x0881D2A0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 730u, 0x08943DD8u>(ctx, &aot_mem) && ctx.pc == 0x0881D2A0u) goto L_0881D2A0;
    return;
L_0881D2A0:
    ctx.gpr[31] = (0x0881D2A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 518u, 0x0881A1E4u>(ctx, &aot_mem) && ctx.pc == 0x0881D2A8u) goto L_0881D2A8;
    return;
L_0881D2A8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881D2BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881D2BCu) goto L_0881D2BC;
    return;
L_0881D2BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_0881D2FC;
      }
      goto L_0881D2C4;
    }
L_0881D2C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D2FC;
      }
      goto L_0881D2CC;
    }
L_0881D2CC:
    ctx.gpr[31] = (0x0881D2D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881E658;
L_0881D2D4:
    ctx.gpr[31] = (0x0881D2DCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 730u, 0x08943DD8u>(ctx, &aot_mem) && ctx.pc == 0x0881D2DCu) goto L_0881D2DC;
    return;
L_0881D2DC:
    ctx.gpr[31] = (0x0881D2E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 562u, 0x08813708u>(ctx, &aot_mem) && ctx.pc == 0x0881D2E4u) goto L_0881D2E4;
    return;
L_0881D2E4:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881D2F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881D2F8u) goto L_0881D2F8;
    return;
L_0881D2F8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_0881D2FC;
L_0881D2FC:
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
L_0881D31C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0881D354;
      }
      goto L_0881D33C;
    }
L_0881D33C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0881D354;
      }
      goto L_0881D348;
    }
L_0881D348:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0881D354u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0881D37C;
L_0881D354:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0881D368;
      }
      goto L_0881D360;
    }
L_0881D360:
    ctx.gpr[31] = (0x0881D368u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 281u, 0x0893DC8Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D368u) goto L_0881D368;
    return;
L_0881D368:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D37C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0881D3E0;
    }
    goto L_0881D394;
L_0881D394:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_0881D41C;
      }
      goto L_0881D3A0;
    }
L_0881D3A0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0881D3B8;
      }
      goto L_0881D3A8;
    }
L_0881D3A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u | 21u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881D3CC;
      }
      goto L_0881D3B8;
    }
L_0881D3B8:
    ctx.gpr[31] = (0x0881D3C0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 229u, 0x08815104u>(ctx, &aot_mem) && ctx.pc == 0x0881D3C0u) goto L_0881D3C0;
    return;
L_0881D3C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D3CC:
    ctx.gpr[31] = (0x0881D3D4u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 225u, 0x088150B0u>(ctx, &aot_mem) && ctx.pc == 0x0881D3D4u) goto L_0881D3D4;
    return;
L_0881D3D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D3E0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_0881D41C;
      }
      goto L_0881D3E8;
    }
L_0881D3E8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0881D400;
      }
      goto L_0881D3F0;
    }
L_0881D3F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u | 21u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881D414;
      }
      goto L_0881D400;
    }
L_0881D400:
    ctx.gpr[31] = (0x0881D408u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 596u, 0x088138ACu>(ctx, &aot_mem) && ctx.pc == 0x0881D408u) goto L_0881D408;
    return;
L_0881D408:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D414:
    ctx.gpr[31] = (0x0881D41Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 594u, 0x08813888u>(ctx, &aot_mem) && ctx.pc == 0x0881D41Cu) goto L_0881D41C;
    return;
L_0881D41C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D428:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D47C;
      }
      goto L_0881D43C;
    }
L_0881D43C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0881D46C;
    }
    goto L_0881D44C;
L_0881D44C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D47C;
      }
      goto L_0881D458;
    }
L_0881D458:
    ctx.gpr[31] = (0x0881D460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 237u, 0x088151A0u>(ctx, &aot_mem) && ctx.pc == 0x0881D460u) goto L_0881D460;
    return;
L_0881D460:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D46C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D47C;
      }
      goto L_0881D474;
    }
L_0881D474:
    ctx.gpr[31] = (0x0881D47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 602u, 0x08813924u>(ctx, &aot_mem) && ctx.pc == 0x0881D47Cu) goto L_0881D47C;
    return;
L_0881D47C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D4E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881D530u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 362u, 0x08811D04u>(ctx, &aot_mem) && ctx.pc == 0x0881D530u) goto L_0881D530;
    return;
L_0881D530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D5D4;
      }
      goto L_0881D53C;
    }
L_0881D53C:
    ctx.gpr[31] = (0x0881D544u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    goto L_0881F488;
L_0881D544:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_0881D5A8;
      }
      goto L_0881D550;
    }
L_0881D550:
    ctx.gpr[31] = (0x0881D558u);
    // nop
    goto L_0881F478;
L_0881D558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881D598;
      }
      goto L_0881D568;
    }
L_0881D568:
    ctx.gpr[31] = (0x0881D570u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0881E658;
L_0881D570:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14744));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_0881D5A4;
      }
      goto L_0881D598;
    }
L_0881D598:
    ctx.gpr[31] = (0x0881D5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 190u, 0x08A15824u>(ctx, &aot_mem) && ctx.pc == 0x0881D5A0u) goto L_0881D5A0;
    return;
L_0881D5A0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0881D5A4;
L_0881D5A4:
    ctx.gpr[4] = (15820u << 16u);
    goto L_0881D5A8;
L_0881D5A8:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0881D5D4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 288u, 0x0893DD18u>(ctx, &aot_mem) && ctx.pc == 0x0881D5D4u) goto L_0881D5D4;
    return;
L_0881D5D4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D5EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881D638u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 363u, 0x08811D30u>(ctx, &aot_mem) && ctx.pc == 0x0881D638u) goto L_0881D638;
    return;
L_0881D638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D64C;
      }
      goto L_0881D644;
    }
L_0881D644:
    ctx.gpr[31] = (0x0881D64Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 290u, 0x0893DDD8u>(ctx, &aot_mem) && ctx.pc == 0x0881D64Cu) goto L_0881D64C;
    return;
L_0881D64C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881D698u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 364u, 0x08811D5Cu>(ctx, &aot_mem) && ctx.pc == 0x0881D698u) goto L_0881D698;
    return;
L_0881D698:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D6A4:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D6AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[9] = (ctx.gpr[6] & 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_0881D6E4;
      }
      goto L_0881D6D0;
    }
L_0881D6D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D6F4;
      }
      goto L_0881D6DC;
    }
L_0881D6DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0881D6F4;
      }
      goto L_0881D6E4;
    }
L_0881D6E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D6F4;
      }
      goto L_0881D6F0;
    }
L_0881D6F0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0881D6F4;
L_0881D6F4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0881D70C;
      }
      goto L_0881D6FC;
    }
L_0881D6FC:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x0881D70Cu);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 374u, 0x08811E34u>(ctx, &aot_mem) && ctx.pc == 0x0881D70Cu) goto L_0881D70C;
    return;
L_0881D70C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D718:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[9] = (ctx.gpr[6] & 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_0881D750;
      }
      goto L_0881D73C;
    }
L_0881D73C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D760;
      }
      goto L_0881D748;
    }
L_0881D748:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0881D760;
      }
      goto L_0881D750;
    }
L_0881D750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D760;
      }
      goto L_0881D75C;
    }
L_0881D75C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    goto L_0881D760;
L_0881D760:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0881D778;
      }
      goto L_0881D768;
    }
L_0881D768:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x0881D778u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 374u, 0x08811E34u>(ctx, &aot_mem) && ctx.pc == 0x0881D778u) goto L_0881D778;
    return;
L_0881D778:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D784:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D78C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881D7C0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_0881D6AC;
L_0881D7C0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881D7D4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_0881D718;
L_0881D7D4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881D7E0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0881D784;
L_0881D7E0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D800:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0881D860;
      }
      goto L_0881D840;
    }
L_0881D840:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D87C;
      }
      goto L_0881D84C;
    }
L_0881D84C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0881D87C;
      }
      goto L_0881D860;
    }
L_0881D860:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D87C;
      }
      goto L_0881D86C;
    }
L_0881D86C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_0881D87C;
L_0881D87C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D8A4;
      }
      goto L_0881D884;
    }
L_0881D884:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[18];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0881D89C;
      }
      goto L_0881D88C;
    }
L_0881D88C:
    ctx.gpr[31] = (0x0881D894u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 170u, 0x0897DDBCu>(ctx, &aot_mem) && ctx.pc == 0x0881D894u) goto L_0881D894;
    return;
L_0881D894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881D8A4;
      }
      goto L_0881D89C;
    }
L_0881D89C:
    ctx.gpr[31] = (0x0881D8A4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 174u, 0x0897DE20u>(ctx, &aot_mem) && ctx.pc == 0x0881D8A4u) goto L_0881D8A4;
    return;
L_0881D8A4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0881D8D8;
      }
      goto L_0881D8AC;
    }
L_0881D8AC:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[18];
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0881D8C8;
      }
      goto L_0881D8B4;
    }
L_0881D8B4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881D8C0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 170u, 0x0897DDBCu>(ctx, &aot_mem) && ctx.pc == 0x0881D8C0u) goto L_0881D8C0;
    return;
L_0881D8C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0881D8D8;
      }
      goto L_0881D8C8;
    }
L_0881D8C8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881D8D4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 174u, 0x0897DE20u>(ctx, &aot_mem) && ctx.pc == 0x0881D8D4u) goto L_0881D8D4;
    return;
L_0881D8D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0881D8D8;
L_0881D8D8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0881D8E4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0881E694;
L_0881D8E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881D904:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] & 1u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0881D974;
      }
      goto L_0881D950;
    }
L_0881D950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
        goto L_0881D998;
    }
    goto L_0881D95C;
L_0881D95C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881D96Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 328u, 0x08815814u>(ctx, &aot_mem) && ctx.pc == 0x0881D96Cu) goto L_0881D96C;
    return;
L_0881D96C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0881D998;
      }
      goto L_0881D974;
    }
L_0881D974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
        goto L_0881D998;
    }
    goto L_0881D980;
L_0881D980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881D994u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 371u, 0x08811DFCu>(ctx, &aot_mem) && ctx.pc == 0x0881D994u) goto L_0881D994;
    return;
L_0881D994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    goto L_0881D998;
L_0881D998:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_0881D9B8;
    }
    goto L_0881D9A0;
L_0881D9A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881D9B4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 371u, 0x08811DFCu>(ctx, &aot_mem) && ctx.pc == 0x0881D9B4u) goto L_0881D9B4;
    return;
L_0881D9B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0881D9B8;
L_0881D9B8:
    ctx.gpr[31] = (0x0881D9C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0881DAF8;
L_0881D9C0:
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
L_0881D9DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (0u | 21u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0881DA70;
      }
      goto L_0881DA24;
    }
L_0881DA24:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881DA54u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 379u, 0x08811FF0u>(ctx, &aot_mem) && ctx.pc == 0x0881DA54u) goto L_0881DA54;
    return;
L_0881DA54:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881DA68u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_0881D718;
L_0881DA68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0881DAC0;
      }
      goto L_0881DA70;
    }
L_0881DA70:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0881DAA0;
      }
      goto L_0881DA78;
    }
L_0881DA78:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881DA94u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 379u, 0x08811FF0u>(ctx, &aot_mem) && ctx.pc == 0x0881DA94u) goto L_0881DA94;
    return;
L_0881DA94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0881DAC0;
      }
      goto L_0881DA9C;
    }
L_0881DA9C:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    goto L_0881DAA0;
L_0881DAA0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881DABCu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 381u, 0x08812024u>(ctx, &aot_mem) && ctx.pc == 0x0881DABCu) goto L_0881DABC;
    return;
L_0881DABC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0881DAC0;
L_0881DAC0:
    ctx.gpr[31] = (0x0881DAC8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_0881DAF8;
L_0881DAC8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0881DAD8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0881E694;
L_0881DAD8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DAF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0881DB84;
      }
      goto L_0881DB18;
    }
L_0881DB18:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[7] = (0u | 21u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0881DB5C;
      }
      goto L_0881DB28;
    }
L_0881DB28:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0881DB48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 2u, 0x0893C0C8u>(ctx, &aot_mem) && ctx.pc == 0x0881DB48u) goto L_0881DB48;
    return;
L_0881DB48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881DB54u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0881D784;
L_0881DB54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DB84;
      }
      goto L_0881DB5C;
    }
L_0881DB5C:
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0881DB78u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 2u, 0x0893C0C8u>(ctx, &aot_mem) && ctx.pc == 0x0881DB78u) goto L_0881DB78;
    return;
L_0881DB78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0881DB84u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_0881D784;
L_0881DB84:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DB94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881DBBCu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 302u, 0x0880F030u>(ctx, &aot_mem) && ctx.pc == 0x0881DBBCu) goto L_0881DBBC;
    return;
L_0881DBBC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DBC8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DBD0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DBD8:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DC34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DC90;
      }
      goto L_0881DC54;
    }
L_0881DC54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DC90;
      }
      goto L_0881DC60;
    }
L_0881DC60:
    ctx.gpr[31] = (0x0881DC68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881E658;
L_0881DC68:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(296));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0881DC90;
      }
      goto L_0881DC84;
    }
L_0881DC84:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0881DC90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 319u, 0x08815724u>(ctx, &aot_mem) && ctx.pc == 0x0881DC90u) goto L_0881DC90;
    return;
L_0881DC90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DCA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0881DCD8;
    }
    goto L_0881DCB8;
L_0881DCB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DCE8;
      }
      goto L_0881DCC4;
    }
L_0881DCC4:
    ctx.gpr[31] = (0x0881DCCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 326u, 0x088157F0u>(ctx, &aot_mem) && ctx.pc == 0x0881DCCCu) goto L_0881DCCC;
    return;
L_0881DCCC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DCD8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DCE8;
      }
      goto L_0881DCE0;
    }
L_0881DCE0:
    ctx.gpr[31] = (0x0881DCE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 637u, 0x08813B40u>(ctx, &aot_mem) && ctx.pc == 0x0881DCE8u) goto L_0881DCE8;
    return;
L_0881DCE8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DCF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0881DD38;
    }
    goto L_0881DD14;
L_0881DD14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DD54;
      }
      goto L_0881DD20;
    }
L_0881DD20:
    ctx.gpr[31] = (0x0881DD28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 22u, 0x088181C8u>(ctx, &aot_mem) && ctx.pc == 0x0881DD28u) goto L_0881DD28;
    return;
L_0881DD28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881DD54;
      }
      goto L_0881DD38;
    }
L_0881DD38:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DD54;
      }
      goto L_0881DD40;
    }
L_0881DD40:
    ctx.gpr[31] = (0x0881DD48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 631u, 0x08813ADCu>(ctx, &aot_mem) && ctx.pc == 0x0881DD48u) goto L_0881DD48;
    return;
L_0881DD48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_0881DD54;
L_0881DD54:
    ctx.gpr[31] = (0x0881DD5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881D05C;
L_0881DD5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DD6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0881DDA4;
      }
      goto L_0881DD84;
    }
L_0881DD84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DDB8;
      }
      goto L_0881DD90;
    }
L_0881DD90:
    ctx.gpr[31] = (0x0881DD98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 21u, 0x088181C0u>(ctx, &aot_mem) && ctx.pc == 0x0881DD98u) goto L_0881DD98;
    return;
L_0881DD98:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DDA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881DDB8;
      }
      goto L_0881DDB0;
    }
L_0881DDB0:
    ctx.gpr[31] = (0x0881DDB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 630u, 0x08813AD4u>(ctx, &aot_mem) && ctx.pc == 0x0881DDB8u) goto L_0881DDB8;
    return;
L_0881DDB8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DDC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0881DE24;
      }
      goto L_0881DDDC;
    }
L_0881DDDC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0881DE10;
    }
    goto L_0881DDEC;
L_0881DDEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0881DE24;
      }
      goto L_0881DDF8;
    }
L_0881DDF8:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0881DE04u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 334u, 0x08815890u>(ctx, &aot_mem) && ctx.pc == 0x0881DE04u) goto L_0881DE04;
    return;
L_0881DE04:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DE10:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0881DE24;
      }
      goto L_0881DE18;
    }
L_0881DE18:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0881DE24u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 686u, 0x08813EACu>(ctx, &aot_mem) && ctx.pc == 0x0881DE24u) goto L_0881DE24;
    return;
L_0881DE24:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881DE30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[7] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[7] & 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0881DEDC;
      }
      goto L_0881DE78;
    }
L_0881DE78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0881DF34;
      }
      goto L_0881DE84;
    }
L_0881DE84:
    ctx.gpr[31] = (0x0881DE8Cu);
    ctx.gpr[4] = (0u | 1u);
    goto L_0881F498;
L_0881DE8C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0881DEAC;
      }
      goto L_0881DE94;
    }
L_0881DE94:
    ctx.gpr[31] = (0x0881DE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0005_entry, 5u, 21u, 0x088181C0u>(ctx, &aot_mem) && ctx.pc == 0x0881DE9Cu) goto L_0881DE9C;
    return;
L_0881DE9C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0881E034;
      }
      goto L_0881DEA4;
    }
L_0881DEA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_0881DF38;
      }
      goto L_0881DEAC;
    }
L_0881DEAC:
    ctx.gpr[31] = (0x0881DEB4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 342u, 0x08815954u>(ctx, &aot_mem) && ctx.pc == 0x0881DEB4u) goto L_0881DEB4;
    return;
L_0881DEB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
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
L_0881DEDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_0881DF34;
      }
      goto L_0881DEE8;
    }
L_0881DEE8:
    ctx.gpr[31] = (0x0881DEF0u);
    ctx.gpr[4] = (0u | 1u);
    goto L_0881F498;
L_0881DEF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881DF10;
      }
      goto L_0881DEF8;
    }
L_0881DEF8:
    ctx.gpr[31] = (0x0881DF00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 630u, 0x08813AD4u>(ctx, &aot_mem) && ctx.pc == 0x0881DF00u) goto L_0881DF00;
    return;
L_0881DF00:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0881E034;
      }
      goto L_0881DF08;
    }
L_0881DF08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_0881DF38;
      }
      goto L_0881DF10;
    }
L_0881DF10:
    ctx.gpr[31] = (0x0881DF18u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 676u, 0x08813E34u>(ctx, &aot_mem) && ctx.pc == 0x0881DF18u) goto L_0881DF18;
    return;
L_0881DF18:
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
L_0881DF34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    goto L_0881DF38;
L_0881DF38:
    ctx.gpr[5] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 64u);
      if (branch_taken) {
          goto L_0881DF98;
      }
      goto L_0881DF44;
    }
L_0881DF44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0881DF74;
      }
      goto L_0881DF54;
    }
L_0881DF54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) > 0;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881DF6C;
      }
      goto L_0881DF5C;
    }
L_0881DF5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881DF6C;
      }
      goto L_0881DF6C;
    }
L_0881DF6C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0881E034;
      }
      goto L_0881DF74;
    }
L_0881DF74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_0881DF90;
    }
    goto L_0881DF90;
L_0881DF90:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881E034;
      }
      goto L_0881DF98;
    }
L_0881DF98:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
      if (branch_taken) {
          goto L_0881DFF4;
      }
      goto L_0881DFA0;
    }
L_0881DFA0:
    ctx.gpr[31] = (0x0881DFA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 304u, 0x0880F064u>(ctx, &aot_mem) && ctx.pc == 0x0881DFA8u) goto L_0881DFA8;
    return;
L_0881DFA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_0881DFCC;
      }
      goto L_0881DFBC;
    }
L_0881DFBC:
    if (static_cast<std::int32_t>(ctx.gpr[17]) > 0) {
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
        goto L_0881DFC4;
    }
    goto L_0881DFC4;
L_0881DFC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0881DFE0;
      }
      goto L_0881DFCC;
    }
L_0881DFCC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_0881DFDC;
    }
    goto L_0881DFDC;
L_0881DFDC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    goto L_0881DFE0;
L_0881DFE0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0881E034;
      }
      goto L_0881DFF4;
    }
L_0881DFF4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E034;
      }
      goto L_0881DFFC;
    }
L_0881DFFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0881E034;
      }
      goto L_0881E008;
    }
L_0881E008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881E02C;
      }
      goto L_0881E01C;
    }
L_0881E01C:
    ctx.gpr[31] = (0x0881E024u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 271u, 0x0893DBD0u>(ctx, &aot_mem) && ctx.pc == 0x0881E024u) goto L_0881E024;
    return;
L_0881E024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E034;
      }
      goto L_0881E02C;
    }
L_0881E02C:
    ctx.gpr[31] = (0x0881E034u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 274u, 0x0893DC10u>(ctx, &aot_mem) && ctx.pc == 0x0881E034u) goto L_0881E034;
    return;
L_0881E034:
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
L_0881E050:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[18]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881E0BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881DB94;
L_0881E0BC:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0881E0EC;
      }
      goto L_0881E0E0;
    }
L_0881E0E0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_0881E104;
      }
      goto L_0881E0EC;
    }
L_0881E0EC:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[22])) && ctx.fpr[20] == ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
        goto L_0881E108;
    }
    goto L_0881E0FC;
L_0881E0FC:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0881E104;
L_0881E104:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    goto L_0881E108;
L_0881E108:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_0881E13C;
      }
      goto L_0881E118;
    }
L_0881E118:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881E134u);
    ctx.gpr[8] = (0u | 0u);
    goto L_0881D9DC;
L_0881E134:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0881E18C;
      }
      goto L_0881E13C;
    }
L_0881E13C:
    ctx.gpr[6] = (16576u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_0881E164;
    }
    goto L_0881E164;
L_0881E164:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x0881E188u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0881D9DC;
L_0881E188:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0881E18C;
L_0881E18C:
    ctx.gpr[31] = (0x0881E194u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 486u, 0x08812FBCu>(ctx, &aot_mem) && ctx.pc == 0x0881E194u) goto L_0881E194;
    return;
L_0881E194:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[22])) && ctx.fpr[20] == ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_0881E1A8;
    }
    goto L_0881E1A8;
L_0881E1A8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x0881E1B4u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x0881E1B4u) goto L_0881E1B4;
    return;
L_0881E1B4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(312)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0881E1CCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 427u, 0x08A9637Cu>(ctx, &aot_mem) && ctx.pc == 0x0881E1CCu) goto L_0881E1CC;
    return;
L_0881E1CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881E1F0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 521u, 0x089CEEECu>(ctx, &aot_mem) && ctx.pc == 0x0881E1F0u) goto L_0881E1F0;
    return;
L_0881E1F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881E210u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 521u, 0x089CEEECu>(ctx, &aot_mem) && ctx.pc == 0x0881E210u) goto L_0881E210;
    return;
L_0881E210:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881E230u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 521u, 0x089CEEECu>(ctx, &aot_mem) && ctx.pc == 0x0881E230u) goto L_0881E230;
    return;
L_0881E230:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(156));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0881E258u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 672u, 0x089D3CD8u>(ctx, &aot_mem) && ctx.pc == 0x0881E258u) goto L_0881E258;
    return;
L_0881E258:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[17];
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x0881E294u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0881D4E0;
L_0881E294:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881E2BC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E2DC;
      }
      goto L_0881E2C4;
    }
L_0881E2C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E2DC;
      }
      goto L_0881E2D4;
    }
L_0881E2D4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881E2DC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881E2E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(296));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881E318u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0881FB40;
L_0881E318:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 28u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881E334u);
    ctx.gpr[5] = (0u | 143u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881E334u) goto L_0881E334;
    return;
L_0881E334:
    ctx.gpr[17] = (2221u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(304), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0881E3B0;
      }
      goto L_0881E34C;
    }
L_0881E34C:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0881E358u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0881DBC8;
L_0881E358:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(304)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881E38Cu);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    goto L_0881DBD0;
L_0881E38C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_0881E3B0;
L_0881E3B0:
    ctx.gpr[31] = (0x0881E3B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0881CE88;
L_0881E3B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x0881E3D0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0881D4E0;
L_0881E3D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x0881E3E8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0881D5EC;
L_0881E3E8:
    ctx.gpr[31] = (0x0881E3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x0882000Cu>(ctx, &aot_mem) && ctx.pc == 0x0881E3F0u) goto L_0881E3F0;
    return;
L_0881E3F0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[31] = (0x0881E3FCu);
    ctx.gpr[4] = (0u | 0u);
    goto L_0881FF38;
L_0881E3FC:
    ctx.gpr[31] = (0x0881E404u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_0881FFFC;
L_0881E404:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[31] = (0x0881E418u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0881D904;
L_0881E418:
    ctx.gpr[31] = (0x0881E420u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0881D05C;
L_0881E420:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0881E430u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0881D31C;
L_0881E430:
    ctx.gpr[31] = (0x0881E438u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0881D170;
L_0881E438:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(304)));
      if (branch_taken) {
          goto L_0881E450;
      }
      goto L_0881E440;
    }
L_0881E440:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
        goto L_0881E468;
    }
    goto L_0881E448;
L_0881E448:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0881E464;
      }
      goto L_0881E450;
    }
L_0881E450:
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
        goto L_0881E458;
    }
    goto L_0881E458;
L_0881E458:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881E464u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0881D08C;
L_0881E464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    goto L_0881E468;
L_0881E468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0881E474u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 631u, 0x0897AABCu>(ctx, &aot_mem) && ctx.pc == 0x0881E474u) goto L_0881E474;
    return;
L_0881E474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x0881E480u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 2u, 0x0893C0C8u>(ctx, &aot_mem) && ctx.pc == 0x0881E480u) goto L_0881E480;
    return;
L_0881E480:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x0881E49Cu);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    goto L_0881D78C;
L_0881E49C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0881E4ACu);
    ctx.gpr[5] = (0u | 1u);
    goto L_0881D800;
L_0881E4AC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0881E4BCu);
    ctx.gpr[5] = (0u | 1u);
    goto L_0881D37C;
L_0881E4BC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0881E4CCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_0881D31C;
L_0881E4CC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0881E4D8u);
    ctx.gpr[5] = (0u | 64u);
    goto L_0881E5B8;
L_0881E4D8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881E4F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(304)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0881E5A0;
      }
      goto L_0881E520;
    }
L_0881E520:
    ctx.gpr[31] = (0x0881E528u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0881FB40;
L_0881E528:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881E538u);
    ctx.gpr[5] = (0u | 64u);
    goto L_0881E5F0;
L_0881E538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(304)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0881E558;
      }
      goto L_0881E548;
    }
L_0881E548:
    ctx.gpr[31] = (0x0881E550u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0881D0FC;
L_0881E550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(304)));
    ctx.gpr[5] = (0u | 1u);
    goto L_0881E558;
L_0881E558:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0881E58C;
      }
      goto L_0881E560;
    }
L_0881E560:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0881E56Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0881D4E0;
L_0881E56C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(304)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881E57Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    goto L_0881D5EC;
L_0881E57C:
    ctx.gpr[31] = (0x0881E584u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 41u, 0x0894429Cu>(ctx, &aot_mem) && ctx.pc == 0x0881E584u) goto L_0881E584;
    return;
L_0881E584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(304)));
    ctx.gpr[5] = (2222u << 16u);
    goto L_0881E58C;
L_0881E58C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881E59Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881E59Cu) goto L_0881E59C;
    return;
L_0881E59C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(304), 0u);
    goto L_0881E5A0;
L_0881E5A0:
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
L_0881E5B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E5E4;
      }
      goto L_0881E5D0;
    }
L_0881E5D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E5E4;
      }
      goto L_0881E5DC;
    }
L_0881E5DC:
    ctx.gpr[31] = (0x0881E5E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 210u, 0x08814F8Cu>(ctx, &aot_mem) && ctx.pc == 0x0881E5E4u) goto L_0881E5E4;
    return;
L_0881E5E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881E5F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E61C;
      }
      goto L_0881E608;
    }
L_0881E608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E61C;
      }
      goto L_0881E614;
    }
L_0881E614:
    ctx.gpr[31] = (0x0881E61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 211u, 0x08814F9Cu>(ctx, &aot_mem) && ctx.pc == 0x0881E61Cu) goto L_0881E61C;
    return;
L_0881E61C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881E658:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0881E67C;
      }
      goto L_0881E668;
    }
L_0881E668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E68C;
      }
      goto L_0881E674;
    }
L_0881E674:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881E67C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881E68C;
      }
      goto L_0881E688;
    }
L_0881E688:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    goto L_0881E68C;
L_0881E68C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881E694:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-400));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0881E748;
      }
      goto L_0881E700;
    }
L_0881E700:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881E78C;
      }
      goto L_0881E748;
    }
L_0881E748:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[6]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    goto L_0881E78C;
L_0881E78C:
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(104)));
        goto L_0881E7A8;
    }
    goto L_0881E798;
L_0881E798:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0881E7D8;
      }
      goto L_0881E7A8;
    }
L_0881E7A8:
    ctx.gpr[6] = (0u | 21u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0881E7C0;
      }
      goto L_0881E7B4;
    }
L_0881E7B4:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0881E7D8;
      }
      goto L_0881E7C0;
    }
L_0881E7C0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0881E7D8;
L_0881E7D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (17008u << 16u);
      if (branch_taken) {
          goto L_0881E7EC;
      }
      goto L_0881E7E0;
    }
L_0881E7E0:
    ctx.gpr[4] = (16880u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881E7F0;
      }
      goto L_0881E7EC;
    }
L_0881E7EC:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0881E7F0;
L_0881E7F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[5]);
    ctx.gpr[23] = (0u | 2u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (0u | 0u);
        goto L_0881E800;
    }
    goto L_0881E800;
L_0881E800:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 4 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
        goto L_0881EA38;
    }
    goto L_0881E80C;
L_0881E80C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[6]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    goto L_0881E818;
L_0881E818:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 2 ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(48)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
        goto L_0881E828;
    }
    goto L_0881E828;
L_0881E828:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[16] = (ctx.gpr[23] + static_cast<std::uint32_t>(-2));
        goto L_0881E870;
    }
    goto L_0881E870;
L_0881E870:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0881E9BC;
      }
      goto L_0881E878;
    }
L_0881E878:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[7] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[21] = (ctx.gpr[16] << 2u);
      if (branch_taken) {
          goto L_0881E9BC;
      }
      goto L_0881E888;
    }
L_0881E888:
    ctx.gpr[21] = (ctx.gpr[22] + ctx.gpr[21]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
        goto L_0881E8A8;
    }
    goto L_0881E898;
L_0881E898:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_0881E954;
      }
      goto L_0881E8A4;
    }
L_0881E8A4:
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_0881E8A8;
L_0881E8A8:
    ctx.gpr[31] = (0x0881E8B0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 717u, 0x0893AFE0u>(ctx, &aot_mem) && ctx.pc == 0x0881E8B0u) goto L_0881E8B0;
    return;
L_0881E8B0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_0881E92C;
      }
      goto L_0881E8C8;
    }
L_0881E8C8:
    ctx.gpr[16] = (0u | 0u);
    goto L_0881E8CC;
L_0881E8CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0881E8E8u);
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 666u, 0x0897AD1Cu>(ctx, &aot_mem) && ctx.pc == 0x0881E8E8u) goto L_0881E8E8;
    return;
L_0881E8E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x0881E8F8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 668u, 0x0897AD78u>(ctx, &aot_mem) && ctx.pc == 0x0881E8F8u) goto L_0881E8F8;
    return;
L_0881E8F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 36u);
    ctx.gpr[31] = (0x0881E914u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0881E914u) goto L_0881E914;
    return;
L_0881E914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
      if (branch_taken) {
          goto L_0881E8CC;
      }
      goto L_0881E92C;
    }
L_0881E92C:
    ctx.gpr[31] = (0x0881E934u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 680u, 0x0893AC8Cu>(ctx, &aot_mem) && ctx.pc == 0x0881E934u) goto L_0881E934;
    return;
L_0881E934:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881E94C;
      }
      goto L_0881E940;
    }
L_0881E940:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881EA24;
      }
      goto L_0881E94C;
    }
L_0881E94C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881EA24;
      }
      goto L_0881E954;
    }
L_0881E954:
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0881E9B4;
      }
      goto L_0881E96C;
    }
L_0881E96C:
    ctx.gpr[16] = (0u | 0u);
    goto L_0881E970;
L_0881E970:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0881E988u);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 666u, 0x0897AD1Cu>(ctx, &aot_mem) && ctx.pc == 0x0881E988u) goto L_0881E988;
    return;
L_0881E988:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x0881E998u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 668u, 0x0897AD78u>(ctx, &aot_mem) && ctx.pc == 0x0881E998u) goto L_0881E998;
    return;
L_0881E998:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_0881E970;
      }
      goto L_0881E9AC;
    }
L_0881E9AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    goto L_0881E9B4;
L_0881E9B4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0881EA24;
      }
      goto L_0881E9BC;
    }
L_0881E9BC:
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0881E9C8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 717u, 0x0893AFE0u>(ctx, &aot_mem) && ctx.pc == 0x0881E9C8u) goto L_0881E9C8;
    return;
L_0881E9C8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0881EA1C;
      }
      goto L_0881E9E0;
    }
L_0881E9E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0881E9F8u);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 666u, 0x0897AD1Cu>(ctx, &aot_mem) && ctx.pc == 0x0881E9F8u) goto L_0881E9F8;
    return;
L_0881E9F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x0881EA08u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 668u, 0x0897AD78u>(ctx, &aot_mem) && ctx.pc == 0x0881EA08u) goto L_0881EA08;
    return;
L_0881EA08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_0881E9E0;
      }
      goto L_0881EA1C;
    }
L_0881EA1C:
    ctx.gpr[31] = (0x0881EA24u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 680u, 0x0893AC8Cu>(ctx, &aot_mem) && ctx.pc == 0x0881EA24u) goto L_0881EA24;
    return;
L_0881EA24:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 4 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
        goto L_0881E818;
    }
    goto L_0881EA34;
L_0881EA34:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    goto L_0881EA38;
L_0881EA38:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_0881EB8C;
      }
      goto L_0881EA40;
    }
L_0881EA40:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0881EA4Cu);
    ctx.gpr[6] = (0u | 256u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0881EA4Cu) goto L_0881EA4C;
    return;
L_0881EA4C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    goto L_0881EA54;
L_0881EA54:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_0881EA9C;
      }
      goto L_0881EA6C;
    }
L_0881EA6C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(8));
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[29] + ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(64), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0881EA6C;
      }
      goto L_0881EA9C;
    }
L_0881EA9C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0881EA54;
      }
      goto L_0881EAAC;
    }
L_0881EAAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
      if (branch_taken) {
          goto L_0881EB8C;
      }
      goto L_0881EACC;
    }
L_0881EACC:
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    goto L_0881EAD4;
L_0881EAD4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(11) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
        goto L_0881EB7C;
    }
    goto L_0881EAE4;
L_0881EAE4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2219u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(28408)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EAFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0881EB78;
      }
      goto L_0881EB08;
    }
L_0881EB08:
    ctx.gpr[31] = (0x0881EB10u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 667u, 0x0897AD5Cu>(ctx, &aot_mem) && ctx.pc == 0x0881EB10u) goto L_0881EB10;
    return;
L_0881EB10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x0881EB78u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 668u, 0x0897AD78u>(ctx, &aot_mem) && ctx.pc == 0x0881EB78u) goto L_0881EB78;
    return;
L_0881EB78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    goto L_0881EB7C;
L_0881EB7C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881EAD4;
      }
      goto L_0881EB8C;
    }
L_0881EB8C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EBC0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(288)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(292), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EC04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881EC20u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    ctx.pc = 0x08AB45BCu;
    return;
L_0881EC20:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EC34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881EC54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 164u, 0x088049D4u>(ctx, &aot_mem) && ctx.pc == 0x0881EC54u) goto L_0881EC54;
    return;
L_0881EC54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881EE10;
      }
      goto L_0881EC5C;
    }
L_0881EC5C:
    ctx.gpr[31] = (0x0881EC64u);
    // nop
    ctx.pc = 0x08AB45BCu;
    return;
L_0881EC64:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2060), ctx.gpr[2]);
    ctx.gpr[31] = (0x0881EC74u);
    ctx.gpr[4] = (0u | 16u);
    goto L_0881F498;
L_0881EC74:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (2221u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (2221u << 16u);
      if (branch_taken) {
          goto L_0881ECA4;
      }
      goto L_0881EC84;
    }
L_0881EC84:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0881EC90u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0881F44C;
L_0881EC90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0881ECA4u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 415u, 0x089D693Cu>(ctx, &aot_mem) && ctx.pc == 0x0881ECA4u) goto L_0881ECA4;
    return;
L_0881ECA4:
    ctx.gpr[31] = (0x0881ECACu);
    ctx.gpr[4] = (0u | 16u);
    goto L_0881F498;
L_0881ECAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_0881ECF4;
      }
      goto L_0881ECB4;
    }
L_0881ECB4:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(360));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0881ECD4;
      }
      goto L_0881ECC8;
    }
L_0881ECC8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0881ECE4;
      }
      goto L_0881ECD4;
    }
L_0881ECD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881ECE4;
      }
      goto L_0881ECE0;
    }
L_0881ECE0:
    ctx.gpr[4] = (0u | 0u);
    goto L_0881ECE4;
L_0881ECE4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0881ECF4;
      }
      goto L_0881ECEC;
    }
L_0881ECEC:
    ctx.gpr[31] = (0x0881ECF4u);
    // nop
    goto L_0881F168;
L_0881ECF4:
    ctx.gpr[31] = (0x0881ECFCu);
    ctx.gpr[4] = (0u | 16u);
    goto L_0881F498;
L_0881ECFC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4592)));
      if (branch_taken) {
          goto L_0881ED2C;
      }
      goto L_0881ED04;
    }
L_0881ED04:
    ctx.gpr[31] = (0x0881ED0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 394u, 0x089D67B4u>(ctx, &aot_mem) && ctx.pc == 0x0881ED0Cu) goto L_0881ED0C;
    return;
L_0881ED0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881ED4C;
      }
      goto L_0881ED14;
    }
L_0881ED14:
    ctx.gpr[31] = (0x0881ED1Cu);
    // nop
    goto L_0881EE2C;
L_0881ED1C:
    ctx.gpr[31] = (0x0881ED24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4592)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 392u, 0x089D6794u>(ctx, &aot_mem) && ctx.pc == 0x0881ED24u) goto L_0881ED24;
    return;
L_0881ED24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881ED4C;
      }
      goto L_0881ED2C;
    }
L_0881ED2C:
    ctx.gpr[31] = (0x0881ED34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 394u, 0x089D67B4u>(ctx, &aot_mem) && ctx.pc == 0x0881ED34u) goto L_0881ED34;
    return;
L_0881ED34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881ED4C;
      }
      goto L_0881ED3C;
    }
L_0881ED3C:
    ctx.gpr[31] = (0x0881ED44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 196u, 0x08821330u>(ctx, &aot_mem) && ctx.pc == 0x0881ED44u) goto L_0881ED44;
    return;
L_0881ED44:
    ctx.gpr[31] = (0x0881ED4Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4592)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 392u, 0x089D6794u>(ctx, &aot_mem) && ctx.pc == 0x0881ED4Cu) goto L_0881ED4C;
    return;
L_0881ED4C:
    ctx.gpr[31] = (0x0881ED54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 28u, 0x08820250u>(ctx, &aot_mem) && ctx.pc == 0x0881ED54u) goto L_0881ED54;
    return;
L_0881ED54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881ED64;
      }
      goto L_0881ED5C;
    }
L_0881ED5C:
    ctx.gpr[31] = (0x0881ED64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 30u, 0x08820270u>(ctx, &aot_mem) && ctx.pc == 0x0881ED64u) goto L_0881ED64;
    return;
L_0881ED64:
    ctx.gpr[31] = (0x0881ED6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 41u, 0x088202F0u>(ctx, &aot_mem) && ctx.pc == 0x0881ED6Cu) goto L_0881ED6C;
    return;
L_0881ED6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881ED7C;
      }
      goto L_0881ED74;
    }
L_0881ED74:
    ctx.gpr[31] = (0x0881ED7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 46u, 0x08820340u>(ctx, &aot_mem) && ctx.pc == 0x0881ED7Cu) goto L_0881ED7C;
    return;
L_0881ED7C:
    ctx.gpr[31] = (0x0881ED84u);
    // nop
    ctx.pc = 0x08AB45BCu;
    return;
L_0881ED84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(2064), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0881EDA0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 419u, 0x089D6990u>(ctx, &aot_mem) && ctx.pc == 0x0881EDA0u) goto L_0881EDA0;
    return;
L_0881EDA0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2048)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[19] = (2221u << 16u);
      if (branch_taken) {
          goto L_0881EDE0;
      }
      goto L_0881EDB0;
    }
L_0881EDB0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(360));
    goto L_0881EDB4;
L_0881EDB4:
    ctx.gpr[31] = (0x0881EDBCu);
    // nop
    ctx.pc = 0x08AB44B4u;
    return;
L_0881EDBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881EDE0;
      }
      goto L_0881EDD0;
    }
L_0881EDD0:
    ctx.gpr[31] = (0x0881EDD8u);
    // nop
    ctx.pc = 0x08AB44ACu;
    return;
L_0881EDD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881EDB4;
      }
      goto L_0881EDE0;
    }
L_0881EDE0:
    ctx.gpr[31] = (0x0881EDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 164u, 0x088049D4u>(ctx, &aot_mem) && ctx.pc == 0x0881EDE8u) goto L_0881EDE8;
    return;
L_0881EDE8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0881EDF8;
      }
      goto L_0881EDF0;
    }
L_0881EDF0:
    ctx.gpr[31] = (0x0881EDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 168u, 0x08804A00u>(ctx, &aot_mem) && ctx.pc == 0x0881EDF8u) goto L_0881EDF8;
    return;
L_0881EDF8:
    ctx.gpr[31] = (0x0881EE00u);
    // nop
    goto L_0881F6F0;
L_0881EE00:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(356)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(356), ctx.gpr[5]);
    goto L_0881EE10;
L_0881EE10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EE2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0881EE60;
      }
      goto L_0881EE54;
    }
L_0881EE54:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881EE70;
      }
      goto L_0881EE60;
    }
L_0881EE60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881EE70;
      }
      goto L_0881EE6C;
    }
L_0881EE6C:
    ctx.gpr[6] = (0u | 0u);
    goto L_0881EE70;
L_0881EE70:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0881EE80;
      }
      goto L_0881EE78;
    }
L_0881EE78:
    ctx.gpr[31] = (0x0881EE80u);
    // nop
    goto L_0881F318;
L_0881EE80:
    ctx.gpr[31] = (0x0881EE88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 304u, 0x0891D230u>(ctx, &aot_mem) && ctx.pc == 0x0881EE88u) goto L_0881EE88;
    return;
L_0881EE88:
    ctx.gpr[31] = (0x0881EE90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 491u, 0x08846AC8u>(ctx, &aot_mem) && ctx.pc == 0x0881EE90u) goto L_0881EE90;
    return;
L_0881EE90:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0881EEA0;
      }
      goto L_0881EE98;
    }
L_0881EE98:
    ctx.gpr[31] = (0x0881EEA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 480u, 0x08846A50u>(ctx, &aot_mem) && ctx.pc == 0x0881EEA0u) goto L_0881EEA0;
    return;
L_0881EEA0:
    ctx.gpr[31] = (0x0881EEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 196u, 0x08821330u>(ctx, &aot_mem) && ctx.pc == 0x0881EEA8u) goto L_0881EEA8;
    return;
L_0881EEA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EEB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x0881EED8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881EED8u) goto L_0881EED8;
    return;
L_0881EED8:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
        goto L_0881EEE4;
    }
    goto L_0881EEE4;
L_0881EEE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EEF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881EF28;
      }
      goto L_0881EF14;
    }
L_0881EF14:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x0881EF1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881EF1Cu) goto L_0881EF1C;
    return;
L_0881EF1C:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[31] = (0x0881EF28u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_0881EC34;
L_0881EF28:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881EF38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881EF64;
      }
      goto L_0881EF5C;
    }
L_0881EF5C:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x0881EF64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881EF64u) goto L_0881EF64;
    return;
L_0881EF64:
    ctx.gpr[31] = (0x0881EF6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 415u, 0x08842278u>(ctx, &aot_mem) && ctx.pc == 0x0881EF6Cu) goto L_0881EF6C;
    return;
L_0881EF6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881EFB8;
      }
      goto L_0881EF74;
    }
L_0881EF74:
    ctx.gpr[31] = (0x0881EF7Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_0881F3C0;
L_0881EF7C:
    ctx.gpr[31] = (0x0881EF84u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0881F3D8;
L_0881EF84:
    ctx.gpr[31] = (0x0881EF8Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_0881F3E8;
L_0881EF8C:
    ctx.gpr[31] = (0x0881EF94u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0881F3F8;
L_0881EF94:
    ctx.gpr[31] = (0x0881EF9Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_0881F408;
L_0881EF9C:
    ctx.gpr[31] = (0x0881EFA4u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0881F418;
L_0881EFA4:
    ctx.gpr[4] = (2178u << 16u);
    ctx.gpr[31] = (0x0881EFB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13352));
    goto L_0881F428;
L_0881EFB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F084;
      }
      goto L_0881EFB8;
    }
L_0881EFB8:
    ctx.gpr[31] = (0x0881EFC0u);
    // nop
    goto L_0881F488;
L_0881EFC0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[17] = (0u | 3u);
      if (branch_taken) {
          goto L_0881F024;
      }
      goto L_0881EFCC;
    }
L_0881EFCC:
    ctx.gpr[31] = (0x0881EFD4u);
    ctx.gpr[4] = (0u | 3u);
    goto L_0881F3C0;
L_0881EFD4:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[31] = (0x0881EFE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18552));
    goto L_0881F3D8;
L_0881EFE0:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[31] = (0x0881EFECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18424));
    goto L_0881F3E8;
L_0881EFEC:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[31] = (0x0881EFF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18264));
    goto L_0881F3F8;
L_0881EFF8:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[31] = (0x0881F004u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18016));
    goto L_0881F408;
L_0881F004:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[31] = (0x0881F010u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17472));
    goto L_0881F418;
L_0881F010:
    ctx.gpr[4] = (2181u << 16u);
    ctx.gpr[31] = (0x0881F01Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17444));
    goto L_0881F428;
L_0881F01C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F084;
      }
      goto L_0881F024;
    }
L_0881F024:
    ctx.gpr[31] = (0x0881F02Cu);
    // nop
    goto L_0881F488;
L_0881F02C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0881F084;
      }
      goto L_0881F034;
    }
L_0881F034:
    ctx.gpr[31] = (0x0881F03Cu);
    ctx.gpr[4] = (0u | 1u);
    goto L_0881F3C0;
L_0881F03C:
    ctx.gpr[4] = (2178u << 16u);
    ctx.gpr[31] = (0x0881F048u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(17524));
    goto L_0881F3D8;
L_0881F048:
    ctx.gpr[4] = (2178u << 16u);
    ctx.gpr[31] = (0x0881F054u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18404));
    goto L_0881F3E8;
L_0881F054:
    ctx.gpr[4] = (2178u << 16u);
    ctx.gpr[31] = (0x0881F060u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14288));
    goto L_0881F3F8;
L_0881F060:
    ctx.gpr[4] = (2178u << 16u);
    ctx.gpr[31] = (0x0881F06Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20008));
    goto L_0881F408;
L_0881F06C:
    ctx.gpr[4] = (2178u << 16u);
    ctx.gpr[31] = (0x0881F078u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15096));
    goto L_0881F418;
L_0881F078:
    ctx.gpr[4] = (2178u << 16u);
    ctx.gpr[31] = (0x0881F084u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15160));
    goto L_0881F428;
L_0881F084:
    ctx.gpr[31] = (0x0881F08Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 638u, 0x0897AB30u>(ctx, &aot_mem) && ctx.pc == 0x0881F08Cu) goto L_0881F08C;
    return;
L_0881F08C:
    ctx.gpr[31] = (0x0881F094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 511u, 0x0894B874u>(ctx, &aot_mem) && ctx.pc == 0x0881F094u) goto L_0881F094;
    return;
L_0881F094:
    ctx.gpr[31] = (0x0881F09Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 794u, 0x08823C04u>(ctx, &aot_mem) && ctx.pc == 0x0881F09Cu) goto L_0881F09C;
    return;
L_0881F09C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F0B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(360));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0881F14C;
      }
      goto L_0881F0E4;
    }
L_0881F0E4:
    ctx.gpr[31] = (0x0881F0ECu);
    // nop
    goto L_0881F488;
L_0881F0EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0881F100;
      }
      goto L_0881F0F8;
    }
L_0881F0F8:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
        goto L_0881F118;
    }
    goto L_0881F100;
L_0881F100:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881F10Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 442u, 0x0880FB58u>(ctx, &aot_mem) && ctx.pc == 0x0881F10Cu) goto L_0881F10C;
    return;
L_0881F10C:
    ctx.gpr[31] = (0x0881F114u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 338u, 0x0880F348u>(ctx, &aot_mem) && ctx.pc == 0x0881F114u) goto L_0881F114;
    return;
L_0881F114:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_0881F118;
L_0881F118:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881F124u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F124u) goto L_0881F124;
    return;
L_0881F124:
    ctx.gpr[31] = (0x0881F12Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 331u, 0x08835954u>(ctx, &aot_mem) && ctx.pc == 0x0881F12Cu) goto L_0881F12C;
    return;
L_0881F12C:
    ctx.gpr[31] = (0x0881F134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 472u, 0x0884DD68u>(ctx, &aot_mem) && ctx.pc == 0x0881F134u) goto L_0881F134;
    return;
L_0881F134:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_0881F144;
      }
      goto L_0881F140;
    }
L_0881F140:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_0881F144;
L_0881F144:
    ctx.gpr[31] = (0x0881F14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 295u, 0x0891D110u>(ctx, &aot_mem) && ctx.pc == 0x0881F14Cu) goto L_0881F14C;
    return;
L_0881F14C:
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
L_0881F168:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (2221u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_0881F2F0;
      }
      goto L_0881F1A0;
    }
L_0881F1A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0881F1B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 225u, 0x089D9648u>(ctx, &aot_mem) && ctx.pc == 0x0881F1B8u) goto L_0881F1B8;
    return;
L_0881F1B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x0881F1C4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 62u, 0x089C05F0u>(ctx, &aot_mem) && ctx.pc == 0x0881F1C4u) goto L_0881F1C4;
    return;
L_0881F1C4:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (0u | 2u);
    ctx.gpr[18] = (ctx.gpr[22] | 0u);
    goto L_0881F1D4;
L_0881F1D4:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0881F1F8;
      }
      goto L_0881F1DC;
    }
L_0881F1DC:
    ctx.gpr[31] = (0x0881F1E4u);
    // nop
    goto L_0881FB7C;
L_0881F1E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F1FC;
      }
      goto L_0881F1F0;
    }
L_0881F1F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0881F1FC;
      }
      goto L_0881F1F8;
    }
L_0881F1F8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    goto L_0881F1FC;
L_0881F1FC:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_0881F2D8;
    }
    goto L_0881F204;
L_0881F204:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0881F2D4;
      }
      goto L_0881F20C;
    }
L_0881F20C:
    ctx.gpr[31] = (0x0881F214u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 59u, 0x089C05A4u>(ctx, &aot_mem) && ctx.pc == 0x0881F214u) goto L_0881F214;
    return;
L_0881F214:
    ctx.gpr[31] = (0x0881F21Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 394u, 0x089D67B4u>(ctx, &aot_mem) && ctx.pc == 0x0881F21Cu) goto L_0881F21C;
    return;
L_0881F21C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0881F2CC;
      }
      goto L_0881F224;
    }
L_0881F224:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881F23C;
      }
      goto L_0881F22C;
    }
L_0881F22C:
    ctx.gpr[31] = (0x0881F234u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 285u, 0x089BE624u>(ctx, &aot_mem) && ctx.pc == 0x0881F234u) goto L_0881F234;
    return;
L_0881F234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F2C0;
      }
      goto L_0881F23C;
    }
L_0881F23C:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0881F27C;
      }
      goto L_0881F244;
    }
L_0881F244:
    ctx.gpr[31] = (0x0881F24Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 285u, 0x089BE624u>(ctx, &aot_mem) && ctx.pc == 0x0881F24Cu) goto L_0881F24C;
    return;
L_0881F24C:
    ctx.gpr[31] = (0x0881F254u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0881FB40;
L_0881F254:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881F260u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0881D428;
L_0881F260:
    ctx.gpr[31] = (0x0881F268u);
    ctx.gpr[4] = (0u | 1u);
    goto L_0881FB40;
L_0881F268:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881F274u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0881D428;
L_0881F274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F2C0;
      }
      goto L_0881F27C;
    }
L_0881F27C:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0881F2C0;
      }
      goto L_0881F284;
    }
L_0881F284:
    ctx.gpr[31] = (0x0881F28Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 285u, 0x089BE624u>(ctx, &aot_mem) && ctx.pc == 0x0881F28Cu) goto L_0881F28C;
    return;
L_0881F28C:
    ctx.gpr[31] = (0x0881F294u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0881FB40;
L_0881F294:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881F2A0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0881D428;
L_0881F2A0:
    ctx.gpr[31] = (0x0881F2A8u);
    ctx.gpr[4] = (0u | 1u);
    goto L_0881FB40;
L_0881F2A8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0881F2B4u);
    ctx.gpr[5] = (0u | 1u);
    goto L_0881D428;
L_0881F2B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x0881F2C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F2C0u) goto L_0881F2C0;
    return;
L_0881F2C0:
    ctx.gpr[31] = (0x0881F2C8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 392u, 0x089D6794u>(ctx, &aot_mem) && ctx.pc == 0x0881F2C8u) goto L_0881F2C8;
    return;
L_0881F2C8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0881F2CC;
L_0881F2CC:
    ctx.gpr[31] = (0x0881F2D4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 62u, 0x089C05F0u>(ctx, &aot_mem) && ctx.pc == 0x0881F2D4u) goto L_0881F2D4;
    return;
L_0881F2D4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_0881F2D8;
L_0881F2D8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881F1D4;
      }
      goto L_0881F2E4;
    }
L_0881F2E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x0881F2F0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 59u, 0x089C05A4u>(ctx, &aot_mem) && ctx.pc == 0x0881F2F0u) goto L_0881F2F0;
    return;
L_0881F2F0:
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
L_0881F318:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F33C;
      }
      goto L_0881F334;
    }
L_0881F334:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x0881F33Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F33Cu) goto L_0881F33C;
    return;
L_0881F33C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F348:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(360), ctx.gpr[5]);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(360));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F3C0:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F3D8:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F3E8:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F3F8:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F408:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F418:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F428:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F438:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F44C:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(360)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F478:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F488:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F498:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F4B4:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F4CC:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (~(ctx.gpr[4] | 0u));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F4E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (50170u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17402u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881F520u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 427u, 0x089BF208u>(ctx, &aot_mem) && ctx.pc == 0x0881F520u) goto L_0881F520;
    return;
L_0881F520:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F52C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F544;
      }
      goto L_0881F53C;
    }
L_0881F53C:
    ctx.gpr[31] = (0x0881F544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 287u, 0x089BE664u>(ctx, &aot_mem) && ctx.pc == 0x0881F544u) goto L_0881F544;
    return;
L_0881F544:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F550:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 116u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881F570u);
    ctx.gpr[5] = (0u | 128u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F570u) goto L_0881F570;
    return;
L_0881F570:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4596), ctx.gpr[2]);
    ctx.gpr[31] = (0x0881F580u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 313u, 0x0880F1D0u>(ctx, &aot_mem) && ctx.pc == 0x0881F580u) goto L_0881F580;
    return;
L_0881F580:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F58C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F5C8;
      }
      goto L_0881F5A8;
    }
L_0881F5A8:
    ctx.gpr[31] = (0x0881F5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 326u, 0x0880F2B4u>(ctx, &aot_mem) && ctx.pc == 0x0881F5B0u) goto L_0881F5B0;
    return;
L_0881F5B0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881F5C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4596)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F5C4u) goto L_0881F5C4;
    return;
L_0881F5C4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4596), 0u);
    goto L_0881F5C8;
L_0881F5C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F5D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881F5FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 448u, 0x089D6CB0u>(ctx, &aot_mem) && ctx.pc == 0x0881F5FCu) goto L_0881F5FC;
    return;
L_0881F5FC:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[31] = (0x0881F608u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4592), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 155u, 0x089D905Cu>(ctx, &aot_mem) && ctx.pc == 0x0881F608u) goto L_0881F608;
    return;
L_0881F608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4592)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0881F61Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 228u, 0x089D96B0u>(ctx, &aot_mem) && ctx.pc == 0x0881F61Cu) goto L_0881F61C;
    return;
L_0881F61C:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881F62Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 225u, 0x089D9648u>(ctx, &aot_mem) && ctx.pc == 0x0881F62Cu) goto L_0881F62C;
    return;
L_0881F62C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4592)));
    ctx.gpr[31] = (0x0881F638u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 2u, 0x089E0030u>(ctx, &aot_mem) && ctx.pc == 0x0881F638u) goto L_0881F638;
    return;
L_0881F638:
    ctx.gpr[31] = (0x0881F640u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4592)));
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 610u, 0x0898FD2Cu>(ctx, &aot_mem) && ctx.pc == 0x0881F640u) goto L_0881F640;
    return;
L_0881F640:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4592)));
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
L_0881F65C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F68C;
      }
      goto L_0881F678;
    }
L_0881F678:
    ctx.gpr[31] = (0x0881F680u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 170u, 0x089D9188u>(ctx, &aot_mem) && ctx.pc == 0x0881F680u) goto L_0881F680;
    return;
L_0881F680:
    ctx.gpr[31] = (0x0881F688u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4592)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 438u, 0x089D6B38u>(ctx, &aot_mem) && ctx.pc == 0x0881F688u) goto L_0881F688;
    return;
L_0881F688:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4592), 0u);
    goto L_0881F68C;
L_0881F68C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F69C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(984), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F6AC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(984)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(984), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F6C4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(984)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F6D4:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2056), 0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2060), 0u);
    ctx.gpr[4] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2064), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F6F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(360));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881F714u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.pc = 0x08AB45BCu;
    return;
L_0881F714:
    ctx.gpr[31] = (0x0881F71Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08AB44B4u;
    return;
L_0881F71C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0881F804;
      }
      goto L_0881F728;
    }
L_0881F728:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(356)));
    ctx.gpr[7] = (0u | 6u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.hi);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
        goto L_0881F808;
    }
    goto L_0881F74C;
L_0881F74C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2056)));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[8] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(2060)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    ctx.gpr[8] = (0u | 16667u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[4]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.gpr[7] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[9] = (2221u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(2064)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[7] << 5u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[9]);
    ctx.gpr[9] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(104), ctx.gpr[9]);
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(108), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    goto L_0881F804;
L_0881F804:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    goto L_0881F808;
L_0881F808:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
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
L_0881F824:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(360));
    ctx.gpr[16] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    goto L_0881F848;
L_0881F848:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(244)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0881F874;
    }
    goto L_0881F854;
L_0881F854:
    ctx.gpr[31] = (0x0881F85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 335u, 0x08845AB4u>(ctx, &aot_mem) && ctx.pc == 0x0881F85Cu) goto L_0881F85C;
    return;
L_0881F85C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881F86Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(244)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881F86Cu) goto L_0881F86C;
    return;
L_0881F86C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(244), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0881F874;
L_0881F874:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0881F848;
      }
      goto L_0881F880;
    }
L_0881F880:
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
L_0881F898:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_0881F8C4;
      }
      goto L_0881F8A4;
    }
L_0881F8A4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F8C4;
      }
      goto L_0881F8BC;
    }
L_0881F8BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F8C4:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F8CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881F8DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 464u, 0x0883B788u>(ctx, &aot_mem) && ctx.pc == 0x0881F8DCu) goto L_0881F8DC;
    return;
L_0881F8DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F8E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881F8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 535u, 0x08846EFCu>(ctx, &aot_mem) && ctx.pc == 0x0881F8F8u) goto L_0881F8F8;
    return;
L_0881F8F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F904:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881F914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 513u, 0x08832694u>(ctx, &aot_mem) && ctx.pc == 0x0881F914u) goto L_0881F914;
    return;
L_0881F914:
    ctx.gpr[31] = (0x0881F91Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 325u, 0x088358A8u>(ctx, &aot_mem) && ctx.pc == 0x0881F91Cu) goto L_0881F91C;
    return;
L_0881F91C:
    ctx.gpr[31] = (0x0881F924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 647u, 0x089338B4u>(ctx, &aot_mem) && ctx.pc == 0x0881F924u) goto L_0881F924;
    return;
L_0881F924:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F930:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881F940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 517u, 0x088326F0u>(ctx, &aot_mem) && ctx.pc == 0x0881F940u) goto L_0881F940;
    return;
L_0881F940:
    ctx.gpr[31] = (0x0881F948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 328u, 0x08835900u>(ctx, &aot_mem) && ctx.pc == 0x0881F948u) goto L_0881F948;
    return;
L_0881F948:
    ctx.gpr[31] = (0x0881F950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 651u, 0x08933900u>(ctx, &aot_mem) && ctx.pc == 0x0881F950u) goto L_0881F950;
    return;
L_0881F950:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F95C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881F96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 221u, 0x0884CF04u>(ctx, &aot_mem) && ctx.pc == 0x0881F96Cu) goto L_0881F96C;
    return;
L_0881F96C:
    ctx.gpr[31] = (0x0881F974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 330u, 0x0884D4C0u>(ctx, &aot_mem) && ctx.pc == 0x0881F974u) goto L_0881F974;
    return;
L_0881F974:
    ctx.gpr[31] = (0x0881F97Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 410u, 0x08842214u>(ctx, &aot_mem) && ctx.pc == 0x0881F97Cu) goto L_0881F97C;
    return;
L_0881F97C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F988:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881F998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 224u, 0x0884CF3Cu>(ctx, &aot_mem) && ctx.pc == 0x0881F998u) goto L_0881F998;
    return;
L_0881F998:
    ctx.gpr[31] = (0x0881F9A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 335u, 0x0884D548u>(ctx, &aot_mem) && ctx.pc == 0x0881F9A0u) goto L_0881F9A0;
    return;
L_0881F9A0:
    ctx.gpr[31] = (0x0881F9A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 413u, 0x0884224Cu>(ctx, &aot_mem) && ctx.pc == 0x0881F9A8u) goto L_0881F9A8;
    return;
L_0881F9A8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881F9B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881F9D0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0881FB40;
L_0881F9D0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881F9F0;
      }
      goto L_0881F9DC;
    }
L_0881F9DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0881FA0C;
      }
      goto L_0881F9E8;
    }
L_0881F9E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FA64;
      }
      goto L_0881F9F0;
    }
L_0881F9F0:
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
L_0881FA0C:
    ctx.gpr[31] = (0x0881FA14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 14u, 0x08820128u>(ctx, &aot_mem) && ctx.pc == 0x0881FA14u) goto L_0881FA14;
    return;
L_0881FA14:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.gpr[17] = (0u | 1u);
        goto L_0881FA20;
    }
    goto L_0881FA20;
L_0881FA20:
    ctx.gpr[31] = (0x0881FA28u);
    // nop
    goto L_0881F478;
L_0881FA28:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0881FA44u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    goto L_0881CC8C;
L_0881FA44:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_0881FA64;
L_0881FA64:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_0881FABC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881FAD0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_0881FB40;
L_0881FAD0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FAE8;
      }
      goto L_0881FADC;
    }
L_0881FADC:
    ctx.gpr[31] = (0x0881FAE4u);
    // nop
    goto L_0881CF60;
L_0881FAE4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_0881FAE8;
L_0881FAE8:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FAFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881FB10u);
    // nop
    goto L_0881FB40;
L_0881FB10:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FB30;
      }
      goto L_0881FB1C;
    }
L_0881FB1C:
    ctx.gpr[31] = (0x0881FB24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881D0FC;
L_0881FB24:
    ctx.gpr[31] = (0x0881FB2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0881D1C8;
L_0881FB2C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    goto L_0881FB30;
L_0881FB30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FB40:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(360));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1084)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FB74;
      }
      goto L_0881FB54;
    }
L_0881FB54:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
      if (branch_taken) {
          goto L_0881FB74;
      }
      goto L_0881FB64;
    }
L_0881FB64:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[2] = (ctx.gpr[6] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FB74:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FB7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881FB8Cu);
    // nop
    goto L_0881F488;
L_0881FB8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (2221u << 16u);
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(360));
      if (branch_taken) {
          goto L_0881FBB0;
      }
      goto L_0881FBA0;
    }
L_0881FBA0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FBB0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1096)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FBC0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1096)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FBD0:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1104), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FBE0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1100)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FCB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 400u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0881FCD8u);
    ctx.gpr[5] = (0u | 142u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881FCD8u) goto L_0881FCD8;
    return;
L_0881FCD8:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(360));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1096), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0881FD04;
      }
      goto L_0881FCEC;
    }
L_0881FCEC:
    ctx.gpr[31] = (0x0881FCF4u);
    // nop
    goto L_0881F478;
L_0881FCF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x0881FD00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 905u, 0x0882BDA4u>(ctx, &aot_mem) && ctx.pc == 0x0881FD00u) goto L_0881FD00;
    return;
L_0881FD00:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1096)));
    goto L_0881FD04;
L_0881FD04:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FD1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1096)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0881FDB4;
      }
      goto L_0881FD44;
    }
L_0881FD44:
    ctx.gpr[31] = (0x0881FD4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 911u, 0x0882BED0u>(ctx, &aot_mem) && ctx.pc == 0x0881FD4Cu) goto L_0881FD4C;
    return;
L_0881FD4C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0881FDB4;
      }
      goto L_0881FD5C;
    }
L_0881FD5C:
    ctx.gpr[31] = (0x0881FD64u);
    // nop
    goto L_0881F478;
L_0881FD64:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x0881FD78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28876));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881FD78u) goto L_0881FD78;
    return;
L_0881FD78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2219u << 16u);
      if (branch_taken) {
          goto L_0881FDA8;
      }
      goto L_0881FD80;
    }
L_0881FD80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x0881FD8Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28888));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881FD8Cu) goto L_0881FD8C;
    return;
L_0881FD8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2219u << 16u);
      if (branch_taken) {
          goto L_0881FDA8;
      }
      goto L_0881FD94;
    }
L_0881FD94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x0881FDA0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28900));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0881FDA0u) goto L_0881FDA0;
    return;
L_0881FDA0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0881FDB4;
      }
      goto L_0881FDA8;
    }
L_0881FDA8:
    ctx.gpr[31] = (0x0881FDB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1096)));
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 803u, 0x0882B600u>(ctx, &aot_mem) && ctx.pc == 0x0881FDB0u) goto L_0881FDB0;
    return;
L_0881FDB0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1100), ctx.gpr[2]);
    goto L_0881FDB4;
L_0881FDB4:
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
L_0881FDD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1096)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FE10;
      }
      goto L_0881FDF0;
    }
L_0881FDF0:
    ctx.gpr[31] = (0x0881FDF8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1100), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 280u, 0x0882D114u>(ctx, &aot_mem) && ctx.pc == 0x0881FDF8u) goto L_0881FDF8;
    return;
L_0881FDF8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0881FE0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1096)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0881FE0Cu) goto L_0881FE0C;
    return;
L_0881FE0C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1096), 0u);
    goto L_0881FE10;
L_0881FE10:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FE20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(996)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 5u);
      if (branch_taken) {
          goto L_0881FE88;
      }
      goto L_0881FE50;
    }
L_0881FE50:
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(20));
    ctx.gpr[16] = (0u | 760u);
    goto L_0881FE5C;
L_0881FE5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(984)));
    if (ctx.gpr[4] == ctx.gpr[17]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_0881FE78;
    }
    goto L_0881FE68;
L_0881FE68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(996)));
    ctx.gpr[31] = (0x0881FE74u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 280u, 0x0880EEA8u>(ctx, &aot_mem) && ctx.pc == 0x0881FE74u) goto L_0881FE74;
    return;
L_0881FE74:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0881FE78;
L_0881FE78:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_0881FE5C;
      }
      goto L_0881FE88;
    }
L_0881FE88:
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
L_0881FEA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(996)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0881FECC;
      }
      goto L_0881FEC4;
    }
L_0881FEC4:
    ctx.gpr[31] = (0x0881FECCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3192));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 280u, 0x0880EEA8u>(ctx, &aot_mem) && ctx.pc == 0x0881FECCu) goto L_0881FECC;
    return;
L_0881FECC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FED8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FEE8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FEF8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FF20:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FF38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0881FF48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 14u, 0x08820128u>(ctx, &aot_mem) && ctx.pc == 0x0881FF48u) goto L_0881FF48;
    return;
L_0881FF48:
    ctx.gpr[4] = (ctx.gpr[2] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[2] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(988)));
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FF70:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(996)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FF94:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(996)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FFA4:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(360));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1004)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FFBC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1072)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FFCC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1068)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FFDC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1076)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FFEC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(360));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(992)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0881FFFC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.pc = 0x08820000u; return;
}

void recomp_unit_0006(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0006_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_6(Runtime &runtime) {
    runtime.register_generated_unit(6u, 0x0881C000u, 16384u, &recomp_unit_0006, &recomp_unit_0006_entry);
    runtime.register_function(0x0881C004u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C00Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C010u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C018u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C028u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C030u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C038u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C040u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C048u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C04Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C058u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C078u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C080u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C090u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C09Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C0ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C0D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C0E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C0F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C104u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C110u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C11Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C120u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C130u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C138u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C144u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C148u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C150u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C160u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C168u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C16Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C174u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C178u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C184u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C18Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C19Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C1FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C204u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C20Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C218u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C220u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C250u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C274u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C278u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C28Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C2A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C2E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C318u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C324u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C32Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C334u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C33Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C348u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C354u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C360u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C36Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C378u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C384u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C390u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C39Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C3F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C404u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C410u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C41Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C428u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C434u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C440u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C44Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C458u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C464u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C470u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C47Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C484u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C490u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C4FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C504u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C50Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C514u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C51Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C528u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C534u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C53Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C540u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C548u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C554u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C558u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C560u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C568u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C570u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C578u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C584u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C58Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C598u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C5A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C604u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C60Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C634u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C640u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C648u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C67Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C684u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C688u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C694u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C6A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C6C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C6E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C6E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C6F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C6FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C708u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C710u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C71Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C724u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C730u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C738u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C748u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C750u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C75Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C764u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C784u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C78Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C7F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C808u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C810u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C814u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C824u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C828u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C830u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C838u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C844u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C858u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C860u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C874u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C878u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C880u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C890u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C898u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C8ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C8B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C8C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C8D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C8E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C8ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C8FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C904u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C910u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C920u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C928u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C938u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C944u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C94Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881C980u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA08u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA14u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA2Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA34u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA3Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA44u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA4Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA5Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA64u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA74u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA7Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA84u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CA88u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CAA4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CABCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CAD8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CAE0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CAECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CAF4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB0Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB14u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB24u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB2Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB40u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB50u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB74u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB80u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CB88u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CBA4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CBA8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CBB4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CBC4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CBDCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CBE8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CBF0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC00u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC04u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC0Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC1Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC24u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC28u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC30u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC34u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC40u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC70u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CC8Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CCE0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD24u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD34u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD40u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD4Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD58u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD68u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD78u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD84u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CD90u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CDA0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CDACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CDB8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CDC0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CDE0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CDE8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CDFCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CE10u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CE24u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CE34u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CE4Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CE54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CE88u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CED4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CEF4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF0Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF18u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF28u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF40u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF50u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF60u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF84u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CF90u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CFA8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CFB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CFC8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CFD0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CFD8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CFDCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CFE4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CFECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881CFF8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D010u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D018u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D030u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D038u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D040u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D044u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D05Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D070u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D080u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D08Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D0FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D11Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D128u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D130u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D138u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D13Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D144u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D14Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D150u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D158u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D160u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D170u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D188u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D194u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D19Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D1A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D1B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D1BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D1C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D1F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D1FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D20Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D21Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D224u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D238u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D248u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D24Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D264u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D270u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D274u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D284u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D290u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D298u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D2FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D31Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D33Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D348u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D354u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D360u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D368u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D37Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D394u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D3A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D3A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D3B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D3C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D3CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D3D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D3E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D3E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D3F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D400u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D408u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D414u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D41Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D428u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D43Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D44Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D458u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D460u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D46Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D474u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D47Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D4E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D530u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D53Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D544u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D550u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D558u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D568u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D570u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D598u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D5A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D5A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D5A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D5D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D5ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D638u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D644u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D64Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D660u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D698u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6F4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D6FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D70Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D718u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D73Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D748u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D750u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D75Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D760u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D768u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D778u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D784u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D78Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D7C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D7D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D7E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D800u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D840u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D84Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D860u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D86Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D87Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D884u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D88Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D894u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D89Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D8E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D904u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D950u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D95Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D96Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D974u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D980u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D994u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D998u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D9A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D9B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D9B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D9C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881D9DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA24u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA68u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA70u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA78u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DA9Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DAA0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DABCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DAC0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DAC8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DAD8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DAF8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DB18u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DB28u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DB48u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DB54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DB5Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DB78u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DB84u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DB94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DBBCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DBC8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DBD0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DBD8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DC34u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DC54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DC60u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DC68u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DC84u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DC90u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DCA0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DCB8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DCC4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DCCCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DCD8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DCE0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DCE8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DCF4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD14u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD20u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD28u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD40u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD48u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD5Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD84u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD90u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DD98u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DDA4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DDB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DDB8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DDC4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DDDCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DDECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DDF8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE04u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE10u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE18u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE24u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE30u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE78u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE84u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE8Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DE9Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DEA4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DEACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DEB4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DEDCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DEE8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DEF0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DEF8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF00u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF08u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF10u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF18u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF34u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF44u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF5Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF74u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF90u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DF98u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DFA0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DFA8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DFBCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DFC4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DFCCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DFDCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DFE0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DFF4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881DFFCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E008u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E01Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E024u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E02Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E034u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E050u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E0BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E0E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E0ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E0FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E104u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E108u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E118u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E134u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E13Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E164u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E188u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E18Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E194u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E1A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E1B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E1CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E1F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E210u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E230u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E258u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E294u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E2BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E2C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E2D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E2DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E2E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E318u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E334u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E34Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E358u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E38Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E3B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E3B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E3D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E3E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E3F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E3FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E404u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E418u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E420u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E430u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E438u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E440u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E448u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E450u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E458u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E464u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E468u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E474u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E480u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E49Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E4ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E4BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E4CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E4D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E4F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E520u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E528u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E538u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E548u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E550u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E558u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E560u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E56Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E57Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E584u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E58Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E59Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E5A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E5B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E5D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E5DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E5E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E5F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E608u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E614u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E61Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E658u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E668u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E674u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E67Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E688u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E68Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E694u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E700u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E748u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E78Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E798u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E7A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E7B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E7C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E7D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E7E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E7ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E7F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E800u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E80Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E818u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E828u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E870u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E878u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E888u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E898u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E8A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E8A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E8B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E8C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E8CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E8E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E8F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E914u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E92Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E934u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E940u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E94Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E954u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E96Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E970u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E988u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E998u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E9ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E9B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E9BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E9C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E9E0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881E9F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA08u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA1Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA24u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA34u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA40u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA4Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EA9Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EAACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EACCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EAD4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EAE4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EAFCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB08u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB10u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB78u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB7Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EB8Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EBC0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC04u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC20u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC34u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC5Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC64u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC74u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC84u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EC90u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ECA4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ECACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ECB4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ECC8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ECD4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ECE0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ECE4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ECECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ECF4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ECFCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED04u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED0Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED14u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED1Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED24u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED2Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED34u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED3Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED44u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED4Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED5Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED64u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED74u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED7Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881ED84u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EDA0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EDB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EDB4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EDBCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EDD0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EDD8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EDE0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EDE8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EDF0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EDF8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE00u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE10u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE2Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE60u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE70u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE78u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE80u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE88u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE90u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EE98u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EEA0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EEA8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EEB8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EED8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EEE4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EEF4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF14u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF1Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF28u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF5Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF64u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF6Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF74u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF7Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF84u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF8Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EF9Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EFA4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EFB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EFB8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EFC0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EFCCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EFD4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EFE0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EFECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881EFF8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F004u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F010u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F01Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F024u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F02Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F034u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F03Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F048u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F054u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F060u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F06Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F078u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F084u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F08Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F094u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F09Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F0B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F0E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F0ECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F0F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F100u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F10Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F114u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F118u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F124u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F12Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F134u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F140u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F144u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F14Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F168u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F1A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F1B8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F1C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F1D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F1DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F1E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F1F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F1F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F1FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F204u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F20Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F214u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F21Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F224u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F22Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F234u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F23Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F244u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F24Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F254u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F260u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F268u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F274u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F27Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F284u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F28Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F294u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F2A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F2A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F2B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F2C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F2C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F2CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F2D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F2D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F2E4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F2F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F318u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F334u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F33Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F348u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F3C0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F3D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F3E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F3F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F408u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F418u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F428u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F438u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F44Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F478u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F488u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F498u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F4B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F4CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F4E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F520u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F52Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F53Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F544u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F550u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F570u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F580u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F58Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F5A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F5B0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F5C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F5C8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F5D8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F5FCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F608u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F61Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F62Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F638u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F640u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F65Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F678u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F680u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F688u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F68Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F69Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F6ACu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F6C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F6D4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F6F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F714u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F71Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F728u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F74Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F804u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F808u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F824u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F848u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F854u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F85Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F86Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F874u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F880u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F898u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F8A4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F8BCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F8C4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F8CCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F8DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F8E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F8F8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F904u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F914u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F91Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F924u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F930u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F940u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F948u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F950u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F95Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F96Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F974u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F97Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F988u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F998u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F9A0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F9A8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F9B4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F9D0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F9DCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F9E8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881F9F0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA0Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA14u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA20u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA28u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA44u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FA64u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FABCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FAD0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FADCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FAE4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FAE8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FAFCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB10u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB1Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB24u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB2Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB30u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB40u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB54u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB64u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB74u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB7Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FB8Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FBA0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FBB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FBC0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FBD0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FBE0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FCB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FCD8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FCECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FCF4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD00u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD04u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD1Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD44u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD4Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD5Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD64u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD78u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD80u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD8Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FD94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FDA0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FDA8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FDB0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FDB4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FDD0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FDF0u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FDF8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE0Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE10u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE20u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE50u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE5Cu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE68u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE74u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE78u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FE88u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FEA8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FEC4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FECCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FED8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FEE8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FEF8u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF20u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF38u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF48u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF70u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FF94u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FFA4u, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FFBCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FFCCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FFDCu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FFECu, &recomp_unit_0006, "recomp_unit_0006");
    runtime.register_function(0x0881FFFCu, &recomp_unit_0006, "recomp_unit_0006");
}
} // namespace psprecomp

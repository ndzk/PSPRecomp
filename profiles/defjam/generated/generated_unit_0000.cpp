#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0000[4094] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 17, 0, 0, 0, 0,
    18, 0, 0, 19, 0, 20, 0, 0, 21, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 26,
    0, 27, 0, 28, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 32, 0, 33, 0, 34, 0, 0, 35, 0, 36, 0, 37, 0,
    38, 0, 0, 0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0,
    46, 47, 0, 48, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 52, 0, 53, 0, 0, 54, 0, 0, 55, 56, 0, 57, 0, 58, 0, 0, 59, 0,
    60, 0, 61, 0, 62, 0, 63, 0, 64, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 67, 0, 68, 0, 69, 0, 70, 0, 71,
    0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 90, 0, 91, 0, 0, 92, 0, 0, 93, 0,
    0, 94, 0, 95, 0, 96, 0, 0, 97, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 106, 0, 0, 0,
    107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 111, 0, 112, 113,
    114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 0,
    0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0,
    0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0,
    134, 0, 0, 135, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 148, 0, 0, 149,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 155, 156, 0, 157, 0, 0, 158, 0, 0, 0, 159,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 167, 0,
    168, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 174,
    0, 0, 0, 0, 175, 0, 0, 176, 177, 0, 178, 0, 0, 179, 0, 180, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0,
    0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 186, 187, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 195, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 0, 0,
    0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0,
    0, 223, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 231, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236,
    0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 0, 242, 0, 243, 0, 0, 244, 0, 245, 0, 246, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0,
    0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255,
    0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0,
    0, 260, 0, 0, 261, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0,
    0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 0,
    0, 0, 275, 0, 276, 0, 0, 0, 277, 0, 0, 278, 279, 0, 280, 0, 281, 0, 0, 282, 0, 0, 283, 284, 0, 285, 0, 0, 0, 286, 0, 287,
    288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 293, 0,
    0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 297, 0, 0, 298, 0, 299, 0, 0, 0, 300, 0, 0, 301,
    302, 0, 303, 0, 304, 0, 0, 305, 0, 0, 306, 307, 0, 308, 0, 0, 0, 309, 0, 310, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 313,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318,
    0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 323, 0, 324, 0, 0, 0, 325, 0, 0,
    326, 327, 0, 328, 0, 329, 0, 0, 330, 0, 0, 331, 332, 333, 0, 334, 0, 335, 336, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 344, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 351, 352, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 355, 356, 0, 0, 357, 0, 358, 359, 0, 0, 0, 360, 0, 0, 0, 0, 361, 0, 0,
    362, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 374, 0, 0, 0,
    375, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 381, 0, 0, 382, 0,
    0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 387, 0, 0, 0, 388, 389, 0, 390,
    0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0,
    396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0,
    0, 0, 0, 0, 401, 0, 402, 0, 0, 0, 0, 403, 0, 404, 0, 0, 405, 0, 0, 0, 406, 0, 0, 407, 0, 0, 408, 0, 0, 409, 0, 410,
    0, 411, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 0, 0,
    0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 421, 0, 0, 422, 0, 0, 423, 424, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 429, 0, 430, 0, 0, 431, 0, 432, 0, 0, 433, 0,
    0, 434, 0, 0, 0, 435, 0, 0, 436, 0, 437, 0, 0, 438, 0, 0, 0, 439, 0, 0, 440, 0, 441, 0, 442, 0, 0, 443, 0, 0, 444, 0,
    0, 445, 0, 446, 0, 0, 447, 0, 448, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0,
    0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0,
    459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0,
    0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 466, 0, 467, 0, 468, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 471, 0, 472,
    0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 477, 0, 478, 0, 0, 0, 0, 479, 0, 480, 0, 481, 0, 482,
    0, 483, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0, 0,
    0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 494, 0, 495, 0, 0, 496, 0, 0, 0, 0, 497, 0,
    498, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0,
    0, 0, 504, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0,
    509, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0,
    0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 518,
    0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 521, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 524, 0, 525, 0, 0, 0, 0, 0, 526, 0,
    527, 0, 528, 0, 0, 0, 0, 0, 529, 530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 533, 534, 0, 0, 535, 0, 0, 0, 0, 0,
    0, 536, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 541, 0, 0, 0, 0, 0, 0, 542, 0, 543, 0, 544, 0, 0, 0,
    0, 0, 0, 0, 545, 0, 546, 0, 547, 0, 0, 0, 0, 0, 548, 0, 549, 0, 550, 0, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0,
    0, 553, 0, 554, 0, 555, 0, 0, 0, 0, 0, 556, 0, 557, 0, 558, 0, 0, 0, 0, 0, 559, 0, 560, 0, 561, 0, 0, 0, 0, 0, 562,
    0, 563, 0, 564, 0, 0, 0, 0, 0, 565, 0, 566, 0, 567, 0, 0, 0, 0, 0, 568, 0, 569, 0, 570, 0, 0, 0, 0, 0, 571, 0, 572,
    0, 573, 0, 0, 0, 0, 0, 574, 0, 575, 0, 576, 0, 0, 0, 0, 0, 577, 0, 578, 0, 579, 0, 0, 0, 0, 580, 0, 0, 0, 0, 581,
    0, 0, 0, 0, 0, 582, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 585, 586, 0, 0, 587, 0, 0, 0, 0, 0, 588, 0, 589,
    0, 590, 0, 0, 0, 0, 0, 591, 0, 592, 0, 593, 0, 0, 0, 0, 0, 594, 595, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 598,
    599, 0, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0, 0, 604, 0, 605, 0, 606, 0, 0, 0, 0, 0,
    0, 607, 0, 608, 0, 609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 611, 0, 612, 0, 0, 0, 0, 0, 613, 0, 614, 0, 615, 0, 0, 0, 0,
    616, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 619, 0, 620, 0, 0, 0, 0, 0, 621, 0, 622, 0, 623, 0, 0, 0, 0, 0, 624, 0,
    625, 0, 626, 0, 0, 0, 0, 0, 627, 0, 628, 0, 629, 0, 0, 0, 0, 0, 630, 0, 631, 0, 632, 0, 0, 0, 0, 0, 633, 0, 634, 0,
    635, 0, 0, 0, 0, 0, 636, 0, 637, 0, 638, 0, 0, 0, 0, 0, 639, 0, 640, 0, 641, 0, 0, 0, 0, 0, 642, 0, 643, 0, 644, 0,
    0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 650, 0, 0, 0, 0,
    0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 0, 653, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 655, 0, 656, 0, 657, 0, 0, 658, 0,
    659, 0, 660, 661, 0, 662, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 666, 0, 0, 0, 0, 667, 0, 0, 668,
    0, 669, 670, 0, 0, 0, 671, 0, 0, 0, 672, 0, 673, 0, 0, 0, 674, 0, 675, 0, 0, 676, 677, 678, 0, 0, 0, 679, 0, 0, 0, 680,
    0, 0, 0, 0, 0, 0, 681, 0, 682, 0, 683, 0, 0, 0, 0, 684, 0, 0, 685, 0, 0, 686, 0, 687, 0, 688, 0, 689, 0, 0, 690, 0,
    691, 0, 0, 692, 0, 693, 0, 0, 694, 0, 0, 0, 695, 0, 696, 0, 697, 0, 698, 0, 699, 0, 700, 0, 0, 701, 0, 0, 702, 0, 703, 0,
    704, 0, 705, 0, 0, 706, 0, 707, 0, 0, 708, 0, 709, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 712, 0, 0, 0, 0,
    0, 0, 713, 0, 0, 714, 0, 0, 715, 0, 0, 716, 0, 0, 0, 0, 0, 717, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 720, 721, 0,
    0, 722, 0, 0, 0, 723, 0, 0, 724, 0, 0, 0, 0, 725, 0, 726, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 729, 0,
    0, 730, 731, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 733, 0, 734, 735, 0, 0, 736, 0, 0, 0, 737, 0, 738, 0, 739, 0, 740, 0, 741,
    0, 742, 0, 0, 743, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 750, 0, 751, 0, 0, 752, 0, 753, 0, 754,
    0, 0, 755, 756, 757, 758, 0, 759, 0, 760, 0, 761, 0, 762, 0, 763, 0, 764, 0, 765, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0,
    0, 767, 0, 768, 0, 0, 769, 0, 0, 770, 0, 771, 0, 0, 772, 0, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 777, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 780, 0, 0, 0, 781, 0, 0, 0, 0, 782, 0, 0, 0, 783, 0, 0, 0,
    0, 784, 0, 0, 0, 785, 0, 0, 0, 0, 786, 0, 0, 0, 787, 0, 0, 0, 0, 788, 0, 0, 0, 789, 0, 0, 0, 0, 790, 0, 0, 791,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0,
    0, 0, 0, 794, 0, 0, 0, 795, 0, 0, 796, 0, 0, 797, 0, 0, 798, 0, 0, 799, 0, 800, 0, 0, 801, 0, 0, 802, 0, 0, 803, 0,
    804, 0, 805, 0, 806, 0, 0, 0, 807, 0, 0, 0, 0, 0, 808, 0, 809, 0, 810, 0, 0, 0, 0, 0, 811, 0, 812, 813, 0, 0, 0, 0,
    0, 814, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0,
    816, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 818, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 820, 0, 0, 0, 821, 0, 0, 0,
    0, 822, 0, 0, 0, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 824, 0, 825, 0, 0, 826, 0, 0, 0, 0, 0, 827, 0, 828, 0,
    0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 0,
    0, 0, 0, 832, 0, 0, 0, 0, 0, 833, 0, 834, 0, 0, 0, 0, 835, 0, 836, 0, 0, 0, 0, 837, 0, 838, 0, 0, 0, 0, 839, 0,
    840, 0, 0, 0, 0, 0, 841, 0, 842, 0, 0, 0, 843, 0, 844, 0, 0, 0, 0, 0, 845, 0, 846, 0, 0, 0, 847, 0, 848, 0, 0, 0,
    0, 0, 0, 849, 0, 850, 0, 0, 0, 0, 851, 0, 852, 0, 0, 0, 853, 0, 854, 0, 0, 0, 0, 0, 0, 0, 855, 0, 856, 0, 0, 0,
    0, 857, 0, 858, 0, 0, 0, 0, 859, 0, 860, 0, 0, 861, 0, 862, 0, 0, 0, 0, 0, 0, 0, 0, 863, 0, 864, 0, 0, 0, 865, 0,
    0, 0, 0, 866, 0, 867, 0, 868, 0, 0, 869, 0, 870, 0, 0, 0, 0, 0, 871, 0, 872, 0, 0, 0, 873, 874, 0, 0, 875, 0, 876, 0,
    0, 877, 0, 878, 0, 0, 0, 0, 0, 879, 0, 880, 0, 0, 0, 881, 882, 0, 0, 0, 883, 0, 884, 0, 0, 0, 0, 885, 0, 886, 0, 0,
    0, 0, 887, 0, 888, 0, 889, 0, 890, 0, 0, 0, 891, 0, 892, 0, 0, 893, 0, 894, 0, 0, 0, 0, 895, 0, 896, 0, 0, 0, 0, 897,
    0, 898, 0, 0, 0, 0, 899, 0, 900, 0, 0, 0, 0, 901, 0, 902, 0, 0, 0, 0, 903, 0, 904, 0, 0, 0, 0, 905, 0, 906, 0, 0,
    0, 907, 0, 908, 0, 0, 909, 0, 0, 0, 910, 0, 911, 0, 912, 0, 0, 913, 0, 0, 0, 0, 0, 0, 914, 0, 915, 0, 916, 0, 0, 917,
    0, 0, 918, 0, 919, 0, 920, 0, 921, 0, 0, 922, 0, 923, 0, 924, 925, 0, 926, 0, 927, 928, 0, 929, 0, 0, 0, 930, 0, 0, 931, 0,
    932, 0, 933, 0, 0, 934, 0, 935, 0, 936, 0, 0, 937, 0, 938, 0, 939, 940, 0, 941, 0, 942, 943, 0, 944, 0, 0, 0, 945, 0, 0, 946,
    0, 947, 0, 948, 0, 0, 949, 0, 950, 0, 951, 0, 0, 952, 0, 953, 0, 954, 955, 0, 956, 0, 957, 958, 0, 959, 0, 0, 0, 960, 0, 0,
    961, 0, 962, 0, 963, 0, 0, 964, 0, 965, 966, 967, 0, 0, 968, 0, 0, 0, 0, 0, 969, 0, 0, 0, 970, 0, 971, 0, 972, 0, 0, 973,
    0, 0, 0, 0, 974, 0, 0, 0, 975, 976, 0, 977, 0, 978, 0, 979, 0, 0, 0, 980, 0, 981, 0, 982, 0, 0, 983, 0, 0, 0, 0, 984,
    0, 0, 0, 985, 986, 0, 987, 0, 988, 0, 989, 0, 0, 0, 990, 0, 991, 0, 992, 0, 0, 993, 0, 0, 0, 0, 994, 0, 0, 0, 995, 996,
    0, 997, 0, 998, 0, 999, 0, 0, 0, 1000, 0, 1001, 0, 1002, 0, 0, 1003, 0, 0, 0, 1004, 0, 0, 0, 1005, 1006, 0, 1007, 0, 1008, 0, 1009,
    0, 0, 1010, 0, 1011, 0, 0, 0, 0, 0, 0, 1012, 0, 1013, 0, 0, 0, 1014, 1015, 0, 0, 0, 1016, 0, 1017, 0, 0, 1018, 0, 1019,
};
void recomp_unit_0000_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08804000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0000[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08804000;
    case 2u: goto L_08804010;
    case 3u: goto L_0880401C;
    case 4u: goto L_08804028;
    case 5u: goto L_08804038;
    case 6u: goto L_08804040;
    case 7u: goto L_08804048;
    case 8u: goto L_08804058;
    case 9u: goto L_08804088;
    case 10u: goto L_0880409C;
    case 11u: goto L_088040A8;
    case 12u: goto L_088040B4;
    case 13u: goto L_088040C0;
    case 14u: goto L_088040CC;
    case 15u: goto L_088040D8;
    case 16u: goto L_088040E4;
    case 17u: goto L_088040EC;
    case 18u: goto L_08804100;
    case 19u: goto L_0880410C;
    case 20u: goto L_08804114;
    case 21u: goto L_08804120;
    case 22u: goto L_08804128;
    case 23u: goto L_08804138;
    case 24u: goto L_08804164;
    case 25u: goto L_08804174;
    case 26u: goto L_0880417C;
    case 27u: goto L_08804184;
    case 28u: goto L_0880418C;
    case 29u: goto L_08804198;
    case 30u: goto L_088041A0;
    case 31u: goto L_088041BC;
    case 32u: goto L_088041CC;
    case 33u: goto L_088041D4;
    case 34u: goto L_088041DC;
    case 35u: goto L_088041E8;
    case 36u: goto L_088041F0;
    case 37u: goto L_088041F8;
    case 38u: goto L_08804200;
    case 39u: goto L_08804210;
    case 40u: goto L_08804218;
    case 41u: goto L_08804220;
    case 42u: goto L_08804228;
    case 43u: goto L_0880424C;
    case 44u: goto L_08804254;
    case 45u: goto L_0880425C;
    case 46u: goto L_08804280;
    case 47u: goto L_08804284;
    case 48u: goto L_0880428C;
    case 49u: goto L_08804298;
    case 50u: goto L_088042A0;
    case 51u: goto L_088042B0;
    case 52u: goto L_088042B8;
    case 53u: goto L_088042C0;
    case 54u: goto L_088042CC;
    case 55u: goto L_088042D8;
    case 56u: goto L_088042DC;
    case 57u: goto L_088042E4;
    case 58u: goto L_088042EC;
    case 59u: goto L_088042F8;
    case 60u: goto L_08804300;
    case 61u: goto L_08804308;
    case 62u: goto L_08804310;
    case 63u: goto L_08804318;
    case 64u: goto L_08804320;
    case 65u: goto L_08804328;
    case 66u: goto L_0880434C;
    case 67u: goto L_0880435C;
    case 68u: goto L_08804364;
    case 69u: goto L_0880436C;
    case 70u: goto L_08804374;
    case 71u: goto L_0880437C;
    case 72u: goto L_08804384;
    case 73u: goto L_0880438C;
    case 74u: goto L_08804394;
    case 75u: goto L_0880439C;
    case 76u: goto L_088043A4;
    case 77u: goto L_088043AC;
    case 78u: goto L_088043B4;
    case 79u: goto L_088043BC;
    case 80u: goto L_088043C4;
    case 81u: goto L_088043CC;
    case 82u: goto L_088043D4;
    case 83u: goto L_088043DC;
    case 84u: goto L_088043EC;
    case 85u: goto L_088043FC;
    case 86u: goto L_08804424;
    case 87u: goto L_0880442C;
    case 88u: goto L_08804440;
    case 89u: goto L_08804450;
    case 90u: goto L_08804458;
    case 91u: goto L_08804460;
    case 92u: goto L_0880446C;
    case 93u: goto L_08804478;
    case 94u: goto L_08804484;
    case 95u: goto L_0880448C;
    case 96u: goto L_08804494;
    case 97u: goto L_088044A0;
    case 98u: goto L_088044A8;
    case 99u: goto L_088044B4;
    case 100u: goto L_088044F4;
    case 101u: goto L_08804508;
    case 102u: goto L_0880452C;
    case 103u: goto L_08804544;
    case 104u: goto L_0880455C;
    case 105u: goto L_08804564;
    case 106u: goto L_08804570;
    case 107u: goto L_08804580;
    case 108u: goto L_08804598;
    case 109u: goto L_088045C4;
    case 110u: goto L_088045D8;
    case 111u: goto L_088045F0;
    case 112u: goto L_088045F8;
    case 113u: goto L_088045FC;
    case 114u: goto L_08804600;
    case 115u: goto L_08804628;
    case 116u: goto L_0880465C;
    case 117u: goto L_0880466C;
    case 118u: goto L_08804674;
    case 119u: goto L_08804698;
    case 120u: goto L_088046B4;
    case 121u: goto L_088046D8;
    case 122u: goto L_088046F4;
    case 123u: goto L_08804704;
    case 124u: goto L_08804728;
    case 125u: goto L_08804744;
    case 126u: goto L_0880474C;
    case 127u: goto L_0880475C;
    case 128u: goto L_08804774;
    case 129u: goto L_08804790;
    case 130u: goto L_088047C8;
    case 131u: goto L_088047D4;
    case 132u: goto L_088047E4;
    case 133u: goto L_088047F0;
    case 134u: goto L_08804800;
    case 135u: goto L_0880480C;
    case 136u: goto L_08804818;
    case 137u: goto L_08804820;
    case 138u: goto L_0880483C;
    case 139u: goto L_08804844;
    case 140u: goto L_08804858;
    case 141u: goto L_08804868;
    case 142u: goto L_08804884;
    case 143u: goto L_088048A8;
    case 144u: goto L_088048B4;
    case 145u: goto L_088048C4;
    case 146u: goto L_088048D8;
    case 147u: goto L_088048E8;
    case 148u: goto L_088048F0;
    case 149u: goto L_088048FC;
    case 150u: goto L_08804910;
    case 151u: goto L_08804928;
    case 152u: goto L_08804934;
    case 153u: goto L_0880493C;
    case 154u: goto L_0880494C;
    case 155u: goto L_08804954;
    case 156u: goto L_08804958;
    case 157u: goto L_08804960;
    case 158u: goto L_0880496C;
    case 159u: goto L_0880497C;
    case 160u: goto L_08804988;
    case 161u: goto L_088049A4;
    case 162u: goto L_088049B4;
    case 163u: goto L_088049C8;
    case 164u: goto L_088049D4;
    case 165u: goto L_088049E4;
    case 166u: goto L_088049F4;
    case 167u: goto L_088049F8;
    case 168u: goto L_08804A00;
    case 169u: goto L_08804A24;
    case 170u: goto L_08804A34;
    case 171u: goto L_08804A40;
    case 172u: goto L_08804A4C;
    case 173u: goto L_08804A5C;
    case 174u: goto L_08804A7C;
    case 175u: goto L_08804A90;
    case 176u: goto L_08804A9C;
    case 177u: goto L_08804AA0;
    case 178u: goto L_08804AA8;
    case 179u: goto L_08804AB4;
    case 180u: goto L_08804ABC;
    case 181u: goto L_08804ACC;
    case 182u: goto L_08804ADC;
    case 183u: goto L_08804AEC;
    case 184u: goto L_08804B0C;
    case 185u: goto L_08804B20;
    case 186u: goto L_08804B2C;
    case 187u: goto L_08804B30;
    case 188u: goto L_08804B34;
    case 189u: goto L_08804B44;
    case 190u: goto L_08804B64;
    case 191u: goto L_08804B78;
    case 192u: goto L_08804B88;
    case 193u: goto L_08804BA4;
    case 194u: goto L_08804BB4;
    case 195u: goto L_08804BB8;
    case 196u: goto L_08804BCC;
    case 197u: goto L_08804BDC;
    case 198u: goto L_08804BF0;
    case 199u: goto L_08804CB0;
    case 200u: goto L_08804CEC;
    case 201u: goto L_08804D40;
    case 202u: goto L_08804D48;
    case 203u: goto L_08804D50;
    case 204u: goto L_08804D84;
    case 205u: goto L_08804D98;
    case 206u: goto L_08804DB4;
    case 207u: goto L_08804DC4;
    case 208u: goto L_08804DE0;
    case 209u: goto L_08804DF0;
    case 210u: goto L_08804E08;
    case 211u: goto L_08804E30;
    case 212u: goto L_08804E50;
    case 213u: goto L_08804E58;
    case 214u: goto L_08804E60;
    case 215u: goto L_08804E68;
    case 216u: goto L_08804E70;
    case 217u: goto L_08804E88;
    case 218u: goto L_08804EA8;
    case 219u: goto L_08804EBC;
    case 220u: goto L_08804ECC;
    case 221u: goto L_08804ED8;
    case 222u: goto L_08804EE8;
    case 223u: goto L_08804F04;
    case 224u: goto L_08804F0C;
    case 225u: goto L_08804F1C;
    case 226u: goto L_08804F34;
    case 227u: goto L_08804F58;
    case 228u: goto L_08804F84;
    case 229u: goto L_08804F94;
    case 230u: goto L_08804FA0;
    case 231u: goto L_08804FA8;
    case 232u: goto L_08804FB0;
    case 233u: goto L_08804FBC;
    case 234u: goto L_08804FC8;
    case 235u: goto L_08804FE0;
    case 236u: goto L_08804FFC;
    case 237u: goto L_08805004;
    case 238u: goto L_08805010;
    case 239u: goto L_0880503C;
    case 240u: goto L_08805050;
    case 241u: goto L_08805070;
    case 242u: goto L_08805088;
    case 243u: goto L_08805090;
    case 244u: goto L_0880509C;
    case 245u: goto L_088050A4;
    case 246u: goto L_088050AC;
    case 247u: goto L_088050B8;
    case 248u: goto L_088050C8;
    case 249u: goto L_088050E0;
    case 250u: goto L_088050F0;
    case 251u: goto L_0880510C;
    case 252u: goto L_0880512C;
    case 253u: goto L_08805140;
    case 254u: goto L_08805158;
    case 255u: goto L_0880517C;
    case 256u: goto L_08805190;
    case 257u: goto L_088051B8;
    case 258u: goto L_088051D0;
    case 259u: goto L_088051E4;
    case 260u: goto L_08805204;
    case 261u: goto L_08805210;
    case 262u: goto L_0880521C;
    case 263u: goto L_0880522C;
    case 264u: goto L_0880524C;
    case 265u: goto L_08805260;
    case 266u: goto L_08805284;
    case 267u: goto L_088052A8;
    case 268u: goto L_088052B0;
    case 269u: goto L_088052CC;
    case 270u: goto L_088052D4;
    case 271u: goto L_088052DC;
    case 272u: goto L_088052E4;
    case 273u: goto L_088052EC;
    case 274u: goto L_088052F4;
    case 275u: goto L_08805308;
    case 276u: goto L_08805310;
    case 277u: goto L_08805320;
    case 278u: goto L_0880532C;
    case 279u: goto L_08805330;
    case 280u: goto L_08805338;
    case 281u: goto L_08805340;
    case 282u: goto L_0880534C;
    case 283u: goto L_08805358;
    case 284u: goto L_0880535C;
    case 285u: goto L_08805364;
    case 286u: goto L_08805374;
    case 287u: goto L_0880537C;
    case 288u: goto L_08805380;
    case 289u: goto L_08805388;
    case 290u: goto L_088053AC;
    case 291u: goto L_088053E4;
    case 292u: goto L_088053EC;
    case 293u: goto L_088053F8;
    case 294u: goto L_0880541C;
    case 295u: goto L_0880543C;
    case 296u: goto L_08805444;
    case 297u: goto L_0880544C;
    case 298u: goto L_08805458;
    case 299u: goto L_08805460;
    case 300u: goto L_08805470;
    case 301u: goto L_0880547C;
    case 302u: goto L_08805480;
    case 303u: goto L_08805488;
    case 304u: goto L_08805490;
    case 305u: goto L_0880549C;
    case 306u: goto L_088054A8;
    case 307u: goto L_088054AC;
    case 308u: goto L_088054B4;
    case 309u: goto L_088054C4;
    case 310u: goto L_088054CC;
    case 311u: goto L_088054D0;
    case 312u: goto L_088054D8;
    case 313u: goto L_088054FC;
    case 314u: goto L_08805530;
    case 315u: goto L_08805548;
    case 316u: goto L_08805550;
    case 317u: goto L_0880555C;
    case 318u: goto L_0880557C;
    case 319u: goto L_08805594;
    case 320u: goto L_088055AC;
    case 321u: goto L_088055C8;
    case 322u: goto L_088055D0;
    case 323u: goto L_088055DC;
    case 324u: goto L_088055E4;
    case 325u: goto L_088055F4;
    case 326u: goto L_08805600;
    case 327u: goto L_08805604;
    case 328u: goto L_0880560C;
    case 329u: goto L_08805614;
    case 330u: goto L_08805620;
    case 331u: goto L_0880562C;
    case 332u: goto L_08805630;
    case 333u: goto L_08805634;
    case 334u: goto L_0880563C;
    case 335u: goto L_08805644;
    case 336u: goto L_08805648;
    case 337u: goto L_08805650;
    case 338u: goto L_08805678;
    case 339u: goto L_088056A0;
    case 340u: goto L_088056B0;
    case 341u: goto L_088056C0;
    case 342u: goto L_088056CC;
    case 343u: goto L_088056E8;
    case 344u: goto L_088056F4;
    case 345u: goto L_08805720;
    case 346u: goto L_08805728;
    case 347u: goto L_08805734;
    case 348u: goto L_08805740;
    case 349u: goto L_08805754;
    case 350u: goto L_0880575C;
    case 351u: goto L_0880576C;
    case 352u: goto L_08805770;
    case 353u: goto L_088057A0;
    case 354u: goto L_088057A8;
    case 355u: goto L_088057B4;
    case 356u: goto L_088057B8;
    case 357u: goto L_088057C4;
    case 358u: goto L_088057CC;
    case 359u: goto L_088057D0;
    case 360u: goto L_088057E0;
    case 361u: goto L_088057F4;
    case 362u: goto L_08805800;
    case 363u: goto L_08805804;
    case 364u: goto L_08805830;
    case 365u: goto L_08805838;
    case 366u: goto L_08805844;
    case 367u: goto L_08805854;
    case 368u: goto L_0880586C;
    case 369u: goto L_08805894;
    case 370u: goto L_088058A4;
    case 371u: goto L_088058B0;
    case 372u: goto L_088058DC;
    case 373u: goto L_088058E4;
    case 374u: goto L_088058F0;
    case 375u: goto L_08805900;
    case 376u: goto L_08805908;
    case 377u: goto L_08805914;
    case 378u: goto L_08805934;
    case 379u: goto L_08805944;
    case 380u: goto L_08805958;
    case 381u: goto L_0880596C;
    case 382u: goto L_08805978;
    case 383u: goto L_08805988;
    case 384u: goto L_088059A0;
    case 385u: goto L_088059CC;
    case 386u: goto L_088059D4;
    case 387u: goto L_088059E0;
    case 388u: goto L_088059F0;
    case 389u: goto L_088059F4;
    case 390u: goto L_088059FC;
    case 391u: goto L_08805A14;
    case 392u: goto L_08805A28;
    case 393u: goto L_08805A50;
    case 394u: goto L_08805A60;
    case 395u: goto L_08805A6C;
    case 396u: goto L_08805A80;
    case 397u: goto L_08805ABC;
    case 398u: goto L_08805AD0;
    case 399u: goto L_08805AE8;
    case 400u: goto L_08805AF8;
    case 401u: goto L_08805B10;
    case 402u: goto L_08805B18;
    case 403u: goto L_08805B2C;
    case 404u: goto L_08805B34;
    case 405u: goto L_08805B40;
    case 406u: goto L_08805B50;
    case 407u: goto L_08805B5C;
    case 408u: goto L_08805B68;
    case 409u: goto L_08805B74;
    case 410u: goto L_08805B7C;
    case 411u: goto L_08805B84;
    case 412u: goto L_08805B98;
    case 413u: goto L_08805BA0;
    case 414u: goto L_08805BB0;
    case 415u: goto L_08805BC8;
    case 416u: goto L_08805BD8;
    case 417u: goto L_08805BE4;
    case 418u: goto L_08805C04;
    case 419u: goto L_08805C2C;
    case 420u: goto L_08805C3C;
    case 421u: goto L_08805C44;
    case 422u: goto L_08805C50;
    case 423u: goto L_08805C5C;
    case 424u: goto L_08805C60;
    case 425u: goto L_08805C90;
    case 426u: goto L_08805CA4;
    case 427u: goto L_08805CB4;
    case 428u: goto L_08805CC8;
    case 429u: goto L_08805CD0;
    case 430u: goto L_08805CD8;
    case 431u: goto L_08805CE4;
    case 432u: goto L_08805CEC;
    case 433u: goto L_08805CF8;
    case 434u: goto L_08805D04;
    case 435u: goto L_08805D14;
    case 436u: goto L_08805D20;
    case 437u: goto L_08805D28;
    case 438u: goto L_08805D34;
    case 439u: goto L_08805D44;
    case 440u: goto L_08805D50;
    case 441u: goto L_08805D58;
    case 442u: goto L_08805D60;
    case 443u: goto L_08805D6C;
    case 444u: goto L_08805D78;
    case 445u: goto L_08805D84;
    case 446u: goto L_08805D8C;
    case 447u: goto L_08805D98;
    case 448u: goto L_08805DA0;
    case 449u: goto L_08805DA8;
    case 450u: goto L_08805DC0;
    case 451u: goto L_08805DCC;
    case 452u: goto L_08805DE0;
    case 453u: goto L_08805DEC;
    case 454u: goto L_08805DF8;
    case 455u: goto L_08805E04;
    case 456u: goto L_08805E14;
    case 457u: goto L_08805E28;
    case 458u: goto L_08805E64;
    case 459u: goto L_08805E80;
    case 460u: goto L_08805F48;
    case 461u: goto L_08805F50;
    case 462u: goto L_08805F64;
    case 463u: goto L_08805F78;
    case 464u: goto L_08805F94;
    case 465u: goto L_08805F9C;
    case 466u: goto L_08805FB0;
    case 467u: goto L_08805FB8;
    case 468u: goto L_08805FC0;
    case 469u: goto L_08805FD4;
    case 470u: goto L_08805FE0;
    case 471u: goto L_08805FF4;
    case 472u: goto L_08805FFC;
    case 473u: goto L_08806004;
    case 474u: goto L_08806018;
    case 475u: goto L_08806030;
    case 476u: goto L_08806040;
    case 477u: goto L_08806048;
    case 478u: goto L_08806050;
    case 479u: goto L_08806064;
    case 480u: goto L_0880606C;
    case 481u: goto L_08806074;
    case 482u: goto L_0880607C;
    case 483u: goto L_08806084;
    case 484u: goto L_08806098;
    case 485u: goto L_088060A0;
    case 486u: goto L_088060BC;
    case 487u: goto L_088060C8;
    case 488u: goto L_088060D8;
    case 489u: goto L_088060E4;
    case 490u: goto L_08806108;
    case 491u: goto L_0880611C;
    case 492u: goto L_08806134;
    case 493u: goto L_08806140;
    case 494u: goto L_08806150;
    case 495u: goto L_08806158;
    case 496u: goto L_08806164;
    case 497u: goto L_08806178;
    case 498u: goto L_08806180;
    case 499u: goto L_08806190;
    case 500u: goto L_088061A8;
    case 501u: goto L_088061C0;
    case 502u: goto L_088061D8;
    case 503u: goto L_088061F0;
    case 504u: goto L_08806208;
    case 505u: goto L_08806220;
    case 506u: goto L_08806238;
    case 507u: goto L_08806250;
    case 508u: goto L_08806268;
    case 509u: goto L_08806280;
    case 510u: goto L_08806298;
    case 511u: goto L_088062B0;
    case 512u: goto L_088062C8;
    case 513u: goto L_088062E0;
    case 514u: goto L_088062F8;
    case 515u: goto L_08806310;
    case 516u: goto L_08806358;
    case 517u: goto L_08806370;
    case 518u: goto L_0880637C;
    case 519u: goto L_08806390;
    case 520u: goto L_088063A8;
    case 521u: goto L_088063AC;
    case 522u: goto L_088063B8;
    case 523u: goto L_088063D0;
    case 524u: goto L_088063D8;
    case 525u: goto L_088063E0;
    case 526u: goto L_088063F8;
    case 527u: goto L_08806400;
    case 528u: goto L_08806408;
    case 529u: goto L_08806420;
    case 530u: goto L_08806424;
    case 531u: goto L_08806434;
    case 532u: goto L_08806444;
    case 533u: goto L_08806458;
    case 534u: goto L_0880645C;
    case 535u: goto L_08806468;
    case 536u: goto L_08806484;
    case 537u: goto L_0880648C;
    case 538u: goto L_08806494;
    case 539u: goto L_088064B4;
    case 540u: goto L_088064BC;
    case 541u: goto L_088064C4;
    case 542u: goto L_088064E0;
    case 543u: goto L_088064E8;
    case 544u: goto L_088064F0;
    case 545u: goto L_08806510;
    case 546u: goto L_08806518;
    case 547u: goto L_08806520;
    case 548u: goto L_08806538;
    case 549u: goto L_08806540;
    case 550u: goto L_08806548;
    case 551u: goto L_0880655C;
    case 552u: goto L_0880656C;
    case 553u: goto L_08806584;
    case 554u: goto L_0880658C;
    case 555u: goto L_08806594;
    case 556u: goto L_088065AC;
    case 557u: goto L_088065B4;
    case 558u: goto L_088065BC;
    case 559u: goto L_088065D4;
    case 560u: goto L_088065DC;
    case 561u: goto L_088065E4;
    case 562u: goto L_088065FC;
    case 563u: goto L_08806604;
    case 564u: goto L_0880660C;
    case 565u: goto L_08806624;
    case 566u: goto L_0880662C;
    case 567u: goto L_08806634;
    case 568u: goto L_0880664C;
    case 569u: goto L_08806654;
    case 570u: goto L_0880665C;
    case 571u: goto L_08806674;
    case 572u: goto L_0880667C;
    case 573u: goto L_08806684;
    case 574u: goto L_0880669C;
    case 575u: goto L_088066A4;
    case 576u: goto L_088066AC;
    case 577u: goto L_088066C4;
    case 578u: goto L_088066CC;
    case 579u: goto L_088066D4;
    case 580u: goto L_088066E8;
    case 581u: goto L_088066FC;
    case 582u: goto L_08806714;
    case 583u: goto L_08806720;
    case 584u: goto L_08806734;
    case 585u: goto L_0880674C;
    case 586u: goto L_08806750;
    case 587u: goto L_0880675C;
    case 588u: goto L_08806774;
    case 589u: goto L_0880677C;
    case 590u: goto L_08806784;
    case 591u: goto L_0880679C;
    case 592u: goto L_088067A4;
    case 593u: goto L_088067AC;
    case 594u: goto L_088067C4;
    case 595u: goto L_088067C8;
    case 596u: goto L_088067D8;
    case 597u: goto L_088067E8;
    case 598u: goto L_088067FC;
    case 599u: goto L_08806800;
    case 600u: goto L_0880680C;
    case 601u: goto L_08806828;
    case 602u: goto L_08806830;
    case 603u: goto L_08806838;
    case 604u: goto L_08806858;
    case 605u: goto L_08806860;
    case 606u: goto L_08806868;
    case 607u: goto L_08806884;
    case 608u: goto L_0880688C;
    case 609u: goto L_08806894;
    case 610u: goto L_088068B4;
    case 611u: goto L_088068BC;
    case 612u: goto L_088068C4;
    case 613u: goto L_088068DC;
    case 614u: goto L_088068E4;
    case 615u: goto L_088068EC;
    case 616u: goto L_08806900;
    case 617u: goto L_08806910;
    case 618u: goto L_08806928;
    case 619u: goto L_08806930;
    case 620u: goto L_08806938;
    case 621u: goto L_08806950;
    case 622u: goto L_08806958;
    case 623u: goto L_08806960;
    case 624u: goto L_08806978;
    case 625u: goto L_08806980;
    case 626u: goto L_08806988;
    case 627u: goto L_088069A0;
    case 628u: goto L_088069A8;
    case 629u: goto L_088069B0;
    case 630u: goto L_088069C8;
    case 631u: goto L_088069D0;
    case 632u: goto L_088069D8;
    case 633u: goto L_088069F0;
    case 634u: goto L_088069F8;
    case 635u: goto L_08806A00;
    case 636u: goto L_08806A18;
    case 637u: goto L_08806A20;
    case 638u: goto L_08806A28;
    case 639u: goto L_08806A40;
    case 640u: goto L_08806A48;
    case 641u: goto L_08806A50;
    case 642u: goto L_08806A68;
    case 643u: goto L_08806A70;
    case 644u: goto L_08806A78;
    case 645u: goto L_08806A8C;
    case 646u: goto L_08806AA0;
    case 647u: goto L_08806ABC;
    case 648u: goto L_08806AD0;
    case 649u: goto L_08806AE0;
    case 650u: goto L_08806AEC;
    case 651u: goto L_08806B08;
    case 652u: goto L_08806B1C;
    case 653u: goto L_08806B30;
    case 654u: goto L_08806B3C;
    case 655u: goto L_08806B5C;
    case 656u: goto L_08806B64;
    case 657u: goto L_08806B6C;
    case 658u: goto L_08806B78;
    case 659u: goto L_08806B80;
    case 660u: goto L_08806B88;
    case 661u: goto L_08806B8C;
    case 662u: goto L_08806B94;
    case 663u: goto L_08806BA8;
    case 664u: goto L_08806BC0;
    case 665u: goto L_08806BD4;
    case 666u: goto L_08806BDC;
    case 667u: goto L_08806BF0;
    case 668u: goto L_08806BFC;
    case 669u: goto L_08806C04;
    case 670u: goto L_08806C08;
    case 671u: goto L_08806C18;
    case 672u: goto L_08806C28;
    case 673u: goto L_08806C30;
    case 674u: goto L_08806C40;
    case 675u: goto L_08806C48;
    case 676u: goto L_08806C54;
    case 677u: goto L_08806C58;
    case 678u: goto L_08806C5C;
    case 679u: goto L_08806C6C;
    case 680u: goto L_08806C7C;
    case 681u: goto L_08806C98;
    case 682u: goto L_08806CA0;
    case 683u: goto L_08806CA8;
    case 684u: goto L_08806CBC;
    case 685u: goto L_08806CC8;
    case 686u: goto L_08806CD4;
    case 687u: goto L_08806CDC;
    case 688u: goto L_08806CE4;
    case 689u: goto L_08806CEC;
    case 690u: goto L_08806CF8;
    case 691u: goto L_08806D00;
    case 692u: goto L_08806D0C;
    case 693u: goto L_08806D14;
    case 694u: goto L_08806D20;
    case 695u: goto L_08806D30;
    case 696u: goto L_08806D38;
    case 697u: goto L_08806D40;
    case 698u: goto L_08806D48;
    case 699u: goto L_08806D50;
    case 700u: goto L_08806D58;
    case 701u: goto L_08806D64;
    case 702u: goto L_08806D70;
    case 703u: goto L_08806D78;
    case 704u: goto L_08806D80;
    case 705u: goto L_08806D88;
    case 706u: goto L_08806D94;
    case 707u: goto L_08806D9C;
    case 708u: goto L_08806DA8;
    case 709u: goto L_08806DB0;
    case 710u: goto L_08806DBC;
    case 711u: goto L_08806DE0;
    case 712u: goto L_08806DEC;
    case 713u: goto L_08806E08;
    case 714u: goto L_08806E14;
    case 715u: goto L_08806E20;
    case 716u: goto L_08806E2C;
    case 717u: goto L_08806E44;
    case 718u: goto L_08806E50;
    case 719u: goto L_08806E6C;
    case 720u: goto L_08806E74;
    case 721u: goto L_08806E78;
    case 722u: goto L_08806E84;
    case 723u: goto L_08806E94;
    case 724u: goto L_08806EA0;
    case 725u: goto L_08806EB4;
    case 726u: goto L_08806EBC;
    case 727u: goto L_08806EC8;
    case 728u: goto L_08806EEC;
    case 729u: goto L_08806EF8;
    case 730u: goto L_08806F04;
    case 731u: goto L_08806F08;
    case 732u: goto L_08806F18;
    case 733u: goto L_08806F34;
    case 734u: goto L_08806F3C;
    case 735u: goto L_08806F40;
    case 736u: goto L_08806F4C;
    case 737u: goto L_08806F5C;
    case 738u: goto L_08806F64;
    case 739u: goto L_08806F6C;
    case 740u: goto L_08806F74;
    case 741u: goto L_08806F7C;
    case 742u: goto L_08806F84;
    case 743u: goto L_08806F90;
    case 744u: goto L_08806FA8;
    case 745u: goto L_08807024;
    case 746u: goto L_0880702C;
    case 747u: goto L_088070A0;
    case 748u: goto L_088070A8;
    case 749u: goto L_088070D0;
    case 750u: goto L_088070D8;
    case 751u: goto L_088070E0;
    case 752u: goto L_088070EC;
    case 753u: goto L_088070F4;
    case 754u: goto L_088070FC;
    case 755u: goto L_08807108;
    case 756u: goto L_0880710C;
    case 757u: goto L_08807110;
    case 758u: goto L_08807114;
    case 759u: goto L_0880711C;
    case 760u: goto L_08807124;
    case 761u: goto L_0880712C;
    case 762u: goto L_08807134;
    case 763u: goto L_0880713C;
    case 764u: goto L_08807144;
    case 765u: goto L_0880714C;
    case 766u: goto L_08807160;
    case 767u: goto L_08807184;
    case 768u: goto L_0880718C;
    case 769u: goto L_08807198;
    case 770u: goto L_088071A4;
    case 771u: goto L_088071AC;
    case 772u: goto L_088071B8;
    case 773u: goto L_088071C4;
    case 774u: goto L_0880721C;
    case 775u: goto L_08807234;
    case 776u: goto L_088072A0;
    case 777u: goto L_088072AC;
    case 778u: goto L_088072C0;
    case 779u: goto L_08807328;
    case 780u: goto L_0880733C;
    case 781u: goto L_0880734C;
    case 782u: goto L_08807360;
    case 783u: goto L_08807370;
    case 784u: goto L_08807384;
    case 785u: goto L_08807394;
    case 786u: goto L_088073A8;
    case 787u: goto L_088073B8;
    case 788u: goto L_088073CC;
    case 789u: goto L_088073DC;
    case 790u: goto L_088073F0;
    case 791u: goto L_088073FC;
    case 792u: goto L_0880742C;
    case 793u: goto L_0880746C;
    case 794u: goto L_0880748C;
    case 795u: goto L_0880749C;
    case 796u: goto L_088074A8;
    case 797u: goto L_088074B4;
    case 798u: goto L_088074C0;
    case 799u: goto L_088074CC;
    case 800u: goto L_088074D4;
    case 801u: goto L_088074E0;
    case 802u: goto L_088074EC;
    case 803u: goto L_088074F8;
    case 804u: goto L_08807500;
    case 805u: goto L_08807508;
    case 806u: goto L_08807510;
    case 807u: goto L_08807520;
    case 808u: goto L_08807538;
    case 809u: goto L_08807540;
    case 810u: goto L_08807548;
    case 811u: goto L_08807560;
    case 812u: goto L_08807568;
    case 813u: goto L_0880756C;
    case 814u: goto L_08807584;
    case 815u: goto L_088075DC;
    case 816u: goto L_08807600;
    case 817u: goto L_08807614;
    case 818u: goto L_08807630;
    case 819u: goto L_08807644;
    case 820u: goto L_08807660;
    case 821u: goto L_08807670;
    case 822u: goto L_08807684;
    case 823u: goto L_088076A8;
    case 824u: goto L_088076C4;
    case 825u: goto L_088076CC;
    case 826u: goto L_088076D8;
    case 827u: goto L_088076F0;
    case 828u: goto L_088076F8;
    case 829u: goto L_0880770C;
    case 830u: goto L_08807750;
    case 831u: goto L_08807774;
    case 832u: goto L_0880778C;
    case 833u: goto L_088077A4;
    case 834u: goto L_088077AC;
    case 835u: goto L_088077C0;
    case 836u: goto L_088077C8;
    case 837u: goto L_088077DC;
    case 838u: goto L_088077E4;
    case 839u: goto L_088077F8;
    case 840u: goto L_08807800;
    case 841u: goto L_08807818;
    case 842u: goto L_08807820;
    case 843u: goto L_08807830;
    case 844u: goto L_08807838;
    case 845u: goto L_08807850;
    case 846u: goto L_08807858;
    case 847u: goto L_08807868;
    case 848u: goto L_08807870;
    case 849u: goto L_0880788C;
    case 850u: goto L_08807894;
    case 851u: goto L_088078A8;
    case 852u: goto L_088078B0;
    case 853u: goto L_088078C0;
    case 854u: goto L_088078C8;
    case 855u: goto L_088078E8;
    case 856u: goto L_088078F0;
    case 857u: goto L_08807904;
    case 858u: goto L_0880790C;
    case 859u: goto L_08807920;
    case 860u: goto L_08807928;
    case 861u: goto L_08807934;
    case 862u: goto L_0880793C;
    case 863u: goto L_08807960;
    case 864u: goto L_08807968;
    case 865u: goto L_08807978;
    case 866u: goto L_0880798C;
    case 867u: goto L_08807994;
    case 868u: goto L_0880799C;
    case 869u: goto L_088079A8;
    case 870u: goto L_088079B0;
    case 871u: goto L_088079C8;
    case 872u: goto L_088079D0;
    case 873u: goto L_088079E0;
    case 874u: goto L_088079E4;
    case 875u: goto L_088079F0;
    case 876u: goto L_088079F8;
    case 877u: goto L_08807A04;
    case 878u: goto L_08807A0C;
    case 879u: goto L_08807A24;
    case 880u: goto L_08807A2C;
    case 881u: goto L_08807A3C;
    case 882u: goto L_08807A40;
    case 883u: goto L_08807A50;
    case 884u: goto L_08807A58;
    case 885u: goto L_08807A6C;
    case 886u: goto L_08807A74;
    case 887u: goto L_08807A88;
    case 888u: goto L_08807A90;
    case 889u: goto L_08807A98;
    case 890u: goto L_08807AA0;
    case 891u: goto L_08807AB0;
    case 892u: goto L_08807AB8;
    case 893u: goto L_08807AC4;
    case 894u: goto L_08807ACC;
    case 895u: goto L_08807AE0;
    case 896u: goto L_08807AE8;
    case 897u: goto L_08807AFC;
    case 898u: goto L_08807B04;
    case 899u: goto L_08807B18;
    case 900u: goto L_08807B20;
    case 901u: goto L_08807B34;
    case 902u: goto L_08807B3C;
    case 903u: goto L_08807B50;
    case 904u: goto L_08807B58;
    case 905u: goto L_08807B6C;
    case 906u: goto L_08807B74;
    case 907u: goto L_08807B84;
    case 908u: goto L_08807B8C;
    case 909u: goto L_08807B98;
    case 910u: goto L_08807BA8;
    case 911u: goto L_08807BB0;
    case 912u: goto L_08807BB8;
    case 913u: goto L_08807BC4;
    case 914u: goto L_08807BE0;
    case 915u: goto L_08807BE8;
    case 916u: goto L_08807BF0;
    case 917u: goto L_08807BFC;
    case 918u: goto L_08807C08;
    case 919u: goto L_08807C10;
    case 920u: goto L_08807C18;
    case 921u: goto L_08807C20;
    case 922u: goto L_08807C2C;
    case 923u: goto L_08807C34;
    case 924u: goto L_08807C3C;
    case 925u: goto L_08807C40;
    case 926u: goto L_08807C48;
    case 927u: goto L_08807C50;
    case 928u: goto L_08807C54;
    case 929u: goto L_08807C5C;
    case 930u: goto L_08807C6C;
    case 931u: goto L_08807C78;
    case 932u: goto L_08807C80;
    case 933u: goto L_08807C88;
    case 934u: goto L_08807C94;
    case 935u: goto L_08807C9C;
    case 936u: goto L_08807CA4;
    case 937u: goto L_08807CB0;
    case 938u: goto L_08807CB8;
    case 939u: goto L_08807CC0;
    case 940u: goto L_08807CC4;
    case 941u: goto L_08807CCC;
    case 942u: goto L_08807CD4;
    case 943u: goto L_08807CD8;
    case 944u: goto L_08807CE0;
    case 945u: goto L_08807CF0;
    case 946u: goto L_08807CFC;
    case 947u: goto L_08807D04;
    case 948u: goto L_08807D0C;
    case 949u: goto L_08807D18;
    case 950u: goto L_08807D20;
    case 951u: goto L_08807D28;
    case 952u: goto L_08807D34;
    case 953u: goto L_08807D3C;
    case 954u: goto L_08807D44;
    case 955u: goto L_08807D48;
    case 956u: goto L_08807D50;
    case 957u: goto L_08807D58;
    case 958u: goto L_08807D5C;
    case 959u: goto L_08807D64;
    case 960u: goto L_08807D74;
    case 961u: goto L_08807D80;
    case 962u: goto L_08807D88;
    case 963u: goto L_08807D90;
    case 964u: goto L_08807D9C;
    case 965u: goto L_08807DA4;
    case 966u: goto L_08807DA8;
    case 967u: goto L_08807DAC;
    case 968u: goto L_08807DB8;
    case 969u: goto L_08807DD0;
    case 970u: goto L_08807DE0;
    case 971u: goto L_08807DE8;
    case 972u: goto L_08807DF0;
    case 973u: goto L_08807DFC;
    case 974u: goto L_08807E10;
    case 975u: goto L_08807E20;
    case 976u: goto L_08807E24;
    case 977u: goto L_08807E2C;
    case 978u: goto L_08807E34;
    case 979u: goto L_08807E3C;
    case 980u: goto L_08807E4C;
    case 981u: goto L_08807E54;
    case 982u: goto L_08807E5C;
    case 983u: goto L_08807E68;
    case 984u: goto L_08807E7C;
    case 985u: goto L_08807E8C;
    case 986u: goto L_08807E90;
    case 987u: goto L_08807E98;
    case 988u: goto L_08807EA0;
    case 989u: goto L_08807EA8;
    case 990u: goto L_08807EB8;
    case 991u: goto L_08807EC0;
    case 992u: goto L_08807EC8;
    case 993u: goto L_08807ED4;
    case 994u: goto L_08807EE8;
    case 995u: goto L_08807EF8;
    case 996u: goto L_08807EFC;
    case 997u: goto L_08807F04;
    case 998u: goto L_08807F0C;
    case 999u: goto L_08807F14;
    case 1000u: goto L_08807F24;
    case 1001u: goto L_08807F2C;
    case 1002u: goto L_08807F34;
    case 1003u: goto L_08807F40;
    case 1004u: goto L_08807F50;
    case 1005u: goto L_08807F60;
    case 1006u: goto L_08807F64;
    case 1007u: goto L_08807F6C;
    case 1008u: goto L_08807F74;
    case 1009u: goto L_08807F7C;
    case 1010u: goto L_08807F88;
    case 1011u: goto L_08807F90;
    case 1012u: goto L_08807FAC;
    case 1013u: goto L_08807FB4;
    case 1014u: goto L_08807FC4;
    case 1015u: goto L_08807FC8;
    case 1016u: goto L_08807FD8;
    case 1017u: goto L_08807FE0;
    case 1018u: goto L_08807FEC;
    case 1019u: goto L_08807FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08804000:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804010u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 117u, 0x08AB0EFCu>(ctx, &aot_mem) && ctx.pc == 0x08804010u) goto L_08804010;
    return;
L_08804010:
    ctx.gpr[4] = (256u << 16u);
    ctx.gpr[31] = (0x0880401Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 117u, 0x08AB0EFCu>(ctx, &aot_mem) && ctx.pc == 0x0880401Cu) goto L_0880401C;
    return;
L_0880401C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804028:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 189u, 0x08AA9284u>(ctx, &aot_mem) && ctx.pc == 0x08804038u) goto L_08804038;
    return;
L_08804038:
    ctx.gpr[31] = (0x08804040u);
    // nop
    goto L_08804000;
L_08804040:
    ctx.gpr[31] = (0x08804048u);
    // nop
    goto L_08804058;
L_08804048:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804058:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[5] = (2176u << 16u);
    ctx.gpr[7] = (0u | 51200u);
    ctx.gpr[6] = (0u | 60u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20628));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804088u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16696));
    ctx.pc = 0x08AB45E4u;
    return;
L_08804088:
    ctx.gpr[5] = (32770u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(400));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_08804128;
      }
      goto L_0880409C;
    }
L_0880409C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(401));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_08804128;
      }
      goto L_088040A8;
    }
L_088040A8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(404));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[16] = (32770u << 16u);
      if (branch_taken) {
          goto L_08804128;
      }
      goto L_088040B4;
    }
L_088040B4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(100));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_08804128;
      }
      goto L_088040C0;
    }
L_088040C0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(403));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_08804128;
      }
      goto L_088040CC;
    }
L_088040CC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(402));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_08804128;
      }
      goto L_088040D8;
    }
L_088040D8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(441));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08804128;
      }
      goto L_088040E4;
    }
L_088040E4:
    ctx.gpr[31] = (0x088040ECu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB4594u;
    return;
L_088040EC:
    ctx.gpr[5] = (32770u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(408));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_08804128;
      }
      goto L_08804100;
    }
L_08804100:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(407));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08804128;
      }
      goto L_0880410C;
    }
L_0880410C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[5] = (32770u << 16u);
      if (branch_taken) {
          goto L_08804128;
      }
      goto L_08804114;
    }
L_08804114:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(420));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08804128;
      }
      goto L_08804120;
    }
L_08804120:
    ctx.gpr[31] = (0x08804128u);
    // nop
    ctx.pc = 0x08AB467Cu;
    return;
L_08804128:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804138:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(21384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804164u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 508u, 0x0894B79Cu>(ctx, &aot_mem) && ctx.pc == 0x08804164u) goto L_08804164;
    return;
L_08804164:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08804174u);
    ctx.gpr[6] = (0u | 27648u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 94u, 0x089D8A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08804174u) goto L_08804174;
    return;
L_08804174:
    ctx.gpr[31] = (0x0880417Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 268u, 0x08808CF0u>(ctx, &aot_mem) && ctx.pc == 0x0880417Cu) goto L_0880417C;
    return;
L_0880417C:
    ctx.gpr[31] = (0x08804184u);
    // nop
    goto L_0880434C;
L_08804184:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_0880424C;
      }
      goto L_0880418C;
    }
L_0880418C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[31] = (0x08804198u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 73u, 0x089D8954u>(ctx, &aot_mem) && ctx.pc == 0x08804198u) goto L_08804198;
    return;
L_08804198:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 480u);
      if (branch_taken) {
          goto L_08804218;
      }
      goto L_088041A0;
    }
L_088041A0:
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(21376), ctx.gpr[4]);
    ctx.gpr[6] = (0u | 272u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(21376));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[31] = (0x088041BCu);
    ctx.gpr[4] = (0u | 1u);
    goto L_088043FC;
L_088041BC:
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(21400));
    ctx.gpr[31] = (0x088041CCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 136u, 0x0880C760u>(ctx, &aot_mem) && ctx.pc == 0x088041CCu) goto L_088041CC;
    return;
L_088041CC:
    ctx.gpr[31] = (0x088041D4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 402u, 0x08809850u>(ctx, &aot_mem) && ctx.pc == 0x088041D4u) goto L_088041D4;
    return;
L_088041D4:
    ctx.gpr[31] = (0x088041DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 64u, 0x089D87ECu>(ctx, &aot_mem) && ctx.pc == 0x088041DCu) goto L_088041DC;
    return;
L_088041DC:
    ctx.gpr[4] = (2178u << 16u);
    ctx.gpr[31] = (0x088041E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5116));
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 82u, 0x089E8700u>(ctx, &aot_mem) && ctx.pc == 0x088041E8u) goto L_088041E8;
    return;
L_088041E8:
    ctx.gpr[31] = (0x088041F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 270u, 0x08821880u>(ctx, &aot_mem) && ctx.pc == 0x088041F0u) goto L_088041F0;
    return;
L_088041F0:
    ctx.gpr[31] = (0x088041F8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 395u, 0x0880973Cu>(ctx, &aot_mem) && ctx.pc == 0x088041F8u) goto L_088041F8;
    return;
L_088041F8:
    ctx.gpr[31] = (0x08804200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 351u, 0x0896E478u>(ctx, &aot_mem) && ctx.pc == 0x08804200u) goto L_08804200;
    return;
L_08804200:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4588)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_08804280;
      }
      goto L_08804210;
    }
L_08804210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088042E4;
      }
      goto L_08804218;
    }
L_08804218:
    ctx.gpr[31] = (0x08804220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 278u, 0x08808DA0u>(ctx, &aot_mem) && ctx.pc == 0x08804220u) goto L_08804220;
    return;
L_08804220:
    ctx.gpr[31] = (0x08804228u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 89u, 0x089D8A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08804228u) goto L_08804228;
    return;
L_08804228:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_0880424C:
    ctx.gpr[31] = (0x08804254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 278u, 0x08808DA0u>(ctx, &aot_mem) && ctx.pc == 0x08804254u) goto L_08804254;
    return;
L_08804254:
    ctx.gpr[31] = (0x0880425Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 89u, 0x089D8A3Cu>(ctx, &aot_mem) && ctx.pc == 0x0880425Cu) goto L_0880425C;
    return;
L_0880425C:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08804280:
    ctx.gpr[16] = (2221u << 16u);
    goto L_08804284;
L_08804284:
    ctx.gpr[31] = (0x0880428Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 144u, 0x0880C830u>(ctx, &aot_mem) && ctx.pc == 0x0880428Cu) goto L_0880428C;
    return;
L_0880428C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[31] = (0x08804298u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 424u, 0x088220ECu>(ctx, &aot_mem) && ctx.pc == 0x08804298u) goto L_08804298;
    return;
L_08804298:
    ctx.gpr[31] = (0x088042A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 999u, 0x0881FEF8u>(ctx, &aot_mem) && ctx.pc == 0x088042A0u) goto L_088042A0;
    return;
L_088042A0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088042B0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 358u, 0x0896E4D4u>(ctx, &aot_mem) && ctx.pc == 0x088042B0u) goto L_088042B0;
    return;
L_088042B0:
    ctx.gpr[31] = (0x088042B8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088060E4;
L_088042B8:
    ctx.gpr[31] = (0x088042C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 693u, 0x0881EC34u>(ctx, &aot_mem) && ctx.pc == 0x088042C0u) goto L_088042C0;
    return;
L_088042C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4576)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4588)));
        goto L_088042DC;
    }
    goto L_088042CC;
L_088042CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4576), 0u);
    ctx.gpr[31] = (0x088042D8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 555u, 0x0880A5E8u>(ctx, &aot_mem) && ctx.pc == 0x088042D8u) goto L_088042D8;
    return;
L_088042D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4588)));
    goto L_088042DC;
L_088042DC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08804284;
      }
      goto L_088042E4;
    }
L_088042E4:
    ctx.gpr[31] = (0x088042ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 333u, 0x08821CD8u>(ctx, &aot_mem) && ctx.pc == 0x088042ECu) goto L_088042EC;
    return;
L_088042EC:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x088042F8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08806C7C;
L_088042F8:
    ctx.gpr[31] = (0x08804300u);
    ctx.gpr[4] = (0u | 2u);
    goto L_08806030;
L_08804300:
    ctx.gpr[31] = (0x08804308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 353u, 0x0896E494u>(ctx, &aot_mem) && ctx.pc == 0x08804308u) goto L_08804308;
    return;
L_08804308:
    ctx.gpr[31] = (0x08804310u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 387u, 0x08809678u>(ctx, &aot_mem) && ctx.pc == 0x08804310u) goto L_08804310;
    return;
L_08804310:
    ctx.gpr[31] = (0x08804318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 411u, 0x088098D8u>(ctx, &aot_mem) && ctx.pc == 0x08804318u) goto L_08804318;
    return;
L_08804318:
    ctx.gpr[31] = (0x08804320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 278u, 0x08808DA0u>(ctx, &aot_mem) && ctx.pc == 0x08804320u) goto L_08804320;
    return;
L_08804320:
    ctx.gpr[31] = (0x08804328u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB4634u;
    return;
L_08804328:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_0880434C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880435Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 322u, 0x089BEB80u>(ctx, &aot_mem) && ctx.pc == 0x0880435Cu) goto L_0880435C;
    return;
L_0880435C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088043EC;
      }
      goto L_08804364;
    }
L_08804364:
    ctx.gpr[31] = (0x0880436Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 411u, 0x0899B600u>(ctx, &aot_mem) && ctx.pc == 0x0880436Cu) goto L_0880436C;
    return;
L_0880436C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088043EC;
      }
      goto L_08804374;
    }
L_08804374:
    ctx.gpr[31] = (0x0880437Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 434u, 0x089AA910u>(ctx, &aot_mem) && ctx.pc == 0x0880437Cu) goto L_0880437C;
    return;
L_0880437C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088043EC;
      }
      goto L_08804384;
    }
L_08804384:
    ctx.gpr[31] = (0x0880438Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 256u, 0x089A5788u>(ctx, &aot_mem) && ctx.pc == 0x0880438Cu) goto L_0880438C;
    return;
L_0880438C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088043EC;
      }
      goto L_08804394;
    }
L_08804394:
    ctx.gpr[31] = (0x0880439Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 63u, 0x089A48C0u>(ctx, &aot_mem) && ctx.pc == 0x0880439Cu) goto L_0880439C;
    return;
L_0880439C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088043EC;
      }
      goto L_088043A4;
    }
L_088043A4:
    ctx.gpr[31] = (0x088043ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 82u, 0x089AD3D4u>(ctx, &aot_mem) && ctx.pc == 0x088043ACu) goto L_088043AC;
    return;
L_088043AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088043EC;
      }
      goto L_088043B4;
    }
L_088043B4:
    ctx.gpr[31] = (0x088043BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 245u, 0x089A18E4u>(ctx, &aot_mem) && ctx.pc == 0x088043BCu) goto L_088043BC;
    return;
L_088043BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088043EC;
      }
      goto L_088043C4;
    }
L_088043C4:
    ctx.gpr[31] = (0x088043CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 111u, 0x0899CF84u>(ctx, &aot_mem) && ctx.pc == 0x088043CCu) goto L_088043CC;
    return;
L_088043CC:
    ctx.gpr[31] = (0x088043D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 48u, 0x0897CA14u>(ctx, &aot_mem) && ctx.pc == 0x088043D4u) goto L_088043D4;
    return;
L_088043D4:
    ctx.gpr[31] = (0x088043DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 120u, 0x0897D700u>(ctx, &aot_mem) && ctx.pc == 0x088043DCu) goto L_088043DC;
    return;
L_088043DC:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088043EC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088043FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088044A0;
      }
      goto L_08804424;
    }
L_08804424:
    ctx.gpr[31] = (0x0880442Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 49u, 0x089D852Cu>(ctx, &aot_mem) && ctx.pc == 0x0880442Cu) goto L_0880442C;
    return;
L_0880442C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
      if (branch_taken) {
          goto L_088044A0;
      }
      goto L_08804440;
    }
L_08804440:
    ctx.gpr[18] = (0u | 480u);
    ctx.gpr[17] = (0u | 272u);
    ctx.gpr[16] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08804450;
L_08804450:
    ctx.gpr[31] = (0x08804458u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 53u, 0x089D857Cu>(ctx, &aot_mem) && ctx.pc == 0x08804458u) goto L_08804458;
    return;
L_08804458:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08804494;
    }
    goto L_08804460;
L_08804460:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08804494;
    }
    goto L_0880446C;
L_0880446C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08804494;
    }
    goto L_08804478;
L_08804478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08804494;
      }
      goto L_08804484;
    }
L_08804484:
    ctx.gpr[31] = (0x0880448Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 60u, 0x089D8618u>(ctx, &aot_mem) && ctx.pc == 0x0880448Cu) goto L_0880448C;
    return;
L_0880448C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088044A0;
      }
      goto L_08804494;
    }
L_08804494:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08804450;
      }
      goto L_088044A0;
    }
L_088044A0:
    ctx.gpr[31] = (0x088044A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 56u, 0x089D85C8u>(ctx, &aot_mem) && ctx.pc == 0x088044A8u) goto L_088044A8;
    return;
L_088044A8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088044B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 53u, 0x089D857Cu>(ctx, &aot_mem) && ctx.pc == 0x088044B4u) goto L_088044B4;
    return;
L_088044B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(21376), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(21376));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088044F4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4608)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4604), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804508:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880452Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 443u, 0x0884DBC4u>(ctx, &aot_mem) && ctx.pc == 0x0880452Cu) goto L_0880452C;
    return;
L_0880452C:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 396u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08804544u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08804544u) goto L_08804544;
    return;
L_08804544:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0880455Cu);
    ctx.gpr[6] = (0u | 396u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0880455Cu) goto L_0880455C;
    return;
L_0880455C:
    ctx.gpr[31] = (0x08804564u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08804BF0;
L_08804564:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08804570u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    goto L_08805BE4;
L_08804570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 256u);
      if (branch_taken) {
          goto L_088045C4;
      }
      goto L_08804580;
    }
L_08804580:
    ctx.gpr[5] = (0u | 512u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(320), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (0u | 272u);
    ctx.gpr[31] = (0x08804598u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(324), ctx.gpr[5]);
    ctx.pc = 0x08AB4494u;
    return;
L_08804598:
    ctx.gpr[4] = (9u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(240), ctx.gpr[4]);
    ctx.gpr[4] = (17u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
      if (branch_taken) {
          goto L_088045D8;
      }
      goto L_088045C4;
    }
L_088045C4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(320), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (0u | 160u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(324), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    goto L_088045D8;
L_088045D8:
    ctx.gpr[5] = (0u | 61u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_088045FC;
      }
      goto L_088045F0;
    }
L_088045F0:
    ctx.gpr[31] = (0x088045F8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 395u, 0x0880973Cu>(ctx, &aot_mem) && ctx.pc == 0x088045F8u) goto L_088045F8;
    return;
L_088045F8:
    ctx.gpr[19] = (0u | 0u);
    goto L_088045FC;
L_088045FC:
    ctx.gpr[18] = (0u | 0u);
    goto L_08804600;
L_08804600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[5] = (0u | 192u);
    ctx.gpr[4] = (ctx.lo);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08804628u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08804628u) goto L_08804628;
    return;
L_08804628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(248), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[31] = (0x0880465Cu);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0880465Cu) goto L_0880465C;
    return;
L_0880465C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08804600;
      }
      goto L_0880466C;
    }
L_0880466C:
    ctx.gpr[31] = (0x08804674u);
    // nop
    goto L_08804D98;
L_08804674:
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[5] = (2176u << 16u);
    ctx.gpr[6] = (0u | 23u);
    ctx.gpr[7] = (0u | 1024u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20736));
    ctx.gpr[31] = (0x08804698u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21124));
    ctx.pc = 0x08AB45E4u;
    return;
L_08804698:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(352), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088046B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.pc = 0x08AB4594u;
    return;
L_088046B4:
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[5] = (2176u << 16u);
    ctx.gpr[6] = (0u | 21u);
    ctx.gpr[7] = (0u | 1024u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20756));
    ctx.gpr[31] = (0x088046D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21420));
    ctx.pc = 0x08AB45E4u;
    return;
L_088046D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(356), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088046F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(356)));
    ctx.pc = 0x08AB4594u;
    return;
L_088046F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 256u);
      if (branch_taken) {
          goto L_0880474C;
      }
      goto L_08804704;
    }
L_08804704:
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[5] = (2176u << 16u);
    ctx.gpr[6] = (0u | 64u);
    ctx.gpr[7] = (0u | 1024u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20776));
    ctx.gpr[31] = (0x08804728u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21756));
    ctx.pc = 0x08AB45E4u;
    return;
L_08804728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(360), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08804744u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(360)));
    ctx.pc = 0x08AB4594u;
    return;
L_08804744:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08804774;
      }
      goto L_0880474C;
    }
L_0880474C:
    ctx.gpr[5] = (0u | 256u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[31] = (0x0880475Cu);
    ctx.gpr[7] = (0u | 1285u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 26u, 0x089DC6A0u>(ctx, &aot_mem) && ctx.pc == 0x0880475Cu) goto L_0880475C;
    return;
L_0880475C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(388), ctx.gpr[5]);
    goto L_08804774;
L_08804774:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804790:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(352)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(332), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088047C8u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.pc = 0x08AB4564u;
    return;
L_088047C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[31] = (0x088047D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(352)));
    ctx.pc = 0x08AB45C4u;
    return;
L_088047D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088047E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(356)));
    ctx.pc = 0x08AB4564u;
    return;
L_088047E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[31] = (0x088047F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(356)));
    ctx.pc = 0x08AB45C4u;
    return;
L_088047F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_08804820;
      }
      goto L_08804800;
    }
L_08804800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(360)));
    ctx.gpr[31] = (0x0880480Cu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08AB4564u;
    return;
L_0880480C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[31] = (0x08804818u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(360)));
    ctx.pc = 0x08AB45C4u;
    return;
L_08804818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880483C;
      }
      goto L_08804820;
    }
L_08804820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(388)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(236)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[31] = (0x0880483Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(236)));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 5u, 0x089DC2C8u>(ctx, &aot_mem) && ctx.pc == 0x0880483Cu) goto L_0880483C;
    return;
L_0880483C:
    ctx.gpr[31] = (0x08804844u);
    // nop
    goto L_08805BB0;
L_08804844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    goto L_08804858;
L_08804858:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08804868u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08804868u) goto L_08804868;
    return;
L_08804868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(248), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08804884u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08804884u) goto L_08804884;
    return;
L_08804884:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
      if (branch_taken) {
          goto L_08804858;
      }
      goto L_088048A8;
    }
L_088048A8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088048B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(200)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088048B4u) goto L_088048B4;
    return;
L_088048B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x088048C4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), 0u);
    ctx.pc = 0x08AB40ECu;
    return;
L_088048C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088048D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088048D8u) goto L_088048D8;
    return;
L_088048D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x088048E8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    ctx.pc = 0x08AB409Cu;
    return;
L_088048E8:
    ctx.gpr[31] = (0x088048F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.pc = 0x08AB40A4u;
    return;
L_088048F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[31] = (0x088048FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.pc = 0x08AB4074u;
    return;
L_088048FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08804910u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08804910u) goto L_08804910;
    return;
L_08804910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(176), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08804928u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08804928u) goto L_08804928;
    return;
L_08804928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[31] = (0x08804934u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(172), 0u);
    ctx.pc = 0x08AB40C4u;
    return;
L_08804934:
    ctx.gpr[31] = (0x0880493Cu);
    // nop
    goto L_08804FE0;
L_0880493C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08804958;
      }
      goto L_0880494C;
    }
L_0880494C:
    ctx.gpr[31] = (0x08804954u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 387u, 0x08809678u>(ctx, &aot_mem) && ctx.pc == 0x08804954u) goto L_08804954;
    return;
L_08804954:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    goto L_08804958;
L_08804958:
    ctx.gpr[31] = (0x08804960u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(336)));
    ctx.pc = 0x08AB45A4u;
    return;
L_08804960:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[31] = (0x0880496Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.pc = 0x08AB45A4u;
    return;
L_0880496C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0880497Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880497Cu) goto L_0880497C;
    return;
L_0880497C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560), 0u);
    ctx.gpr[31] = (0x08804988u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 443u, 0x0884DBC4u>(ctx, &aot_mem) && ctx.pc == 0x08804988u) goto L_08804988;
    return;
L_08804988:
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
L_088049A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088049B4u);
    // nop
    goto L_08805CA4;
L_088049B4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[2] = (0u | 4u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(332)));
        goto L_088049C8;
    }
    goto L_088049C8;
L_088049C8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088049D4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4560)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_088049F8;
      }
      goto L_088049E4;
    }
L_088049E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_088049F4;
    }
    goto L_088049F4;
L_088049F4:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_088049F8;
L_088049F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804A00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
        goto L_08804A34;
    }
    goto L_08804A24;
L_08804A24:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08804A34;
      }
      goto L_08804A34;
    }
L_08804A34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
        goto L_08804AA8;
    }
    goto L_08804A40;
L_08804A40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08804B34;
      }
      goto L_08804A4C;
    }
L_08804A4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08804A5Cu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB45ECu;
    return;
L_08804A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(340), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08804A7Cu);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08AB45CCu;
    return;
L_08804A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[5] = (0u - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08804A9C;
      }
      goto L_08804A90;
    }
L_08804A90:
    ctx.gpr[16] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08804AA0;
      }
      goto L_08804A9C;
    }
L_08804A9C:
    ctx.gpr[16] = (ctx.gpr[16] & 3u);
    goto L_08804AA0;
L_08804AA0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(344), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08804B34;
      }
      goto L_08804AA8;
    }
L_08804AA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08804B34;
      }
      goto L_08804AB4;
    }
L_08804AB4:
    ctx.gpr[31] = (0x08804ABCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.pc = 0x08AB40DCu;
    return;
L_08804ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08804B34;
      }
      goto L_08804ACC;
    }
L_08804ACC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08804B34;
      }
      goto L_08804ADC;
    }
L_08804ADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08804AECu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB45ECu;
    return;
L_08804AEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(340), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08804B0Cu);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08AB45CCu;
    return;
L_08804B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[5] = (0u - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08804B2C;
      }
      goto L_08804B20;
    }
L_08804B20:
    ctx.gpr[16] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08804B30;
      }
      goto L_08804B2C;
    }
L_08804B2C:
    ctx.gpr[16] = (ctx.gpr[16] & 3u);
    goto L_08804B30;
L_08804B30:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(344), ctx.gpr[16]);
    goto L_08804B34;
L_08804B34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804B44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08804BCC;
      }
      goto L_08804B64;
    }
L_08804B64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(368)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(372)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08804BCC;
      }
      goto L_08804B78;
    }
L_08804B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08804B88u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB45ECu;
    return;
L_08804B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08804BB4;
      }
      goto L_08804BA4;
    }
L_08804BA4:
    ctx.gpr[5] = (0u - ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08804BB8;
      }
      goto L_08804BB4;
    }
L_08804BB4:
    ctx.gpr[16] = (ctx.gpr[16] & 3u);
    goto L_08804BB8;
L_08804BB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08804BCCu);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08AB45CCu;
    return;
L_08804BCC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804BDC:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (0u | 3u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(332), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804BF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(152), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(328), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(332), 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(280), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(284), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(352), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(356), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(392), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(344), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(348), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(340), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804CB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20796));
    ctx.pc = 0x08AB4554u;
    return;
L_08804CB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(336), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(192), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08804CECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20824));
    ctx.pc = 0x08AB4554u;
    return;
L_08804CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(376), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(380), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(384), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(393), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (18176u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08804D48;
      }
      goto L_08804D40;
    }
L_08804D40:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08804D84;
      }
      goto L_08804D48;
    }
L_08804D48:
    ctx.gpr[31] = (0x08804D50u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 509u, 0x088427C0u>(ctx, &aot_mem) && ctx.pc == 0x08804D50u) goto L_08804D50;
    return;
L_08804D50:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08804D84;
L_08804D84:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804D98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804DB4u);
    // nop
    ctx.pc = 0x08AB40B4u;
    return;
L_08804DB4:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[31] = (0x08804DC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.pc = 0x08AB40F4u;
    return;
L_08804DC4:
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08804DE0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08804DE0u) goto L_08804DE0;
    return;
L_08804DE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08804DF0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
    ctx.pc = 0x08AB40E4u;
    return;
L_08804DF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08804E08u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08804E08u) goto L_08804E08;
    return;
L_08804E08:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(172)));
    ctx.gpr[8] = (2176u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08804E30u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(20104));
    ctx.pc = 0x08AB408Cu;
    return;
L_08804E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08804E50u);
    ctx.gpr[10] = (0u | 0u);
    ctx.pc = 0x08AB40FCu;
    return;
L_08804E50:
    ctx.gpr[31] = (0x08804E58u);
    // nop
    goto L_08804F34;
L_08804E58:
    ctx.gpr[31] = (0x08804E60u);
    // nop
    goto L_08805010;
L_08804E60:
    ctx.gpr[31] = (0x08804E68u);
    // nop
    goto L_0880510C;
L_08804E68:
    ctx.gpr[31] = (0x08804E70u);
    // nop
    goto L_08805158;
L_08804E70:
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
L_08804E88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] << 11u);
    ctx.gpr[6] = (0u + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804EA8u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    ctx.pc = 0x08AB476Cu;
    return;
L_08804EA8:
    ctx.gpr[5] = (32801u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_08804EE8;
      }
      goto L_08804EBC;
    }
L_08804EBC:
    ctx.gpr[5] = (32801u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_08804EE8;
      }
      goto L_08804ECC;
    }
L_08804ECC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] & 2047u);
        goto L_08804F04;
    }
    goto L_08804ED8;
L_08804ED8:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 2047u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08804F04;
      }
      goto L_08804EE8;
    }
L_08804EE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(393), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804F04:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 11u));
      if (branch_taken) {
          goto L_08804F1C;
      }
      goto L_08804F0C;
    }
L_08804F0C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804F1C:
    ctx.gpr[5] = (ctx.gpr[5] >> 21u);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 11u));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804F34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[31] = (0x08804F58u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08804F58u) goto L_08804F58;
    return;
L_08804F58:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4552)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4548)));
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x08804F84u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20852));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08804F84u) goto L_08804F84;
    return;
L_08804F84:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08804F94u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB478Cu;
    return;
L_08804F94:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08804FA8;
      }
      goto L_08804FA0;
    }
L_08804FA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
      if (branch_taken) {
          goto L_08804FC8;
      }
      goto L_08804FA8;
    }
L_08804FA8:
    ctx.gpr[31] = (0x08804FB0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.pc = 0x08AB47F4u;
    return;
L_08804FB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
      if (branch_taken) {
          goto L_08804FC8;
      }
      goto L_08804FBC;
    }
L_08804FBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    goto L_08804FC8;
L_08804FC8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08804FE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08805004;
      }
      goto L_08804FFC;
    }
L_08804FFC:
    ctx.gpr[31] = (0x08805004u);
    // nop
    ctx.pc = 0x08AB4784u;
    return;
L_08805004:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805010:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[18] = (2222u << 16u);
      if (branch_taken) {
          goto L_088050F0;
      }
      goto L_0880503C;
    }
L_0880503C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 2048u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08805050u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08805050u) goto L_08805050;
    return;
L_08805050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4524)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4528)));
    ctx.gpr[31] = (0x08805070u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08AB47E4u;
    return;
L_08805070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (0u | 2048u);
    ctx.gpr[31] = (0x08805088u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB4794u;
    return;
L_08805088:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0880509C;
      }
      goto L_08805090;
    }
L_08805090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_088050AC;
      }
      goto L_0880509C;
    }
L_0880509C:
    ctx.gpr[31] = (0x088050A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB47F4u;
    return;
L_088050A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    goto L_088050AC;
L_088050AC:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088050B8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08AB4084u;
    return;
L_088050B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088050C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(148));
    ctx.pc = 0x08AB40ACu;
    return;
L_088050C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x088050E0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = 0x08AB47E4u;
    return;
L_088050E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088050F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088050F0u) goto L_088050F0;
    return;
L_088050F0:
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
L_0880510C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880512Cu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB4094u;
    return;
L_0880512C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[31] = (0x08805140u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB4094u;
    return;
L_08805140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805158:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0880517Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.pc = 0x08AB40CCu;
    return;
L_0880517C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08805190u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.pc = 0x08AB407Cu;
    return;
L_08805190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(132), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088051B8u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.pc = 0x08AB410Cu;
    return;
L_088051B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088051D0u);
    ctx.gpr[5] = (0u | 194u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088051D0u) goto L_088051D0;
    return;
L_088051D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[31] = (0x088051E4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.pc = 0x08AB407Cu;
    return;
L_088051E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(136), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(140), ctx.gpr[7]);
    ctx.gpr[31] = (0x08805204u);
    ctx.gpr[5] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 516u, 0x08AAEE50u>(ctx, &aot_mem) && ctx.pc == 0x08805204u) goto L_08805204;
    return;
L_08805204:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08805210u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 535u, 0x08AAF2A4u>(ctx, &aot_mem) && ctx.pc == 0x08805210u) goto L_08805210;
    return;
L_08805210:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (0u | 0u);
    goto L_0880521C;
L_0880521C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0880522Cu);
    ctx.gpr[5] = (0u | 194u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0880522Cu) goto L_0880522C;
    return;
L_0880522C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), ctx.gpr[2]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0880521C;
      }
      goto L_0880524C;
    }
L_0880524C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(220), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08805260u);
    ctx.gpr[5] = (0u | 194u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08805260u) goto L_08805260;
    return;
L_08805260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
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
L_08805284:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088052A8u);
    // nop
    goto L_08805A80;
L_088052A8:
    ctx.gpr[31] = (0x088052B0u);
    // nop
    goto L_08805AF8;
L_088052B0:
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[19] = (0u | 2u);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(332)));
    goto L_088052CC;
L_088052CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088052DC;
      }
      goto L_088052D4;
    }
L_088052D4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0880535C;
      }
      goto L_088052DC;
    }
L_088052DC:
    ctx.gpr[31] = (0x088052E4u);
    // nop
    goto L_088059A0;
L_088052E4:
    ctx.gpr[31] = (0x088052ECu);
    // nop
    goto L_08805678;
L_088052EC:
    ctx.gpr[31] = (0x088052F4u);
    // nop
    goto L_0880586C;
L_088052F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08805330;
      }
      goto L_08805308;
    }
L_08805308:
    ctx.gpr[31] = (0x08805310u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.pc = 0x08AB40DCu;
    return;
L_08805310:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08805330;
      }
      goto L_08805320;
    }
L_08805320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08805330;
      }
      goto L_0880532C;
    }
L_0880532C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(376), ctx.gpr[18]);
    goto L_08805330;
L_08805330:
    ctx.gpr[31] = (0x08805338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 157u, 0x0884CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08805338u) goto L_08805338;
    return;
L_08805338:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4560)));
      if (branch_taken) {
          goto L_08805358;
      }
      goto L_08805340;
    }
L_08805340:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(393)));
    if (ctx.gpr[4] == ctx.gpr[17]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(376), ctx.gpr[18]);
        goto L_0880535C;
    }
    goto L_0880534C;
L_0880534C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0880535C;
      }
      goto L_08805358;
    }
L_08805358:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(376), ctx.gpr[18]);
    goto L_0880535C;
L_0880535C:
    ctx.gpr[31] = (0x08805364u);
    ctx.gpr[4] = (0u | 100u);
    ctx.pc = 0x08AB469Cu;
    return;
L_08805364:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(332)));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(376), ctx.gpr[16]);
        goto L_08805380;
    }
    goto L_08805374;
L_08805374:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088052CC;
      }
      goto L_0880537C;
    }
L_0880537C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(376), ctx.gpr[16]);
    goto L_08805380;
L_08805380:
    ctx.gpr[31] = (0x08805388u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB468Cu;
    return;
L_08805388:
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
L_088053AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 2u);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(332)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_088053E4;
L_088053E4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08805480;
      }
      goto L_088053EC;
    }
L_088053EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
        goto L_0880544C;
    }
    goto L_088053F8;
L_088053F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(220)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0880541Cu);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0880541Cu) goto L_0880541C;
    return;
L_0880541C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4560)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0880543Cu);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 522u, 0x08AAEF90u>(ctx, &aot_mem) && ctx.pc == 0x0880543Cu) goto L_0880543C;
    return;
L_0880543C:
    ctx.gpr[31] = (0x08805444u);
    // nop
    goto L_08804B44;
L_08805444:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    goto L_0880544C;
L_0880544C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08805480;
      }
      goto L_08805458;
    }
L_08805458:
    ctx.gpr[31] = (0x08805460u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.pc = 0x08AB40DCu;
    return;
L_08805460:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08805480;
      }
      goto L_08805470;
    }
L_08805470:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08805480;
      }
      goto L_0880547C;
    }
L_0880547C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(380), ctx.gpr[18]);
    goto L_08805480;
L_08805480:
    ctx.gpr[31] = (0x08805488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 157u, 0x0884CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08805488u) goto L_08805488;
    return;
L_08805488:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4560)));
      if (branch_taken) {
          goto L_088054A8;
      }
      goto L_08805490;
    }
L_08805490:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(393)));
    if (ctx.gpr[4] == ctx.gpr[17]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(380), ctx.gpr[18]);
        goto L_088054AC;
    }
    goto L_0880549C;
L_0880549C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_088054AC;
      }
      goto L_088054A8;
    }
L_088054A8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(380), ctx.gpr[18]);
    goto L_088054AC;
L_088054AC:
    ctx.gpr[31] = (0x088054B4u);
    ctx.gpr[4] = (0u | 100u);
    ctx.pc = 0x08AB469Cu;
    return;
L_088054B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(332)));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(380), ctx.gpr[16]);
        goto L_088054D0;
    }
    goto L_088054C4;
L_088054C4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088053E4;
      }
      goto L_088054CC;
    }
L_088054CC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(380), ctx.gpr[16]);
    goto L_088054D0;
L_088054D0:
    ctx.gpr[31] = (0x088054D8u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB468Cu;
    return;
L_088054D8:
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
L_088054FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 4u);
      if (branch_taken) {
          goto L_08805644;
      }
      goto L_08805530;
    }
L_08805530:
    ctx.gpr[19] = (9u << 16u);
    ctx.gpr[20] = (0u | 2u);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(332)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-32768));
    goto L_08805548;
L_08805548:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08805604;
      }
      goto L_08805550;
    }
L_08805550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(340)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
        goto L_088055D0;
    }
    goto L_0880555C;
L_0880555C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(344)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(240)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(248)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x0880557Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08AB4404u;
    return;
L_0880557C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(240)));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08805594u);
    ctx.gpr[7] = (0u | 1u);
    ctx.pc = 0x08AB44A4u;
    return;
L_08805594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(240)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    ctx.gpr[31] = (0x088055ACu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(240), ctx.gpr[6]);
    goto L_08804A00;
L_088055AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(364)));
    ctx.gpr[6] = (0u | 33u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088055C8u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08AB45DCu;
    return;
L_088055C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(152)));
    goto L_088055D0;
L_088055D0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08805604;
      }
      goto L_088055DC;
    }
L_088055DC:
    ctx.gpr[31] = (0x088055E4u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.pc = 0x08AB40DCu;
    return;
L_088055E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08805604;
      }
      goto L_088055F4;
    }
L_088055F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08805604;
      }
      goto L_08805600;
    }
L_08805600:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(384), ctx.gpr[18]);
    goto L_08805604;
L_08805604:
    ctx.gpr[31] = (0x0880560Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 157u, 0x0884CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x0880560Cu) goto L_0880560C;
    return;
L_0880560C:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-4560)));
      if (branch_taken) {
          goto L_0880562C;
      }
      goto L_08805614;
    }
L_08805614:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(393)));
    if (ctx.gpr[4] == ctx.gpr[17]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(384), ctx.gpr[18]);
        goto L_08805630;
    }
    goto L_08805620;
L_08805620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(112)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(332)));
        goto L_08805634;
    }
    goto L_0880562C;
L_0880562C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(384), ctx.gpr[18]);
    goto L_08805630;
L_08805630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(332)));
    goto L_08805634;
L_08805634:
    if (ctx.gpr[4] == ctx.gpr[18]) {
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(384), ctx.gpr[16]);
        goto L_08805648;
    }
    goto L_0880563C;
L_0880563C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08805548;
      }
      goto L_08805644;
    }
L_08805644:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(384), ctx.gpr[16]);
    goto L_08805648;
L_08805648:
    ctx.gpr[31] = (0x08805650u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08AB468Cu;
    return;
L_08805650:
    ctx.gpr[2] = (0u | 0u);
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
L_08805678:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(340)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08805854;
      }
      goto L_088056A0;
    }
L_088056A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(348)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
        goto L_088056C0;
    }
    goto L_088056B0;
L_088056B0:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_088056C0;
      }
      goto L_088056C0;
    }
L_088056C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(344)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08805854;
      }
      goto L_088056CC;
    }
L_088056CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x088056E8u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = 0x08AB4114u;
    return;
L_088056E8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[4] = (32866u << 16u);
      if (branch_taken) {
          goto L_08805838;
      }
      goto L_088056F4;
    }
L_088056F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(248));
    ctx.gpr[31] = (0x08805720u);
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    ctx.pc = 0x08AB406Cu;
    return;
L_08805720:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4560)));
      if (branch_taken) {
          goto L_08805734;
      }
      goto L_08805728;
    }
L_08805728:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(332), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08805830;
      }
      goto L_08805734;
    }
L_08805734:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(332)));
        goto L_088057B8;
    }
    goto L_08805740;
L_08805740:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[9] = (0u | 255u);
      if (branch_taken) {
          goto L_088057B4;
      }
      goto L_08805754;
    }
L_08805754:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.gpr[10] = (0u | 0u);
    goto L_0880575C;
L_0880575C:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
        goto L_088057A8;
    }
    goto L_0880576C;
L_0880576C:
    ctx.gpr[7] = (0u | 0u);
    goto L_08805770;
L_08805770:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(248)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08805770;
      }
      goto L_088057A0;
    }
L_088057A0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(324)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_088057A8;
L_088057A8:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1024));
      if (branch_taken) {
          goto L_0880575C;
      }
      goto L_088057B4;
    }
L_088057B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(332)));
    goto L_088057B8;
L_088057B8:
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_088057D0;
      }
      goto L_088057C4;
    }
L_088057C4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_088057D0;
      }
      goto L_088057CC;
    }
L_088057CC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(332), ctx.gpr[5]);
    goto L_088057D0;
L_088057D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x088057E0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB45ECu;
    return;
L_088057E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(348)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[5] = (0u - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08805800;
      }
      goto L_088057F4;
    }
L_088057F4:
    ctx.gpr[17] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u - ctx.gpr[17]);
      if (branch_taken) {
          goto L_08805804;
      }
      goto L_08805800;
    }
L_08805800:
    ctx.gpr[17] = (ctx.gpr[17] & 3u);
    goto L_08805804;
L_08805804:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(368)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(348), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(340), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(368), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08805830u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08AB45CCu;
    return;
L_08805830:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08805854;
      }
      goto L_08805838;
    }
L_08805838:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32767));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08805854;
      }
      goto L_08805844;
    }
L_08805844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(332), ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    goto L_08805854;
L_08805854:
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
L_0880586C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08805988;
      }
      goto L_08805894;
    }
L_08805894:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (0x088058A4u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.pc = 0x08AB4104u;
    return;
L_088058A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (32866u << 16u);
      if (branch_taken) {
          goto L_0880596C;
      }
      goto L_088058B0;
    }
L_088058B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(204)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x088058DCu);
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.pc = 0x08AB40BCu;
    return;
L_088058DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
      if (branch_taken) {
          goto L_088058F0;
      }
      goto L_088058E4;
    }
L_088058E4:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(332), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08805988;
      }
      goto L_088058F0;
    }
L_088058F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[5] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
        goto L_08805908;
    }
    goto L_08805900;
L_08805900:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(224), 0u);
      if (branch_taken) {
          goto L_08805988;
      }
      goto L_08805908;
    }
L_08805908:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08805914u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08AB45ECu;
    return;
L_08805914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
        goto L_08805944;
    }
    goto L_08805934;
L_08805934:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08805944;
      }
      goto L_08805944;
    }
L_08805944:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08805958u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08AB45CCu;
    return;
L_08805958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(372)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(372), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08805988;
      }
      goto L_0880596C;
    }
L_0880596C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32767));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08805988;
      }
      goto L_08805978;
    }
L_08805978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(332), ctx.gpr[5]);
    ctx.gpr[17] = (0u | 1u);
    goto L_08805988;
L_08805988:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088059A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08805A14;
      }
      goto L_088059CC;
    }
L_088059CC:
    ctx.gpr[31] = (0x088059D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.pc = 0x08AB40DCu;
    return;
L_088059D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088059F4;
      }
      goto L_088059E0;
    }
L_088059E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[31] = (0x088059F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.pc = 0x08AB40D4u;
    return;
L_088059F0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088059F4;
L_088059F4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08805A14;
      }
      goto L_088059FC;
    }
L_088059FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (ctx.gpr[17] << 11u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    goto L_08805A14;
L_08805A14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805A28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(392)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(392), static_cast<std::uint8_t>(0u));
        goto L_08805A6C;
    }
    goto L_08805A50;
L_08805A50:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(364), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[31] = (0x08805A60u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08AB4694u;
    return;
L_08805A60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(392), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08805A6C;
      }
      goto L_08805A6C;
    }
L_08805A6C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805A80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(228), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08805ABCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20860));
    ctx.pc = 0x08AB45F4u;
    return;
L_08805ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(364), ctx.gpr[2]);
    ctx.gpr[31] = (0x08805AD0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08AB463Cu;
    return;
L_08805AD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(364)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (2176u << 16u);
    ctx.gpr[31] = (0x08805AE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23080));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 236u, 0x08AACEE8u>(ctx, &aot_mem) && ctx.pc == 0x08805AE8u) goto L_08805AE8;
    return;
L_08805AE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805AF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    goto L_08805B10;
L_08805B10:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08805BA0;
      }
      goto L_08805B18;
    }
L_08805B18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08805BA0;
      }
      goto L_08805B2C;
    }
L_08805B2C:
    ctx.gpr[31] = (0x08805B34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.pc = 0x08AB40DCu;
    return;
L_08805B34:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08805BA0;
      }
      goto L_08805B40;
    }
L_08805B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08805B68;
      }
      goto L_08805B50;
    }
L_08805B50:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08805B5Cu);
    ctx.gpr[5] = (0u | 128u);
    ctx.pc = 0x08AB40D4u;
    return;
L_08805B5C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
      if (branch_taken) {
          goto L_08805B7C;
      }
      goto L_08805B68;
    }
L_08805B68:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08805B74u);
    ctx.gpr[5] = (0u | 128u);
    ctx.pc = 0x08AB40D4u;
    return;
L_08805B74:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    goto L_08805B7C;
L_08805B7C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08805B98;
      }
      goto L_08805B84;
    }
L_08805B84:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[5] << 11u);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    goto L_08805B98;
L_08805B98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08805B10;
      }
      goto L_08805BA0;
    }
L_08805BA0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805BB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08805BC8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 236u, 0x08AACEE8u>(ctx, &aot_mem) && ctx.pc == 0x08805BC8u) goto L_08805BC8;
    return;
L_08805BC8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[31] = (0x08805BD8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(364)));
    ctx.pc = 0x08AB4584u;
    return;
L_08805BD8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805BE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08805C44;
      }
      goto L_08805C04;
    }
L_08805C04:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4544));
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(288));
    ctx.gpr[31] = (0x08805C2Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08805C2Cu) goto L_08805C2C;
    return;
L_08805C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08805C3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(288));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x08805C3Cu) goto L_08805C3C;
    return;
L_08805C3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08805C90;
      }
      goto L_08805C44;
    }
L_08805C44:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (2221u << 16u);
      if (branch_taken) {
          goto L_08805C60;
      }
      goto L_08805C50;
    }
L_08805C50:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08805C90;
      }
      goto L_08805C5C;
    }
L_08805C5C:
    ctx.gpr[6] = (2221u << 16u);
    goto L_08805C60;
L_08805C60:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4544));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20872));
    ctx.gpr[31] = (0x08805C90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(288));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08805C90u) goto L_08805C90;
    return;
L_08805C90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805CA4:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-4560)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08805CD0;
      }
      goto L_08805CB4;
    }
L_08805CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(280)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(376)));
      if (branch_taken) {
          goto L_08805CD8;
      }
      goto L_08805CC8;
    }
L_08805CC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08805D50;
      }
      goto L_08805CD0;
    }
L_08805CD0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805CD8:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08805D20;
      }
      goto L_08805CE4;
    }
L_08805CE4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08805DA0;
      }
      goto L_08805CEC;
    }
L_08805CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(380)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08805DA0;
      }
      goto L_08805CF8;
    }
L_08805CF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(384)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08805DA0;
      }
      goto L_08805D04;
    }
L_08805D04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(328)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(328), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08805DA0;
      }
      goto L_08805D14;
    }
L_08805D14:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(332), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805D20:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08805DA0;
      }
      goto L_08805D28;
    }
L_08805D28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(380)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08805DA0;
      }
      goto L_08805D34;
    }
L_08805D34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(328)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(328), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08805DA0;
      }
      goto L_08805D44;
    }
L_08805D44:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(332), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805D50:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08805D84;
      }
      goto L_08805D58;
    }
L_08805D58:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08805DA0;
      }
      goto L_08805D60;
    }
L_08805D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(380)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08805DA0;
      }
      goto L_08805D6C;
    }
L_08805D6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(384)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08805DA0;
      }
      goto L_08805D78;
    }
L_08805D78:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(332), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805D84:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08805DA0;
      }
      goto L_08805D8C;
    }
L_08805D8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(380)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08805DA0;
      }
      goto L_08805D98;
    }
L_08805D98:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(332), ctx.gpr[5]);
    ctx.gpr[2] = (0u | 1u);
    goto L_08805DA0;
L_08805DA0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805DA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.gpr[31] = (0x08805DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 157u, 0x0884CA1Cu>(ctx, &aot_mem) && ctx.pc == 0x08805DC0u) goto L_08805DC0;
    return;
L_08805DC0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08805F50;
      }
      goto L_08805DCC;
    }
L_08805DCC:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(393)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08805F50;
      }
      goto L_08805DE0;
    }
L_08805DE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08805F50;
      }
      goto L_08805DEC;
    }
L_08805DEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08805F50;
      }
      goto L_08805DF8;
    }
L_08805DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08805F50;
      }
      goto L_08805E04;
    }
L_08805E04:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08805E14u);
    ctx.gpr[6] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08805E14u) goto L_08805E14;
    return;
L_08805E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[31] = (0x08805E28u);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 35u, 0x089DC7FCu>(ctx, &aot_mem) && ctx.pc == 0x08805E28u) goto L_08805E28;
    return;
L_08805E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[31] = (0x08805E64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 1u, 0x089DC0F4u>(ctx, &aot_mem) && ctx.pc == 0x08805E64u) goto L_08805E64;
    return;
L_08805E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4560)));
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(236)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08805E80u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08805E80u) goto L_08805E80;
    return;
L_08805E80:
    ctx.gpr[4] = (17284u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (17254u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (16160u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (17380u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (16192u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08805F48u);
    ctx.gpr[6] = (0u | 4u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08805F48u) goto L_08805F48;
    return;
L_08805F48:
    ctx.gpr[31] = (0x08805F50u);
    ctx.gpr[4] = (0u | 6u);
    ctx.pc = 0x08AB44E4u;
    return;
L_08805F50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805F64:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4568)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4564), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08805F78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08805F94u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 454u, 0x0896EC20u>(ctx, &aot_mem) && ctx.pc == 0x08805F94u) goto L_08805F94;
    return;
L_08805F94:
    ctx.gpr[31] = (0x08805F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 524u, 0x0896EFB8u>(ctx, &aot_mem) && ctx.pc == 0x08805F9Cu) goto L_08805F9C;
    return;
L_08805F9C:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4384), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08805FFC;
    }
    goto L_08805FB0;
L_08805FB0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08806018;
      }
      goto L_08805FB8;
    }
L_08805FB8:
    ctx.gpr[31] = (0x08805FC0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4376), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08805FC0u) goto L_08805FC0;
    return;
L_08805FC0:
    ctx.gpr[16] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-4380), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08805FD4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 361u, 0x08A3A718u>(ctx, &aot_mem) && ctx.pc == 0x08805FD4u) goto L_08805FD4;
    return;
L_08805FD4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08805FE0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 361u, 0x08A3A718u>(ctx, &aot_mem) && ctx.pc == 0x08805FE0u) goto L_08805FE0;
    return;
L_08805FE0:
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4380));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08805FF4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 403u, 0x0896E830u>(ctx, &aot_mem) && ctx.pc == 0x08805FF4u) goto L_08805FF4;
    return;
L_08805FF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08806018;
      }
      goto L_08805FFC;
    }
L_08805FFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08806018;
      }
      goto L_08806004;
    }
L_08806004:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4372), 0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-4379), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08806018u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4379));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 512u, 0x0896EEF0u>(ctx, &aot_mem) && ctx.pc == 0x08806018u) goto L_08806018;
    return;
L_08806018:
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
L_08806030:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08806064;
      }
      goto L_08806040;
    }
L_08806040:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088060BC;
      }
      goto L_08806048;
    }
L_08806048:
    ctx.gpr[31] = (0x08806050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 454u, 0x0896EC20u>(ctx, &aot_mem) && ctx.pc == 0x08806050u) goto L_08806050;
    return;
L_08806050:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4376), 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806064:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880607C;
      }
      goto L_0880606C;
    }
L_0880606C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08806098;
      }
      goto L_08806074;
    }
L_08806074:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088060BC;
      }
      goto L_0880607C;
    }
L_0880607C:
    ctx.gpr[31] = (0x08806084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 524u, 0x0896EFB8u>(ctx, &aot_mem) && ctx.pc == 0x08806084u) goto L_08806084;
    return;
L_08806084:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4372), 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806098:
    ctx.gpr[31] = (0x088060A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 382u, 0x0896E714u>(ctx, &aot_mem) && ctx.pc == 0x088060A0u) goto L_088060A0;
    return;
L_088060A0:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4376), 0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4372), 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-4384), ctx.gpr[5]);
    goto L_088060BC;
L_088060BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088060C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088060D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 532u, 0x08971D60u>(ctx, &aot_mem) && ctx.pc == 0x088060D8u) goto L_088060D8;
    return;
L_088060D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088060E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2222u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21528)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08806134;
      }
      goto L_08806108;
    }
L_08806108:
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21528), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08806134;
      }
      goto L_0880611C;
    }
L_0880611C:
    ctx.gpr[4] = (0u | 19u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806134u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806134:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806140:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08806150u);
    // nop
    goto L_08806164;
L_08806150:
    ctx.gpr[31] = (0x08806158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 350u, 0x08A3A600u>(ctx, &aot_mem) && ctx.pc == 0x08806158u) goto L_08806158;
    return;
L_08806158:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806164:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08806178;
L_08806178:
    ctx.gpr[31] = (0x08806180u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08806B3C;
L_08806180:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08806178;
      }
      goto L_08806190;
    }
L_08806190:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088061A8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088061A8:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088061C0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088061C0:
    ctx.gpr[4] = (0u | 33u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088061D8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088061D8:
    ctx.gpr[4] = (0u | 30u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088061F0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088061F0:
    ctx.gpr[4] = (0u | 34u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806208u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806208:
    ctx.gpr[4] = (0u | 35u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806220u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806220:
    ctx.gpr[4] = (0u | 38u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806238u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806238:
    ctx.gpr[4] = (0u | 19u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806250u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806250:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806268u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806268:
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806280u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806280:
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806298u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806298:
    ctx.gpr[4] = (0u | 41u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088062B0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088062B0:
    ctx.gpr[4] = (0u | 39u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088062C8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088062C8:
    ctx.gpr[4] = (0u | 40u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088062E0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088062E0:
    ctx.gpr[4] = (0u | 37u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088062F8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088062F8:
    ctx.gpr[4] = (0u | 36u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806310u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806310:
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(21522), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21524), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(21532));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(21532), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21528), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806358:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08806370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08806370u) goto L_08806370;
    return;
L_08806370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0880637Cu);
    ctx.gpr[5] = (0u | 2u);
    goto L_08806B3C;
L_0880637C:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_088063AC;
      }
      goto L_08806390;
    }
L_08806390:
    ctx.gpr[4] = (0u | 33u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088063A8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088063A8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    goto L_088063AC;
L_088063AC:
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_088063D8;
      }
      goto L_088063B8;
    }
L_088063B8:
    ctx.gpr[4] = (0u | 30u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088063D0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088063D0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    goto L_088063D8;
L_088063D8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_08806400;
      }
      goto L_088063E0;
    }
L_088063E0:
    ctx.gpr[4] = (0u | 34u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088063F8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088063F8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    goto L_08806400;
L_08806400:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08806424;
      }
      goto L_08806408;
    }
L_08806408:
    ctx.gpr[4] = (0u | 35u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806420u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806420:
    ctx.gpr[4] = (2222u << 16u);
    goto L_08806424;
L_08806424:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21524)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(21522)));
        goto L_0880645C;
    }
    goto L_08806434;
L_08806434:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 38u);
      if (branch_taken) {
          goto L_08806458;
      }
      goto L_08806444;
    }
L_08806444:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806458u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806458:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(21522)));
    goto L_0880645C;
L_0880645C:
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
      if (branch_taken) {
          goto L_0880648C;
      }
      goto L_08806468;
    }
L_08806468:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21532)));
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x08806484u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806484:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(21522)));
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    goto L_0880648C;
L_0880648C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
      if (branch_taken) {
          goto L_088064BC;
      }
      goto L_08806494;
    }
L_08806494:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21532));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x088064B4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088064B4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(21522)));
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    goto L_088064BC;
L_088064BC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_088064E8;
      }
      goto L_088064C4;
    }
L_088064C4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21532)));
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x088064E0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088064E0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(21522)));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    goto L_088064E8;
L_088064E8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_08806518;
      }
      goto L_088064F0;
    }
L_088064F0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21532));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x08806510u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806510:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(21522)));
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
    goto L_08806518;
L_08806518:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
      if (branch_taken) {
          goto L_08806540;
      }
      goto L_08806520;
    }
L_08806520:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x08806538u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806538:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(21522)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    goto L_08806540;
L_08806540:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_0880655C;
      }
      goto L_08806548;
    }
L_08806548:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x0880655Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_0880655C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 128u);
      if (branch_taken) {
          goto L_0880658C;
      }
      goto L_0880656C;
    }
L_0880656C:
    ctx.gpr[4] = (0u | 19u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806584u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806584:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 128u);
    goto L_0880658C;
L_0880658C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 256u);
      if (branch_taken) {
          goto L_088065B4;
      }
      goto L_08806594;
    }
L_08806594:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088065ACu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088065AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 256u);
    goto L_088065B4;
L_088065B4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 512u);
      if (branch_taken) {
          goto L_088065DC;
      }
      goto L_088065BC;
    }
L_088065BC:
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088065D4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088065D4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 512u);
    goto L_088065DC;
L_088065DC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 1024u);
      if (branch_taken) {
          goto L_08806604;
      }
      goto L_088065E4;
    }
L_088065E4:
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088065FCu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088065FC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 1024u);
    goto L_08806604;
L_08806604:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 2048u);
      if (branch_taken) {
          goto L_0880662C;
      }
      goto L_0880660C;
    }
L_0880660C:
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806624u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806624:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 2048u);
    goto L_0880662C;
L_0880662C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 4096u);
      if (branch_taken) {
          goto L_08806654;
      }
      goto L_08806634;
    }
L_08806634:
    ctx.gpr[4] = (0u | 41u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0880664Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_0880664C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 4096u);
    goto L_08806654;
L_08806654:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 8192u);
      if (branch_taken) {
          goto L_0880667C;
      }
      goto L_0880665C;
    }
L_0880665C:
    ctx.gpr[4] = (0u | 39u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806674u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806674:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 8192u);
    goto L_0880667C;
L_0880667C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 16384u);
      if (branch_taken) {
          goto L_088066A4;
      }
      goto L_08806684;
    }
L_08806684:
    ctx.gpr[4] = (0u | 40u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0880669Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_0880669C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 16384u);
    goto L_088066A4;
L_088066A4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
      if (branch_taken) {
          goto L_088066CC;
      }
      goto L_088066AC;
    }
L_088066AC:
    ctx.gpr[4] = (0u | 37u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088066C4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088066C4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    goto L_088066CC;
L_088066CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 36u);
      if (branch_taken) {
          goto L_088066E8;
      }
      goto L_088066D4;
    }
L_088066D4:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088066E8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088066E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088066FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08806714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08806714u) goto L_08806714;
    return;
L_08806714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08806720u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08806B3C;
L_08806720:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_08806750;
      }
      goto L_08806734;
    }
L_08806734:
    ctx.gpr[4] = (0u | 33u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0880674Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_0880674C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    goto L_08806750;
L_08806750:
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_0880677C;
      }
      goto L_0880675C;
    }
L_0880675C:
    ctx.gpr[4] = (0u | 30u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806774u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806774:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    goto L_0880677C;
L_0880677C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_088067A4;
      }
      goto L_08806784;
    }
L_08806784:
    ctx.gpr[4] = (0u | 34u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0880679Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_0880679C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    goto L_088067A4;
L_088067A4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_088067C8;
      }
      goto L_088067AC;
    }
L_088067AC:
    ctx.gpr[4] = (0u | 35u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088067C4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088067C4:
    ctx.gpr[4] = (2222u << 16u);
    goto L_088067C8;
L_088067C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21524)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(21522)));
        goto L_08806800;
    }
    goto L_088067D8;
L_088067D8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 38u);
      if (branch_taken) {
          goto L_088067FC;
      }
      goto L_088067E8;
    }
L_088067E8:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088067FCu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088067FC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(21522)));
    goto L_08806800;
L_08806800:
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
      if (branch_taken) {
          goto L_08806830;
      }
      goto L_0880680C;
    }
L_0880680C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21532)));
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08806828u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806828:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(21522)));
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    goto L_08806830;
L_08806830:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
      if (branch_taken) {
          goto L_08806860;
      }
      goto L_08806838;
    }
L_08806838:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21532));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08806858u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806858:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(21522)));
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    goto L_08806860;
L_08806860:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_0880688C;
      }
      goto L_08806868;
    }
L_08806868:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21532)));
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08806884u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806884:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(21522)));
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    goto L_0880688C;
L_0880688C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_088068BC;
      }
      goto L_08806894;
    }
L_08806894:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21532));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x088068B4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088068B4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(21522)));
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
    goto L_088068BC;
L_088068BC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
      if (branch_taken) {
          goto L_088068E4;
      }
      goto L_088068C4;
    }
L_088068C4:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x088068DCu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088068DC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(21522)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    goto L_088068E4;
L_088068E4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_08806900;
      }
      goto L_088068EC;
    }
L_088068EC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08806900u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806900:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 128u);
      if (branch_taken) {
          goto L_08806930;
      }
      goto L_08806910;
    }
L_08806910:
    ctx.gpr[4] = (0u | 19u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806928u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806928:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 128u);
    goto L_08806930;
L_08806930:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 256u);
      if (branch_taken) {
          goto L_08806958;
      }
      goto L_08806938;
    }
L_08806938:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806950u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806950:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 256u);
    goto L_08806958;
L_08806958:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 512u);
      if (branch_taken) {
          goto L_08806980;
      }
      goto L_08806960;
    }
L_08806960:
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806978u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806978:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 512u);
    goto L_08806980;
L_08806980:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 1024u);
      if (branch_taken) {
          goto L_088069A8;
      }
      goto L_08806988;
    }
L_08806988:
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088069A0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088069A0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 1024u);
    goto L_088069A8;
L_088069A8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 2048u);
      if (branch_taken) {
          goto L_088069D0;
      }
      goto L_088069B0;
    }
L_088069B0:
    ctx.gpr[4] = (0u | 31u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088069C8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088069C8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 2048u);
    goto L_088069D0;
L_088069D0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 4096u);
      if (branch_taken) {
          goto L_088069F8;
      }
      goto L_088069D8;
    }
L_088069D8:
    ctx.gpr[4] = (0u | 41u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088069F0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_088069F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 4096u);
    goto L_088069F8;
L_088069F8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 8192u);
      if (branch_taken) {
          goto L_08806A20;
      }
      goto L_08806A00;
    }
L_08806A00:
    ctx.gpr[4] = (0u | 39u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806A18u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806A18:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 8192u);
    goto L_08806A20;
L_08806A20:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 16384u);
      if (branch_taken) {
          goto L_08806A48;
      }
      goto L_08806A28;
    }
L_08806A28:
    ctx.gpr[4] = (0u | 40u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806A40u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806A40:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[4] & 16384u);
    goto L_08806A48;
L_08806A48:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
      if (branch_taken) {
          goto L_08806A70;
      }
      goto L_08806A50;
    }
L_08806A50:
    ctx.gpr[4] = (0u | 37u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806A68u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806A68:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    goto L_08806A70;
L_08806A70:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 36u);
      if (branch_taken) {
          goto L_08806A8C;
      }
      goto L_08806A78;
    }
L_08806A78:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806A8Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806A8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806AA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(21520)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 38u);
      if (branch_taken) {
          goto L_08806AE0;
      }
      goto L_08806ABC;
    }
L_08806ABC:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806AD0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806AD0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(21524)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21524), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08806AE0;
L_08806AE0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806AEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(21520)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 38u);
      if (branch_taken) {
          goto L_08806B30;
      }
      goto L_08806B08;
    }
L_08806B08:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806B1Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806B1C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(21524)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(21524), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08806B30;
L_08806B30:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806B3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2052));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08806B6C;
      }
      goto L_08806B5C;
    }
L_08806B5C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08806C6C;
      }
      goto L_08806B64;
    }
L_08806B64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08806B8C;
      }
      goto L_08806B6C;
    }
L_08806B6C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08806BC0;
      }
      goto L_08806B78;
    }
L_08806B78:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08806C18;
      }
      goto L_08806B80;
    }
L_08806B80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08806C6C;
      }
      goto L_08806B88;
    }
L_08806B88:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08806B8C;
L_08806B8C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08806C6C;
      }
      goto L_08806B94;
    }
L_08806B94:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806BA8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806BA8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08806C6C;
      }
      goto L_08806BC0;
    }
L_08806BC0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6072)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08806C6C;
      }
      goto L_08806BD4;
    }
L_08806BD4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08806C6C;
      }
      goto L_08806BDC;
    }
L_08806BDC:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806BF0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806BF0:
    ctx.gpr[4] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08806C08;
      }
      goto L_08806BFC;
    }
L_08806BFC:
    ctx.gpr[31] = (0x08806C04u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 598u, 0x0896F408u>(ctx, &aot_mem) && ctx.pc == 0x08806C04u) goto L_08806C04;
    return;
L_08806C04:
    ctx.gpr[4] = (2222u << 16u);
    goto L_08806C08;
L_08806C08:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08806C6C;
      }
      goto L_08806C18;
    }
L_08806C18:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6072)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08806C6C;
      }
      goto L_08806C28;
    }
L_08806C28:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08806C6C;
      }
      goto L_08806C30;
    }
L_08806C30:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
      if (branch_taken) {
          goto L_08806C6C;
      }
      goto L_08806C40;
    }
L_08806C40:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08806C58;
      }
      goto L_08806C48;
    }
L_08806C48:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 23 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08806C5C;
      }
      goto L_08806C54;
    }
L_08806C54:
    ctx.gpr[5] = (0u | 0u);
    goto L_08806C58;
L_08806C58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08806C5C;
L_08806C5C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08806C6Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08807750;
L_08806C6C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806C7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08806CC8;
      }
      goto L_08806C98;
    }
L_08806C98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08806D14;
      }
      goto L_08806CA0;
    }
L_08806CA0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_08806CE4;
      }
      goto L_08806CA8;
    }
L_08806CA8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4512));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08806CBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 946u, 0x08976BD8u>(ctx, &aot_mem) && ctx.pc == 0x08806CBCu) goto L_08806CBC;
    return;
L_08806CBC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806CC8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08806CF8;
      }
      goto L_08806CD4;
    }
L_08806CD4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08806D0C;
      }
      goto L_08806CDC;
    }
L_08806CDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08806D14;
      }
      goto L_08806CE4;
    }
L_08806CE4:
    ctx.gpr[31] = (0x08806CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 951u, 0x08976C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08806CECu) goto L_08806CEC;
    return;
L_08806CEC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806CF8:
    ctx.gpr[31] = (0x08806D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 955u, 0x08976C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08806D00u) goto L_08806D00;
    return;
L_08806D00:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806D0C:
    ctx.gpr[31] = (0x08806D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 959u, 0x08976C8Cu>(ctx, &aot_mem) && ctx.pc == 0x08806D14u) goto L_08806D14;
    return;
L_08806D14:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806D20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 13 ? 1u : 0u);
      if (branch_taken) {
          goto L_08806DB0;
      }
      goto L_08806D30;
    }
L_08806D30:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08806DB0;
      }
      goto L_08806D38;
    }
L_08806D38:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31));
      if (branch_taken) {
          goto L_08806D64;
      }
      goto L_08806D40;
    }
L_08806D40:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08806DB0;
      }
      goto L_08806D48;
    }
L_08806D48:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08806D80;
      }
      goto L_08806D50;
    }
L_08806D50:
    ctx.gpr[31] = (0x08806D58u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 946u, 0x08976BD8u>(ctx, &aot_mem) && ctx.pc == 0x08806D58u) goto L_08806D58;
    return;
L_08806D58:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806D64:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08806D94;
      }
      goto L_08806D70;
    }
L_08806D70:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08806DA8;
      }
      goto L_08806D78;
    }
L_08806D78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08806DB0;
      }
      goto L_08806D80;
    }
L_08806D80:
    ctx.gpr[31] = (0x08806D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 951u, 0x08976C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08806D88u) goto L_08806D88;
    return;
L_08806D88:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806D94:
    ctx.gpr[31] = (0x08806D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 955u, 0x08976C5Cu>(ctx, &aot_mem) && ctx.pc == 0x08806D9Cu) goto L_08806D9C;
    return;
L_08806D9C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806DA8:
    ctx.gpr[31] = (0x08806DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 959u, 0x08976C8Cu>(ctx, &aot_mem) && ctx.pc == 0x08806DB0u) goto L_08806DB0;
    return;
L_08806DB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806DBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21540), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08806DE0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 963u, 0x08976CBCu>(ctx, &aot_mem) && ctx.pc == 0x08806DE0u) goto L_08806DE0;
    return;
L_08806DE0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806DEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08806E08u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 963u, 0x08976CBCu>(ctx, &aot_mem) && ctx.pc == 0x08806E08u) goto L_08806E08;
    return;
L_08806E08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806E14:
    ctx.gpr[4] = (2222u << 16u);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21540)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806E20:
    ctx.gpr[4] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-4378)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806E2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-4378), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08806E44u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4378));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 534u, 0x0896F048u>(ctx, &aot_mem) && ctx.pc == 0x08806E44u) goto L_08806E44;
    return;
L_08806E44:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806E50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-4378)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08806E78;
      }
      goto L_08806E6C;
    }
L_08806E6C:
    ctx.gpr[31] = (0x08806E74u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 967u, 0x08976CF8u>(ctx, &aot_mem) && ctx.pc == 0x08806E74u) goto L_08806E74;
    return;
L_08806E74:
    ctx.gpr[2] = (0u | 1u);
    goto L_08806E78;
L_08806E78:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806E84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08806E94u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 967u, 0x08976CF8u>(ctx, &aot_mem) && ctx.pc == 0x08806E94u) goto L_08806E94;
    return;
L_08806E94:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806EA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08806EB4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 1096u, 0x089772DCu>(ctx, &aot_mem) && ctx.pc == 0x08806EB4u) goto L_08806EB4;
    return;
L_08806EB4:
    ctx.gpr[31] = (0x08806EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 556u, 0x0896F1C8u>(ctx, &aot_mem) && ctx.pc == 0x08806EBCu) goto L_08806EBC;
    return;
L_08806EBC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806EC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17324)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08806F08;
      }
      goto L_08806EEC;
    }
L_08806EEC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08806EF8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 1096u, 0x089772DCu>(ctx, &aot_mem) && ctx.pc == 0x08806EF8u) goto L_08806EF8;
    return;
L_08806EF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08806F04u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 1096u, 0x089772DCu>(ctx, &aot_mem) && ctx.pc == 0x08806F04u) goto L_08806F04;
    return;
L_08806F04:
    ctx.gpr[2] = (0u | 1u);
    goto L_08806F08;
L_08806F08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806F18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17324)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08806F40;
      }
      goto L_08806F34;
    }
L_08806F34:
    ctx.gpr[31] = (0x08806F3Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 545u, 0x08971F00u>(ctx, &aot_mem) && ctx.pc == 0x08806F3Cu) goto L_08806F3C;
    return;
L_08806F3C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08806F40;
L_08806F40:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806F4C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4384)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08806F74;
    }
    goto L_08806F5C;
L_08806F5C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08806F6C;
      }
      goto L_08806F64;
    }
L_08806F64:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-4380)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806F6C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806F74:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08806F6C;
      }
      goto L_08806F7C;
    }
L_08806F7C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-4379)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806F84:
    ctx.gpr[4] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4384)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08806F90:
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2064), 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4384)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08807024;
      }
      goto L_08806FA8;
    }
L_08806FA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2064)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4368));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(21544), ctx.gpr[5]);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(21544));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08807024:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088070A0;
      }
      goto L_0880702C;
    }
L_0880702C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2064)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-3168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(21544), ctx.gpr[5]);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(21544));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_088070A0;
L_088070A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088070A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2072)));
      if (branch_taken) {
          goto L_08807114;
      }
      goto L_088070D0;
    }
L_088070D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088070F4;
      }
      goto L_088070D8;
    }
L_088070D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
      if (branch_taken) {
          goto L_08807110;
      }
      goto L_088070E0;
    }
L_088070E0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[31] = (0x088070ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4384)));
    goto L_08806030;
L_088070EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2072)));
      if (branch_taken) {
          goto L_0880710C;
      }
      goto L_088070F4;
    }
L_088070F4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
      if (branch_taken) {
          goto L_08807110;
      }
      goto L_088070FC;
    }
L_088070FC:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x08807108u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08806C7C;
L_08807108:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2072)));
    goto L_0880710C;
L_0880710C:
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    goto L_08807110;
L_08807110:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2072), ctx.gpr[4]);
    goto L_08807114;
L_08807114:
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08807134;
    }
    goto L_0880711C;
L_0880711C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0880714C;
      }
      goto L_08807124;
    }
L_08807124:
    ctx.gpr[31] = (0x0880712Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 202u, 0x08808744u>(ctx, &aot_mem) && ctx.pc == 0x0880712Cu) goto L_0880712C;
    return;
L_0880712C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880714C;
      }
      goto L_08807134;
    }
L_08807134:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0880714C;
      }
      goto L_0880713C;
    }
L_0880713C:
    ctx.gpr[31] = (0x08807144u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0880746C;
L_08807144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0880714C;
      }
      goto L_0880714C;
    }
L_0880714C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08807160:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-2072)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    if (static_cast<std::int32_t>(ctx.gpr[6]) > 0) {
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
        goto L_088071A4;
    }
    goto L_08807184;
L_08807184:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088071B8;
      }
      goto L_0880718C;
    }
L_0880718C:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08807198u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_088071C4;
L_08807198:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088071A4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088071B8;
      }
      goto L_088071AC;
    }
L_088071AC:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088071B8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08807584;
L_088071B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088071C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4384)));
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(21544));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088072A0;
      }
      goto L_0880721C;
    }
L_0880721C:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08807234u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22768));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08807234u) goto L_08807234;
    return;
L_08807234:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(30));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(50));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (2219u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[20] = (2219u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (2219u << 16u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22800));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(22816));
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(22832));
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.gpr[22] = (2221u << 16u);
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
      if (branch_taken) {
          goto L_08807328;
      }
      goto L_088072A0;
    }
L_088072A0:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0880742C;
      }
      goto L_088072AC;
    }
L_088072AC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088072C0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22784));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088072C0u) goto L_088072C0;
    return;
L_088072C0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(30));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(50));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (2219u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[20] = (2219u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (2219u << 16u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22800));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(22816));
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(22832));
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.gpr[22] = (2221u << 16u);
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    ctx.fpr[30] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[30])));
    goto L_08807328;
L_08807328:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0880733Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x0880733Cu) goto L_0880733C;
    return;
L_0880733C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0880734Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0880734Cu) goto L_0880734C;
    return;
L_0880734C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08807360u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x08807360u) goto L_08807360;
    return;
L_08807360:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08807370u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08807370u) goto L_08807370;
    return;
L_08807370:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08807384u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x08807384u) goto L_08807384;
    return;
L_08807384:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08807394u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08807394u) goto L_08807394;
    return;
L_08807394:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x088073A8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x088073A8u) goto L_088073A8;
    return;
L_088073A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088073B8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088073B8u) goto L_088073B8;
    return;
L_088073B8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x088073CCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x088073CCu) goto L_088073CC;
    return;
L_088073CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088073DCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088073DCu) goto L_088073DC;
    return;
L_088073DC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x088073F0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x088073F0u) goto L_088073F0;
    return;
L_088073F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088073FCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088073FCu) goto L_088073FC;
    return;
L_088073FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-2068)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0880742Cu);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x0880742Cu) goto L_0880742C;
    return;
L_0880742C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880746C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[5] & 512u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088074A8;
      }
      goto L_0880748C;
    }
L_0880748C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2060)));
    ctx.gpr[31] = (0x0880749Cu);
    ctx.gpr[4] = (0u | 0u);
    goto L_08806C7C;
L_0880749C:
    ctx.gpr[4] = (2221u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2056), 0u);
      if (branch_taken) {
          goto L_0880756C;
      }
      goto L_088074A8;
    }
L_088074A8:
    ctx.gpr[6] = (ctx.gpr[5] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 64u);
      if (branch_taken) {
          goto L_088074CC;
      }
      goto L_088074B4;
    }
L_088074B4:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x088074C0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08806C7C;
L_088074C0:
    ctx.gpr[4] = (2221u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2056), 0u);
      if (branch_taken) {
          goto L_0880756C;
      }
      goto L_088074CC;
    }
L_088074CC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (2221u << 16u);
      if (branch_taken) {
          goto L_08807510;
      }
      goto L_088074D4;
    }
L_088074D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2056)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088074F8;
      }
      goto L_088074E0;
    }
L_088074E0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x088074ECu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08806C7C;
L_088074EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2056)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
      if (branch_taken) {
          goto L_08807508;
      }
      goto L_088074F8;
    }
L_088074F8:
    ctx.gpr[31] = (0x08807500u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08806C7C;
L_08807500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2056)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    goto L_08807508;
L_08807508:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2056), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0880756C;
      }
      goto L_08807510;
    }
L_08807510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_08807540;
      }
      goto L_08807520;
    }
L_08807520:
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-2060)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    if (static_cast<std::int32_t>(ctx.gpr[5]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08807538;
    }
    goto L_08807538;
L_08807538:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-2060), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0880756C;
      }
      goto L_08807540;
    }
L_08807540:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_08807568;
      }
      goto L_08807548;
    }
L_08807548:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2060)));
    ctx.gpr[5] = (0u | 31u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
        goto L_08807560;
    }
    goto L_08807560;
L_08807560:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2060), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0880756C;
      }
      goto L_08807568;
    }
L_08807568:
    ctx.gpr[16] = (0u | 0u);
    goto L_0880756C;
L_0880756C:
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
L_08807584:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2060)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2328));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[31]);
    ctx.gpr[31] = (0x088075DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22836));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088075DCu) goto L_088075DC;
    return;
L_088075DC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08807600u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x08807600u) goto L_08807600;
    return;
L_08807600:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08807614u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22852));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08807614u) goto L_08807614;
    return;
L_08807614:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08807630u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x08807630u) goto L_08807630;
    return;
L_08807630:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08807644u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22872));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08807644u) goto L_08807644;
    return;
L_08807644:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08807660u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x08807660u) goto L_08807660;
    return;
L_08807660:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08807670u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22832));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08807670u) goto L_08807670;
    return;
L_08807670:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08807684u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 619u, 0x0897A9C0u>(ctx, &aot_mem) && ctx.pc == 0x08807684u) goto L_08807684;
    return;
L_08807684:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088076A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088076C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22892));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x088076C4u) goto L_088076C4;
    return;
L_088076C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2221u << 16u);
      if (branch_taken) {
          goto L_0880770C;
      }
      goto L_088076CC;
    }
L_088076CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-4384)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088076F0;
      }
      goto L_088076D8;
    }
L_088076D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4376)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4376), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0880770C;
      }
      goto L_088076F0;
    }
L_088076F0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0880770C;
      }
      goto L_088076F8;
    }
L_088076F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4372)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-4372), ctx.gpr[4]);
    goto L_0880770C;
L_0880770C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08807750:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[4] < static_cast<std::uint32_t>(66) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807774;
    }
L_08807774:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2219u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(22904)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880778C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088077A4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 580u, 0x08972090u>(ctx, &aot_mem) && ctx.pc == 0x088077A4u) goto L_088077A4;
    return;
L_088077A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_088077AC;
    }
L_088077AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088077C0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 617u, 0x08972204u>(ctx, &aot_mem) && ctx.pc == 0x088077C0u) goto L_088077C0;
    return;
L_088077C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_088077C8;
    }
L_088077C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088077DCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 648u, 0x0897234Cu>(ctx, &aot_mem) && ctx.pc == 0x088077DCu) goto L_088077DC;
    return;
L_088077DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_088077E4;
    }
L_088077E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088077F8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 679u, 0x08972494u>(ctx, &aot_mem) && ctx.pc == 0x088077F8u) goto L_088077F8;
    return;
L_088077F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807800;
    }
L_08807800:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08807818u);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 710u, 0x089725DCu>(ctx, &aot_mem) && ctx.pc == 0x08807818u) goto L_08807818;
    return;
L_08807818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807820;
    }
L_08807820:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08807830u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 759u, 0x08972804u>(ctx, &aot_mem) && ctx.pc == 0x08807830u) goto L_08807830;
    return;
L_08807830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807838;
    }
L_08807838:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08807850u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 786u, 0x08972928u>(ctx, &aot_mem) && ctx.pc == 0x08807850u) goto L_08807850;
    return;
L_08807850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807858;
    }
L_08807858:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08807868u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 823u, 0x08972A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08807868u) goto L_08807868;
    return;
L_08807868:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807870;
    }
L_08807870:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (0u < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0880788Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 850u, 0x08972BBCu>(ctx, &aot_mem) && ctx.pc == 0x0880788Cu) goto L_0880788C;
    return;
L_0880788C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807894;
    }
L_08807894:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088078A8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 915u, 0x08972E28u>(ctx, &aot_mem) && ctx.pc == 0x088078A8u) goto L_088078A8;
    return;
L_088078A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_088078B0;
    }
L_088078B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088078C0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 946u, 0x08972F70u>(ctx, &aot_mem) && ctx.pc == 0x088078C0u) goto L_088078C0;
    return;
L_088078C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_088078C8;
    }
L_088078C8:
    ctx.gpr[8] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088078E8u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 968u, 0x08973064u>(ctx, &aot_mem) && ctx.pc == 0x088078E8u) goto L_088078E8;
    return;
L_088078E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_088078F0;
    }
L_088078F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08807904u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 1046u, 0x08973340u>(ctx, &aot_mem) && ctx.pc == 0x08807904u) goto L_08807904;
    return;
L_08807904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_0880790C;
    }
L_0880790C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08807920u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 1077u, 0x08973488u>(ctx, &aot_mem) && ctx.pc == 0x08807920u) goto L_08807920;
    return;
L_08807920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807928;
    }
L_08807928:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08807960;
    }
    goto L_08807934;
L_08807934:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0880798C;
      }
      goto L_0880793C;
    }
L_0880793C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[7] = (49024u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[4] = (2222u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21528), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0880798C;
      }
      goto L_08807960;
    }
L_08807960:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_0880798C;
      }
      goto L_08807968;
    }
L_08807968:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[6] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
      if (branch_taken) {
          goto L_0880798C;
      }
      goto L_08807978;
    }
L_08807978:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(21528), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0880798C;
L_0880798C:
    ctx.gpr[31] = (0x08807994u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 86u, 0x08974404u>(ctx, &aot_mem) && ctx.pc == 0x08807994u) goto L_08807994;
    return;
L_08807994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_0880799C;
    }
L_0880799C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_088079C8;
    }
    goto L_088079A8;
L_088079A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088079E4;
      }
      goto L_088079B0;
    }
L_088079B0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088079E0;
      }
      goto L_088079C8;
    }
L_088079C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088079E4;
      }
      goto L_088079D0;
    }
L_088079D0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_088079E0;
L_088079E0:
    ctx.gpr[4] = (0u | 0u);
    goto L_088079E4;
L_088079E4:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088079F0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 1108u, 0x089735D0u>(ctx, &aot_mem) && ctx.pc == 0x088079F0u) goto L_088079F0;
    return;
L_088079F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_088079F8;
    }
L_088079F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08807A24;
    }
    goto L_08807A04;
L_08807A04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08807A40;
      }
      goto L_08807A0C;
    }
L_08807A0C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08807A3C;
      }
      goto L_08807A24;
    }
L_08807A24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08807A40;
      }
      goto L_08807A2C;
    }
L_08807A2C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[5] | 256u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08807A3C;
L_08807A3C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08807A40;
L_08807A40:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08807A50u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 1149u, 0x089737B0u>(ctx, &aot_mem) && ctx.pc == 0x08807A50u) goto L_08807A50;
    return;
L_08807A50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807A58;
    }
L_08807A58:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08807A6Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 1243u, 0x08973B98u>(ctx, &aot_mem) && ctx.pc == 0x08807A6Cu) goto L_08807A6C;
    return;
L_08807A6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807A74;
    }
L_08807A74:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08807A88u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 1274u, 0x08973CDCu>(ctx, &aot_mem) && ctx.pc == 0x08807A88u) goto L_08807A88;
    return;
L_08807A88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807A90;
    }
L_08807A90:
    ctx.gpr[31] = (0x08807A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 79u, 0x08974380u>(ctx, &aot_mem) && ctx.pc == 0x08807A98u) goto L_08807A98;
    return;
L_08807A98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807AA0;
    }
L_08807AA0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08807AB0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 158u, 0x0897476Cu>(ctx, &aot_mem) && ctx.pc == 0x08807AB0u) goto L_08807AB0;
    return;
L_08807AB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807AB8;
    }
L_08807AB8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08807AC4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 185u, 0x0897488Cu>(ctx, &aot_mem) && ctx.pc == 0x08807AC4u) goto L_08807AC4;
    return;
L_08807AC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807ACC;
    }
L_08807ACC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08807AE0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 207u, 0x08974990u>(ctx, &aot_mem) && ctx.pc == 0x08807AE0u) goto L_08807AE0;
    return;
L_08807AE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807AE8;
    }
L_08807AE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08807AFCu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 239u, 0x08974AE0u>(ctx, &aot_mem) && ctx.pc == 0x08807AFCu) goto L_08807AFC;
    return;
L_08807AFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807B04;
    }
L_08807B04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08807B18u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 276u, 0x08974C58u>(ctx, &aot_mem) && ctx.pc == 0x08807B18u) goto L_08807B18;
    return;
L_08807B18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807B20;
    }
L_08807B20:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08807B34u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 308u, 0x08974DA0u>(ctx, &aot_mem) && ctx.pc == 0x08807B34u) goto L_08807B34;
    return;
L_08807B34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807B3C;
    }
L_08807B3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08807B50u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 340u, 0x08974EE8u>(ctx, &aot_mem) && ctx.pc == 0x08807B50u) goto L_08807B50;
    return;
L_08807B50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807B58;
    }
L_08807B58:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08807B6Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 372u, 0x08975030u>(ctx, &aot_mem) && ctx.pc == 0x08807B6Cu) goto L_08807B6C;
    return;
L_08807B6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807B74;
    }
L_08807B74:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08807BA8;
      }
      goto L_08807B84;
    }
L_08807B84:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08807BE0;
      }
      goto L_08807B8C;
    }
L_08807B8C:
    ctx.gpr[4] = (2222u << 16u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(21520)));
      if (branch_taken) {
          goto L_08807BB8;
      }
      goto L_08807B98;
    }
L_08807B98:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1537));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08807BE0;
      }
      goto L_08807BA8;
    }
L_08807BA8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08807BC4;
      }
      goto L_08807BB0;
    }
L_08807BB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08807BE0;
      }
      goto L_08807BB8;
    }
L_08807BB8:
    ctx.gpr[5] = (ctx.gpr[5] | 512u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08807BE0;
      }
      goto L_08807BC4;
    }
L_08807BC4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (ctx.gpr[4] | 1024u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08807BE0;
L_08807BE0:
    ctx.gpr[31] = (0x08807BE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 905u, 0x08976A38u>(ctx, &aot_mem) && ctx.pc == 0x08807BE8u) goto L_08807BE8;
    return;
L_08807BE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807BF0;
    }
L_08807BF0:
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08807DAC;
      }
      goto L_08807BFC;
    }
L_08807BFC:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08807CA4;
      }
      goto L_08807C08;
    }
L_08807C08:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08807D28;
      }
      goto L_08807C10;
    }
L_08807C10:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08807CA4;
      }
      goto L_08807C18;
    }
L_08807C18:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08807D28;
      }
      goto L_08807C20;
    }
L_08807C20:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08807C40;
    }
    goto L_08807C2C;
L_08807C2C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08807DAC;
      }
      goto L_08807C34;
    }
L_08807C34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (2222u << 16u);
      if (branch_taken) {
          goto L_08807C54;
      }
      goto L_08807C3C;
    }
L_08807C3C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    goto L_08807C40;
L_08807C40:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (2222u << 16u);
      if (branch_taken) {
          goto L_08807C80;
      }
      goto L_08807C48;
    }
L_08807C48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08807DAC;
      }
      goto L_08807C50;
    }
L_08807C50:
    ctx.gpr[6] = (2222u << 16u);
    goto L_08807C54;
L_08807C54:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(21522)));
      if (branch_taken) {
          goto L_08807C6C;
      }
      goto L_08807C5C;
    }
L_08807C5C:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_08807C78;
      }
      goto L_08807C6C;
    }
L_08807C6C:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    goto L_08807C78;
L_08807C78:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(21522), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08807DA8;
      }
      goto L_08807C80;
    }
L_08807C80:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(21522)));
      if (branch_taken) {
          goto L_08807C94;
      }
      goto L_08807C88;
    }
L_08807C88:
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_08807C9C;
      }
      goto L_08807C94;
    }
L_08807C94:
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    goto L_08807C9C;
L_08807C9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(21522), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08807DA8;
      }
      goto L_08807CA4;
    }
L_08807CA4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08807CC4;
    }
    goto L_08807CB0;
L_08807CB0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08807DAC;
      }
      goto L_08807CB8;
    }
L_08807CB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (2222u << 16u);
      if (branch_taken) {
          goto L_08807CD8;
      }
      goto L_08807CC0;
    }
L_08807CC0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    goto L_08807CC4;
L_08807CC4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (2222u << 16u);
      if (branch_taken) {
          goto L_08807D04;
      }
      goto L_08807CCC;
    }
L_08807CCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08807DAC;
      }
      goto L_08807CD4;
    }
L_08807CD4:
    ctx.gpr[6] = (2222u << 16u);
    goto L_08807CD8;
L_08807CD8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(21522)));
      if (branch_taken) {
          goto L_08807CF0;
      }
      goto L_08807CE0;
    }
L_08807CE0:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_08807CFC;
      }
      goto L_08807CF0;
    }
L_08807CF0:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    goto L_08807CFC;
L_08807CFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(21522), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08807DA8;
      }
      goto L_08807D04;
    }
L_08807D04:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(21522)));
      if (branch_taken) {
          goto L_08807D18;
      }
      goto L_08807D0C;
    }
L_08807D0C:
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_08807D20;
      }
      goto L_08807D18;
    }
L_08807D18:
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    goto L_08807D20;
L_08807D20:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(21522), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08807DA8;
      }
      goto L_08807D28;
    }
L_08807D28:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08807D48;
    }
    goto L_08807D34;
L_08807D34:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08807DAC;
      }
      goto L_08807D3C;
    }
L_08807D3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (2222u << 16u);
      if (branch_taken) {
          goto L_08807D5C;
      }
      goto L_08807D44;
    }
L_08807D44:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    goto L_08807D48;
L_08807D48:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_08807D88;
      }
      goto L_08807D50;
    }
L_08807D50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08807DAC;
      }
      goto L_08807D58;
    }
L_08807D58:
    ctx.gpr[6] = (2222u << 16u);
    goto L_08807D5C;
L_08807D5C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(21522)));
      if (branch_taken) {
          goto L_08807D74;
      }
      goto L_08807D64;
    }
L_08807D64:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
      if (branch_taken) {
          goto L_08807D80;
      }
      goto L_08807D74;
    }
L_08807D74:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    goto L_08807D80;
L_08807D80:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(21522), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08807DA8;
      }
      goto L_08807D88;
    }
L_08807D88:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(21522)));
      if (branch_taken) {
          goto L_08807D9C;
      }
      goto L_08807D90;
    }
L_08807D90:
    ctx.gpr[6] = (ctx.gpr[6] | 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
      if (branch_taken) {
          goto L_08807DA4;
      }
      goto L_08807D9C;
    }
L_08807D9C:
    ctx.gpr[6] = (ctx.gpr[6] | 8u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    goto L_08807DA4;
L_08807DA4:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(21522), static_cast<std::uint16_t>(ctx.gpr[6]));
    goto L_08807DA8;
L_08807DA8:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08807DAC;
L_08807DAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08807DB8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 1226u, 0x089778C0u>(ctx, &aot_mem) && ctx.pc == 0x08807DB8u) goto L_08807DB8;
    return;
L_08807DB8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21532));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807DD0;
    }
L_08807DD0:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6072)));
      if (branch_taken) {
          goto L_08807DF0;
      }
      goto L_08807DE0;
    }
L_08807DE0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (ctx.gpr[5] & 2u);
      if (branch_taken) {
          goto L_08807E24;
      }
      goto L_08807DE8;
    }
L_08807DE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (2222u << 16u);
      if (branch_taken) {
          goto L_08807E10;
      }
      goto L_08807DF0;
    }
L_08807DF0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 2u);
      if (branch_taken) {
          goto L_08807E24;
      }
      goto L_08807DFC;
    }
L_08807DFC:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[6] = (ctx.gpr[6] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08807E20;
      }
      goto L_08807E10;
    }
L_08807E10:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08807E20;
L_08807E20:
    ctx.gpr[4] = (ctx.gpr[5] & 2u);
    goto L_08807E24;
L_08807E24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807E2C;
    }
L_08807E2C:
    ctx.gpr[31] = (0x08807E34u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 1330u, 0x08973F5Cu>(ctx, &aot_mem) && ctx.pc == 0x08807E34u) goto L_08807E34;
    return;
L_08807E34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807E3C;
    }
L_08807E3C:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6072)));
      if (branch_taken) {
          goto L_08807E5C;
      }
      goto L_08807E4C;
    }
L_08807E4C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (ctx.gpr[5] & 4u);
      if (branch_taken) {
          goto L_08807E90;
      }
      goto L_08807E54;
    }
L_08807E54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (2222u << 16u);
      if (branch_taken) {
          goto L_08807E7C;
      }
      goto L_08807E5C;
    }
L_08807E5C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 4u);
      if (branch_taken) {
          goto L_08807E90;
      }
      goto L_08807E68;
    }
L_08807E68:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[6] = (ctx.gpr[6] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08807E8C;
      }
      goto L_08807E7C;
    }
L_08807E7C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08807E8C;
L_08807E8C:
    ctx.gpr[4] = (ctx.gpr[5] & 4u);
    goto L_08807E90;
L_08807E90:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807E98;
    }
L_08807E98:
    ctx.gpr[31] = (0x08807EA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 1305u, 0x08973E24u>(ctx, &aot_mem) && ctx.pc == 0x08807EA0u) goto L_08807EA0;
    return;
L_08807EA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807EA8;
    }
L_08807EA8:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6072)));
      if (branch_taken) {
          goto L_08807EC8;
      }
      goto L_08807EB8;
    }
L_08807EB8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (ctx.gpr[5] & 8u);
      if (branch_taken) {
          goto L_08807EFC;
      }
      goto L_08807EC0;
    }
L_08807EC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (2222u << 16u);
      if (branch_taken) {
          goto L_08807EE8;
      }
      goto L_08807EC8;
    }
L_08807EC8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] & 8u);
      if (branch_taken) {
          goto L_08807EFC;
      }
      goto L_08807ED4;
    }
L_08807ED4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[6] = (ctx.gpr[6] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08807EF8;
      }
      goto L_08807EE8;
    }
L_08807EE8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08807EF8;
L_08807EF8:
    ctx.gpr[4] = (ctx.gpr[5] & 8u);
    goto L_08807EFC;
L_08807EFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807F04;
    }
L_08807F04:
    ctx.gpr[31] = (0x08807F0Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 18u, 0x089740BCu>(ctx, &aot_mem) && ctx.pc == 0x08807F0Cu) goto L_08807F0C;
    return;
L_08807F0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807F14;
    }
L_08807F14:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6072)));
      if (branch_taken) {
          goto L_08807F34;
      }
      goto L_08807F24;
    }
L_08807F24:
    if (static_cast<std::int32_t>(ctx.gpr[5]) < 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
        goto L_08807F64;
    }
    goto L_08807F2C;
L_08807F2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (2222u << 16u);
      if (branch_taken) {
          goto L_08807F50;
      }
      goto L_08807F34;
    }
L_08807F34:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_08807F60;
      }
      goto L_08807F40;
    }
L_08807F40:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[6] = (ctx.gpr[6] | 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_08807F60;
      }
      goto L_08807F50;
    }
L_08807F50:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08807F60;
L_08807F60:
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    goto L_08807F64;
L_08807F64:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807F6C;
    }
L_08807F6C:
    ctx.gpr[31] = (0x08807F74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 48u, 0x0897421Cu>(ctx, &aot_mem) && ctx.pc == 0x08807F74u) goto L_08807F74;
    return;
L_08807F74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807F7C;
    }
L_08807F7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        goto L_08807FAC;
    }
    goto L_08807F88;
L_08807F88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08807FC8;
      }
      goto L_08807F90;
    }
L_08807F90:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32767));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08807FC4;
      }
      goto L_08807FAC;
    }
L_08807FAC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08807FC8;
      }
      goto L_08807FB4;
    }
L_08807FB4:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(21520), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08807FC4;
L_08807FC4:
    ctx.gpr[4] = (0u | 0u);
    goto L_08807FC8;
L_08807FC8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08807FD8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 608u, 0x089759D0u>(ctx, &aot_mem) && ctx.pc == 0x08807FD8u) goto L_08807FD8;
    return;
L_08807FD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 88u, 0x08808330u>(ctx, &aot_mem); return;
      }
      goto L_08807FE0;
    }
L_08807FE0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) > 0) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 2u, 0x0880800Cu>(ctx, &aot_mem); return;
    }
    goto L_08807FEC;
L_08807FEC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 5u, 0x08808028u>(ctx, &aot_mem); return;
      }
      goto L_08807FF4;
    }
L_08807FF4:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(21520)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.pc = 0x08808000u; return;
}

void recomp_unit_0000(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0000_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_0(Runtime &runtime) {
    runtime.register_generated_unit(0u, 0x08804000u, 16384u, &recomp_unit_0000, &recomp_unit_0000_entry);
    runtime.register_function(0x08804000u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804010u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880401Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804028u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804038u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804040u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804048u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804058u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804088u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880409Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088040ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804100u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880410Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804114u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804120u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804128u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804138u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804164u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804174u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880417Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804184u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880418Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804198u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088041F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804200u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804210u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804218u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804220u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804228u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880424Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804254u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880425Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804280u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804284u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880428Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804298u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088042F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804300u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804308u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804310u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804318u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804320u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804328u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880434Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880435Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804364u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880436Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804374u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880437Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804384u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880438Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804394u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880439Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088043FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804424u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880442Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804440u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804450u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804458u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804460u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880446Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804478u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804484u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880448Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804494u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088044F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804508u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880452Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804544u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880455Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804564u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804570u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804580u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804598u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088045FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804600u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804628u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880465Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880466Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804674u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804698u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088046B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088046D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088046F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804704u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804728u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804744u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880474Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880475Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804774u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804790u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088047F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804800u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880480Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804818u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804820u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880483Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804844u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804858u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804868u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804884u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088048FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804910u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804928u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804934u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880493Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880494Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804954u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804958u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804960u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880496Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880497Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804988u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088049F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A00u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A24u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A4Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A7Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A90u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804A9Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AB4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804ABCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804ACCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804ADCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804AECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B0Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B20u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B2Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B30u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B44u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B64u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B78u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804B88u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804BA4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804BB4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804BB8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804BCCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804BDCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804BF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804CB0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804CECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D48u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804D98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DB4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DC4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804DF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E08u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E30u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E58u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E60u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E68u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E70u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804E88u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EBCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804ECCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804ED8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804EE8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F0Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F1Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F58u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804F94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FB0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FBCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08804FFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805004u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805010u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880503Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805050u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805070u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805088u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805090u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880509Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088050A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088050ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088050B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088050C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088050E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088050F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880510Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880512Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805140u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805158u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880517Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805190u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088051B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088051D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088051E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805204u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805210u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880521Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880522Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880524Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805260u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805284u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088052F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805308u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805310u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805320u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880532Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805330u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805338u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805340u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880534Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805358u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880535Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805364u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805374u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880537Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805380u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805388u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088053ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088053E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088053ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088053F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880541Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880543Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805444u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880544Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805458u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805460u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805470u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880547Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805480u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805488u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805490u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880549Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088054A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088054ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088054B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088054C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088054CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088054D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088054D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088054FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805530u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805548u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805550u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880555Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880557Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805594u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088055ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088055C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088055D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088055DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088055E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088055F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805600u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805604u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880560Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805614u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805620u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880562Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805630u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805634u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880563Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805644u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805648u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805650u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805678u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088056A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088056B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088056C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088056CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088056E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088056F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805720u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805728u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805734u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805740u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805754u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880575Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880576Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805770u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088057F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805800u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805804u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805830u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805838u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805844u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805854u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880586Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805894u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088058A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088058B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088058DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088058E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088058F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805900u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805908u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805914u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805934u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805944u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805958u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880596Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805978u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805988u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088059A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088059CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088059D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088059E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088059F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088059F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088059FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A14u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A28u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A60u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805A80u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805ABCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805AD0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805AE8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805AF8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B10u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B18u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B2Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B68u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B74u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B7Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805B98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805BA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805BB0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805BC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805BD8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805BE4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C2Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C3Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C44u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C60u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805C90u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CA4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CB4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CD0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CD8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CE4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805CF8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D14u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D20u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D28u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D44u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D58u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D60u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D78u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D8Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805D98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DC0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DCCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805DF8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E14u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E28u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E64u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805E80u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F48u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F64u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F78u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805F9Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805FB0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805FB8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805FC0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805FD4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805FE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805FF4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08805FFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806004u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806018u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806030u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806040u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806048u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806050u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806064u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880606Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806074u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880607Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806084u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806098u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088060A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088060BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088060C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088060D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088060E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806108u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880611Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806134u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806140u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806150u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806158u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806164u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806178u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806180u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806190u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088061F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806208u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806220u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806238u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806250u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806268u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806280u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806298u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088062B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088062C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088062E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088062F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806310u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806358u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806370u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880637Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806390u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088063A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088063ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088063B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088063D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088063D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088063E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088063F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806400u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806408u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806420u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806424u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806434u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806444u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806458u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880645Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806468u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806484u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880648Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806494u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088064B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088064BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088064C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088064E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088064E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088064F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806510u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806518u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806520u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806538u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806540u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806548u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880655Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880656Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806584u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880658Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806594u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088065ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088065B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088065BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088065D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088065DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088065E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088065FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806604u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880660Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806624u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880662Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806634u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880664Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806654u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880665Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806674u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880667Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806684u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880669Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088066FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806714u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806720u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806734u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880674Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806750u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880675Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806774u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880677Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806784u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880679Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088067A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088067ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088067C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088067C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088067D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088067E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088067FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806800u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880680Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806828u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806830u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806838u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806858u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806860u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806868u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806884u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880688Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806894u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068BCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088068ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806900u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806910u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806928u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806930u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806938u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806950u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806958u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806960u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806978u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806980u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806988u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088069A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088069A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088069B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088069C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088069D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088069D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088069F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088069F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A00u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A18u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A20u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A28u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A48u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A68u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A70u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A78u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806A8Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806AA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806ABCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806AD0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806AE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806AECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B08u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B1Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B30u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B3Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B64u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B78u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B80u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B88u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B8Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806B94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806BA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806BC0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806BD4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806BDCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806BF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806BFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C08u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C18u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C28u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C30u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C48u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C54u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C58u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C7Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806C98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CBCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CD4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CDCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CE4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806CF8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D00u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D0Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D14u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D20u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D30u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D38u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D48u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D58u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D64u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D70u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D78u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D80u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D88u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806D9Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806DA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806DB0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806DBCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806DE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806DECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E08u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E14u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E20u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E2Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E44u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E74u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E78u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806E94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806EA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806EB4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806EBCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806EC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806EECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806EF8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F08u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F18u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F3Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F4Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F64u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F74u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F7Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806F90u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08806FA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807024u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880702Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088070A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088070A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088070D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088070D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088070E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088070ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088070F4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088070FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807108u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880710Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807110u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807114u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880711Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807124u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880712Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807134u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880713Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807144u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880714Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807160u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807184u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880718Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807198u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088071A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088071ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088071B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088071C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880721Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807234u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088072A0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088072ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088072C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807328u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880733Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880734Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807360u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807370u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807384u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807394u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088073A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088073B8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088073CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088073DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088073F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088073FCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880742Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880746Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880748Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880749Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088074A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088074B4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088074C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088074CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088074D4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088074E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088074ECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088074F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807500u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807508u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807510u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807520u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807538u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807540u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807548u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807560u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807568u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880756Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807584u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088075DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807600u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807614u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807630u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807644u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807660u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807670u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807684u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088076A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088076C4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088076CCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088076D8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088076F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088076F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880770Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807750u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807774u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880778Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088077A4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088077ACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088077C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088077C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088077DCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088077E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088077F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807800u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807818u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807820u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807830u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807838u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807850u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807858u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807868u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807870u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880788Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807894u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088078A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088078B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088078C0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088078C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088078E8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088078F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807904u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880790Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807920u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807928u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807934u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880793Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807960u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807968u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807978u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880798Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807994u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x0880799Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088079A8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088079B0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088079C8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088079D0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088079E0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088079E4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088079F0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x088079F8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807A04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807A0Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807A24u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807A2Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807A3Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807A40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807A50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807A58u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807A6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807A74u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807A88u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807A90u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807A98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807AA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807AB0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807AB8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807AC4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807ACCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807AE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807AE8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807AFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B18u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B20u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B3Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B58u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B74u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B84u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B8Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807B98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807BA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807BB0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807BB8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807BC4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807BE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807BE8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807BF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807BFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C08u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C10u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C18u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C20u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C2Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C3Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C48u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C54u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C78u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C80u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C88u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C94u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807C9Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CA4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CB0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CB8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CC0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CC4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CCCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CD4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CD8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807CFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D0Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D18u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D20u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D28u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D3Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D44u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D48u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D58u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D64u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D74u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D80u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D88u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D90u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807D9Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807DA4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807DA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807DACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807DB8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807DD0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807DE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807DE8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807DF0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807DFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E10u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E20u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E24u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E2Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E3Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E4Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E54u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E5Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E68u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E7Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E8Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E90u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807E98u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807EA0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807EA8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807EB8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807EC0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807EC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807ED4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807EE8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807EF8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807EFCu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F04u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F0Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F14u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F24u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F2Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F34u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F40u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F50u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F60u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F64u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F6Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F74u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F7Cu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F88u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807F90u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807FACu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807FB4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807FC4u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807FC8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807FD8u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807FE0u, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807FECu, &recomp_unit_0000, "recomp_unit_0000");
    runtime.register_function(0x08807FF4u, &recomp_unit_0000, "recomp_unit_0000");
}
} // namespace psprecomp

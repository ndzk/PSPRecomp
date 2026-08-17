#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0009[4090] = {
    1, 2, 0, 3, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0,
    0, 11, 0, 0, 12, 0, 0, 0, 13, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 16, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 23,
    0, 24, 0, 0, 25, 0, 26, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 0, 34,
    0, 35, 0, 36, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0, 43,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0,
    0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 0, 0, 55,
    0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0,
    0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0,
    0, 62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 68, 0, 69, 0,
    0, 0, 0, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 75, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 0, 0, 0, 0, 79, 0, 80, 0,
    81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 0, 91, 92, 0, 0, 93, 0, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 103, 104, 0, 0, 0,
    0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0,
    0, 0, 110, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 0, 118, 0, 119, 120, 0, 0, 0, 0, 121,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0,
    127, 0, 128, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 132, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 136,
    0, 0, 137, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 142, 0, 0, 143, 0, 144, 0, 145, 0, 146, 0, 0,
    0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 153, 0, 154, 0, 0,
    0, 0, 0, 155, 156, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 161, 0, 0, 162, 0,
    163, 0, 164, 0, 165, 0, 166, 0, 0, 167, 0, 168, 0, 169, 0, 170, 171, 172, 0, 0, 0, 0, 173, 0, 174, 175, 0, 176, 0, 0, 0, 177,
    0, 178, 179, 0, 180, 0, 0, 0, 181, 0, 182, 0, 0, 0, 183, 184, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 190, 0, 0, 191, 0, 0, 192, 0, 0, 0,
    0, 0, 193, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0,
    0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0, 0, 204, 0, 0, 0, 205,
    0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 213, 0, 0, 214, 0, 0, 0, 0,
    0, 0, 0, 215, 0, 0, 0, 216, 217, 0, 0, 218, 0, 0, 0, 219, 220, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 224, 0, 225, 0, 0,
    0, 226, 227, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0,
    232, 0, 0, 0, 0, 0, 233, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 236, 237, 0, 0, 238, 0, 239, 0, 0, 0, 0, 0, 240, 0,
    0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0,
    244, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 0, 248, 0, 249, 250, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0,
    0, 0, 0, 0, 254, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0,
    0, 0, 0, 260, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264, 0, 265, 0, 266, 0, 0, 0,
    0, 0, 0, 267, 0, 0, 0, 268, 269, 0, 270, 0, 271, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0,
    0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 280, 281, 0, 282, 0, 0, 0, 0, 0, 283, 0,
    0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 287, 0, 0, 288, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 293, 0, 0, 294, 0, 295, 0, 296, 0, 297, 298, 0, 0, 299, 0, 0, 0, 0, 0,
    0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 304,
    0, 0, 305, 0, 0, 306, 0, 0, 0, 307, 308, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 311, 0, 312, 0, 313, 0, 314, 0, 0, 315, 316,
    0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 320, 0, 321, 0, 0, 322, 0, 0, 323, 0, 324, 0, 325, 0, 326, 0, 0, 0, 0, 327,
    328, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 332, 0, 0, 0, 333, 0, 0,
    0, 334, 0, 335, 0, 0, 336, 0, 0, 337, 338, 0, 339, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0, 0, 349, 0, 350, 0, 0, 0, 0, 351, 0, 352, 0, 353, 0,
    354, 0, 355, 0, 356, 357, 0, 0, 358, 0, 359, 0, 360, 0, 0, 361, 0, 0, 362, 363, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 366, 0, 0, 0, 367, 0, 368, 0, 369, 0, 370, 0, 371, 372, 0, 0, 373, 0, 374, 0, 375, 0, 0, 376, 0, 0, 377, 378, 0,
    0, 379, 380, 0, 381, 0, 0, 0, 0, 382, 0, 383, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 387, 0,
    0, 0, 0, 388, 0, 0, 0, 389, 390, 0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 396, 0, 397, 0, 398,
    0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 402, 0, 0, 403, 404, 0, 0, 405, 0, 0, 406, 0, 407, 0, 408, 0, 409, 0, 0,
    410, 0, 0, 0, 0, 0, 411, 0, 412, 0, 0, 413, 0, 0, 414, 415, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0,
    0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 420, 421, 0, 0, 422, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 429, 0,
    430, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 436, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0,
    441, 0, 442, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 446, 0, 447, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 452, 0, 0, 453, 0, 454, 0, 0, 0,
    0, 455, 0, 0, 456, 0, 457, 0, 0, 0, 458, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 462, 0,
    0, 0, 0, 0, 0, 463, 464, 0, 0, 0, 0, 465, 0, 466, 0, 467, 0, 0, 468, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 471,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 475, 0, 476, 0, 0, 477,
    0, 0, 0, 478, 0, 479, 0, 0, 480, 0, 481, 0, 482, 0, 0, 483, 0, 484, 0, 485, 0, 0, 486, 0, 487, 0, 488, 0, 0, 489, 0, 490,
    0, 491, 0, 0, 492, 0, 493, 0, 494, 0, 0, 495, 0, 496, 0, 497, 0, 0, 498, 0, 499, 0, 500, 0, 501, 502, 0, 0, 503, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 0, 506, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0,
    0, 509, 0, 0, 0, 510, 511, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0,
    516, 517, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 0, 0, 521, 0, 0, 522, 0, 0, 0,
    0, 0, 0, 523, 0, 524, 0, 525, 0, 0, 526, 0, 0, 527, 0, 528, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0,
    0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 533, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0,
    0, 540, 0, 541, 0, 542, 0, 0, 543, 0, 544, 0, 545, 546, 0, 547, 0, 0, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 550, 0, 0, 0,
    0, 551, 0, 0, 552, 0, 0, 553, 0, 0, 554, 0, 555, 0, 556, 0, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0,
    560, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 564, 0, 0, 0, 565, 0, 566, 0, 0, 567, 0, 0, 0, 568, 0, 0, 0, 0, 569,
    570, 0, 0, 571, 0, 572, 0, 0, 0, 573, 0, 0, 0, 574, 0, 575, 576, 0, 577, 0, 0, 0, 0, 0, 578, 0, 579, 0, 0, 0, 0, 580,
    0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 582, 0, 0, 0, 583, 584, 0, 0, 585, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 588,
    0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 593, 0, 594, 0, 0, 595, 0, 0, 0, 596, 0, 597, 0, 598, 0, 0,
    0, 0, 599, 0, 0, 600, 0, 0, 601, 0, 0, 602, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 605, 0, 606, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 607, 608, 0, 0, 0, 0, 0, 0, 609, 610, 0, 0, 0, 0, 611, 0, 612, 0, 613, 0, 0, 614, 0, 0, 615, 0,
    0, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0,
    0, 620, 0, 621, 0, 622, 0, 0, 623, 0, 0, 0, 624, 0, 625, 0, 0, 626, 0, 627, 0, 628, 0, 0, 629, 0, 630, 0, 631, 0, 0, 632,
    0, 633, 0, 634, 0, 0, 635, 0, 636, 0, 637, 0, 0, 638, 0, 639, 0, 640, 0, 0, 641, 0, 642, 0, 643, 0, 0, 644, 0, 645, 0, 646,
    0, 647, 648, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 652, 653, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 656, 657, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 659, 0, 0, 0, 0,
    0, 660, 0, 0, 0, 661, 0, 0, 0, 662, 663, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 666, 0,
    0, 0, 667, 0, 0, 668, 0, 0, 0, 0, 0, 0, 669, 0, 670, 0, 671, 0, 0, 672, 0, 0, 673, 0, 674, 0, 0, 0, 0, 675, 0, 0,
    0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 678, 0, 0, 0, 679, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 684, 0, 685, 0,
    0, 0, 686, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 693, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 695, 0, 0, 0, 0, 696, 697, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 700, 0, 701, 0, 702, 0, 703, 0, 704, 0, 0, 0, 705, 0,
    0, 706, 0, 0, 707, 0, 0, 708, 0, 0, 0, 0, 0, 709, 0, 710, 0, 711, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 716, 0, 0, 0, 0, 0,
    0, 717, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 720, 721, 0, 0, 722, 0, 723, 0, 724, 0, 725, 0, 726, 0, 0, 0, 727, 0, 0,
    728, 0, 0, 729, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 731, 0, 732, 0, 733, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 737, 0, 738, 0, 0, 0, 0,
    0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0, 741, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 744,
    0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0, 748, 0, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0, 751, 0, 0,
    0, 752, 0, 753, 0, 0, 754, 0, 0, 755, 0, 756, 0, 0, 757, 0, 0, 758, 0, 0, 759, 0, 760, 761, 0, 762, 0, 0, 763, 0, 0, 764,
    0, 765, 0, 0, 0, 766, 767, 0, 0, 0, 768, 0, 0, 0, 0, 769, 0, 0, 0, 770, 0, 0, 771, 0, 772, 773, 0, 774, 0, 775, 776, 0,
    777, 0, 778, 779, 0, 780, 0, 781, 0, 782, 0, 0, 783, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 786, 0, 0, 787,
    0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 790, 791, 0, 0, 0, 792, 0, 0, 793, 0, 794, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 798, 0, 0, 799, 0, 0, 0, 800, 0, 0, 801, 0, 802, 0, 0, 0, 0, 0, 803,
    0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 806, 0, 0, 0, 0, 0, 807, 0, 0, 0, 0, 0,
    808, 0, 0, 0, 0, 0, 0, 0, 0, 0, 809, 0, 0, 810, 0, 811, 0, 812, 0, 813, 814, 0, 815, 0, 816, 0, 817, 0, 0, 0, 0, 818,
    0, 0, 819, 0, 0, 0, 0, 820, 0, 0, 821, 0, 822, 823, 0, 824, 0, 825, 826, 0, 827, 0, 828, 829, 0, 830, 0, 831, 832, 0, 833, 0,
    0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 836,
    0, 837, 0, 838, 0, 0, 839, 0, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 841, 0,
    0, 0, 0, 842, 0, 0, 0, 0, 843, 0, 0, 844, 0, 845, 846, 0, 847, 848, 0, 0, 0, 849, 0, 850, 0, 0, 0, 0, 851, 0, 0, 0,
    852, 0, 853, 0, 0, 854, 0, 855, 0, 856, 0, 0, 0, 0, 857, 0, 0, 0, 858, 0, 859, 860, 0, 0, 0, 0, 861, 0, 0, 0, 862, 863,
    0, 0, 864, 0, 0, 0, 865, 0, 866, 0, 867, 0, 0, 868, 0, 869, 870, 0, 871, 0, 0, 872, 0, 873, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 874, 0, 875, 0, 0, 0, 0, 0, 0, 876, 0, 0, 0, 877, 0, 0, 878, 0, 879, 0, 0, 0, 0, 880, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 881, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 882, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 883, 0, 0, 0, 0, 0, 0, 0, 0, 0, 884, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    885, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 887, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 888, 0, 889, 0, 0, 0, 0, 890, 0, 891, 0, 0, 0, 0, 892, 0, 893, 0, 0, 0, 0, 894, 0, 895, 0,
    0, 0, 0, 0, 0, 0, 896, 0, 0, 0, 0, 0, 0, 0, 0, 897, 0, 0, 0, 0, 0, 0, 898, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 899, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 900, 0, 901, 0, 0, 0, 0, 902, 0, 0, 0, 0, 903, 0,
    0, 0, 0, 0, 0, 904, 0, 0, 905, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 906, 0, 907, 0, 908, 0, 0, 0, 0, 909, 0, 0, 910, 0, 0, 0, 0, 0, 911, 0, 0, 0, 0, 0, 0, 0, 0, 912, 0, 913, 0,
    914, 0, 0, 915, 0, 916, 0, 917, 0, 918, 0, 0, 919, 0, 920, 0, 921, 0, 922, 923, 0, 924, 0, 0, 0, 0, 0, 0, 0, 0, 0, 925,
    0, 0, 0, 926, 0, 0, 927, 0, 928, 0, 0, 929, 0, 930, 0, 0, 0, 0, 0, 0, 931, 0, 932, 0, 0, 933,
};
void recomp_unit_0009_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08828004u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0009[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08828004;
    case 2u: goto L_08828008;
    case 3u: goto L_08828010;
    case 4u: goto L_0882802C;
    case 5u: goto L_08828030;
    case 6u: goto L_08828040;
    case 7u: goto L_08828048;
    case 8u: goto L_08828050;
    case 9u: goto L_08828060;
    case 10u: goto L_08828078;
    case 11u: goto L_08828088;
    case 12u: goto L_08828094;
    case 13u: goto L_088280A4;
    case 14u: goto L_088280A8;
    case 15u: goto L_088280CC;
    case 16u: goto L_08828108;
    case 17u: goto L_08828110;
    case 18u: goto L_08828124;
    case 19u: goto L_08828138;
    case 20u: goto L_08828148;
    case 21u: goto L_08828160;
    case 22u: goto L_0882817C;
    case 23u: goto L_08828180;
    case 24u: goto L_08828188;
    case 25u: goto L_08828194;
    case 26u: goto L_0882819C;
    case 27u: goto L_088281A4;
    case 28u: goto L_088281B0;
    case 29u: goto L_088281C8;
    case 30u: goto L_088281D0;
    case 31u: goto L_088281E0;
    case 32u: goto L_088281E8;
    case 33u: goto L_088281F0;
    case 34u: goto L_08828200;
    case 35u: goto L_08828208;
    case 36u: goto L_08828210;
    case 37u: goto L_0882821C;
    case 38u: goto L_08828224;
    case 39u: goto L_08828250;
    case 40u: goto L_08828260;
    case 41u: goto L_0882826C;
    case 42u: goto L_08828274;
    case 43u: goto L_08828280;
    case 44u: goto L_088282B8;
    case 45u: goto L_088282C0;
    case 46u: goto L_088282E0;
    case 47u: goto L_088282FC;
    case 48u: goto L_0882830C;
    case 49u: goto L_08828320;
    case 50u: goto L_08828330;
    case 51u: goto L_0882834C;
    case 52u: goto L_08828360;
    case 53u: goto L_08828368;
    case 54u: goto L_08828370;
    case 55u: goto L_08828380;
    case 56u: goto L_088283A4;
    case 57u: goto L_088283D8;
    case 58u: goto L_088283F0;
    case 59u: goto L_08828408;
    case 60u: goto L_0882842C;
    case 61u: goto L_0882847C;
    case 62u: goto L_08828488;
    case 63u: goto L_08828490;
    case 64u: goto L_088284A8;
    case 65u: goto L_088284B4;
    case 66u: goto L_088284D4;
    case 67u: goto L_088284DC;
    case 68u: goto L_088284F4;
    case 69u: goto L_088284FC;
    case 70u: goto L_08828514;
    case 71u: goto L_0882851C;
    case 72u: goto L_08828524;
    case 73u: goto L_0882852C;
    case 74u: goto L_08828534;
    case 75u: goto L_08828538;
    case 76u: goto L_0882854C;
    case 77u: goto L_08828554;
    case 78u: goto L_0882855C;
    case 79u: goto L_08828574;
    case 80u: goto L_0882857C;
    case 81u: goto L_08828584;
    case 82u: goto L_0882858C;
    case 83u: goto L_08828594;
    case 84u: goto L_0882859C;
    case 85u: goto L_088285A4;
    case 86u: goto L_088285B0;
    case 87u: goto L_088285B8;
    case 88u: goto L_088285C0;
    case 89u: goto L_088285C8;
    case 90u: goto L_088285D0;
    case 91u: goto L_088285DC;
    case 92u: goto L_088285E0;
    case 93u: goto L_088285EC;
    case 94u: goto L_088285F8;
    case 95u: goto L_08828620;
    case 96u: goto L_08828638;
    case 97u: goto L_08828640;
    case 98u: goto L_08828674;
    case 99u: goto L_08828684;
    case 100u: goto L_088286A4;
    case 101u: goto L_088286BC;
    case 102u: goto L_088286D4;
    case 103u: goto L_088286F0;
    case 104u: goto L_088286F4;
    case 105u: goto L_08828710;
    case 106u: goto L_08828728;
    case 107u: goto L_0882873C;
    case 108u: goto L_08828758;
    case 109u: goto L_08828770;
    case 110u: goto L_0882878C;
    case 111u: goto L_08828794;
    case 112u: goto L_088287A8;
    case 113u: goto L_088287C4;
    case 114u: goto L_088287F8;
    case 115u: goto L_08828838;
    case 116u: goto L_08828840;
    case 117u: goto L_08828850;
    case 118u: goto L_08828860;
    case 119u: goto L_08828868;
    case 120u: goto L_0882886C;
    case 121u: goto L_08828880;
    case 122u: goto L_088288B0;
    case 123u: goto L_088288B8;
    case 124u: goto L_088288C4;
    case 125u: goto L_088288EC;
    case 126u: goto L_088288F4;
    case 127u: goto L_08828904;
    case 128u: goto L_0882890C;
    case 129u: goto L_08828918;
    case 130u: goto L_08828920;
    case 131u: goto L_08828948;
    case 132u: goto L_0882894C;
    case 133u: goto L_0882895C;
    case 134u: goto L_08828964;
    case 135u: goto L_0882896C;
    case 136u: goto L_08828980;
    case 137u: goto L_0882898C;
    case 138u: goto L_08828994;
    case 139u: goto L_0882899C;
    case 140u: goto L_088289B8;
    case 141u: goto L_088289C0;
    case 142u: goto L_088289D4;
    case 143u: goto L_088289E0;
    case 144u: goto L_088289E8;
    case 145u: goto L_088289F0;
    case 146u: goto L_088289F8;
    case 147u: goto L_08828A10;
    case 148u: goto L_08828A18;
    case 149u: goto L_08828A30;
    case 150u: goto L_08828A38;
    case 151u: goto L_08828A50;
    case 152u: goto L_08828A58;
    case 153u: goto L_08828A70;
    case 154u: goto L_08828A78;
    case 155u: goto L_08828A90;
    case 156u: goto L_08828A94;
    case 157u: goto L_08828AA4;
    case 158u: goto L_08828AB0;
    case 159u: goto L_08828AD4;
    case 160u: goto L_08828ADC;
    case 161u: goto L_08828AF0;
    case 162u: goto L_08828AFC;
    case 163u: goto L_08828B04;
    case 164u: goto L_08828B0C;
    case 165u: goto L_08828B14;
    case 166u: goto L_08828B1C;
    case 167u: goto L_08828B28;
    case 168u: goto L_08828B30;
    case 169u: goto L_08828B38;
    case 170u: goto L_08828B40;
    case 171u: goto L_08828B44;
    case 172u: goto L_08828B48;
    case 173u: goto L_08828B5C;
    case 174u: goto L_08828B64;
    case 175u: goto L_08828B68;
    case 176u: goto L_08828B70;
    case 177u: goto L_08828B80;
    case 178u: goto L_08828B88;
    case 179u: goto L_08828B8C;
    case 180u: goto L_08828B94;
    case 181u: goto L_08828BA4;
    case 182u: goto L_08828BAC;
    case 183u: goto L_08828BBC;
    case 184u: goto L_08828BC0;
    case 185u: goto L_08828BCC;
    case 186u: goto L_08828BF4;
    case 187u: goto L_08828C08;
    case 188u: goto L_08828C40;
    case 189u: goto L_08828C54;
    case 190u: goto L_08828C5C;
    case 191u: goto L_08828C68;
    case 192u: goto L_08828C74;
    case 193u: goto L_08828C8C;
    case 194u: goto L_08828C94;
    case 195u: goto L_08828CA0;
    case 196u: goto L_08828CBC;
    case 197u: goto L_08828CF8;
    case 198u: goto L_08828D0C;
    case 199u: goto L_08828D20;
    case 200u: goto L_08828D34;
    case 201u: goto L_08828D48;
    case 202u: goto L_08828D5C;
    case 203u: goto L_08828D64;
    case 204u: goto L_08828D70;
    case 205u: goto L_08828D80;
    case 206u: goto L_08828D98;
    case 207u: goto L_08828DAC;
    case 208u: goto L_08828DC0;
    case 209u: goto L_08828DC8;
    case 210u: goto L_08828DD4;
    case 211u: goto L_08828DF4;
    case 212u: goto L_08828E50;
    case 213u: goto L_08828E64;
    case 214u: goto L_08828E70;
    case 215u: goto L_08828E90;
    case 216u: goto L_08828EA0;
    case 217u: goto L_08828EA4;
    case 218u: goto L_08828EB0;
    case 219u: goto L_08828EC0;
    case 220u: goto L_08828EC4;
    case 221u: goto L_08828ED0;
    case 222u: goto L_08828EE0;
    case 223u: goto L_08828EE8;
    case 224u: goto L_08828EF0;
    case 225u: goto L_08828EF8;
    case 226u: goto L_08828F08;
    case 227u: goto L_08828F0C;
    case 228u: goto L_08828F14;
    case 229u: goto L_08828F24;
    case 230u: goto L_08828F48;
    case 231u: goto L_08828F74;
    case 232u: goto L_08828F84;
    case 233u: goto L_08828F9C;
    case 234u: goto L_08828FA0;
    case 235u: goto L_08828FB4;
    case 236u: goto L_08828FCC;
    case 237u: goto L_08828FD0;
    case 238u: goto L_08828FDC;
    case 239u: goto L_08828FE4;
    case 240u: goto L_08828FFC;
    case 241u: goto L_08829014;
    case 242u: goto L_08829038;
    case 243u: goto L_0882906C;
    case 244u: goto L_08829084;
    case 245u: goto L_08829088;
    case 246u: goto L_0882909C;
    case 247u: goto L_088290B4;
    case 248u: goto L_088290C0;
    case 249u: goto L_088290C8;
    case 250u: goto L_088290CC;
    case 251u: goto L_088290D8;
    case 252u: goto L_088290E0;
    case 253u: goto L_088290F8;
    case 254u: goto L_08829114;
    case 255u: goto L_08829120;
    case 256u: goto L_08829128;
    case 257u: goto L_0882914C;
    case 258u: goto L_08829168;
    case 259u: goto L_08829174;
    case 260u: goto L_08829190;
    case 261u: goto L_0882919C;
    case 262u: goto L_088291A4;
    case 263u: goto L_088291D4;
    case 264u: goto L_088291E4;
    case 265u: goto L_088291EC;
    case 266u: goto L_088291F4;
    case 267u: goto L_08829210;
    case 268u: goto L_08829220;
    case 269u: goto L_08829224;
    case 270u: goto L_0882922C;
    case 271u: goto L_08829234;
    case 272u: goto L_08829244;
    case 273u: goto L_0882924C;
    case 274u: goto L_08829270;
    case 275u: goto L_0882927C;
    case 276u: goto L_08829294;
    case 277u: goto L_088292A4;
    case 278u: goto L_088292C0;
    case 279u: goto L_088292D0;
    case 280u: goto L_088292D8;
    case 281u: goto L_088292DC;
    case 282u: goto L_088292E4;
    case 283u: goto L_088292FC;
    case 284u: goto L_0882930C;
    case 285u: goto L_08829328;
    case 286u: goto L_08829338;
    case 287u: goto L_0882933C;
    case 288u: goto L_08829348;
    case 289u: goto L_08829358;
    case 290u: goto L_08829368;
    case 291u: goto L_0882939C;
    case 292u: goto L_088293A4;
    case 293u: goto L_088293B8;
    case 294u: goto L_088293C4;
    case 295u: goto L_088293CC;
    case 296u: goto L_088293D4;
    case 297u: goto L_088293DC;
    case 298u: goto L_088293E0;
    case 299u: goto L_088293EC;
    case 300u: goto L_08829410;
    case 301u: goto L_08829434;
    case 302u: goto L_0882946C;
    case 303u: goto L_0882947C;
    case 304u: goto L_08829480;
    case 305u: goto L_0882948C;
    case 306u: goto L_08829498;
    case 307u: goto L_088294A8;
    case 308u: goto L_088294AC;
    case 309u: goto L_088294C0;
    case 310u: goto L_088294CC;
    case 311u: goto L_088294D8;
    case 312u: goto L_088294E0;
    case 313u: goto L_088294E8;
    case 314u: goto L_088294F0;
    case 315u: goto L_088294FC;
    case 316u: goto L_08829500;
    case 317u: goto L_08829514;
    case 318u: goto L_08829520;
    case 319u: goto L_0882952C;
    case 320u: goto L_08829534;
    case 321u: goto L_0882953C;
    case 322u: goto L_08829548;
    case 323u: goto L_08829554;
    case 324u: goto L_0882955C;
    case 325u: goto L_08829564;
    case 326u: goto L_0882956C;
    case 327u: goto L_08829580;
    case 328u: goto L_08829584;
    case 329u: goto L_08829598;
    case 330u: goto L_088295D0;
    case 331u: goto L_088295E0;
    case 332u: goto L_088295E8;
    case 333u: goto L_088295F8;
    case 334u: goto L_08829608;
    case 335u: goto L_08829610;
    case 336u: goto L_0882961C;
    case 337u: goto L_08829628;
    case 338u: goto L_0882962C;
    case 339u: goto L_08829634;
    case 340u: goto L_08829638;
    case 341u: goto L_08829644;
    case 342u: goto L_0882966C;
    case 343u: goto L_0882969C;
    case 344u: goto L_088296A4;
    case 345u: goto L_088296AC;
    case 346u: goto L_088296B4;
    case 347u: goto L_088296BC;
    case 348u: goto L_088296C4;
    case 349u: goto L_088296D0;
    case 350u: goto L_088296D8;
    case 351u: goto L_088296EC;
    case 352u: goto L_088296F4;
    case 353u: goto L_088296FC;
    case 354u: goto L_08829704;
    case 355u: goto L_0882970C;
    case 356u: goto L_08829714;
    case 357u: goto L_08829718;
    case 358u: goto L_08829724;
    case 359u: goto L_0882972C;
    case 360u: goto L_08829734;
    case 361u: goto L_08829740;
    case 362u: goto L_0882974C;
    case 363u: goto L_08829750;
    case 364u: goto L_0882975C;
    case 365u: goto L_08829764;
    case 366u: goto L_08829790;
    case 367u: goto L_088297A0;
    case 368u: goto L_088297A8;
    case 369u: goto L_088297B0;
    case 370u: goto L_088297B8;
    case 371u: goto L_088297C0;
    case 372u: goto L_088297C4;
    case 373u: goto L_088297D0;
    case 374u: goto L_088297D8;
    case 375u: goto L_088297E0;
    case 376u: goto L_088297EC;
    case 377u: goto L_088297F8;
    case 378u: goto L_088297FC;
    case 379u: goto L_08829808;
    case 380u: goto L_0882980C;
    case 381u: goto L_08829814;
    case 382u: goto L_08829828;
    case 383u: goto L_08829830;
    case 384u: goto L_08829838;
    case 385u: goto L_08829840;
    case 386u: goto L_0882985C;
    case 387u: goto L_0882987C;
    case 388u: goto L_08829890;
    case 389u: goto L_088298A0;
    case 390u: goto L_088298A4;
    case 391u: goto L_088298B0;
    case 392u: goto L_088298BC;
    case 393u: goto L_088298D8;
    case 394u: goto L_088298E0;
    case 395u: goto L_088298E8;
    case 396u: goto L_088298F0;
    case 397u: goto L_088298F8;
    case 398u: goto L_08829900;
    case 399u: goto L_0882990C;
    case 400u: goto L_08829924;
    case 401u: goto L_0882992C;
    case 402u: goto L_08829938;
    case 403u: goto L_08829944;
    case 404u: goto L_08829948;
    case 405u: goto L_08829954;
    case 406u: goto L_08829960;
    case 407u: goto L_08829968;
    case 408u: goto L_08829970;
    case 409u: goto L_08829978;
    case 410u: goto L_08829984;
    case 411u: goto L_0882999C;
    case 412u: goto L_088299A4;
    case 413u: goto L_088299B0;
    case 414u: goto L_088299BC;
    case 415u: goto L_088299C0;
    case 416u: goto L_088299CC;
    case 417u: goto L_088299D4;
    case 418u: goto L_088299F0;
    case 419u: goto L_08829A14;
    case 420u: goto L_08829A38;
    case 421u: goto L_08829A3C;
    case 422u: goto L_08829A48;
    case 423u: goto L_08829A54;
    case 424u: goto L_08829A70;
    case 425u: goto L_08829AA8;
    case 426u: goto L_08829B4C;
    case 427u: goto L_08829B68;
    case 428u: goto L_08829B70;
    case 429u: goto L_08829B7C;
    case 430u: goto L_08829B84;
    case 431u: goto L_08829B88;
    case 432u: goto L_08829B9C;
    case 433u: goto L_08829BB8;
    case 434u: goto L_08829BE8;
    case 435u: goto L_08829BF0;
    case 436u: goto L_08829BF4;
    case 437u: goto L_08829C44;
    case 438u: goto L_08829C4C;
    case 439u: goto L_08829C5C;
    case 440u: goto L_08829C78;
    case 441u: goto L_08829C84;
    case 442u: goto L_08829C8C;
    case 443u: goto L_08829C98;
    case 444u: goto L_08829CB0;
    case 445u: goto L_08829CCC;
    case 446u: goto L_08829CD0;
    case 447u: goto L_08829CD8;
    case 448u: goto L_08829CE4;
    case 449u: goto L_08829CF8;
    case 450u: goto L_08829D4C;
    case 451u: goto L_08829D58;
    case 452u: goto L_08829D60;
    case 453u: goto L_08829D6C;
    case 454u: goto L_08829D74;
    case 455u: goto L_08829D88;
    case 456u: goto L_08829D94;
    case 457u: goto L_08829D9C;
    case 458u: goto L_08829DAC;
    case 459u: goto L_08829DBC;
    case 460u: goto L_08829DC4;
    case 461u: goto L_08829DF8;
    case 462u: goto L_08829DFC;
    case 463u: goto L_08829E18;
    case 464u: goto L_08829E1C;
    case 465u: goto L_08829E30;
    case 466u: goto L_08829E38;
    case 467u: goto L_08829E40;
    case 468u: goto L_08829E4C;
    case 469u: goto L_08829E58;
    case 470u: goto L_08829E68;
    case 471u: goto L_08829E80;
    case 472u: goto L_08829EB0;
    case 473u: goto L_08829F48;
    case 474u: goto L_08829F64;
    case 475u: goto L_08829F6C;
    case 476u: goto L_08829F74;
    case 477u: goto L_08829F80;
    case 478u: goto L_08829F90;
    case 479u: goto L_08829F98;
    case 480u: goto L_08829FA4;
    case 481u: goto L_08829FAC;
    case 482u: goto L_08829FB4;
    case 483u: goto L_08829FC0;
    case 484u: goto L_08829FC8;
    case 485u: goto L_08829FD0;
    case 486u: goto L_08829FDC;
    case 487u: goto L_08829FE4;
    case 488u: goto L_08829FEC;
    case 489u: goto L_08829FF8;
    case 490u: goto L_0882A000;
    case 491u: goto L_0882A008;
    case 492u: goto L_0882A014;
    case 493u: goto L_0882A01C;
    case 494u: goto L_0882A024;
    case 495u: goto L_0882A030;
    case 496u: goto L_0882A038;
    case 497u: goto L_0882A040;
    case 498u: goto L_0882A04C;
    case 499u: goto L_0882A054;
    case 500u: goto L_0882A05C;
    case 501u: goto L_0882A064;
    case 502u: goto L_0882A068;
    case 503u: goto L_0882A074;
    case 504u: goto L_0882A0A8;
    case 505u: goto L_0882A0B4;
    case 506u: goto L_0882A0C0;
    case 507u: goto L_0882A0C4;
    case 508u: goto L_0882A0EC;
    case 509u: goto L_0882A108;
    case 510u: goto L_0882A118;
    case 511u: goto L_0882A11C;
    case 512u: goto L_0882A138;
    case 513u: goto L_0882A14C;
    case 514u: goto L_0882A164;
    case 515u: goto L_0882A174;
    case 516u: goto L_0882A184;
    case 517u: goto L_0882A188;
    case 518u: goto L_0882A1A8;
    case 519u: goto L_0882A1D0;
    case 520u: goto L_0882A1D8;
    case 521u: goto L_0882A1E8;
    case 522u: goto L_0882A1F4;
    case 523u: goto L_0882A210;
    case 524u: goto L_0882A218;
    case 525u: goto L_0882A220;
    case 526u: goto L_0882A22C;
    case 527u: goto L_0882A238;
    case 528u: goto L_0882A240;
    case 529u: goto L_0882A254;
    case 530u: goto L_0882A270;
    case 531u: goto L_0882A288;
    case 532u: goto L_0882A2A0;
    case 533u: goto L_0882A2B0;
    case 534u: goto L_0882A2B4;
    case 535u: goto L_0882A2EC;
    case 536u: goto L_0882A338;
    case 537u: goto L_0882A344;
    case 538u: goto L_0882A350;
    case 539u: goto L_0882A374;
    case 540u: goto L_0882A388;
    case 541u: goto L_0882A390;
    case 542u: goto L_0882A398;
    case 543u: goto L_0882A3A4;
    case 544u: goto L_0882A3AC;
    case 545u: goto L_0882A3B4;
    case 546u: goto L_0882A3B8;
    case 547u: goto L_0882A3C0;
    case 548u: goto L_0882A3DC;
    case 549u: goto L_0882A3E4;
    case 550u: goto L_0882A3F4;
    case 551u: goto L_0882A408;
    case 552u: goto L_0882A414;
    case 553u: goto L_0882A420;
    case 554u: goto L_0882A42C;
    case 555u: goto L_0882A434;
    case 556u: goto L_0882A43C;
    case 557u: goto L_0882A448;
    case 558u: goto L_0882A464;
    case 559u: goto L_0882A474;
    case 560u: goto L_0882A484;
    case 561u: goto L_0882A48C;
    case 562u: goto L_0882A4A0;
    case 563u: goto L_0882A4B0;
    case 564u: goto L_0882A4B8;
    case 565u: goto L_0882A4C8;
    case 566u: goto L_0882A4D0;
    case 567u: goto L_0882A4DC;
    case 568u: goto L_0882A4EC;
    case 569u: goto L_0882A500;
    case 570u: goto L_0882A504;
    case 571u: goto L_0882A510;
    case 572u: goto L_0882A518;
    case 573u: goto L_0882A528;
    case 574u: goto L_0882A538;
    case 575u: goto L_0882A540;
    case 576u: goto L_0882A544;
    case 577u: goto L_0882A54C;
    case 578u: goto L_0882A564;
    case 579u: goto L_0882A56C;
    case 580u: goto L_0882A580;
    case 581u: goto L_0882A594;
    case 582u: goto L_0882A5AC;
    case 583u: goto L_0882A5BC;
    case 584u: goto L_0882A5C0;
    case 585u: goto L_0882A5CC;
    case 586u: goto L_0882A5D4;
    case 587u: goto L_0882A5EC;
    case 588u: goto L_0882A600;
    case 589u: goto L_0882A618;
    case 590u: goto L_0882A628;
    case 591u: goto L_0882A660;
    case 592u: goto L_0882A6B8;
    case 593u: goto L_0882A6C4;
    case 594u: goto L_0882A6CC;
    case 595u: goto L_0882A6D8;
    case 596u: goto L_0882A6E8;
    case 597u: goto L_0882A6F0;
    case 598u: goto L_0882A6F8;
    case 599u: goto L_0882A70C;
    case 600u: goto L_0882A718;
    case 601u: goto L_0882A724;
    case 602u: goto L_0882A730;
    case 603u: goto L_0882A740;
    case 604u: goto L_0882A750;
    case 605u: goto L_0882A760;
    case 606u: goto L_0882A768;
    case 607u: goto L_0882A79C;
    case 608u: goto L_0882A7A0;
    case 609u: goto L_0882A7BC;
    case 610u: goto L_0882A7C0;
    case 611u: goto L_0882A7D4;
    case 612u: goto L_0882A7DC;
    case 613u: goto L_0882A7E4;
    case 614u: goto L_0882A7F0;
    case 615u: goto L_0882A7FC;
    case 616u: goto L_0882A80C;
    case 617u: goto L_0882A824;
    case 618u: goto L_0882A854;
    case 619u: goto L_0882A8EC;
    case 620u: goto L_0882A908;
    case 621u: goto L_0882A910;
    case 622u: goto L_0882A918;
    case 623u: goto L_0882A924;
    case 624u: goto L_0882A934;
    case 625u: goto L_0882A93C;
    case 626u: goto L_0882A948;
    case 627u: goto L_0882A950;
    case 628u: goto L_0882A958;
    case 629u: goto L_0882A964;
    case 630u: goto L_0882A96C;
    case 631u: goto L_0882A974;
    case 632u: goto L_0882A980;
    case 633u: goto L_0882A988;
    case 634u: goto L_0882A990;
    case 635u: goto L_0882A99C;
    case 636u: goto L_0882A9A4;
    case 637u: goto L_0882A9AC;
    case 638u: goto L_0882A9B8;
    case 639u: goto L_0882A9C0;
    case 640u: goto L_0882A9C8;
    case 641u: goto L_0882A9D4;
    case 642u: goto L_0882A9DC;
    case 643u: goto L_0882A9E4;
    case 644u: goto L_0882A9F0;
    case 645u: goto L_0882A9F8;
    case 646u: goto L_0882AA00;
    case 647u: goto L_0882AA08;
    case 648u: goto L_0882AA0C;
    case 649u: goto L_0882AA18;
    case 650u: goto L_0882AA4C;
    case 651u: goto L_0882AA58;
    case 652u: goto L_0882AA64;
    case 653u: goto L_0882AA68;
    case 654u: goto L_0882AA90;
    case 655u: goto L_0882AAAC;
    case 656u: goto L_0882AABC;
    case 657u: goto L_0882AAC0;
    case 658u: goto L_0882AADC;
    case 659u: goto L_0882AAF0;
    case 660u: goto L_0882AB08;
    case 661u: goto L_0882AB18;
    case 662u: goto L_0882AB28;
    case 663u: goto L_0882AB2C;
    case 664u: goto L_0882AB4C;
    case 665u: goto L_0882AB74;
    case 666u: goto L_0882AB7C;
    case 667u: goto L_0882AB8C;
    case 668u: goto L_0882AB98;
    case 669u: goto L_0882ABB4;
    case 670u: goto L_0882ABBC;
    case 671u: goto L_0882ABC4;
    case 672u: goto L_0882ABD0;
    case 673u: goto L_0882ABDC;
    case 674u: goto L_0882ABE4;
    case 675u: goto L_0882ABF8;
    case 676u: goto L_0882AC14;
    case 677u: goto L_0882AC2C;
    case 678u: goto L_0882AC44;
    case 679u: goto L_0882AC54;
    case 680u: goto L_0882AC58;
    case 681u: goto L_0882AC90;
    case 682u: goto L_0882ACA4;
    case 683u: goto L_0882ACE0;
    case 684u: goto L_0882ACF4;
    case 685u: goto L_0882ACFC;
    case 686u: goto L_0882AD0C;
    case 687u: goto L_0882AD14;
    case 688u: goto L_0882AD2C;
    case 689u: goto L_0882AD38;
    case 690u: goto L_0882AD58;
    case 691u: goto L_0882ADA8;
    case 692u: goto L_0882ADBC;
    case 693u: goto L_0882ADC4;
    case 694u: goto L_0882ADE0;
    case 695u: goto L_0882AE08;
    case 696u: goto L_0882AE1C;
    case 697u: goto L_0882AE20;
    case 698u: goto L_0882AE2C;
    case 699u: goto L_0882AE3C;
    case 700u: goto L_0882AE4C;
    case 701u: goto L_0882AE54;
    case 702u: goto L_0882AE5C;
    case 703u: goto L_0882AE64;
    case 704u: goto L_0882AE6C;
    case 705u: goto L_0882AE7C;
    case 706u: goto L_0882AE88;
    case 707u: goto L_0882AE94;
    case 708u: goto L_0882AEA0;
    case 709u: goto L_0882AEB8;
    case 710u: goto L_0882AEC0;
    case 711u: goto L_0882AEC8;
    case 712u: goto L_0882AED0;
    case 713u: goto L_0882AF04;
    case 714u: goto L_0882AF50;
    case 715u: goto L_0882AF64;
    case 716u: goto L_0882AF6C;
    case 717u: goto L_0882AF88;
    case 718u: goto L_0882AF94;
    case 719u: goto L_0882AFB0;
    case 720u: goto L_0882AFB8;
    case 721u: goto L_0882AFBC;
    case 722u: goto L_0882AFC8;
    case 723u: goto L_0882AFD0;
    case 724u: goto L_0882AFD8;
    case 725u: goto L_0882AFE0;
    case 726u: goto L_0882AFE8;
    case 727u: goto L_0882AFF8;
    case 728u: goto L_0882B004;
    case 729u: goto L_0882B010;
    case 730u: goto L_0882B01C;
    case 731u: goto L_0882B03C;
    case 732u: goto L_0882B044;
    case 733u: goto L_0882B04C;
    case 734u: goto L_0882B054;
    case 735u: goto L_0882B084;
    case 736u: goto L_0882B160;
    case 737u: goto L_0882B168;
    case 738u: goto L_0882B170;
    case 739u: goto L_0882B190;
    case 740u: goto L_0882B1C8;
    case 741u: goto L_0882B1D4;
    case 742u: goto L_0882B1DC;
    case 743u: goto L_0882B1F0;
    case 744u: goto L_0882B200;
    case 745u: goto L_0882B210;
    case 746u: goto L_0882B224;
    case 747u: goto L_0882B238;
    case 748u: goto L_0882B248;
    case 749u: goto L_0882B254;
    case 750u: goto L_0882B268;
    case 751u: goto L_0882B278;
    case 752u: goto L_0882B288;
    case 753u: goto L_0882B290;
    case 754u: goto L_0882B29C;
    case 755u: goto L_0882B2A8;
    case 756u: goto L_0882B2B0;
    case 757u: goto L_0882B2BC;
    case 758u: goto L_0882B2C8;
    case 759u: goto L_0882B2D4;
    case 760u: goto L_0882B2DC;
    case 761u: goto L_0882B2E0;
    case 762u: goto L_0882B2E8;
    case 763u: goto L_0882B2F4;
    case 764u: goto L_0882B300;
    case 765u: goto L_0882B308;
    case 766u: goto L_0882B318;
    case 767u: goto L_0882B31C;
    case 768u: goto L_0882B32C;
    case 769u: goto L_0882B340;
    case 770u: goto L_0882B350;
    case 771u: goto L_0882B35C;
    case 772u: goto L_0882B364;
    case 773u: goto L_0882B368;
    case 774u: goto L_0882B370;
    case 775u: goto L_0882B378;
    case 776u: goto L_0882B37C;
    case 777u: goto L_0882B384;
    case 778u: goto L_0882B38C;
    case 779u: goto L_0882B390;
    case 780u: goto L_0882B398;
    case 781u: goto L_0882B3A0;
    case 782u: goto L_0882B3A8;
    case 783u: goto L_0882B3B4;
    case 784u: goto L_0882B444;
    case 785u: goto L_0882B470;
    case 786u: goto L_0882B474;
    case 787u: goto L_0882B480;
    case 788u: goto L_0882B490;
    case 789u: goto L_0882B4E8;
    case 790u: goto L_0882B520;
    case 791u: goto L_0882B524;
    case 792u: goto L_0882B534;
    case 793u: goto L_0882B540;
    case 794u: goto L_0882B548;
    case 795u: goto L_0882B554;
    case 796u: goto L_0882B57C;
    case 797u: goto L_0882B5A4;
    case 798u: goto L_0882B5B8;
    case 799u: goto L_0882B5C4;
    case 800u: goto L_0882B5D4;
    case 801u: goto L_0882B5E0;
    case 802u: goto L_0882B5E8;
    case 803u: goto L_0882B600;
    case 804u: goto L_0882B61C;
    case 805u: goto L_0882B648;
    case 806u: goto L_0882B654;
    case 807u: goto L_0882B66C;
    case 808u: goto L_0882B684;
    case 809u: goto L_0882B6AC;
    case 810u: goto L_0882B6B8;
    case 811u: goto L_0882B6C0;
    case 812u: goto L_0882B6C8;
    case 813u: goto L_0882B6D0;
    case 814u: goto L_0882B6D4;
    case 815u: goto L_0882B6DC;
    case 816u: goto L_0882B6E4;
    case 817u: goto L_0882B6EC;
    case 818u: goto L_0882B700;
    case 819u: goto L_0882B70C;
    case 820u: goto L_0882B720;
    case 821u: goto L_0882B72C;
    case 822u: goto L_0882B734;
    case 823u: goto L_0882B738;
    case 824u: goto L_0882B740;
    case 825u: goto L_0882B748;
    case 826u: goto L_0882B74C;
    case 827u: goto L_0882B754;
    case 828u: goto L_0882B75C;
    case 829u: goto L_0882B760;
    case 830u: goto L_0882B768;
    case 831u: goto L_0882B770;
    case 832u: goto L_0882B774;
    case 833u: goto L_0882B77C;
    case 834u: goto L_0882B790;
    case 835u: goto L_0882B7B4;
    case 836u: goto L_0882B800;
    case 837u: goto L_0882B808;
    case 838u: goto L_0882B810;
    case 839u: goto L_0882B81C;
    case 840u: goto L_0882B83C;
    case 841u: goto L_0882B87C;
    case 842u: goto L_0882B890;
    case 843u: goto L_0882B8A4;
    case 844u: goto L_0882B8B0;
    case 845u: goto L_0882B8B8;
    case 846u: goto L_0882B8BC;
    case 847u: goto L_0882B8C4;
    case 848u: goto L_0882B8C8;
    case 849u: goto L_0882B8D8;
    case 850u: goto L_0882B8E0;
    case 851u: goto L_0882B8F4;
    case 852u: goto L_0882B904;
    case 853u: goto L_0882B90C;
    case 854u: goto L_0882B918;
    case 855u: goto L_0882B920;
    case 856u: goto L_0882B928;
    case 857u: goto L_0882B93C;
    case 858u: goto L_0882B94C;
    case 859u: goto L_0882B954;
    case 860u: goto L_0882B958;
    case 861u: goto L_0882B96C;
    case 862u: goto L_0882B97C;
    case 863u: goto L_0882B980;
    case 864u: goto L_0882B98C;
    case 865u: goto L_0882B99C;
    case 866u: goto L_0882B9A4;
    case 867u: goto L_0882B9AC;
    case 868u: goto L_0882B9B8;
    case 869u: goto L_0882B9C0;
    case 870u: goto L_0882B9C4;
    case 871u: goto L_0882B9CC;
    case 872u: goto L_0882B9D8;
    case 873u: goto L_0882B9E0;
    case 874u: goto L_0882BA10;
    case 875u: goto L_0882BA18;
    case 876u: goto L_0882BA34;
    case 877u: goto L_0882BA44;
    case 878u: goto L_0882BA50;
    case 879u: goto L_0882BA58;
    case 880u: goto L_0882BA6C;
    case 881u: goto L_0882BAC0;
    case 882u: goto L_0882BAF0;
    case 883u: goto L_0882BB28;
    case 884u: goto L_0882BB50;
    case 885u: goto L_0882BB84;
    case 886u: goto L_0882BBB8;
    case 887u: goto L_0882BBEC;
    case 888u: goto L_0882BC20;
    case 889u: goto L_0882BC28;
    case 890u: goto L_0882BC3C;
    case 891u: goto L_0882BC44;
    case 892u: goto L_0882BC58;
    case 893u: goto L_0882BC60;
    case 894u: goto L_0882BC74;
    case 895u: goto L_0882BC7C;
    case 896u: goto L_0882BC9C;
    case 897u: goto L_0882BCC0;
    case 898u: goto L_0882BCDC;
    case 899u: goto L_0882BD20;
    case 900u: goto L_0882BD4C;
    case 901u: goto L_0882BD54;
    case 902u: goto L_0882BD68;
    case 903u: goto L_0882BD7C;
    case 904u: goto L_0882BD98;
    case 905u: goto L_0882BDA4;
    case 906u: goto L_0882BE88;
    case 907u: goto L_0882BE90;
    case 908u: goto L_0882BE98;
    case 909u: goto L_0882BEAC;
    case 910u: goto L_0882BEB8;
    case 911u: goto L_0882BED0;
    case 912u: goto L_0882BEF4;
    case 913u: goto L_0882BEFC;
    case 914u: goto L_0882BF04;
    case 915u: goto L_0882BF10;
    case 916u: goto L_0882BF18;
    case 917u: goto L_0882BF20;
    case 918u: goto L_0882BF28;
    case 919u: goto L_0882BF34;
    case 920u: goto L_0882BF3C;
    case 921u: goto L_0882BF44;
    case 922u: goto L_0882BF4C;
    case 923u: goto L_0882BF50;
    case 924u: goto L_0882BF58;
    case 925u: goto L_0882BF80;
    case 926u: goto L_0882BF90;
    case 927u: goto L_0882BF9C;
    case 928u: goto L_0882BFA4;
    case 929u: goto L_0882BFB0;
    case 930u: goto L_0882BFB8;
    case 931u: goto L_0882BFD4;
    case 932u: goto L_0882BFDC;
    case 933u: goto L_0882BFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08828004:
    ctx.gpr[17] = (0u | 0u);
    goto L_08828008;
L_08828008:
    ctx.gpr[31] = (0x08828010u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 280u, 0x0880EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08828010u) goto L_08828010;
    return;
L_08828010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08828008;
      }
      goto L_0882802C;
    }
L_0882802C:
    ctx.gpr[5] = (2222u << 16u);
    goto L_08828030;
L_08828030:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08828040u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828040u) goto L_08828040;
    return;
L_08828040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08828048;
L_08828048:
    ctx.gpr[31] = (0x08828050u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 775u, 0x0893BA44u>(ctx, &aot_mem) && ctx.pc == 0x08828050u) goto L_08828050;
    return;
L_08828050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[5] == 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
        goto L_08828088;
    }
    goto L_08828060;
L_08828060:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08828078u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828078u) goto L_08828078;
    return;
L_08828078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    goto L_08828088;
L_08828088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(3232)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2222u << 16u);
      if (branch_taken) {
          goto L_088280A8;
      }
      goto L_08828094;
    }
L_08828094:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088280A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088280A4u) goto L_088280A4;
    return;
L_088280A4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3232), 0u);
    goto L_088280A8;
L_088280A8:
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
L_088280CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4596)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08828108u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 442u, 0x0880FB58u>(ctx, &aot_mem) && ctx.pc == 0x08828108u) goto L_08828108;
    return;
L_08828108:
    ctx.gpr[31] = (0x08828110u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4596)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 338u, 0x0880F348u>(ctx, &aot_mem) && ctx.pc == 0x08828110u) goto L_08828110;
    return;
L_08828110:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_08828180;
    }
    goto L_08828124;
L_08828124:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[21] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2221u << 16u);
      if (branch_taken) {
          goto L_0882817C;
      }
      goto L_08828138;
    }
L_08828138:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3184));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[5]);
    goto L_08828148;
L_08828148:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[31] = (0x08828160u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_088287F8;
L_08828160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (ctx.gpr[21] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08828148;
      }
      goto L_0882817C;
    }
L_0882817C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    goto L_08828180;
L_08828180:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
        goto L_0882819C;
    }
    goto L_08828188;
L_08828188:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08828194u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0882B190;
L_08828194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_0882819C;
L_0882819C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088281C8;
      }
      goto L_088281A4;
    }
L_088281A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[31] = (0x088281B0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 18u, 0x088100B8u>(ctx, &aot_mem) && ctx.pc == 0x088281B0u) goto L_088281B0;
    return;
L_088281B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088281C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(76));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 18u, 0x088100B8u>(ctx, &aot_mem) && ctx.pc == 0x088281C8u) goto L_088281C8;
    return;
L_088281C8:
    ctx.gpr[31] = (0x088281D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x088281D0u) goto L_088281D0;
    return;
L_088281D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08828208;
      }
      goto L_088281E0;
    }
L_088281E0:
    ctx.gpr[31] = (0x088281E8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 240u, 0x08941114u>(ctx, &aot_mem) && ctx.pc == 0x088281E8u) goto L_088281E8;
    return;
L_088281E8:
    ctx.gpr[31] = (0x088281F0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 275u, 0x08969F68u>(ctx, &aot_mem) && ctx.pc == 0x088281F0u) goto L_088281F0;
    return;
L_088281F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08828208;
      }
      goto L_08828200;
    }
L_08828200:
    ctx.gpr[31] = (0x08828208u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 443u, 0x0894AFC8u>(ctx, &aot_mem) && ctx.pc == 0x08828208u) goto L_08828208;
    return;
L_08828208:
    ctx.gpr[31] = (0x08828210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 13u, 0x08820118u>(ctx, &aot_mem) && ctx.pc == 0x08828210u) goto L_08828210;
    return;
L_08828210:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08828224;
      }
      goto L_0882821C;
    }
L_0882821C:
    ctx.gpr[31] = (0x08828224u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 715u, 0x0894F358u>(ctx, &aot_mem) && ctx.pc == 0x08828224u) goto L_08828224;
    return;
L_08828224:
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_08828250:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08828260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 13u, 0x08820118u>(ctx, &aot_mem) && ctx.pc == 0x08828260u) goto L_08828260;
    return;
L_08828260:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08828274;
      }
      goto L_0882826C;
    }
L_0882826C:
    ctx.gpr[31] = (0x08828274u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 184u, 0x089511FCu>(ctx, &aot_mem) && ctx.pc == 0x08828274u) goto L_08828274;
    return;
L_08828274:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828280:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-576));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08828360;
      }
      goto L_088282B8;
    }
L_088282B8:
    ctx.gpr[31] = (0x088282C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 304u, 0x0880F064u>(ctx, &aot_mem) && ctx.pc == 0x088282C0u) goto L_088282C0;
    return;
L_088282C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088282E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29576));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088282E0u) goto L_088282E0;
    return;
L_088282E0:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16640u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088282FCu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 154u, 0x0893CFC0u>(ctx, &aot_mem) && ctx.pc == 0x088282FCu) goto L_088282FC;
    return;
L_088282FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x0882830Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 461u, 0x0881DB94u>(ctx, &aot_mem) && ctx.pc == 0x0882830Cu) goto L_0882830C;
    return;
L_0882830C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[31] = (0x08828320u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(29596));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08828320u) goto L_08828320;
    return;
L_08828320:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08828330u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x08828330u) goto L_08828330;
    return;
L_08828330:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[9] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0882834Cu);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0882834Cu) goto L_0882834C;
    return;
L_0882834C:
    ctx.gpr[5] = (16768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08828360u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 154u, 0x0893CFC0u>(ctx, &aot_mem) && ctx.pc == 0x08828360u) goto L_08828360;
    return;
L_08828360:
    ctx.gpr[31] = (0x08828368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 257u, 0x088217B4u>(ctx, &aot_mem) && ctx.pc == 0x08828368u) goto L_08828368;
    return;
L_08828368:
    ctx.gpr[31] = (0x08828370u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 952u, 0x0881FB40u>(ctx, &aot_mem) && ctx.pc == 0x08828370u) goto L_08828370;
    return;
L_08828370:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x08828380u);
    ctx.gpr[6] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 495u, 0x0881DDC4u>(ctx, &aot_mem) && ctx.pc == 0x08828380u) goto L_08828380;
    return;
L_08828380:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088283A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[31]);
    ctx.gpr[31] = (0x088283D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x088283D8u) goto L_088283D8;
    return;
L_088283D8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (static_cast<std::int32_t>(ctx.gpr[18]) < 24 ? 1u : 0u);
      if (branch_taken) {
          goto L_08828534;
      }
      goto L_088283F0;
    }
L_088283F0:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 48u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08828408u);
    ctx.gpr[5] = (0u | 239u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828408u) goto L_08828408;
    return;
L_08828408:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3232), ctx.gpr[2]);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[31] = (0x0882842Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 952u, 0x0881FB40u>(ctx, &aot_mem) && ctx.pc == 0x0882842Cu) goto L_0882842C;
    return;
L_0882842C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[31] = (0x0882847Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 769u, 0x0893B9C4u>(ctx, &aot_mem) && ctx.pc == 0x0882847Cu) goto L_0882847C;
    return;
L_0882847C:
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[31] = (0x08828488u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29616));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 596u, 0x08A9E200u>(ctx, &aot_mem) && ctx.pc == 0x08828488u) goto L_08828488;
    return;
L_08828488:
    ctx.gpr[31] = (0x08828490u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08828490u) goto L_08828490;
    return;
L_08828490:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088284A8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 638u, 0x08A9E3CCu>(ctx, &aot_mem) && ctx.pc == 0x088284A8u) goto L_088284A8;
    return;
L_088284A8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x088284B4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 209u, 0x08A9CADCu>(ctx, &aot_mem) && ctx.pc == 0x088284B4u) goto L_088284B4;
    return;
L_088284B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(-25));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[31] = (0x088284D4u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 222u, 0x08945104u>(ctx, &aot_mem) && ctx.pc == 0x088284D4u) goto L_088284D4;
    return;
L_088284D4:
    ctx.gpr[31] = (0x088284DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 164u, 0x08814BA0u>(ctx, &aot_mem) && ctx.pc == 0x088284DCu) goto L_088284DC;
    return;
L_088284DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08828514;
      }
      goto L_088284F4;
    }
L_088284F4:
    ctx.gpr[31] = (0x088284FCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 930u, 0x0881F9B4u>(ctx, &aot_mem) && ctx.pc == 0x088284FCu) goto L_088284FC;
    return;
L_088284FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088284F4;
      }
      goto L_08828514;
    }
L_08828514:
    ctx.gpr[31] = (0x0882851Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 963u, 0x0881FCB0u>(ctx, &aot_mem) && ctx.pc == 0x0882851Cu) goto L_0882851C;
    return;
L_0882851C:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
        goto L_08828538;
    }
    goto L_08828524;
L_08828524:
    ctx.gpr[31] = (0x0882852Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 174u, 0x08820F88u>(ctx, &aot_mem) && ctx.pc == 0x0882852Cu) goto L_0882852C;
    return;
L_0882852C:
    ctx.gpr[31] = (0x08828534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 602u, 0x08822C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08828534u) goto L_08828534;
    return;
L_08828534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    goto L_08828538;
L_08828538:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08828574;
      }
      goto L_0882854C;
    }
L_0882854C:
    ctx.gpr[31] = (0x08828554u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FABCu>(ctx, &aot_mem) && ctx.pc == 0x08828554u) goto L_08828554;
    return;
L_08828554:
    if (ctx.gpr[2] == ctx.gpr[17]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_0882855C;
    }
    goto L_0882855C;
L_0882855C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0882854C;
      }
      goto L_08828574;
    }
L_08828574:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088285B8;
      }
      goto L_0882857C;
    }
L_0882857C:
    ctx.gpr[31] = (0x08828584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 602u, 0x08822C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08828584u) goto L_08828584;
    return;
L_08828584:
    if (ctx.gpr[2] == ctx.gpr[17]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_0882858C;
    }
    goto L_0882858C;
L_0882858C:
    ctx.gpr[31] = (0x08828594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 76u, 0x089405C0u>(ctx, &aot_mem) && ctx.pc == 0x08828594u) goto L_08828594;
    return;
L_08828594:
    if (ctx.gpr[2] == ctx.gpr[17]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_0882859C;
    }
    goto L_0882859C;
L_0882859C:
    ctx.gpr[31] = (0x088285A4u);
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 50u, 0x089684ACu>(ctx, &aot_mem) && ctx.pc == 0x088285A4u) goto L_088285A4;
    return;
L_088285A4:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088285E0;
      }
      goto L_088285B0;
    }
L_088285B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088285E0;
      }
      goto L_088285B8;
    }
L_088285B8:
    ctx.gpr[31] = (0x088285C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 338u, 0x08945BD8u>(ctx, &aot_mem) && ctx.pc == 0x088285C0u) goto L_088285C0;
    return;
L_088285C0:
    if (ctx.gpr[2] == ctx.gpr[17]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_088285C8;
    }
    goto L_088285C8;
L_088285C8:
    ctx.gpr[31] = (0x088285D0u);
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 969u, 0x0881FD1Cu>(ctx, &aot_mem) && ctx.pc == 0x088285D0u) goto L_088285D0;
    return;
L_088285D0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088285E0;
      }
      goto L_088285DC;
    }
L_088285DC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_088285E0;
L_088285E0:
    ctx.gpr[5] = (0u | 2u);
    if (ctx.gpr[18] != 0u) {
    ctx.gpr[5] = (0u | 3u);
        goto L_088285EC;
    }
    goto L_088285EC;
L_088285EC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08828640;
      }
      goto L_088285F8;
    }
L_088285F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08828620u);
    ctx.gpr[5] = (0u | 239u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828620u) goto L_08828620;
    return;
L_08828620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08828674;
      }
      goto L_08828638;
    }
L_08828638:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_088286F4;
      }
      goto L_08828640;
    }
L_08828640:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828674:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_088286F4;
      }
      goto L_08828684;
    }
L_08828684:
    ctx.gpr[20] = (2219u << 16u);
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(29624));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(3180));
    ctx.gpr[30] = (2221u << 16u);
    ctx.gpr[22] = (2221u << 16u);
    goto L_088286A4;
L_088286A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(3160)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3164)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088286BCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088286BCu) goto L_088286BC;
    return;
L_088286BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088286D4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 243u, 0x0880ECA4u>(ctx, &aot_mem) && ctx.pc == 0x088286D4u) goto L_088286D4;
    return;
L_088286D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_088286A4;
      }
      goto L_088286F0;
    }
L_088286F0:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    goto L_088286F4;
L_088286F4:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08828710u);
    ctx.gpr[5] = (0u | 239u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828710u) goto L_08828710;
    return;
L_08828710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088287C4;
      }
      goto L_08828728;
    }
L_08828728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (2219u << 16u);
      if (branch_taken) {
          goto L_088287C4;
      }
      goto L_0882873C;
    }
L_0882873C:
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(29632));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(3180));
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[22] = (2221u << 16u);
    goto L_08828758;
L_08828758:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3160)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3168)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08828770u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08828770u) goto L_08828770;
    return;
L_08828770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[31] = (0x0882878Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 812u, 0x0893BD00u>(ctx, &aot_mem) && ctx.pc == 0x0882878Cu) goto L_0882878C;
    return;
L_0882878C:
    ctx.gpr[31] = (0x08828794u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 815u, 0x0893BD50u>(ctx, &aot_mem) && ctx.pc == 0x08828794u) goto L_08828794;
    return;
L_08828794:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088287A8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 825u, 0x0893BE94u>(ctx, &aot_mem) && ctx.pc == 0x088287A8u) goto L_088287A8;
    return;
L_088287A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(156));
      if (branch_taken) {
          goto L_08828758;
      }
      goto L_088287C4;
    }
L_088287C4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088287F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08828838u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 860u, 0x0881F498u>(ctx, &aot_mem) && ctx.pc == 0x08828838u) goto L_08828838;
    return;
L_08828838:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[19] = (2224u << 16u);
      if (branch_taken) {
          goto L_08828868;
      }
      goto L_08828840;
    }
L_08828840:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-17320)));
        goto L_0882886C;
    }
    goto L_08828850;
L_08828850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (15624u << 16u);
      if (branch_taken) {
          goto L_08828868;
      }
      goto L_08828860;
    }
L_08828860:
    ctx.gpr[4] = (ctx.gpr[4] | 34953u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08828868;
L_08828868:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-17320)));
    goto L_0882886C;
L_0882886C:
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08828B8C;
      }
      goto L_08828880;
    }
L_08828880:
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[21] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(3208));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.gpr[8] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
      if (branch_taken) {
          goto L_08828964;
      }
      goto L_088288B0;
    }
L_088288B0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
      if (branch_taken) {
          goto L_088288F4;
      }
      goto L_088288B8;
    }
L_088288B8:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x088288C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 297u, 0x0881D0FCu>(ctx, &aot_mem) && ctx.pc == 0x088288C4u) goto L_088288C4;
    return;
L_088288C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088288ECu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 620u, 0x08946D84u>(ctx, &aot_mem) && ctx.pc == 0x088288ECu) goto L_088288EC;
    return;
L_088288EC:
    ctx.gpr[31] = (0x088288F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 182u, 0x08944D70u>(ctx, &aot_mem) && ctx.pc == 0x088288F4u) goto L_088288F4;
    return;
L_088288F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0882894C;
      }
      goto L_08828904;
    }
L_08828904:
    ctx.gpr[31] = (0x0882890Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1000u, 0x0881FF20u>(ctx, &aot_mem) && ctx.pc == 0x0882890Cu) goto L_0882890C;
    return;
L_0882890C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08828918u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 287u, 0x0881D08Cu>(ctx, &aot_mem) && ctx.pc == 0x08828918u) goto L_08828918;
    return;
L_08828918:
    ctx.gpr[31] = (0x08828920u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 479u, 0x0881DCF4u>(ctx, &aot_mem) && ctx.pc == 0x08828920u) goto L_08828920;
    return;
L_08828920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08828948u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 620u, 0x08946D84u>(ctx, &aot_mem) && ctx.pc == 0x08828948u) goto L_08828948;
    return;
L_08828948:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0882894C;
L_0882894C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0882895Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 700u, 0x08947674u>(ctx, &aot_mem) && ctx.pc == 0x0882895Cu) goto L_0882895C;
    return;
L_0882895C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08828B68;
      }
      goto L_08828964;
    }
L_08828964:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
      if (branch_taken) {
          goto L_08828A90;
      }
      goto L_0882896C;
    }
L_0882896C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
        goto L_08828994;
    }
    goto L_08828980;
L_08828980:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[31] = (0x0882898Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 479u, 0x0881DCF4u>(ctx, &aot_mem) && ctx.pc == 0x0882898Cu) goto L_0882898C;
    return;
L_0882898C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    goto L_08828994;
L_08828994:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
      if (branch_taken) {
          goto L_088289C0;
      }
      goto L_0882899C;
    }
L_0882899C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088289B8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 620u, 0x08946D84u>(ctx, &aot_mem) && ctx.pc == 0x088289B8u) goto L_088289B8;
    return;
L_088289B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08828A94;
      }
      goto L_088289C0;
    }
L_088289C0:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-17320));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_08828A94;
    }
    goto L_088289D4;
L_088289D4:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08828A18;
      }
      goto L_088289E0;
    }
L_088289E0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08828A38;
      }
      goto L_088289E8;
    }
L_088289E8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08828A58;
      }
      goto L_088289F0;
    }
L_088289F0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08828A78;
      }
      goto L_088289F8;
    }
L_088289F8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08828A10u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 620u, 0x08946D84u>(ctx, &aot_mem) && ctx.pc == 0x08828A10u) goto L_08828A10;
    return;
L_08828A10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08828A94;
      }
      goto L_08828A18;
    }
L_08828A18:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08828A30u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 620u, 0x08946D84u>(ctx, &aot_mem) && ctx.pc == 0x08828A30u) goto L_08828A30;
    return;
L_08828A30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08828A94;
      }
      goto L_08828A38;
    }
L_08828A38:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08828A50u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 620u, 0x08946D84u>(ctx, &aot_mem) && ctx.pc == 0x08828A50u) goto L_08828A50;
    return;
L_08828A50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08828A94;
      }
      goto L_08828A58;
    }
L_08828A58:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08828A70u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 620u, 0x08946D84u>(ctx, &aot_mem) && ctx.pc == 0x08828A70u) goto L_08828A70;
    return;
L_08828A70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08828A94;
      }
      goto L_08828A78;
    }
L_08828A78:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08828A90u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 620u, 0x08946D84u>(ctx, &aot_mem) && ctx.pc == 0x08828A90u) goto L_08828A90;
    return;
L_08828A90:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08828A94;
L_08828A94:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08828AA4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 700u, 0x08947674u>(ctx, &aot_mem) && ctx.pc == 0x08828AA4u) goto L_08828AA4;
    return;
L_08828AA4:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08828B68;
      }
      goto L_08828AB0;
    }
L_08828AB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08828ADC;
      }
      goto L_08828AD4;
    }
L_08828AD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08828B44;
      }
      goto L_08828ADC;
    }
L_08828ADC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-17320));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[19] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08828B48;
      }
      goto L_08828AF0;
    }
L_08828AF0:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08828B28;
      }
      goto L_08828AFC;
    }
L_08828AFC:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08828B30;
      }
      goto L_08828B04;
    }
L_08828B04:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08828B38;
      }
      goto L_08828B0C;
    }
L_08828B0C:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08828B40;
      }
      goto L_08828B14;
    }
L_08828B14:
    ctx.gpr[31] = (0x08828B1Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 167u, 0x08944BE8u>(ctx, &aot_mem) && ctx.pc == 0x08828B1Cu) goto L_08828B1C;
    return;
L_08828B1C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(3232)));
      if (branch_taken) {
          goto L_08828B44;
      }
      goto L_08828B28;
    }
L_08828B28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08828B44;
      }
      goto L_08828B30;
    }
L_08828B30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08828B44;
      }
      goto L_08828B38;
    }
L_08828B38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08828B44;
      }
      goto L_08828B40;
    }
L_08828B40:
    ctx.gpr[5] = (0u | 4u);
    goto L_08828B44;
L_08828B44:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08828B48;
L_08828B48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08828B64;
      }
      goto L_08828B5C;
    }
L_08828B5C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08828B68;
      }
      goto L_08828B64;
    }
L_08828B64:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    goto L_08828B68;
L_08828B68:
    ctx.gpr[31] = (0x08828B70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 384u, 0x088120B8u>(ctx, &aot_mem) && ctx.pc == 0x08828B70u) goto L_08828B70;
    return;
L_08828B70:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08828B80u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 346u, 0x0881D37Cu>(ctx, &aot_mem) && ctx.pc == 0x08828B80u) goto L_08828B80;
    return;
L_08828B80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08828BC0;
      }
      goto L_08828B88;
    }
L_08828B88:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08828B8C;
L_08828B8C:
    ctx.gpr[31] = (0x08828B94u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 503u, 0x0881DE30u>(ctx, &aot_mem) && ctx.pc == 0x08828B94u) goto L_08828B94;
    return;
L_08828B94:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08828BA4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 543u, 0x0881E050u>(ctx, &aot_mem) && ctx.pc == 0x08828BA4u) goto L_08828BA4;
    return;
L_08828BA4:
    ctx.gpr[31] = (0x08828BACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 384u, 0x088120B8u>(ctx, &aot_mem) && ctx.pc == 0x08828BACu) goto L_08828BAC;
    return;
L_08828BAC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08828BBCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 346u, 0x0881D37Cu>(ctx, &aot_mem) && ctx.pc == 0x08828BBCu) goto L_08828BBC;
    return;
L_08828BBC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08828BC0;
L_08828BC0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08828BCCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 340u, 0x0881D31Cu>(ctx, &aot_mem) && ctx.pc == 0x08828BCCu) goto L_08828BCC;
    return;
L_08828BCC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828BF4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3172)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3176), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828C08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2179u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08828C40u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-29688));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828C40u) goto L_08828C40;
    return;
L_08828C40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 20u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08828C54u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828C54u) goto L_08828C54;
    return;
L_08828C54:
    { const bool branch_taken = 0u != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
      if (branch_taken) {
          goto L_08828C68;
      }
      goto L_08828C5C;
    }
L_08828C5C:
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2384));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08828C68;
L_08828C68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08828C74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828C74u) goto L_08828C74;
    return;
L_08828C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08828C8Cu);
    ctx.gpr[4] = (0u | 20u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828C8Cu) goto L_08828C8C;
    return;
L_08828C8C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08828CA0;
      }
      goto L_08828C94;
    }
L_08828C94:
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2384));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08828CA0;
L_08828CA0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08828CBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (2179u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08828CF8u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-29508));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828CF8u) goto L_08828CF8;
    return;
L_08828CF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 20u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08828D0Cu);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828D0Cu) goto L_08828D0C;
    return;
L_08828D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08828D20u);
    ctx.gpr[4] = (0u | 10u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828D20u) goto L_08828D20;
    return;
L_08828D20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08828D34u);
    ctx.gpr[4] = (0u | 11u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828D34u) goto L_08828D34;
    return;
L_08828D34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 10u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08828D48u);
    ctx.gpr[5] = (0u | 5u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828D48u) goto L_08828D48;
    return;
L_08828D48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 11u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08828D5Cu);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828D5Cu) goto L_08828D5C;
    return;
L_08828D5C:
    { const bool branch_taken = 0u != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
      if (branch_taken) {
          goto L_08828D70;
      }
      goto L_08828D64;
    }
L_08828D64:
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2384));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08828D70;
L_08828D70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08828D80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828D80u) goto L_08828D80;
    return;
L_08828D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08828D98u);
    ctx.gpr[4] = (0u | 20u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828D98u) goto L_08828D98;
    return;
L_08828D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08828DACu);
    ctx.gpr[4] = (0u | 10u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828DACu) goto L_08828DAC;
    return;
L_08828DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08828DC0u);
    ctx.gpr[4] = (0u | 11u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828DC0u) goto L_08828DC0;
    return;
L_08828DC0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08828DD4;
      }
      goto L_08828DC8;
    }
L_08828DC8:
    ctx.gpr[4] = (2203u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2384));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08828DD4;
L_08828DD4:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828DF4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08828E50;
L_08828E50:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08828E50;
      }
      goto L_08828E64;
    }
L_08828E64:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828E70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_08828EA4;
      }
      goto L_08828E90;
    }
L_08828E90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08828EA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828EA0u) goto L_08828EA0;
    return;
L_08828EA0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    goto L_08828EA4;
L_08828EA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
      if (branch_taken) {
          goto L_08828EC4;
      }
      goto L_08828EB0;
    }
L_08828EB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08828EC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828EC0u) goto L_08828EC0;
    return;
L_08828EC0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    goto L_08828EC4;
L_08828EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08828EE8;
    }
    goto L_08828ED0;
L_08828ED0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08828EE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828EE0u) goto L_08828EE0;
    return;
L_08828EE0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08828EE8;
L_08828EE8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08828F0C;
      }
      goto L_08828EF0;
    }
L_08828EF0:
    ctx.gpr[31] = (0x08828EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 280u, 0x0880EEA8u>(ctx, &aot_mem) && ctx.pc == 0x08828EF8u) goto L_08828EF8;
    return;
L_08828EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08828F08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828F08u) goto L_08828F08;
    return;
L_08828F08:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    goto L_08828F0C;
L_08828F0C:
    ctx.gpr[31] = (0x08828F14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 304u, 0x088118E0u>(ctx, &aot_mem) && ctx.pc == 0x08828F14u) goto L_08828F14;
    return;
L_08828F14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08828F24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08828F24u) goto L_08828F24;
    return;
L_08828F24:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08828F48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08829014;
      }
      goto L_08828F74;
    }
L_08828F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
        goto L_08828FE4;
    }
    goto L_08828F84;
L_08828F84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08829014;
      }
      goto L_08828F9C;
    }
L_08828F9C:
    ctx.gpr[19] = (0u | 0u);
    goto L_08828FA0;
L_08828FA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == ctx.gpr[18]) {
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
        goto L_08828FD0;
    }
    goto L_08828FB4;
L_08828FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08828FCCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 65u, 0x089C0634u>(ctx, &aot_mem) && ctx.pc == 0x08828FCCu) goto L_08828FCC;
    return;
L_08828FCC:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08828FD0;
L_08828FD0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08828FA0;
      }
      goto L_08828FDC;
    }
L_08828FDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829014;
      }
      goto L_08828FE4;
    }
L_08828FE4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08829014;
      }
      goto L_08828FFC;
    }
L_08828FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08829014u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 65u, 0x089C0634u>(ctx, &aot_mem) && ctx.pc == 0x08829014u) goto L_08829014;
    return;
L_08829014:
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
L_08829038:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_088290E0;
    }
    goto L_0882906C;
L_0882906C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08829128;
      }
      goto L_08829084;
    }
L_08829084:
    ctx.gpr[19] = (0u | 0u);
    goto L_08829088;
L_08829088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == ctx.gpr[20]) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_088290CC;
    }
    goto L_0882909C;
L_0882909C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088290B4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 70u, 0x089C06C4u>(ctx, &aot_mem) && ctx.pc == 0x088290B4u) goto L_088290B4;
    return;
L_088290B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_088290CC;
    }
    goto L_088290C0;
L_088290C0:
    ctx.gpr[31] = (0x088290C8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 68u, 0x089C0680u>(ctx, &aot_mem) && ctx.pc == 0x088290C8u) goto L_088290C8;
    return;
L_088290C8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_088290CC;
L_088290CC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08829088;
      }
      goto L_088290D8;
    }
L_088290D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829128;
      }
      goto L_088290E0;
    }
L_088290E0:
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08829128;
      }
      goto L_088290F8;
    }
L_088290F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08829114u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 70u, 0x089C06C4u>(ctx, &aot_mem) && ctx.pc == 0x08829114u) goto L_08829114;
    return;
L_08829114:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829128;
      }
      goto L_08829120;
    }
L_08829120:
    ctx.gpr[31] = (0x08829128u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 68u, 0x089C0680u>(ctx, &aot_mem) && ctx.pc == 0x08829128u) goto L_08829128;
    return;
L_08829128:
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
L_0882914C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08829168u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 368u, 0x08811DC4u>(ctx, &aot_mem) && ctx.pc == 0x08829168u) goto L_08829168;
    return;
L_08829168:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08829174:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(204)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08829190u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(108));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08829190u) goto L_08829190;
    return;
L_08829190:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882919C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(108));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088291A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088291F4;
      }
      goto L_088291D4;
    }
L_088291D4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08829210;
      }
      goto L_088291E4;
    }
L_088291E4:
    ctx.gpr[31] = (0x088291ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 70u, 0x089C06C4u>(ctx, &aot_mem) && ctx.pc == 0x088291ECu) goto L_088291EC;
    return;
L_088291EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08829224;
      }
      goto L_088291F4;
    }
L_088291F4:
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
L_08829210:
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08829220u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 70u, 0x089C06C4u>(ctx, &aot_mem) && ctx.pc == 0x08829220u) goto L_08829220;
    return;
L_08829220:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08829224;
L_08829224:
    if (ctx.gpr[18] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
        goto L_0882924C;
    }
    goto L_0882922C;
L_0882922C:
    ctx.gpr[31] = (0x08829234u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08829038;
L_08829234:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08829244u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08828F48;
L_08829244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882924C;
      }
      goto L_0882924C;
    }
L_0882924C:
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
L_08829270:
    ctx.gpr[6] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_088292DC;
      }
      goto L_0882927C;
    }
L_0882927C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (2179u << 16u);
      if (branch_taken) {
          goto L_08829338;
      }
      goto L_08829294;
    }
L_08829294:
    ctx.gpr[6] = (2203u << 16u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-29508));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2384));
    goto L_088292A4;
L_088292A4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    if (ctx.gpr[7] == 0u) {
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
        goto L_088292C0;
    }
    goto L_088292C0;
L_088292C0:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088292A4;
      }
      goto L_088292D0;
    }
L_088292D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0882933C;
      }
      goto L_088292D8;
    }
L_088292D8:
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
    goto L_088292DC;
L_088292DC:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
        goto L_0882933C;
    }
    goto L_088292E4;
L_088292E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (2179u << 16u);
      if (branch_taken) {
          goto L_08829338;
      }
      goto L_088292FC;
    }
L_088292FC:
    ctx.gpr[6] = (2203u << 16u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-29688));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2384));
    goto L_0882930C;
L_0882930C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    if (ctx.gpr[7] == 0u) {
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(72), ctx.gpr[6]);
        goto L_08829328;
    }
    goto L_08829328;
L_08829328:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882930C;
      }
      goto L_08829338;
    }
L_08829338:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_0882933C;
L_0882933C:
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08829348:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08829358:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08829368:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2219u << 16u);
      if (branch_taken) {
          goto L_088293EC;
      }
      goto L_0882939C;
    }
L_0882939C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(29676));
    goto L_088293A4;
L_088293A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_088293E0;
    }
    goto L_088293B8;
L_088293B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088293DC;
      }
      goto L_088293C4;
    }
L_088293C4:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_088293E0;
    }
    goto L_088293CC;
L_088293CC:
    ctx.gpr[31] = (0x088293D4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x088293D4u) goto L_088293D4;
    return;
L_088293D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08829410;
      }
      goto L_088293DC;
    }
L_088293DC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_088293E0;
L_088293E0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088293A4;
      }
      goto L_088293EC;
    }
L_088293EC:
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
L_08829410:
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
L_08829434:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882947C;
      }
      goto L_0882946C;
    }
L_0882946C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_08829480;
      }
      goto L_0882947C;
    }
L_0882947C:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08829480;
L_08829480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0882955C;
      }
      goto L_0882948C;
    }
L_0882948C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088294F0;
      }
      goto L_08829498;
    }
L_08829498:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088294D8;
      }
      goto L_088294A8;
    }
L_088294A8:
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
    goto L_088294AC;
L_088294AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[19]) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_088294CC;
    }
    goto L_088294C0;
L_088294C0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_088294CC;
L_088294CC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088294AC;
      }
      goto L_088294D8;
    }
L_088294D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829644;
      }
      goto L_088294E0;
    }
L_088294E0:
    ctx.gpr[31] = (0x088294E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08829038;
L_088294E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829644;
      }
      goto L_088294F0;
    }
L_088294F0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882952C;
      }
      goto L_088294FC;
    }
L_088294FC:
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
    goto L_08829500;
L_08829500:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_08829520;
    }
    goto L_08829514;
L_08829514:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08829520;
L_08829520:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08829500;
      }
      goto L_0882952C;
    }
L_0882952C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829644;
      }
      goto L_08829534;
    }
L_08829534:
    ctx.gpr[31] = (0x0882953Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 960u, 0x0881FBC0u>(ctx, &aot_mem) && ctx.pc == 0x0882953Cu) goto L_0882953C;
    return;
L_0882953C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829644;
      }
      goto L_08829548;
    }
L_08829548:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08829554u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08828F48;
L_08829554:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829644;
      }
      goto L_0882955C;
    }
L_0882955C:
    ctx.gpr[31] = (0x08829564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 960u, 0x0881FBC0u>(ctx, &aot_mem) && ctx.pc == 0x08829564u) goto L_08829564;
    return;
L_08829564:
    ctx.gpr[31] = (0x0882956Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0882BA10;
L_0882956C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08829644;
      }
      goto L_08829580;
    }
L_08829580:
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
    goto L_08829584;
L_08829584:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08829598u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 125u, 0x089B0974u>(ctx, &aot_mem) && ctx.pc == 0x08829598u) goto L_08829598;
    return;
L_08829598:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
      if (branch_taken) {
          goto L_088295F8;
      }
      goto L_088295D0;
    }
L_088295D0:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
        goto L_08829638;
    }
    goto L_088295E0;
L_088295E0:
    ctx.gpr[31] = (0x088295E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08829038;
L_088295E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08829634;
      }
      goto L_088295F8;
    }
L_088295F8:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
        goto L_08829638;
    }
    goto L_08829608;
L_08829608:
    ctx.gpr[31] = (0x08829610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 960u, 0x0881FBC0u>(ctx, &aot_mem) && ctx.pc == 0x08829610u) goto L_08829610;
    return;
L_08829610:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_0882962C;
    }
    goto L_0882961C;
L_0882961C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08829628u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08828F48;
L_08829628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_0882962C;
L_0882962C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_08829634;
L_08829634:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08829638;
L_08829638:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08829584;
      }
      goto L_08829644;
    }
L_08829644:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882966C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_088296A4;
      }
      goto L_0882969C;
    }
L_0882969C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_088296A4;
      }
      goto L_088296A4;
    }
L_088296A4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[5] = (0u | 13u);
      if (branch_taken) {
          goto L_088296BC;
      }
      goto L_088296AC;
    }
L_088296AC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 14u);
      if (branch_taken) {
          goto L_088296BC;
      }
      goto L_088296B4;
    }
L_088296B4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08829838;
      }
      goto L_088296BC;
    }
L_088296BC:
    ctx.gpr[31] = (0x088296C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 61u, 0x08824354u>(ctx, &aot_mem) && ctx.pc == 0x088296C4u) goto L_088296C4;
    return;
L_088296C4:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
      if (branch_taken) {
          goto L_0882975C;
      }
      goto L_088296D0;
    }
L_088296D0:
    ctx.gpr[31] = (0x088296D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 64u, 0x08824374u>(ctx, &aot_mem) && ctx.pc == 0x088296D8u) goto L_088296D8;
    return;
L_088296D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08829724;
      }
      goto L_088296EC;
    }
L_088296EC:
    if (ctx.gpr[4] != ctx.gpr[19]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0882980C;
    }
    goto L_088296F4;
L_088296F4:
    ctx.gpr[31] = (0x088296FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 960u, 0x0881FBC0u>(ctx, &aot_mem) && ctx.pc == 0x088296FCu) goto L_088296FC;
    return;
L_088296FC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_08829718;
    }
    goto L_08829704;
L_08829704:
    ctx.gpr[31] = (0x0882970Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08829038;
L_0882970C:
    ctx.gpr[31] = (0x08829714u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 819u, 0x08967954u>(ctx, &aot_mem) && ctx.pc == 0x08829714u) goto L_08829714;
    return;
L_08829714:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08829718;
L_08829718:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08829808;
      }
      goto L_08829724;
    }
L_08829724:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0882980C;
    }
    goto L_0882972C;
L_0882972C:
    ctx.gpr[31] = (0x08829734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 960u, 0x0881FBC0u>(ctx, &aot_mem) && ctx.pc == 0x08829734u) goto L_08829734;
    return;
L_08829734:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_08829750;
    }
    goto L_08829740;
L_08829740:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0882974Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08828F48;
L_0882974C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08829750;
L_08829750:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08829808;
      }
      goto L_0882975C;
    }
L_0882975C:
    ctx.gpr[31] = (0x08829764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0132_entry, 132u, 190u, 0x08A15824u>(ctx, &aot_mem) && ctx.pc == 0x08829764u) goto L_08829764;
    return;
L_08829764:
    ctx.gpr[5] = (2224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14744));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(344)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088297D0;
      }
      goto L_08829790;
    }
L_08829790:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088297D0;
      }
      goto L_088297A0;
    }
L_088297A0:
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0882980C;
    }
    goto L_088297A8;
L_088297A8:
    ctx.gpr[31] = (0x088297B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 960u, 0x0881FBC0u>(ctx, &aot_mem) && ctx.pc == 0x088297B0u) goto L_088297B0;
    return;
L_088297B0:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_088297C4;
    }
    goto L_088297B8;
L_088297B8:
    ctx.gpr[31] = (0x088297C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08829038;
L_088297C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_088297C4;
L_088297C4:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08829808;
      }
      goto L_088297D0;
    }
L_088297D0:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_0882980C;
    }
    goto L_088297D8;
L_088297D8:
    ctx.gpr[31] = (0x088297E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 960u, 0x0881FBC0u>(ctx, &aot_mem) && ctx.pc == 0x088297E0u) goto L_088297E0;
    return;
L_088297E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_088297FC;
    }
    goto L_088297EC;
L_088297EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088297F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08828F48;
L_088297F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_088297FC;
L_088297FC:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08829808;
L_08829808:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0882980C;
L_0882980C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08829840;
      }
      goto L_08829814;
    }
L_08829814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08829840;
      }
      goto L_08829828;
    }
L_08829828:
    ctx.gpr[31] = (0x08829830u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 819u, 0x08967954u>(ctx, &aot_mem) && ctx.pc == 0x08829830u) goto L_08829830;
    return;
L_08829830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08829840;
      }
      goto L_08829838;
    }
L_08829838:
    ctx.gpr[31] = (0x08829840u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08829434;
L_08829840:
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
L_0882985C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882987Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x0882987Cu) goto L_0882987C;
    return;
L_0882987C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_088298A0;
      }
      goto L_08829890;
    }
L_08829890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_088298A4;
      }
      goto L_088298A0;
    }
L_088298A0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_088298A4;
L_088298A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_088298E8;
      }
      goto L_088298B0;
    }
L_088298B0:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
      if (branch_taken) {
          goto L_088298D8;
      }
      goto L_088298BC;
    }
L_088298BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088298BC;
      }
      goto L_088298D8;
    }
L_088298D8:
    ctx.gpr[31] = (0x088298E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08829038;
L_088298E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088299D4;
      }
      goto L_088298E8;
    }
L_088298E8:
    ctx.gpr[31] = (0x088298F0u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 860u, 0x0881F498u>(ctx, &aot_mem) && ctx.pc == 0x088298F0u) goto L_088298F0;
    return;
L_088298F0:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08829954;
    }
    goto L_088298F8;
L_088298F8:
    ctx.gpr[31] = (0x08829900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 61u, 0x08824354u>(ctx, &aot_mem) && ctx.pc == 0x08829900u) goto L_08829900;
    return;
L_08829900:
    ctx.gpr[4] = (0u | 5u);
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
        goto L_08829954;
    }
    goto L_0882990C;
L_0882990C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088299D4;
      }
      goto L_08829924;
    }
L_08829924:
    ctx.gpr[31] = (0x0882992Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 960u, 0x0881FBC0u>(ctx, &aot_mem) && ctx.pc == 0x0882992Cu) goto L_0882992C;
    return;
L_0882992C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_08829948;
    }
    goto L_08829938;
L_08829938:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08829944u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08828F48;
L_08829944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_08829948;
L_08829948:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
      if (branch_taken) {
          goto L_088299D4;
      }
      goto L_08829954;
    }
L_08829954:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08829970;
      }
      goto L_08829960;
    }
L_08829960:
    ctx.gpr[31] = (0x08829968u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882966C;
L_08829968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088299D4;
      }
      goto L_08829970;
    }
L_08829970:
    ctx.gpr[31] = (0x08829978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 61u, 0x08824354u>(ctx, &aot_mem) && ctx.pc == 0x08829978u) goto L_08829978;
    return;
L_08829978:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088299CC;
      }
      goto L_08829984;
    }
L_08829984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088299D4;
      }
      goto L_0882999C;
    }
L_0882999C:
    ctx.gpr[31] = (0x088299A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 960u, 0x0881FBC0u>(ctx, &aot_mem) && ctx.pc == 0x088299A4u) goto L_088299A4;
    return;
L_088299A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
        goto L_088299C0;
    }
    goto L_088299B0;
L_088299B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x088299BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08828F48;
L_088299BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_088299C0;
L_088299C0:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
      if (branch_taken) {
          goto L_088299D4;
      }
      goto L_088299CC;
    }
L_088299CC:
    ctx.gpr[31] = (0x088299D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08829434;
L_088299D4:
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
L_088299F0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08829A14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2222u << 16u);
      if (branch_taken) {
          goto L_08829A54;
      }
      goto L_08829A38;
    }
L_08829A38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    goto L_08829A3C;
L_08829A3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08829A48u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08829A48u) goto L_08829A48;
    return;
L_08829A48:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
        goto L_08829A3C;
    }
    goto L_08829A54;
L_08829A54:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
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
L_08829A70:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08829AA8u);
    ctx.gpr[5] = (0u | 142u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08829AA8u) goto L_08829AA8;
    return;
L_08829AA8:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (49024u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
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
L_08829B4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08829B9C;
      }
      goto L_08829B68;
    }
L_08829B68:
    ctx.gpr[31] = (0x08829B70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 70u, 0x089C06C4u>(ctx, &aot_mem) && ctx.pc == 0x08829B70u) goto L_08829B70;
    return;
L_08829B70:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_08829B88;
    }
    goto L_08829B7C;
L_08829B7C:
    ctx.gpr[31] = (0x08829B84u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 68u, 0x089C0680u>(ctx, &aot_mem) && ctx.pc == 0x08829B84u) goto L_08829B84;
    return;
L_08829B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_08829B88;
L_08829B88:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08829B68;
      }
      goto L_08829B9C;
    }
L_08829B9C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08829BB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] & 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08829BF4;
      }
      goto L_08829BE8;
    }
L_08829BE8:
    ctx.gpr[31] = (0x08829BF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 299u, 0x089B2058u>(ctx, &aot_mem) && ctx.pc == 0x08829BF0u) goto L_08829BF0;
    return;
L_08829BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08829BF4;
L_08829BF4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08829C84;
      }
      goto L_08829C44;
    }
L_08829C44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    goto L_08829C4C;
L_08829C4C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
        goto L_08829C78;
    }
    goto L_08829C5C;
L_08829C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08829C84;
      }
      goto L_08829C78;
    }
L_08829C78:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[18] != 0u) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_08829C4C;
    }
    goto L_08829C84;
L_08829C84:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08829C98;
      }
      goto L_08829C8C;
    }
L_08829C8C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    goto L_08829C98;
L_08829C98:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08829CB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08829CE4;
      }
      goto L_08829CCC;
    }
L_08829CCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08829CD0;
L_08829CD0:
    ctx.gpr[31] = (0x08829CD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 65u, 0x089C0634u>(ctx, &aot_mem) && ctx.pc == 0x08829CD8u) goto L_08829CD8;
    return;
L_08829CD8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08829CD0;
    }
    goto L_08829CE4;
L_08829CE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08829CF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[7]);
    ctx.gpr[22] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 152u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08829D4Cu);
    ctx.gpr[5] = (0u | 157u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08829D4Cu) goto L_08829D4C;
    return;
L_08829D4C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08829DC4;
      }
      goto L_08829D58;
    }
L_08829D58:
    ctx.gpr[31] = (0x08829D60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 273u, 0x08811604u>(ctx, &aot_mem) && ctx.pc == 0x08829D60u) goto L_08829D60;
    return;
L_08829D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08829D6Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 277u, 0x08811730u>(ctx, &aot_mem) && ctx.pc == 0x08829D6Cu) goto L_08829D6C;
    return;
L_08829D6C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08829DF8;
      }
      goto L_08829D74;
    }
L_08829D74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 152u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08829D88u);
    ctx.gpr[5] = (0u | 157u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08829D88u) goto L_08829D88;
    return;
L_08829D88:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08829DC4;
      }
      goto L_08829D94;
    }
L_08829D94:
    ctx.gpr[31] = (0x08829D9Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 240u, 0x0880EC64u>(ctx, &aot_mem) && ctx.pc == 0x08829D9Cu) goto L_08829D9C;
    return;
L_08829D9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08829DACu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 243u, 0x0880ECA4u>(ctx, &aot_mem) && ctx.pc == 0x08829DACu) goto L_08829DAC;
    return;
L_08829DAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08829DBCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0882914C;
L_08829DBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08829DFC;
      }
      goto L_08829DC4;
    }
L_08829DC4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08829DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_08829DFC;
L_08829DFC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[23] << 2u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08829E4C;
      }
      goto L_08829E18;
    }
L_08829E18:
    ctx.gpr[16] = (0u | 0u);
    goto L_08829E1C;
L_08829E1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x08829E30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08829368;
L_08829E30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08829E40;
      }
      goto L_08829E38;
    }
L_08829E38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 3u);
      if (branch_taken) {
          goto L_08829E4C;
      }
      goto L_08829E40;
    }
L_08829E40:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08829E1C;
      }
      goto L_08829E4C;
    }
L_08829E4C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08829E58u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08829270;
L_08829E58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08829E68u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08829E68u) goto L_08829E68;
    return;
L_08829E68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08829E80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3240)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08829E80u) goto L_08829E80;
    return;
L_08829E80:
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0882A0A8;
      }
      goto L_08829EB0;
    }
L_08829EB0:
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29684));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29692));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29700));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29708));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29716));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29724));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29732));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[6] = (2219u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(29740));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_08829F48;
L_08829F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08829F64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 231u, 0x089A12ECu>(ctx, &aot_mem) && ctx.pc == 0x08829F64u) goto L_08829F64;
    return;
L_08829F64:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0882A064;
      }
      goto L_08829F6C;
    }
L_08829F6C:
    ctx.gpr[31] = (0x08829F74u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 233u, 0x089A1310u>(ctx, &aot_mem) && ctx.pc == 0x08829F74u) goto L_08829F74;
    return;
L_08829F74:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08829F80u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 236u, 0x089A1788u>(ctx, &aot_mem) && ctx.pc == 0x08829F80u) goto L_08829F80;
    return;
L_08829F80:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x08829F90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x08829F90u) goto L_08829F90;
    return;
L_08829F90:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_08829FA4;
    }
    goto L_08829F98;
L_08829F98:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0882A064;
      }
      goto L_08829FA4;
    }
L_08829FA4:
    ctx.gpr[31] = (0x08829FACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x08829FACu) goto L_08829FAC;
    return;
L_08829FAC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_08829FC0;
    }
    goto L_08829FB4;
L_08829FB4:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0882A064;
      }
      goto L_08829FC0;
    }
L_08829FC0:
    ctx.gpr[31] = (0x08829FC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x08829FC8u) goto L_08829FC8;
    return;
L_08829FC8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
        goto L_08829FDC;
    }
    goto L_08829FD0;
L_08829FD0:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0882A064;
      }
      goto L_08829FDC;
    }
L_08829FDC:
    ctx.gpr[31] = (0x08829FE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x08829FE4u) goto L_08829FE4;
    return;
L_08829FE4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
        goto L_08829FF8;
    }
    goto L_08829FEC;
L_08829FEC:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0882A064;
      }
      goto L_08829FF8;
    }
L_08829FF8:
    ctx.gpr[31] = (0x0882A000u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x0882A000u) goto L_0882A000;
    return;
L_0882A000:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_0882A014;
    }
    goto L_0882A008;
L_0882A008:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0882A064;
      }
      goto L_0882A014;
    }
L_0882A014:
    ctx.gpr[31] = (0x0882A01Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x0882A01Cu) goto L_0882A01C;
    return;
L_0882A01C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_0882A030;
    }
    goto L_0882A024;
L_0882A024:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0882A064;
      }
      goto L_0882A030;
    }
L_0882A030:
    ctx.gpr[31] = (0x0882A038u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x0882A038u) goto L_0882A038;
    return;
L_0882A038:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_0882A04C;
    }
    goto L_0882A040;
L_0882A040:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0882A064;
      }
      goto L_0882A04C;
    }
L_0882A04C:
    ctx.gpr[31] = (0x0882A054u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x0882A054u) goto L_0882A054;
    return;
L_0882A054:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_0882A068;
    }
    goto L_0882A05C;
L_0882A05C:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    goto L_0882A064;
L_0882A064:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_0882A068;
L_0882A068:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08829F48;
      }
      goto L_0882A074;
    }
L_0882A074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    goto L_0882A0A8;
L_0882A0A8:
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[22];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882A0EC;
      }
      goto L_0882A0B4;
    }
L_0882A0B4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0882A0EC;
      }
      goto L_0882A0C0;
    }
L_0882A0C0:
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_0882A0C4;
L_0882A0C4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882A0C4;
      }
      goto L_0882A0EC;
    }
L_0882A0EC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882A108u);
    ctx.gpr[5] = (0u | 142u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882A108u) goto L_0882A108;
    return;
L_0882A108:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0882A138;
      }
      goto L_0882A118;
    }
L_0882A118:
    ctx.gpr[5] = (0u | 0u);
    goto L_0882A11C;
L_0882A11C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882A11C;
      }
      goto L_0882A138;
    }
L_0882A138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (0u | 142u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882A14Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882A14Cu) goto L_0882A14C;
    return;
L_0882A14C:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882A164u);
    ctx.gpr[5] = (0u | 142u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882A164u) goto L_0882A164;
    return;
L_0882A164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0882A1D8;
      }
      goto L_0882A174;
    }
L_0882A174:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0882A2B0;
      }
      goto L_0882A184;
    }
L_0882A184:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    goto L_0882A188;
L_0882A188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0882A1A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08829A70;
L_0882A1A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882A188;
      }
      goto L_0882A1D0;
    }
L_0882A1D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_0882A2B4;
      }
      goto L_0882A1D8;
    }
L_0882A1D8:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2219u << 16u);
      if (branch_taken) {
          goto L_0882A2B0;
      }
      goto L_0882A1E8;
    }
L_0882A1E8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(29748));
    goto L_0882A1F4;
L_0882A1F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0882A210u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 231u, 0x089A12ECu>(ctx, &aot_mem) && ctx.pc == 0x0882A210u) goto L_0882A210;
    return;
L_0882A210:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0882A288;
      }
      goto L_0882A218;
    }
L_0882A218:
    ctx.gpr[31] = (0x0882A220u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 233u, 0x089A1310u>(ctx, &aot_mem) && ctx.pc == 0x0882A220u) goto L_0882A220;
    return;
L_0882A220:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882A22Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 236u, 0x089A1788u>(ctx, &aot_mem) && ctx.pc == 0x0882A22Cu) goto L_0882A22C;
    return;
L_0882A22C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882A238u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x0882A238u) goto L_0882A238;
    return;
L_0882A238:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
        goto L_0882A270;
    }
    goto L_0882A240;
L_0882A240:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0882A254u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08829A70;
L_0882A254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
      if (branch_taken) {
          goto L_0882A2A0;
      }
      goto L_0882A270;
    }
L_0882A270:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_0882A2A0;
      }
      goto L_0882A288;
    }
L_0882A288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_0882A2A0;
L_0882A2A0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882A1F4;
      }
      goto L_0882A2B0;
    }
L_0882A2B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    goto L_0882A2B4;
L_0882A2B4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882A2EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0882A510;
      }
      goto L_0882A338;
    }
L_0882A338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_0882A350;
      }
      goto L_0882A344;
    }
L_0882A344:
    ctx.gpr[4] = (16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882A374;
      }
      goto L_0882A350;
    }
L_0882A350:
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-14744));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    goto L_0882A374;
L_0882A374:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[22];
      if (branch_taken) {
          goto L_0882A398;
      }
      goto L_0882A388;
    }
L_0882A388:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0882A510;
      }
      goto L_0882A390;
    }
L_0882A390:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0882A3B8;
      }
      goto L_0882A398;
    }
L_0882A398:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882A43C;
      }
      goto L_0882A3A4;
    }
L_0882A3A4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (17008u << 16u);
      if (branch_taken) {
          goto L_0882A4B8;
      }
      goto L_0882A3AC;
    }
L_0882A3AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A510;
      }
      goto L_0882A3B4;
    }
L_0882A3B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0882A3B8;
L_0882A3B8:
    ctx.gpr[31] = (0x0882A3C0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 300u, 0x0880F008u>(ctx, &aot_mem) && ctx.pc == 0x0882A3C0u) goto L_0882A3C0;
    return;
L_0882A3C0:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[0] / ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
        goto L_0882A420;
    }
    goto L_0882A3DC;
L_0882A3DC:
    ctx.gpr[31] = (0x0882A3E4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x0882A3E4u) goto L_0882A3E4;
    return;
L_0882A3E4:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0882A3F4u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 663u, 0x08AABA60u>(ctx, &aot_mem) && ctx.pc == 0x0882A3F4u) goto L_0882A3F4;
    return;
L_0882A3F4:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0882A408u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 427u, 0x08A9637Cu>(ctx, &aot_mem) && ctx.pc == 0x0882A408u) goto L_0882A408;
    return;
L_0882A408:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x0882A414u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 100u, 0x08AAC6F0u>(ctx, &aot_mem) && ctx.pc == 0x0882A414u) goto L_0882A414;
    return;
L_0882A414:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0882A42C;
      }
      goto L_0882A420;
    }
L_0882A420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0882A42C;
L_0882A42C:
    ctx.gpr[31] = (0x0882A434u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 317u, 0x088119BCu>(ctx, &aot_mem) && ctx.pc == 0x0882A434u) goto L_0882A434;
    return;
L_0882A434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A510;
      }
      goto L_0882A43C;
    }
L_0882A43C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0882A448u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 300u, 0x0880F008u>(ctx, &aot_mem) && ctx.pc == 0x0882A448u) goto L_0882A448;
    return;
L_0882A448:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
        goto L_0882A48C;
    }
    goto L_0882A464;
L_0882A464:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0882A474u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882914C;
L_0882A474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0882A484u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 507u, 0x089AB834u>(ctx, &aot_mem) && ctx.pc == 0x0882A484u) goto L_0882A484;
    return;
L_0882A484:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), 0u);
      if (branch_taken) {
          goto L_0882A510;
      }
      goto L_0882A48C;
    }
L_0882A48C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    ctx.gpr[31] = (0x0882A4A0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 317u, 0x088119BCu>(ctx, &aot_mem) && ctx.pc == 0x0882A4A0u) goto L_0882A4A0;
    return;
L_0882A4A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0882A4B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 507u, 0x089AB834u>(ctx, &aot_mem) && ctx.pc == 0x0882A4B0u) goto L_0882A4B0;
    return;
L_0882A4B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A510;
      }
      goto L_0882A4B8;
    }
L_0882A4B8:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[31] = (0x0882A4C8u);
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 241u, 0x0894D378u>(ctx, &aot_mem) && ctx.pc == 0x0882A4C8u) goto L_0882A4C8;
    return;
L_0882A4C8:
    ctx.gpr[31] = (0x0882A4D0u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 253u, 0x0894D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0882A4D0u) goto L_0882A4D0;
    return;
L_0882A4D0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882A4DCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 302u, 0x0880F030u>(ctx, &aot_mem) && ctx.pc == 0x0882A4DCu) goto L_0882A4DC;
    return;
L_0882A4DC:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0882A504;
      }
      goto L_0882A4EC;
    }
L_0882A4EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0882A500u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 170u, 0x0897DDBCu>(ctx, &aot_mem) && ctx.pc == 0x0882A500u) goto L_0882A500;
    return;
L_0882A500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0882A504;
L_0882A504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0882A510u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 507u, 0x089AB834u>(ctx, &aot_mem) && ctx.pc == 0x0882A510u) goto L_0882A510;
    return;
L_0882A510:
    ctx.gpr[31] = (0x0882A518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x0882A518u) goto L_0882A518;
    return;
L_0882A518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 24 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_0882A544;
    }
    goto L_0882A528;
L_0882A528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 18u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_0882A544;
    }
    goto L_0882A538;
L_0882A538:
    ctx.gpr[31] = (0x0882A540u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882985C;
L_0882A540:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_0882A544;
L_0882A544:
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
        goto L_0882A5D4;
    }
    goto L_0882A54C;
L_0882A54C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_0882A628;
      }
      goto L_0882A564;
    }
L_0882A564:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (2221u << 16u);
    goto L_0882A56C;
L_0882A56C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != ctx.gpr[22]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_0882A5C0;
    }
    goto L_0882A580;
L_0882A580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != ctx.gpr[22]) {
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
        goto L_0882A5C0;
    }
    goto L_0882A594;
L_0882A594:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0882A5ACu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0882A5ACu) goto L_0882A5AC;
    return;
L_0882A5AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0882A5BCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08829BB8;
L_0882A5BC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0882A5C0;
L_0882A5C0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882A56C;
      }
      goto L_0882A5CC;
    }
L_0882A5CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882A628;
      }
      goto L_0882A5D4;
    }
L_0882A5D4:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882A628;
      }
      goto L_0882A5EC;
    }
L_0882A5EC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882A628;
      }
      goto L_0882A600;
    }
L_0882A600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0882A618u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-4596)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0882A618u) goto L_0882A618;
    return;
L_0882A618:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882A628u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08829BB8;
L_0882A628:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_0882A660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[7]);
    ctx.gpr[22] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (0u | 152u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882A6B8u);
    ctx.gpr[5] = (0u | 157u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882A6B8u) goto L_0882A6B8;
    return;
L_0882A6B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0882A768;
      }
      goto L_0882A6C4;
    }
L_0882A6C4:
    ctx.gpr[31] = (0x0882A6CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 273u, 0x08811604u>(ctx, &aot_mem) && ctx.pc == 0x0882A6CCu) goto L_0882A6CC;
    return;
L_0882A6CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882A6D8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x0882A6D8u) goto L_0882A6D8;
    return;
L_0882A6D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882A6E8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x0882A6E8u) goto L_0882A6E8;
    return;
L_0882A6E8:
    ctx.gpr[31] = (0x0882A6F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 411u, 0x08812510u>(ctx, &aot_mem) && ctx.pc == 0x0882A6F0u) goto L_0882A6F0;
    return;
L_0882A6F0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0882A79C;
      }
      goto L_0882A6F8;
    }
L_0882A6F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 152u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882A70Cu);
    ctx.gpr[5] = (0u | 157u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882A70Cu) goto L_0882A70C;
    return;
L_0882A70C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0882A768;
      }
      goto L_0882A718;
    }
L_0882A718:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0882A724u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 240u, 0x0880EC64u>(ctx, &aot_mem) && ctx.pc == 0x0882A724u) goto L_0882A724;
    return;
L_0882A724:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882A730u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x0882A730u) goto L_0882A730;
    return;
L_0882A730:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(108));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0882A740u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x0882A740u) goto L_0882A740;
    return;
L_0882A740:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0882A750u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 247u, 0x0880ECE8u>(ctx, &aot_mem) && ctx.pc == 0x0882A750u) goto L_0882A750;
    return;
L_0882A750:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x0882A760u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0882914C;
L_0882A760:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_0882A7A0;
      }
      goto L_0882A768;
    }
L_0882A768:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882A79C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    goto L_0882A7A0;
L_0882A7A0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[23] << 2u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882A7F0;
      }
      goto L_0882A7BC;
    }
L_0882A7BC:
    ctx.gpr[16] = (0u | 0u);
    goto L_0882A7C0;
L_0882A7C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x0882A7D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08829368;
L_0882A7D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0882A7E4;
      }
      goto L_0882A7DC;
    }
L_0882A7DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 3u);
      if (branch_taken) {
          goto L_0882A7F0;
      }
      goto L_0882A7E4;
    }
L_0882A7E4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882A7C0;
      }
      goto L_0882A7F0;
    }
L_0882A7F0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0882A7FCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08829270;
L_0882A7FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0882A80Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882A80Cu) goto L_0882A80C;
    return;
L_0882A80C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(244)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882A824u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3240)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882A824u) goto L_0882A824;
    return;
L_0882A824:
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0882AA4C;
      }
      goto L_0882A854;
    }
L_0882A854:
    ctx.gpr[4] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29684));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29692));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29700));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29708));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29716));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29724));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[4] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29732));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[6] = (2219u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(29740));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    goto L_0882A8EC;
L_0882A8EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0882A908u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 231u, 0x089A12ECu>(ctx, &aot_mem) && ctx.pc == 0x0882A908u) goto L_0882A908;
    return;
L_0882A908:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0882AA08;
      }
      goto L_0882A910;
    }
L_0882A910:
    ctx.gpr[31] = (0x0882A918u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 233u, 0x089A1310u>(ctx, &aot_mem) && ctx.pc == 0x0882A918u) goto L_0882A918;
    return;
L_0882A918:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882A924u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 236u, 0x089A1788u>(ctx, &aot_mem) && ctx.pc == 0x0882A924u) goto L_0882A924;
    return;
L_0882A924:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x0882A934u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x0882A934u) goto L_0882A934;
    return;
L_0882A934:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_0882A948;
    }
    goto L_0882A93C;
L_0882A93C:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0882AA08;
      }
      goto L_0882A948;
    }
L_0882A948:
    ctx.gpr[31] = (0x0882A950u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x0882A950u) goto L_0882A950;
    return;
L_0882A950:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_0882A964;
    }
    goto L_0882A958;
L_0882A958:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0882AA08;
      }
      goto L_0882A964;
    }
L_0882A964:
    ctx.gpr[31] = (0x0882A96Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x0882A96Cu) goto L_0882A96C;
    return;
L_0882A96C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
        goto L_0882A980;
    }
    goto L_0882A974;
L_0882A974:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0882AA08;
      }
      goto L_0882A980;
    }
L_0882A980:
    ctx.gpr[31] = (0x0882A988u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x0882A988u) goto L_0882A988;
    return;
L_0882A988:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
        goto L_0882A99C;
    }
    goto L_0882A990;
L_0882A990:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0882AA08;
      }
      goto L_0882A99C;
    }
L_0882A99C:
    ctx.gpr[31] = (0x0882A9A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x0882A9A4u) goto L_0882A9A4;
    return;
L_0882A9A4:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_0882A9B8;
    }
    goto L_0882A9AC;
L_0882A9AC:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0882AA08;
      }
      goto L_0882A9B8;
    }
L_0882A9B8:
    ctx.gpr[31] = (0x0882A9C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x0882A9C0u) goto L_0882A9C0;
    return;
L_0882A9C0:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_0882A9D4;
    }
    goto L_0882A9C8;
L_0882A9C8:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0882AA08;
      }
      goto L_0882A9D4;
    }
L_0882A9D4:
    ctx.gpr[31] = (0x0882A9DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x0882A9DCu) goto L_0882A9DC;
    return;
L_0882A9DC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_0882A9F0;
    }
    goto L_0882A9E4;
L_0882A9E4:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0882AA08;
      }
      goto L_0882A9F0;
    }
L_0882A9F0:
    ctx.gpr[31] = (0x0882A9F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x0882A9F8u) goto L_0882A9F8;
    return;
L_0882A9F8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
        goto L_0882AA0C;
    }
    goto L_0882AA00;
L_0882AA00:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    goto L_0882AA08;
L_0882AA08:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_0882AA0C;
L_0882AA0C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882A8EC;
      }
      goto L_0882AA18;
    }
L_0882AA18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    goto L_0882AA4C;
L_0882AA4C:
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[22];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0882AA90;
      }
      goto L_0882AA58;
    }
L_0882AA58:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0882AA90;
      }
      goto L_0882AA64;
    }
L_0882AA64:
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_0882AA68;
L_0882AA68:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882AA68;
      }
      goto L_0882AA90;
    }
L_0882AA90:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882AAACu);
    ctx.gpr[5] = (0u | 142u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882AAACu) goto L_0882AAAC;
    return;
L_0882AAAC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0882AADC;
      }
      goto L_0882AABC;
    }
L_0882AABC:
    ctx.gpr[5] = (0u | 0u);
    goto L_0882AAC0;
L_0882AAC0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882AAC0;
      }
      goto L_0882AADC;
    }
L_0882AADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (0u | 142u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882AAF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882AAF0u) goto L_0882AAF0;
    return;
L_0882AAF0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882AB08u);
    ctx.gpr[5] = (0u | 142u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882AB08u) goto L_0882AB08;
    return;
L_0882AB08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0882AB7C;
      }
      goto L_0882AB18;
    }
L_0882AB18:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0882AC54;
      }
      goto L_0882AB28;
    }
L_0882AB28:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    goto L_0882AB2C;
L_0882AB2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0882AB4Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08829A70;
L_0882AB4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882AB2C;
      }
      goto L_0882AB74;
    }
L_0882AB74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_0882AC58;
      }
      goto L_0882AB7C;
    }
L_0882AB7C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2219u << 16u);
      if (branch_taken) {
          goto L_0882AC54;
      }
      goto L_0882AB8C;
    }
L_0882AB8C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(29748));
    goto L_0882AB98;
L_0882AB98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x0882ABB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 231u, 0x089A12ECu>(ctx, &aot_mem) && ctx.pc == 0x0882ABB4u) goto L_0882ABB4;
    return;
L_0882ABB4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0882AC2C;
      }
      goto L_0882ABBC;
    }
L_0882ABBC:
    ctx.gpr[31] = (0x0882ABC4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 233u, 0x089A1310u>(ctx, &aot_mem) && ctx.pc == 0x0882ABC4u) goto L_0882ABC4;
    return;
L_0882ABC4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882ABD0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 236u, 0x089A1788u>(ctx, &aot_mem) && ctx.pc == 0x0882ABD0u) goto L_0882ABD0;
    return;
L_0882ABD0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882ABDCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x0882ABDCu) goto L_0882ABDC;
    return;
L_0882ABDC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
        goto L_0882AC14;
    }
    goto L_0882ABE4;
L_0882ABE4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[31] = (0x0882ABF8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08829A70;
L_0882ABF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
      if (branch_taken) {
          goto L_0882AC44;
      }
      goto L_0882AC14;
    }
L_0882AC14:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_0882AC44;
      }
      goto L_0882AC2C;
    }
L_0882AC2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_0882AC44;
L_0882AC44:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882AB98;
      }
      goto L_0882AC54;
    }
L_0882AC54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    goto L_0882AC58;
L_0882AC58:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882AC90:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3244)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(3248), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882ACA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (2179u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882ACE0u);
    ctx.gpr[18] = (ctx.gpr[7] + static_cast<std::uint32_t>(-21340));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882ACE0u) goto L_0882ACE0;
    return;
L_0882ACE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (0u | 20u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882ACF4u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882ACF4u) goto L_0882ACF4;
    return;
L_0882ACF4:
    ctx.gpr[31] = (0x0882ACFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 273u, 0x089BE4E8u>(ctx, &aot_mem) && ctx.pc == 0x0882ACFCu) goto L_0882ACFC;
    return;
L_0882ACFC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882AD0Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 303u, 0x089BE728u>(ctx, &aot_mem) && ctx.pc == 0x0882AD0Cu) goto L_0882AD0C;
    return;
L_0882AD0C:
    ctx.gpr[31] = (0x0882AD14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 155u, 0x089BD8DCu>(ctx, &aot_mem) && ctx.pc == 0x0882AD14u) goto L_0882AD14;
    return;
L_0882AD14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882AD2Cu);
    ctx.gpr[4] = (0u | 20u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882AD2Cu) goto L_0882AD2C;
    return;
L_0882AD2C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882AD38u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 303u, 0x089BE728u>(ctx, &aot_mem) && ctx.pc == 0x0882AD38u) goto L_0882AD38;
    return;
L_0882AD38:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_0882AD58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[30]);
    ctx.gpr[30] = (2219u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[21]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(29880));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882ADA8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0882ADA8u) goto L_0882ADA8;
    return;
L_0882ADA8:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882ADBCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29884));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 821u, 0x0880B8BCu>(ctx, &aot_mem) && ctx.pc == 0x0882ADBCu) goto L_0882ADBC;
    return;
L_0882ADBC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[23] = (2219u << 16u);
      if (branch_taken) {
          goto L_0882AED0;
      }
      goto L_0882ADC4;
    }
L_0882ADC4:
    ctx.gpr[22] = (2219u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(29896));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(29904));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0882ADE0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 839u, 0x0880B9A8u>(ctx, &aot_mem) && ctx.pc == 0x0882ADE0u) goto L_0882ADE0;
    return;
L_0882ADE0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882AE08u);
    ctx.gpr[5] = (0u | 142u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882AE08u) goto L_0882AE08;
    return;
L_0882AE08:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
      if (branch_taken) {
          goto L_0882AE3C;
      }
      goto L_0882AE1C;
    }
L_0882AE1C:
    ctx.gpr[16] = (0u | 0u);
    goto L_0882AE20;
L_0882AE20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x0882AE2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 483u, 0x0894E2A0u>(ctx, &aot_mem) && ctx.pc == 0x0882AE2Cu) goto L_0882AE2C;
    return;
L_0882AE2C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0882AE20;
      }
      goto L_0882AE3C;
    }
L_0882AE3C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0882AE4C;
L_0882AE4C:
    ctx.gpr[31] = (0x0882AE54u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0882AE54u) goto L_0882AE54;
    return;
L_0882AE54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0882AED0;
      }
      goto L_0882AE5C;
    }
L_0882AE5C:
    ctx.gpr[31] = (0x0882AE64u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0882AE64u) goto L_0882AE64;
    return;
L_0882AE64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0882AEC0;
      }
      goto L_0882AE6C;
    }
L_0882AE6C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0882AE7Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0882AE7Cu) goto L_0882AE7C;
    return;
L_0882AE7C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882AE88u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0882AE88u) goto L_0882AE88;
    return;
L_0882AE88:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882AE94u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 815u, 0x0880B814u>(ctx, &aot_mem) && ctx.pc == 0x0882AE94u) goto L_0882AE94;
    return;
L_0882AE94:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882AEA0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0882B4E8;
L_0882AEA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882AEB8u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 564u, 0x0894E7B4u>(ctx, &aot_mem) && ctx.pc == 0x0882AEB8u) goto L_0882AEB8;
    return;
L_0882AEB8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0882AEC0;
L_0882AEC0:
    ctx.gpr[31] = (0x0882AEC8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0882AEC8u) goto L_0882AEC8;
    return;
L_0882AEC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0882AE4C;
      }
      goto L_0882AED0;
    }
L_0882AED0:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882AF04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882AF50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29880));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0882AF50u) goto L_0882AF50;
    return;
L_0882AF50:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0882AF64u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29916));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 821u, 0x0880B8BCu>(ctx, &aot_mem) && ctx.pc == 0x0882AF64u) goto L_0882AF64;
    return;
L_0882AF64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[20] = (2219u << 16u);
      if (branch_taken) {
          goto L_0882B054;
      }
      goto L_0882AF6C;
    }
L_0882AF6C:
    ctx.gpr[21] = (2219u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(29936));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(29956));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0882AF88u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 839u, 0x0880B9A8u>(ctx, &aot_mem) && ctx.pc == 0x0882AF88u) goto L_0882AF88;
    return;
L_0882AF88:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) <= 0;
    ctx.gpr[4] = (ctx.gpr[22] << 6u);
      if (branch_taken) {
          goto L_0882AFB8;
      }
      goto L_0882AF94;
    }
L_0882AF94:
    ctx.gpr[5] = (ctx.gpr[22] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882AFB0u);
    ctx.gpr[5] = (0u | 142u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882AFB0u) goto L_0882AFB0;
    return;
L_0882AFB0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0882AFBC;
      }
      goto L_0882AFB8;
    }
L_0882AFB8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    goto L_0882AFBC;
L_0882AFBC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), ctx.gpr[22]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0882AFC8;
L_0882AFC8:
    ctx.gpr[31] = (0x0882AFD0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0882AFD0u) goto L_0882AFD0;
    return;
L_0882AFD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0882B054;
      }
      goto L_0882AFD8;
    }
L_0882AFD8:
    ctx.gpr[31] = (0x0882AFE0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0882AFE0u) goto L_0882AFE0;
    return;
L_0882AFE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0882B044;
      }
      goto L_0882AFE8;
    }
L_0882AFE8:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[22]);
    ctx.gpr[31] = (0x0882AFF8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 627u, 0x0894BFD0u>(ctx, &aot_mem) && ctx.pc == 0x0882AFF8u) goto L_0882AFF8;
    return;
L_0882AFF8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0882B004u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 308u, 0x0894D83Cu>(ctx, &aot_mem) && ctx.pc == 0x0882B004u) goto L_0882B004;
    return;
L_0882B004:
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0882B010u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882B4E8;
L_0882B010:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
        goto L_0882B03C;
    }
    goto L_0882B01C;
L_0882B01C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_0882B03C;
L_0882B03C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0882B044;
L_0882B044:
    ctx.gpr[31] = (0x0882B04Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 813u, 0x0880B7F8u>(ctx, &aot_mem) && ctx.pc == 0x0882B04Cu) goto L_0882B04C;
    return;
L_0882B04C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0882AFC8;
      }
      goto L_0882B054;
    }
L_0882B054:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882B084:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    ctx.gpr[7] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), ctx.gpr[7]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882B160u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(256), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 42u, 0x0894C330u>(ctx, &aot_mem) && ctx.pc == 0x0882B160u) goto L_0882B160;
    return;
L_0882B160:
    ctx.gpr[31] = (0x0882B168u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    goto L_088299F0;
L_0882B168:
    ctx.gpr[31] = (0x0882B170u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(152));
    goto L_088299F0;
L_0882B170:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(396), 0u);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882B190:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882B1C8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4596)));
    goto L_0882BA18;
L_0882B1C8:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(152));
    ctx.gpr[31] = (0x0882B1D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08829B4C;
L_0882B1D4:
    ctx.gpr[31] = (0x0882B1DCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 45u, 0x0894C35Cu>(ctx, &aot_mem) && ctx.pc == 0x0882B1DCu) goto L_0882B1DC;
    return;
L_0882B1DC:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0882B210;
      }
      goto L_0882B1F0;
    }
L_0882B1F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0882B200u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 12u, 0x0894C090u>(ctx, &aot_mem) && ctx.pc == 0x0882B200u) goto L_0882B200;
    return;
L_0882B200:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_0882B1F0;
      }
      goto L_0882B210;
    }
L_0882B210:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0882B248;
      }
      goto L_0882B224;
    }
L_0882B224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (0x0882B238u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 534u, 0x0894E63Cu>(ctx, &aot_mem) && ctx.pc == 0x0882B238u) goto L_0882B238;
    return;
L_0882B238:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0882B224;
      }
      goto L_0882B248;
    }
L_0882B248:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_0882B31C;
    }
    goto L_0882B254;
L_0882B254:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_0882B288;
      }
      goto L_0882B268;
    }
L_0882B268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0882B278u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_08829358;
L_0882B278:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(140));
      if (branch_taken) {
          goto L_0882B268;
      }
      goto L_0882B288;
    }
L_0882B288:
    ctx.gpr[31] = (0x0882B290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 812u, 0x089678E8u>(ctx, &aot_mem) && ctx.pc == 0x0882B290u) goto L_0882B290;
    return;
L_0882B290:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-4596)));
    ctx.gpr[31] = (0x0882B29Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882BA6C;
L_0882B29C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[17] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_0882B31C;
    }
    goto L_0882B2A8;
L_0882B2A8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (0u | 0u);
    goto L_0882B2B0;
L_0882B2B0:
    ctx.gpr[4] = (ctx.gpr[19] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0882B2DC;
      }
      goto L_0882B2BC;
    }
L_0882B2BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882B2C8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_0882B5A4;
L_0882B2C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(26) ? 1u : 0u);
        goto L_0882B2E0;
    }
    goto L_0882B2D4;
L_0882B2D4:
    ctx.gpr[31] = (0x0882B2DCu);
    ctx.gpr[5] = (0u | 1u);
    goto L_08829358;
L_0882B2DC:
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    goto L_0882B2E0;
L_0882B2E0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] >> 1u);
      if (branch_taken) {
          goto L_0882B2B0;
      }
      goto L_0882B2E8;
    }
L_0882B2E8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0882B2F4;
L_0882B2F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == ctx.gpr[20]) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_0882B31C;
    }
    goto L_0882B300;
L_0882B300:
    ctx.gpr[31] = (0x0882B308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 819u, 0x08967954u>(ctx, &aot_mem) && ctx.pc == 0x0882B308u) goto L_0882B308;
    return;
L_0882B308:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0882B2F4;
      }
      goto L_0882B318;
    }
L_0882B318:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    goto L_0882B31C;
L_0882B31C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_0882B350;
      }
      goto L_0882B32C;
    }
L_0882B32C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882B340u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_0882A2EC;
L_0882B340:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(140));
      if (branch_taken) {
          goto L_0882B32C;
      }
      goto L_0882B350;
    }
L_0882B350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
        goto L_0882B368;
    }
    goto L_0882B35C;
L_0882B35C:
    ctx.gpr[31] = (0x0882B364u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 203u, 0x0894D0DCu>(ctx, &aot_mem) && ctx.pc == 0x0882B364u) goto L_0882B364;
    return;
L_0882B364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    goto L_0882B368;
L_0882B368:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
        goto L_0882B37C;
    }
    goto L_0882B370;
L_0882B370:
    ctx.gpr[31] = (0x0882B378u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 123u, 0x0894C900u>(ctx, &aot_mem) && ctx.pc == 0x0882B378u) goto L_0882B378;
    return;
L_0882B378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    goto L_0882B37C;
L_0882B37C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
        goto L_0882B390;
    }
    goto L_0882B384;
L_0882B384:
    ctx.gpr[31] = (0x0882B38Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 180u, 0x0894CF48u>(ctx, &aot_mem) && ctx.pc == 0x0882B38Cu) goto L_0882B38C;
    return;
L_0882B38C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    goto L_0882B390;
L_0882B390:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0882B3A0;
      }
      goto L_0882B398;
    }
L_0882B398:
    ctx.gpr[31] = (0x0882B3A0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 199u, 0x0894D064u>(ctx, &aot_mem) && ctx.pc == 0x0882B3A0u) goto L_0882B3A0;
    return;
L_0882B3A0:
    ctx.gpr[31] = (0x0882B3A8u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 1000u, 0x0881FF20u>(ctx, &aot_mem) && ctx.pc == 0x0882B3A8u) goto L_0882B3A8;
    return;
L_0882B3A8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882B3B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08829CB0;
L_0882B3B4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0882B444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882B490;
      }
      goto L_0882B470;
    }
L_0882B470:
    ctx.gpr[17] = (0u | 0u);
    goto L_0882B474;
L_0882B474:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (0x0882B480u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 651u, 0x0894ED7Cu>(ctx, &aot_mem) && ctx.pc == 0x0882B480u) goto L_0882B480;
    return;
L_0882B480:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0882B474;
      }
      goto L_0882B490;
    }
L_0882B490:
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
L_0882B4E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0882B554;
      }
      goto L_0882B520;
    }
L_0882B520:
    ctx.gpr[19] = (0u | 0u);
    goto L_0882B524;
L_0882B524:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[19]);
    ctx.gpr[31] = (0x0882B534u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_0882919C;
L_0882B534:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882B540u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x0882B540u) goto L_0882B540;
    return;
L_0882B540:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0882B57C;
      }
      goto L_0882B548;
    }
L_0882B548:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(140));
      if (branch_taken) {
          goto L_0882B524;
      }
      goto L_0882B554;
    }
L_0882B554:
    ctx.gpr[2] = (0u | 0u);
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
L_0882B57C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_0882B5A4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882B5E0;
      }
      goto L_0882B5B8;
    }
L_0882B5B8:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    goto L_0882B5C4;
L_0882B5C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0882B5E8;
      }
      goto L_0882B5D4;
    }
L_0882B5D4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(140));
      if (branch_taken) {
          goto L_0882B5C4;
      }
      goto L_0882B5E0;
    }
L_0882B5E0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882B5E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882B600:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882B66C;
      }
      goto L_0882B61C;
    }
L_0882B61C:
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(196)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[7] = (2219u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(256));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29976));
    jump_target = ctx.gpr[8];
    ctx.gpr[31] = (0x0882B648u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(29984));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882B648u) goto L_0882B648;
    return;
L_0882B648:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882B654u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_0882B4E8;
L_0882B654:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882B66C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882B684:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882B6ACu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0882B6ACu) goto L_0882B6AC;
    return;
L_0882B6AC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882B6C8;
      }
      goto L_0882B6B8;
    }
L_0882B6B8:
    ctx.gpr[31] = (0x0882B6C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 601u, 0x088C226Cu>(ctx, &aot_mem) && ctx.pc == 0x0882B6C0u) goto L_0882B6C0;
    return;
L_0882B6C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0882B6D4;
      }
      goto L_0882B6C8;
    }
L_0882B6C8:
    ctx.gpr[31] = (0x0882B6D0u);
    // nop
    ctx.pc = 0x08AB45BCu;
    return;
L_0882B6D0:
    ctx.gpr[18] = (ctx.gpr[2] >> 1u);
    goto L_0882B6D4;
L_0882B6D4:
    ctx.gpr[31] = (0x0882B6DCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 71u, 0x0896C580u>(ctx, &aot_mem) && ctx.pc == 0x0882B6DCu) goto L_0882B6DC;
    return;
L_0882B6DC:
    ctx.gpr[31] = (0x0882B6E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882B83C;
L_0882B6E4:
    ctx.gpr[31] = (0x0882B6ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 42u, 0x0894C330u>(ctx, &aot_mem) && ctx.pc == 0x0882B6ECu) goto L_0882B6EC;
    return;
L_0882B6EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0882B720;
      }
      goto L_0882B700;
    }
L_0882B700:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x0882B70Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 40u, 0x0894C31Cu>(ctx, &aot_mem) && ctx.pc == 0x0882B70Cu) goto L_0882B70C;
    return;
L_0882B70C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(72));
      if (branch_taken) {
          goto L_0882B700;
      }
      goto L_0882B720;
    }
L_0882B720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
        goto L_0882B738;
    }
    goto L_0882B72C;
L_0882B72C:
    ctx.gpr[31] = (0x0882B734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 220u, 0x0894D19Cu>(ctx, &aot_mem) && ctx.pc == 0x0882B734u) goto L_0882B734;
    return;
L_0882B734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    goto L_0882B738;
L_0882B738:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
        goto L_0882B74C;
    }
    goto L_0882B740;
L_0882B740:
    ctx.gpr[31] = (0x0882B748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 143u, 0x0894CB9Cu>(ctx, &aot_mem) && ctx.pc == 0x0882B748u) goto L_0882B748;
    return;
L_0882B748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    goto L_0882B74C;
L_0882B74C:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
        goto L_0882B760;
    }
    goto L_0882B754;
L_0882B754:
    ctx.gpr[31] = (0x0882B75Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 195u, 0x0894D010u>(ctx, &aot_mem) && ctx.pc == 0x0882B75Cu) goto L_0882B75C;
    return;
L_0882B75C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    goto L_0882B760;
L_0882B760:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
        goto L_0882B774;
    }
    goto L_0882B768;
L_0882B768:
    ctx.gpr[31] = (0x0882B770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 200u, 0x0894D06Cu>(ctx, &aot_mem) && ctx.pc == 0x0882B770u) goto L_0882B770;
    return;
L_0882B770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    goto L_0882B774;
L_0882B774:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_0882B81C;
      }
      goto L_0882B77C;
    }
L_0882B77C:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0882B790u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29880));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x0882B790u) goto L_0882B790;
    return;
L_0882B790:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3304)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[8] = (2219u << 16u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(256));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29988));
    ctx.gpr[31] = (0x0882B7B4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(29784));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0882B7B4u) goto L_0882B7B4;
    return;
L_0882B7B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(184), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), 0u);
    ctx.gpr[4] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19864));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[4]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882B800u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(19848));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 615u, 0x0880AB14u>(ctx, &aot_mem) && ctx.pc == 0x0882B800u) goto L_0882B800;
    return;
L_0882B800:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0882B810;
      }
      goto L_0882B808;
    }
L_0882B808:
    ctx.gpr[31] = (0x0882B810u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 16u, 0x0882C108u>(ctx, &aot_mem) && ctx.pc == 0x0882B810u) goto L_0882B810;
    return;
L_0882B810:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[18]);
    ctx.gpr[31] = (0x0882B81Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 624u, 0x0880ABECu>(ctx, &aot_mem) && ctx.pc == 0x0882B81Cu) goto L_0882B81C;
    return;
L_0882B81C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882B83C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0882B98C;
      }
      goto L_0882B87C;
    }
L_0882B87C:
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[23] = (0u | 2u);
    ctx.gpr[19] = (0u | 0u);
    goto L_0882B890;
L_0882B890:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_0882B8BC;
      }
      goto L_0882B8A4;
    }
L_0882B8A4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0882B8B0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088291A4;
L_0882B8B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_0882B8C8;
      }
      goto L_0882B8B8;
    }
L_0882B8B8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0882B8BC;
L_0882B8BC:
    ctx.gpr[31] = (0x0882B8C4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088291A4;
L_0882B8C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_0882B8C8;
L_0882B8C8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_0882B90C;
      }
      goto L_0882B8D8;
    }
L_0882B8D8:
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0882B980;
    }
    goto L_0882B8E0;
L_0882B8E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    ctx.gpr[31] = (0x0882B8F4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0882914C;
L_0882B8F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0882B904u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 507u, 0x089AB834u>(ctx, &aot_mem) && ctx.pc == 0x0882B904u) goto L_0882B904;
    return;
L_0882B904:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0882B980;
      }
      goto L_0882B90C;
    }
L_0882B90C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882B928;
      }
      goto L_0882B918;
    }
L_0882B918:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
        goto L_0882B958;
    }
    goto L_0882B920;
L_0882B920:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0882B980;
      }
      goto L_0882B928;
    }
L_0882B928:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(92), 0u);
    ctx.gpr[31] = (0x0882B93Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0882914C;
L_0882B93C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0882B94Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 507u, 0x089AB834u>(ctx, &aot_mem) && ctx.pc == 0x0882B94Cu) goto L_0882B94C;
    return;
L_0882B94C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0882B980;
      }
      goto L_0882B954;
    }
L_0882B954:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    goto L_0882B958;
L_0882B958:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(92), 0u);
    ctx.gpr[31] = (0x0882B96Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0882914C;
L_0882B96C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0882B97Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 507u, 0x089AB834u>(ctx, &aot_mem) && ctx.pc == 0x0882B97Cu) goto L_0882B97C;
    return;
L_0882B97C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_0882B980;
L_0882B980:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(140));
      if (branch_taken) {
          goto L_0882B890;
      }
      goto L_0882B98C;
    }
L_0882B98C:
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x0882B99Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29996));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 650u, 0x08A9E468u>(ctx, &aot_mem) && ctx.pc == 0x0882B99Cu) goto L_0882B99C;
    return;
L_0882B99C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0882B9E0;
      }
      goto L_0882B9A4;
    }
L_0882B9A4:
    ctx.gpr[31] = (0x0882B9ACu);
    ctx.gpr[5] = (0u | 3u);
    goto L_0882B5A4;
L_0882B9AC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
        goto L_0882B9C4;
    }
    goto L_0882B9B8;
L_0882B9B8:
    ctx.gpr[31] = (0x0882B9C0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088291A4;
L_0882B9C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0882B9C4;
L_0882B9C4:
    ctx.gpr[31] = (0x0882B9CCu);
    ctx.gpr[5] = (0u | 4u);
    goto L_0882B5A4;
L_0882B9CC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_0882B9E0;
      }
      goto L_0882B9D8;
    }
L_0882B9D8:
    ctx.gpr[31] = (0x0882B9E0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_088291A4;
L_0882B9E0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BA10:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(204));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BA18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882BA34u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0882BA34u) goto L_0882BA34;
    return;
L_0882BA34:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(204));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0882BA44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 333u, 0x0893E214u>(ctx, &aot_mem) && ctx.pc == 0x0882BA44u) goto L_0882BA44;
    return;
L_0882BA44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0882BA50u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 334u, 0x0893E24Cu>(ctx, &aot_mem) && ctx.pc == 0x0882BA50u) goto L_0882BA50;
    return;
L_0882BA50:
    ctx.gpr[31] = (0x0882BA58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 335u, 0x0893E620u>(ctx, &aot_mem) && ctx.pc == 0x0882BA58u) goto L_0882BA58;
    return;
L_0882BA58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BA6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882BAC0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 367u, 0x0880F6B4u>(ctx, &aot_mem) && ctx.pc == 0x0882BAC0u) goto L_0882BAC0;
    return;
L_0882BAC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0882BCDC;
      }
      goto L_0882BAF0;
    }
L_0882BAF0:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[4] = (14545u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[30] = (0u | 0u);
    goto L_0882BB28;
L_0882BB28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x0882BB50u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 217u, 0x0880D69Cu>(ctx, &aot_mem) && ctx.pc == 0x0882BB50u) goto L_0882BB50;
    return;
L_0882BB50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882BB84u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 217u, 0x0880D69Cu>(ctx, &aot_mem) && ctx.pc == 0x0882BB84u) goto L_0882BB84;
    return;
L_0882BB84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882BBB8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 217u, 0x0880D69Cu>(ctx, &aot_mem) && ctx.pc == 0x0882BBB8u) goto L_0882BBB8;
    return;
L_0882BBB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0882BBECu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 217u, 0x0880D69Cu>(ctx, &aot_mem) && ctx.pc == 0x0882BBECu) goto L_0882BBEC;
    return;
L_0882BBEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0882BC20u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 199u, 0x0880CCF4u>(ctx, &aot_mem) && ctx.pc == 0x0882BC20u) goto L_0882BC20;
    return;
L_0882BC20:
    ctx.gpr[31] = (0x0882BC28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 195u, 0x0880CC68u>(ctx, &aot_mem) && ctx.pc == 0x0882BC28u) goto L_0882BC28;
    return;
L_0882BC28:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0882BC3Cu);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 199u, 0x0880CCF4u>(ctx, &aot_mem) && ctx.pc == 0x0882BC3Cu) goto L_0882BC3C;
    return;
L_0882BC3C:
    ctx.gpr[31] = (0x0882BC44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 195u, 0x0880CC68u>(ctx, &aot_mem) && ctx.pc == 0x0882BC44u) goto L_0882BC44;
    return;
L_0882BC44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[0];
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0882BC58u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 199u, 0x0880CCF4u>(ctx, &aot_mem) && ctx.pc == 0x0882BC58u) goto L_0882BC58;
    return;
L_0882BC58:
    ctx.gpr[31] = (0x0882BC60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 195u, 0x0880CC68u>(ctx, &aot_mem) && ctx.pc == 0x0882BC60u) goto L_0882BC60;
    return;
L_0882BC60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[0];
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0882BC74u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 199u, 0x0880CCF4u>(ctx, &aot_mem) && ctx.pc == 0x0882BC74u) goto L_0882BC74;
    return;
L_0882BC74:
    ctx.gpr[31] = (0x0882BC7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 195u, 0x0880CC68u>(ctx, &aot_mem) && ctx.pc == 0x0882BC7Cu) goto L_0882BC7C;
    return;
L_0882BC7C:
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[0];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0882BCC0;
      }
      goto L_0882BC9C;
    }
L_0882BC9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882BCDC;
      }
      goto L_0882BCC0;
    }
L_0882BCC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882BB28;
      }
      goto L_0882BCDC;
    }
L_0882BCDC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
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
L_0882BD20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(228)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0882BD4Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30008));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0882BD4Cu) goto L_0882BD4C;
    return;
L_0882BD4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BD68;
      }
      goto L_0882BD54;
    }
L_0882BD54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-256));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    goto L_0882BD68;
L_0882BD68:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BD7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2179u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882BD98u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17120));
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 355u, 0x089DE5ACu>(ctx, &aot_mem) && ctx.pc == 0x0882BD98u) goto L_0882BD98;
    return;
L_0882BD98:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BDA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), 0u);
    ctx.gpr[7] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x0882BE88u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(256), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 42u, 0x0894C330u>(ctx, &aot_mem) && ctx.pc == 0x0882BE88u) goto L_0882BE88;
    return;
L_0882BE88:
    ctx.gpr[31] = (0x0882BE90u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    goto L_088299F0;
L_0882BE90:
    ctx.gpr[31] = (0x0882BE98u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(152));
    goto L_088299F0;
L_0882BE98:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x0882BEACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x0882BEACu) goto L_0882BEAC;
    return;
L_0882BEAC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(252), 0u);
    ctx.gpr[31] = (0x0882BEB8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(396), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 232u, 0x089451C8u>(ctx, &aot_mem) && ctx.pc == 0x0882BEB8u) goto L_0882BEB8;
    return;
L_0882BEB8:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0882BED0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(252)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0882BF04;
      }
      goto L_0882BEF4;
    }
L_0882BEF4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0882BFE8;
      }
      goto L_0882BEFC;
    }
L_0882BEFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BF20;
      }
      goto L_0882BF04;
    }
L_0882BF04:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0882BF9C;
      }
      goto L_0882BF10;
    }
L_0882BF10:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_0882BFE8;
    }
    goto L_0882BF18;
L_0882BF18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0882BFE8;
      }
      goto L_0882BF20;
    }
L_0882BF20:
    ctx.gpr[31] = (0x0882BF28u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0882BF28u) goto L_0882BF28;
    return;
L_0882BF28:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0882BF44;
      }
      goto L_0882BF34;
    }
L_0882BF34:
    ctx.gpr[31] = (0x0882BF3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 601u, 0x088C226Cu>(ctx, &aot_mem) && ctx.pc == 0x0882BF3Cu) goto L_0882BF3C;
    return;
L_0882BF3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0882BF50;
      }
      goto L_0882BF44;
    }
L_0882BF44:
    ctx.gpr[31] = (0x0882BF4Cu);
    // nop
    ctx.pc = 0x08AB45BCu;
    return;
L_0882BF4C:
    ctx.gpr[4] = (ctx.gpr[2] >> 1u);
    goto L_0882BF50;
L_0882BF50:
    ctx.gpr[31] = (0x0882BF58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 71u, 0x0896C580u>(ctx, &aot_mem) && ctx.pc == 0x0882BF58u) goto L_0882BF58;
    return;
L_0882BF58:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3304)));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3292)));
    ctx.gpr[5] = (2219u << 16u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(256));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882BF80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(29988));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0882BF80u) goto L_0882BF80;
    return;
L_0882BF80:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(288));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0882BF90u);
    ctx.gpr[6] = (0u | 142u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x0882BF90u) goto L_0882BF90;
    return;
L_0882BF90:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(252), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882BFE8;
      }
      goto L_0882BF9C;
    }
L_0882BF9C:
    ctx.gpr[31] = (0x0882BFA4u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(288));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 487u, 0x08809EA8u>(ctx, &aot_mem) && ctx.pc == 0x0882BFA4u) goto L_0882BFA4;
    return;
L_0882BFA4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(352));
      if (branch_taken) {
          goto L_0882BFE8;
      }
      goto L_0882BFB0;
    }
L_0882BFB0:
    ctx.gpr[31] = (0x0882BFB8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0882BFB8u) goto L_0882BFB8;
    return;
L_0882BFB8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(388));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x0882BFD4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 479u, 0x0882DC74u>(ctx, &aot_mem) && ctx.pc == 0x0882BFD4u) goto L_0882BFD4;
    return;
L_0882BFD4:
    ctx.gpr[31] = (0x0882BFDCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 555u, 0x0880A5E8u>(ctx, &aot_mem) && ctx.pc == 0x0882BFDCu) goto L_0882BFDC;
    return;
L_0882BFDC:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(252), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0882BFE8;
      }
      goto L_0882BFE8;
    }
L_0882BFE8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0009(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0009_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_9(Runtime &runtime) {
    runtime.register_generated_unit(9u, 0x08828000u, 16384u, &recomp_unit_0009, &recomp_unit_0009_entry);
    runtime.register_function(0x08828004u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828008u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828010u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882802Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828030u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828040u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828048u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828050u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828060u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828078u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828088u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828094u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088280A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088280A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088280CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828108u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828110u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828124u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828138u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828148u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828160u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882817Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828180u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828188u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828194u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882819Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088281A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088281B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088281C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088281D0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088281E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088281E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088281F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828200u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828208u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828210u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882821Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828224u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828250u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828260u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882826Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828274u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828280u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088282B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088282C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088282E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088282FCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882830Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828320u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828330u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882834Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828360u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828368u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828370u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828380u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088283A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088283D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088283F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828408u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882842Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882847Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828488u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828490u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088284A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088284B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088284D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088284DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088284F4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088284FCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828514u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882851Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828524u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882852Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828534u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828538u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882854Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828554u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882855Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828574u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882857Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828584u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882858Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828594u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882859Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088285A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088285B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088285B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088285C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088285C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088285D0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088285DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088285E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088285ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088285F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828620u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828638u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828640u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828674u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828684u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088286A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088286BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088286D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088286F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088286F4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828710u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828728u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882873Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828758u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828770u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882878Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828794u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088287A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088287C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088287F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828838u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828840u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828850u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828860u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828868u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882886Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828880u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088288B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088288B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088288C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088288ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088288F4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828904u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882890Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828918u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828920u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828948u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882894Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882895Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828964u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882896Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828980u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882898Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828994u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882899Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088289B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088289C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088289D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088289E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088289E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088289F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088289F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A10u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A18u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A30u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A38u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A50u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A70u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A78u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A90u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828A94u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828AA4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828AB0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828AD4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828ADCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828AF0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828AFCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B04u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B14u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B1Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B28u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B30u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B38u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B40u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B44u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B48u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B5Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B64u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B68u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B70u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B80u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B88u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B8Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828B94u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828BA4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828BACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828BBCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828BC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828BCCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828BF4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828C08u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828C40u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828C54u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828C5Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828C68u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828C74u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828C8Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828C94u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828CA0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828CBCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828CF8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828D0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828D20u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828D34u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828D48u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828D5Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828D64u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828D70u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828D80u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828D98u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828DACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828DC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828DC8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828DD4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828DF4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828E50u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828E64u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828E70u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828E90u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828EA0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828EA4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828EB0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828EC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828EC4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828ED0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828EE0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828EE8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828EF0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828EF8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828F08u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828F0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828F14u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828F24u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828F48u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828F74u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828F84u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828F9Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828FA0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828FB4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828FCCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828FD0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828FDCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828FE4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08828FFCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829014u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829038u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882906Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829084u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829088u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882909Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088290B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088290C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088290C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088290CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088290D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088290E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088290F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829114u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829120u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829128u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882914Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829168u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829174u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829190u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882919Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088291A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088291D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088291E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088291ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088291F4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829210u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829220u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829224u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882922Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829234u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829244u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882924Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829270u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882927Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829294u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088292A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088292C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088292D0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088292D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088292DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088292E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088292FCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882930Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829328u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829338u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882933Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829348u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829358u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829368u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882939Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088293A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088293B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088293C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088293CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088293D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088293DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088293E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088293ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829410u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829434u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882946Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882947Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829480u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882948Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829498u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088294A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088294ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088294C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088294CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088294D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088294E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088294E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088294F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088294FCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829500u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829514u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829520u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882952Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829534u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882953Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829548u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829554u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882955Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829564u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882956Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829580u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829584u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829598u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088295D0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088295E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088295E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088295F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829608u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829610u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882961Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829628u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882962Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829634u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829638u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829644u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882966Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882969Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088296A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088296ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088296B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088296BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088296C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088296D0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088296D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088296ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088296F4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088296FCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829704u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882970Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829714u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829718u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829724u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882972Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829734u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829740u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882974Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829750u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882975Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829764u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829790u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088297A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088297A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088297B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088297B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088297C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088297C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088297D0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088297D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088297E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088297ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088297F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088297FCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829808u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882980Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829814u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829828u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829830u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829838u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829840u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882985Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882987Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829890u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088298A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088298A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088298B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088298BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088298D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088298E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088298E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088298F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088298F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829900u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882990Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829924u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882992Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829938u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829944u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829948u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829954u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829960u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829968u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829970u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829978u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829984u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882999Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088299A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088299B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088299BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088299C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088299CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088299D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x088299F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A14u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A38u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A3Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A48u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A54u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829A70u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829AA8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829B4Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829B68u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829B70u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829B7Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829B84u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829B88u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829B9Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829BB8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829BE8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829BF0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829BF4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829C44u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829C4Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829C5Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829C78u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829C84u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829C8Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829C98u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829CB0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829CCCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829CD0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829CD8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829CE4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829CF8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829D4Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829D58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829D60u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829D6Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829D74u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829D88u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829D94u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829D9Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829DACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829DBCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829DC4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829DF8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829DFCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829E18u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829E1Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829E30u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829E38u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829E40u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829E4Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829E58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829E68u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829E80u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829EB0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829F48u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829F64u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829F6Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829F74u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829F80u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829F90u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829F98u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FA4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FB4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FC8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FD0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FDCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FE4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x08829FF8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A000u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A008u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A014u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A01Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A024u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A030u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A038u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A040u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A04Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A054u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A05Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A064u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A068u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A074u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A0A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A0B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A0C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A0C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A0ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A108u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A118u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A11Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A138u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A14Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A164u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A174u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A184u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A188u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A1A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A1D0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A1D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A1E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A1F4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A210u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A218u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A220u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A22Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A238u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A240u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A254u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A270u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A288u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A2A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A2B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A2B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A2ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A338u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A344u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A350u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A374u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A388u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A390u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A398u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A3A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A3ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A3B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A3B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A3C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A3DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A3E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A3F4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A408u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A414u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A420u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A42Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A434u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A43Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A448u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A464u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A474u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A484u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A48Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A4A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A4B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A4B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A4C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A4D0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A4DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A4ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A500u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A504u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A510u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A518u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A528u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A538u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A540u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A544u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A54Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A564u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A56Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A580u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A594u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A5ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A5BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A5C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A5CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A5D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A5ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A600u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A618u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A628u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A660u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A6B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A6C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A6CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A6D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A6E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A6F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A6F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A70Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A718u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A724u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A730u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A740u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A750u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A760u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A768u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A79Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A7A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A7BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A7C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A7D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A7DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A7E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A7F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A7FCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A80Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A824u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A854u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A8ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A908u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A910u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A918u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A924u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A934u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A93Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A948u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A950u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A958u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A964u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A96Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A974u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A980u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A988u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A990u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A99Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A9A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A9ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A9B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A9C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A9C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A9D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A9DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A9E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A9F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882A9F8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA00u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA08u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA18u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA4Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA64u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA68u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AA90u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AAACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AABCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AAC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AADCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AAF0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AB08u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AB18u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AB28u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AB2Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AB4Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AB74u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AB7Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AB8Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AB98u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ABB4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ABBCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ABC4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ABD0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ABDCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ABE4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ABF8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC14u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC2Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC44u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC54u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AC90u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ACA4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ACE0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ACF4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ACFCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD0Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD14u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD2Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD38u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AD58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ADA8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ADBCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ADC4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882ADE0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE08u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE1Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE20u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE2Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE3Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE4Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE54u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE5Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE64u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE6Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE7Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE88u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AE94u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AEA0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AEB8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AEC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AEC8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AED0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AF04u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AF50u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AF64u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AF6Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AF88u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AF94u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AFB0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AFB8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AFBCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AFC8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AFD0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AFD8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AFE0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AFE8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882AFF8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B004u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B010u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B01Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B03Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B044u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B04Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B054u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B084u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B160u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B168u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B170u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B190u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B1C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B1D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B1DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B1F0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B200u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B210u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B224u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B238u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B248u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B254u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B268u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B278u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B288u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B290u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B29Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B2A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B2B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B2BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B2C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B2D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B2DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B2E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B2E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B2F4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B300u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B308u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B318u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B31Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B32Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B340u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B350u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B35Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B364u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B368u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B370u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B378u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B37Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B384u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B38Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B390u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B398u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B3A0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B3A8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B3B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B444u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B470u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B474u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B480u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B490u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B4E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B520u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B524u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B534u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B540u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B548u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B554u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B57Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B5A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B5B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B5C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B5D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B5E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B5E8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B600u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B61Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B648u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B654u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B66Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B684u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6D0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6D4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6DCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6E4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B6ECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B700u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B70Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B720u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B72Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B734u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B738u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B740u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B748u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B74Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B754u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B75Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B760u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B768u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B770u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B774u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B77Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B790u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B7B4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B800u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B808u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B810u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B81Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B83Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B87Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B890u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8B0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8BCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8C8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B8F4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B904u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B90Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B918u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B920u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B928u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B93Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B94Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B954u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B958u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B96Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B97Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B980u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B98Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B99Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9A4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9ACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9B8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9C0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9C4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9CCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9D8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882B9E0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA10u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA18u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA34u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA44u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA50u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BA6Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BAC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BAF0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB28u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB50u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BB84u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BBB8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BBECu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC20u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC28u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC3Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC44u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC60u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC74u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC7Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BC9Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BCC0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BCDCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BD20u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BD4Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BD54u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BD68u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BD7Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BD98u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BDA4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE88u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE90u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BE98u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BEACu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BEB8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BED0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BEF4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BEFCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF04u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF10u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF18u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF20u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF28u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF34u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF3Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF44u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF4Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF50u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF58u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF80u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF90u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BF9Cu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BFA4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BFB0u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BFB8u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BFD4u, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BFDCu, &recomp_unit_0009, "recomp_unit_0009");
    runtime.register_function(0x0882BFE8u, &recomp_unit_0009, "recomp_unit_0009");
}
} // namespace psprecomp

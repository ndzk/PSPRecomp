#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0032[4095] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 0,
    0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 12, 0, 0, 13, 0, 14, 0, 15,
    0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0,
    0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0,
    30, 0, 31, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0,
    38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    0, 41, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 52, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 59, 0,
    60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 65, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 74, 0, 75, 0, 76, 0,
    77, 0, 78, 0, 79, 0, 80, 0, 81, 82, 83, 0, 0, 84, 0, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 89,
    0, 90, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 96, 0, 97, 0, 0, 0, 98,
    0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 0, 108, 0,
    0, 109, 0, 110, 0, 111, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 123, 0, 124, 0, 0, 125, 0, 0, 0, 0, 126, 0,
    0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0,
    136, 0, 0, 0, 137, 0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0,
    0, 143, 0, 0, 0, 0, 144, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0, 0, 152,
    0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 0, 156, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 0, 159, 160, 0, 161, 0, 162, 0, 163, 0,
    0, 164, 0, 165, 0, 166, 0, 167, 0, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 175, 0, 0, 0, 0, 176, 0, 177, 0, 178, 0, 0, 179, 0, 0, 180, 0, 181, 0,
    182, 0, 183, 0, 184, 0, 185, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 191, 0, 0, 0, 0, 0, 0, 192,
    0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 0, 0,
    0, 201, 0, 202, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 0, 0, 206, 0, 207, 0, 208, 0, 0, 0, 0, 0, 209, 0, 210, 0, 211, 0,
    212, 0, 213, 0, 214, 0, 215, 0, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 222, 0, 0, 0, 0, 223, 0,
    224, 0, 225, 0, 0, 0, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0,
    233, 0, 234, 0, 0, 235, 0, 0, 0, 0, 236, 0, 237, 0, 238, 0, 239, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 0, 0, 0, 0, 243,
    0, 244, 0, 245, 0, 0, 0, 0, 0, 246, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0,
    0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0,
    0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 270, 0, 0,
    0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0,
    279, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0,
    0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289,
    0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 295,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0,
    0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0, 0, 301, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 307, 0, 308, 0, 0, 0, 0, 0, 309, 0,
    0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 313, 0,
    0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0,
    0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0,
    0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 0,
    0, 0, 342, 0, 0, 343, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 346, 0, 347, 0, 0, 348, 0, 349, 0, 0, 350, 0, 351,
    0, 352, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 360, 0,
    0, 0, 0, 0, 0, 361, 0, 362, 0, 363, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 368, 0, 0,
    0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0,
    0, 376, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 0, 381, 382, 0, 383, 0, 0, 0, 0, 0, 384, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 390, 0, 391, 0, 392, 0, 0, 393,
    0, 394, 0, 395, 0, 396, 0, 0, 397, 0, 398, 0, 399, 0, 400, 0, 0, 401, 0, 402, 0, 403, 0, 404, 0, 0, 0, 0, 405, 0, 0, 406,
    0, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 413, 0, 414, 0, 415, 0,
    416, 0, 417, 0, 418, 0, 0, 419, 0, 420, 0, 421, 0, 0, 422, 0, 0, 423, 0, 0, 0, 424, 0, 425, 0, 426, 0, 0, 427, 0, 428, 429,
    0, 430, 0, 431, 0, 432, 0, 0, 0, 433, 0, 434, 0, 435, 0, 0, 0, 436, 0, 437, 438, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0,
    0, 441, 0, 442, 0, 443, 0, 0, 0, 0, 444, 0, 445, 0, 446, 0, 447, 0, 0, 0, 0, 448, 0, 449, 0, 450, 451, 0, 0, 452, 0, 453,
    0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 460, 0, 461, 0, 462, 0, 463,
    0, 464, 0, 465, 0, 466, 0, 467, 0, 468, 0, 469, 0, 0, 470, 0, 471, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 474, 0, 0, 475, 0,
    476, 0, 477, 478, 0, 0, 479, 0, 0, 480, 0, 481, 0, 482, 0, 483, 0, 484, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 487, 0, 488,
    0, 0, 0, 0, 489, 0, 490, 0, 0, 491, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496,
    0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 505, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0,
    0, 508, 0, 509, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 0, 0, 514, 0, 515, 0, 516, 0, 517, 0,
    0, 0, 0, 518, 0, 519, 0, 0, 520, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 524, 0, 525, 0,
    0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 528, 0, 529, 0, 530, 0, 531, 0, 0, 532, 0, 0, 0, 533, 0, 0, 534,
    0, 535, 0, 0, 0, 0, 536, 0, 537, 0, 538, 0, 0, 539, 0, 540, 0, 0, 0, 0, 541, 0, 542, 0, 543, 0, 0, 0, 0, 544, 0, 545,
    0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0, 549, 0, 550, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 552, 0, 0, 553, 0, 554, 0, 0, 0, 0, 555, 0, 556, 0, 557, 0, 0, 0, 558, 0, 559, 0, 0, 0, 0, 560, 0, 0, 0, 0,
    0, 0, 0, 0, 561, 0, 562, 0, 563, 0, 564, 0, 565, 0, 566, 0, 567, 0, 0, 568, 0, 0, 0, 569, 0, 570, 0, 571, 0, 572, 0, 573,
    0, 574, 0, 575, 0, 0, 576, 0, 577, 0, 0, 0, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0, 0, 0, 0, 0, 583, 0, 584, 0, 0, 585,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 587, 0, 588, 0, 589, 0, 590, 0, 591, 0, 592, 0, 593, 0, 594, 0, 595, 0, 596, 0,
    0, 597, 0, 0, 0, 598, 0, 599, 0, 600, 0, 601, 0, 602, 0, 603, 0, 604, 0, 605, 0, 606, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0,
    0, 608, 0, 609, 0, 0, 0, 610, 0, 611, 0, 612, 0, 0, 0, 613, 0, 614, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 620, 0, 621, 0, 0, 0, 0, 622, 0,
    0, 0, 623, 0, 624, 0, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0,
    627, 0, 628, 0, 0, 629, 0, 630, 0, 0, 631, 0, 0, 0, 632, 0, 0, 633, 0, 0, 0, 634, 0, 635, 0, 0, 636, 0, 637, 0, 638, 0,
    639, 0, 0, 640, 0, 0, 641, 0, 0, 642, 0, 643, 0, 644, 0, 645, 646, 0, 647, 0, 648, 0, 649, 0, 650, 0, 651, 0, 0, 0, 652, 0,
    653, 0, 0, 0, 654, 0, 655, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 663, 0, 664,
    0, 665, 0, 666, 0, 667, 0, 668, 0, 669, 0, 0, 670, 0, 0, 0, 671, 0, 672, 0, 673, 0, 674, 0, 675, 0, 676, 0, 677, 0, 0, 678,
    0, 0, 0, 0, 0, 0, 0, 679, 0, 680, 0, 0, 0, 681, 0, 682, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 685, 0, 0, 686, 0, 0, 0, 687, 0, 0, 688, 0, 689, 0, 690, 0, 691, 0, 692, 0, 0,
    693, 0, 0, 694, 0, 695, 0, 696, 0, 697, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 699, 0, 700, 0, 701, 0, 0, 702, 0, 703, 0, 0, 704, 0, 0, 0, 705, 0, 0, 706, 0, 707, 0, 708, 0, 709, 0, 710, 0,
    0, 711, 0, 0, 712, 0, 713, 0, 714, 0, 715, 0, 716, 0, 0, 717, 0, 718, 0, 0, 0, 719, 0, 720, 0, 721, 0, 722, 0, 723, 0, 724,
    0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 726, 0, 727, 0, 728, 0, 729, 0, 730, 0, 731, 0, 732, 0, 0, 733, 0, 0, 0, 734, 0, 735,
    0, 736, 0, 737, 0, 738, 0, 739, 0, 740, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 744, 0, 0, 745, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 747, 0, 0, 0, 748, 0, 0, 749,
    750, 0, 751, 0, 752, 0, 0, 753, 0, 0, 0, 754, 0, 0, 755, 0, 0, 0, 0, 756, 757, 0, 758, 0, 759, 0, 0, 0, 760, 0, 0, 761,
    762, 0, 763, 0, 764, 0, 0, 765, 0, 0, 0, 766, 0, 767, 0, 0, 0, 0, 768, 769, 770, 771, 0, 772, 0, 773, 0, 774, 0, 775, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 777, 0, 778, 0, 0, 779, 0, 780, 0,
    0, 781, 0, 0, 0, 782, 0, 0, 783, 0, 784, 0, 785, 0, 786, 0, 787, 0, 0, 788, 0, 0, 789, 0, 790, 0, 791, 0, 792, 0, 793, 0,
    0, 794, 0, 795, 0, 0, 0, 796, 0, 797, 0, 798, 0, 799, 0, 800, 0, 801, 0, 0, 802, 0, 0, 0, 0, 0, 803, 0, 804, 0, 805, 0,
    806, 0, 0, 807, 0, 0, 0, 808, 0, 809, 0, 810, 0, 811, 0, 0, 812, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 814, 0, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 817, 0, 0, 0, 0, 0, 818, 0, 0, 819, 0, 820, 0, 821, 822, 0,
    823, 0, 824, 0, 0, 0, 0, 0, 825, 0, 826, 0, 827, 0, 0, 0, 828, 0, 829, 0, 830, 0, 831, 0, 0, 0, 0, 0, 832, 0, 0, 833,
    0, 834, 0, 0, 835, 836, 837, 0, 838, 0, 839, 0, 0, 0, 0, 0, 840, 0, 841, 0, 842, 0, 0, 0, 843, 0, 844, 845, 846, 0, 847, 0,
    848, 0, 849, 0, 0, 850, 0, 851, 0, 0, 0, 852, 0, 853, 0, 854, 0, 0, 855, 0, 0, 0, 0, 0, 0, 856, 0, 857, 0, 858, 0, 859,
    0, 0, 860, 0, 0, 0, 861, 0, 862, 0, 863, 0, 864, 0, 0, 865, 0, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 867, 0, 0, 868, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 869, 0, 0, 870, 0, 0, 0, 0, 0, 871, 0, 0, 872, 873, 0, 874, 0, 875, 0, 0,
    0, 0, 876, 0, 0, 0, 877, 0, 0, 878, 0, 0, 0, 0, 879, 880, 0, 881, 0, 882, 0, 0, 0, 0, 0, 883, 0, 0, 884, 885, 0, 886,
    0, 887, 0, 0, 0, 0, 888, 0, 0, 0, 889, 0, 890, 0, 0, 0, 0, 891, 892, 893, 894, 0, 895, 0, 896, 0, 897, 0, 0, 898, 0, 899,
    0, 0, 0, 900, 0, 901, 0, 902, 0, 0, 903, 0, 0, 0, 0, 0, 0, 904, 0, 905, 0, 906, 0, 907, 0, 0, 908, 0, 0, 0, 909, 0,
    910, 0, 911, 0, 912, 0, 0, 913, 0, 0, 0, 0, 0, 914, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 915, 0, 0, 916, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 917, 0, 0, 918, 0, 0, 0, 0, 0, 919, 0, 0, 920, 0, 921, 0, 922, 923, 0, 924, 0, 925, 0, 0, 0, 0, 0, 926, 0,
    927, 0, 928, 0, 0, 0, 929, 0, 930, 0, 931, 0, 932, 0, 0, 0, 0, 0, 933, 0, 0, 934, 0, 935, 0, 0, 936, 937, 938, 0, 939, 0,
    940, 0, 0, 0, 0, 0, 941, 0, 942, 0, 943, 0, 0, 0, 944, 0, 945, 946, 947, 0, 948, 0, 949, 0, 950, 0, 0, 951, 0, 952, 0, 0,
    0, 953, 0, 954, 0, 955, 0, 0, 956, 0, 0, 0, 0, 0, 0, 957, 0, 958, 0, 959, 0, 960, 0, 0, 961, 0, 0, 0, 962, 0, 963, 0,
    964, 0, 965, 0, 0, 966, 0, 0, 0, 0, 0, 967, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 968, 0, 0, 969, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 970, 0, 0, 971, 0, 0, 0, 0, 0, 972, 0, 0, 973, 974, 0, 975, 0, 976, 0, 0, 0, 0, 977, 0, 0, 0, 978, 0, 0, 979, 0,
    0, 0, 0, 980, 981, 0, 982, 0, 983, 0, 0, 0, 0, 0, 984, 0, 0, 985, 986, 0, 987, 0, 988, 0, 0, 0, 0, 989, 0, 0, 0, 990,
    0, 991, 0, 0, 0, 0, 992, 993, 994, 995, 0, 996, 0, 997, 0, 998, 0, 0, 999, 0, 1000, 0, 0, 0, 1001, 0, 1002, 0, 1003, 0, 0, 1004,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1005, 1006, 0, 0, 0, 1007, 1008, 0, 1009, 0, 1010, 0, 1011, 0, 1012, 0, 1013, 0,
    1014, 0, 1015, 0, 1016, 0, 0, 1017, 0, 0, 0, 1018, 0, 1019, 0, 1020, 0, 1021, 0, 1022, 0, 1023, 0, 1024, 0, 1025, 0, 0, 1026, 0, 1027,
};
void recomp_unit_0032_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08884004u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0032[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08884004;
    case 2u: goto L_08884018;
    case 3u: goto L_0888402C;
    case 4u: goto L_08884060;
    case 5u: goto L_08884068;
    case 6u: goto L_08884078;
    case 7u: goto L_08884088;
    case 8u: goto L_0888409C;
    case 9u: goto L_088840AC;
    case 10u: goto L_088840C4;
    case 11u: goto L_088840D8;
    case 12u: goto L_088840E4;
    case 13u: goto L_088840F0;
    case 14u: goto L_088840F8;
    case 15u: goto L_08884100;
    case 16u: goto L_0888410C;
    case 17u: goto L_0888411C;
    case 18u: goto L_08884130;
    case 19u: goto L_08884144;
    case 20u: goto L_08884168;
    case 21u: goto L_0888417C;
    case 22u: goto L_08884194;
    case 23u: goto L_088841A4;
    case 24u: goto L_088841B0;
    case 25u: goto L_088841B8;
    case 26u: goto L_088841C8;
    case 27u: goto L_088841D8;
    case 28u: goto L_088841F0;
    case 29u: goto L_088841FC;
    case 30u: goto L_08884204;
    case 31u: goto L_0888420C;
    case 32u: goto L_08884214;
    case 33u: goto L_0888422C;
    case 34u: goto L_08884240;
    case 35u: goto L_08884258;
    case 36u: goto L_08884260;
    case 37u: goto L_0888427C;
    case 38u: goto L_08884284;
    case 39u: goto L_088842A8;
    case 40u: goto L_088842EC;
    case 41u: goto L_08884308;
    case 42u: goto L_08884314;
    case 43u: goto L_0888431C;
    case 44u: goto L_0888433C;
    case 45u: goto L_08884358;
    case 46u: goto L_08884394;
    case 47u: goto L_0888439C;
    case 48u: goto L_088843C0;
    case 49u: goto L_088843D4;
    case 50u: goto L_088843DC;
    case 51u: goto L_088843E4;
    case 52u: goto L_088843EC;
    case 53u: goto L_08884414;
    case 54u: goto L_08884428;
    case 55u: goto L_08884430;
    case 56u: goto L_08884464;
    case 57u: goto L_0888446C;
    case 58u: goto L_08884474;
    case 59u: goto L_0888447C;
    case 60u: goto L_08884484;
    case 61u: goto L_0888448C;
    case 62u: goto L_08884494;
    case 63u: goto L_088844B4;
    case 64u: goto L_088844BC;
    case 65u: goto L_08884524;
    case 66u: goto L_08884528;
    case 67u: goto L_08884538;
    case 68u: goto L_08884568;
    case 69u: goto L_0888469C;
    case 70u: goto L_088846B4;
    case 71u: goto L_088846BC;
    case 72u: goto L_088846D4;
    case 73u: goto L_088846E4;
    case 74u: goto L_088846EC;
    case 75u: goto L_088846F4;
    case 76u: goto L_088846FC;
    case 77u: goto L_08884704;
    case 78u: goto L_0888470C;
    case 79u: goto L_08884714;
    case 80u: goto L_0888471C;
    case 81u: goto L_08884724;
    case 82u: goto L_08884728;
    case 83u: goto L_0888472C;
    case 84u: goto L_08884738;
    case 85u: goto L_08884744;
    case 86u: goto L_08884754;
    case 87u: goto L_08884760;
    case 88u: goto L_0888476C;
    case 89u: goto L_08884780;
    case 90u: goto L_08884788;
    case 91u: goto L_0888479C;
    case 92u: goto L_088847A4;
    case 93u: goto L_088847C8;
    case 94u: goto L_088847D8;
    case 95u: goto L_088847E0;
    case 96u: goto L_088847E8;
    case 97u: goto L_088847F0;
    case 98u: goto L_08884800;
    case 99u: goto L_08884808;
    case 100u: goto L_08884810;
    case 101u: goto L_08884818;
    case 102u: goto L_08884820;
    case 103u: goto L_08884828;
    case 104u: goto L_08884830;
    case 105u: goto L_08884840;
    case 106u: goto L_0888486C;
    case 107u: goto L_08884874;
    case 108u: goto L_0888487C;
    case 109u: goto L_08884888;
    case 110u: goto L_08884890;
    case 111u: goto L_08884898;
    case 112u: goto L_0888489C;
    case 113u: goto L_088848AC;
    case 114u: goto L_088848BC;
    case 115u: goto L_088848D0;
    case 116u: goto L_088848E0;
    case 117u: goto L_088848F4;
    case 118u: goto L_08884908;
    case 119u: goto L_08884918;
    case 120u: goto L_08884928;
    case 121u: goto L_08884934;
    case 122u: goto L_08884940;
    case 123u: goto L_08884954;
    case 124u: goto L_0888495C;
    case 125u: goto L_08884968;
    case 126u: goto L_0888497C;
    case 127u: goto L_08884994;
    case 128u: goto L_0888499C;
    case 129u: goto L_088849A4;
    case 130u: goto L_088849AC;
    case 131u: goto L_088849B4;
    case 132u: goto L_088849BC;
    case 133u: goto L_088849C4;
    case 134u: goto L_088849D4;
    case 135u: goto L_088849E8;
    case 136u: goto L_08884A04;
    case 137u: goto L_08884A14;
    case 138u: goto L_08884A20;
    case 139u: goto L_08884A34;
    case 140u: goto L_08884A44;
    case 141u: goto L_08884A60;
    case 142u: goto L_08884A68;
    case 143u: goto L_08884A88;
    case 144u: goto L_08884A9C;
    case 145u: goto L_08884AA8;
    case 146u: goto L_08884AB0;
    case 147u: goto L_08884AD0;
    case 148u: goto L_08884AD8;
    case 149u: goto L_08884AE4;
    case 150u: goto L_08884AEC;
    case 151u: goto L_08884AF4;
    case 152u: goto L_08884B00;
    case 153u: goto L_08884B08;
    case 154u: goto L_08884B10;
    case 155u: goto L_08884B1C;
    case 156u: goto L_08884B30;
    case 157u: goto L_08884B38;
    case 158u: goto L_08884B44;
    case 159u: goto L_08884B60;
    case 160u: goto L_08884B64;
    case 161u: goto L_08884B6C;
    case 162u: goto L_08884B74;
    case 163u: goto L_08884B7C;
    case 164u: goto L_08884B88;
    case 165u: goto L_08884B90;
    case 166u: goto L_08884B98;
    case 167u: goto L_08884BA0;
    case 168u: goto L_08884BB8;
    case 169u: goto L_08884BC0;
    case 170u: goto L_08884BC8;
    case 171u: goto L_08884BF4;
    case 172u: goto L_08884BFC;
    case 173u: goto L_08884C28;
    case 174u: goto L_08884C30;
    case 175u: goto L_08884C38;
    case 176u: goto L_08884C4C;
    case 177u: goto L_08884C54;
    case 178u: goto L_08884C5C;
    case 179u: goto L_08884C68;
    case 180u: goto L_08884C74;
    case 181u: goto L_08884C7C;
    case 182u: goto L_08884C84;
    case 183u: goto L_08884C8C;
    case 184u: goto L_08884C94;
    case 185u: goto L_08884C9C;
    case 186u: goto L_08884CA8;
    case 187u: goto L_08884CB0;
    case 188u: goto L_08884CB8;
    case 189u: goto L_08884CD4;
    case 190u: goto L_08884CE0;
    case 191u: goto L_08884CE4;
    case 192u: goto L_08884D00;
    case 193u: goto L_08884D24;
    case 194u: goto L_08884D30;
    case 195u: goto L_08884D48;
    case 196u: goto L_08884D54;
    case 197u: goto L_08884D5C;
    case 198u: goto L_08884D64;
    case 199u: goto L_08884D6C;
    case 200u: goto L_08884D74;
    case 201u: goto L_08884D88;
    case 202u: goto L_08884D90;
    case 203u: goto L_08884DA4;
    case 204u: goto L_08884DAC;
    case 205u: goto L_08884DB4;
    case 206u: goto L_08884DC4;
    case 207u: goto L_08884DCC;
    case 208u: goto L_08884DD4;
    case 209u: goto L_08884DEC;
    case 210u: goto L_08884DF4;
    case 211u: goto L_08884DFC;
    case 212u: goto L_08884E04;
    case 213u: goto L_08884E0C;
    case 214u: goto L_08884E14;
    case 215u: goto L_08884E1C;
    case 216u: goto L_08884E2C;
    case 217u: goto L_08884E34;
    case 218u: goto L_08884E3C;
    case 219u: goto L_08884E50;
    case 220u: goto L_08884E58;
    case 221u: goto L_08884E60;
    case 222u: goto L_08884E68;
    case 223u: goto L_08884E7C;
    case 224u: goto L_08884E84;
    case 225u: goto L_08884E8C;
    case 226u: goto L_08884EA4;
    case 227u: goto L_08884EAC;
    case 228u: goto L_08884EB4;
    case 229u: goto L_08884ECC;
    case 230u: goto L_08884ED4;
    case 231u: goto L_08884EE8;
    case 232u: goto L_08884EF0;
    case 233u: goto L_08884F04;
    case 234u: goto L_08884F0C;
    case 235u: goto L_08884F18;
    case 236u: goto L_08884F2C;
    case 237u: goto L_08884F34;
    case 238u: goto L_08884F3C;
    case 239u: goto L_08884F44;
    case 240u: goto L_08884F58;
    case 241u: goto L_08884F60;
    case 242u: goto L_08884F68;
    case 243u: goto L_08884F80;
    case 244u: goto L_08884F88;
    case 245u: goto L_08884F90;
    case 246u: goto L_08884FA8;
    case 247u: goto L_08884FB0;
    case 248u: goto L_08884FB8;
    case 249u: goto L_08884FD0;
    case 250u: goto L_08884FD8;
    case 251u: goto L_08884FEC;
    case 252u: goto L_08885000;
    case 253u: goto L_08885028;
    case 254u: goto L_08885044;
    case 255u: goto L_08885054;
    case 256u: goto L_08885064;
    case 257u: goto L_08885078;
    case 258u: goto L_08885088;
    case 259u: goto L_0888509C;
    case 260u: goto L_088850BC;
    case 261u: goto L_088850CC;
    case 262u: goto L_088850E4;
    case 263u: goto L_088850F8;
    case 264u: goto L_0888510C;
    case 265u: goto L_08885128;
    case 266u: goto L_08885130;
    case 267u: goto L_0888514C;
    case 268u: goto L_0888515C;
    case 269u: goto L_08885168;
    case 270u: goto L_08885178;
    case 271u: goto L_0888519C;
    case 272u: goto L_088851B8;
    case 273u: goto L_088851E0;
    case 274u: goto L_08885220;
    case 275u: goto L_08885228;
    case 276u: goto L_08885238;
    case 277u: goto L_08885254;
    case 278u: goto L_0888526C;
    case 279u: goto L_08885284;
    case 280u: goto L_0888529C;
    case 281u: goto L_088852A8;
    case 282u: goto L_088852C0;
    case 283u: goto L_088852CC;
    case 284u: goto L_088852F0;
    case 285u: goto L_08885310;
    case 286u: goto L_08885368;
    case 287u: goto L_08885380;
    case 288u: goto L_088853F4;
    case 289u: goto L_08885400;
    case 290u: goto L_08885410;
    case 291u: goto L_0888542C;
    case 292u: goto L_08885444;
    case 293u: goto L_0888545C;
    case 294u: goto L_08885474;
    case 295u: goto L_08885480;
    case 296u: goto L_088854FC;
    case 297u: goto L_08885514;
    case 298u: goto L_08885524;
    case 299u: goto L_088855A4;
    case 300u: goto L_088855E4;
    case 301u: goto L_088855FC;
    case 302u: goto L_08885638;
    case 303u: goto L_08885648;
    case 304u: goto L_08885660;
    case 305u: goto L_088856A0;
    case 306u: goto L_088856D8;
    case 307u: goto L_088856DC;
    case 308u: goto L_088856E4;
    case 309u: goto L_088856FC;
    case 310u: goto L_08885710;
    case 311u: goto L_08885734;
    case 312u: goto L_0888576C;
    case 313u: goto L_0888577C;
    case 314u: goto L_0888578C;
    case 315u: goto L_088857A8;
    case 316u: goto L_088857CC;
    case 317u: goto L_088857EC;
    case 318u: goto L_08885888;
    case 319u: goto L_08885898;
    case 320u: goto L_088858B4;
    case 321u: goto L_088858CC;
    case 322u: goto L_088858E4;
    case 323u: goto L_088858FC;
    case 324u: goto L_08885908;
    case 325u: goto L_08885930;
    case 326u: goto L_08885950;
    case 327u: goto L_08885964;
    case 328u: goto L_08885980;
    case 329u: goto L_088859B8;
    case 330u: goto L_08885A5C;
    case 331u: goto L_08885A84;
    case 332u: goto L_08885A98;
    case 333u: goto L_08885AB8;
    case 334u: goto L_08885AC8;
    case 335u: goto L_08885AE0;
    case 336u: goto L_08885AF8;
    case 337u: goto L_08885B14;
    case 338u: goto L_08885B30;
    case 339u: goto L_08885BCC;
    case 340u: goto L_08885BDC;
    case 341u: goto L_08885BEC;
    case 342u: goto L_08885C0C;
    case 343u: goto L_08885C18;
    case 344u: goto L_08885C28;
    case 345u: goto L_08885C44;
    case 346u: goto L_08885C50;
    case 347u: goto L_08885C58;
    case 348u: goto L_08885C64;
    case 349u: goto L_08885C6C;
    case 350u: goto L_08885C78;
    case 351u: goto L_08885C80;
    case 352u: goto L_08885C88;
    case 353u: goto L_08885C90;
    case 354u: goto L_08885CA0;
    case 355u: goto L_08885CAC;
    case 356u: goto L_08885CC0;
    case 357u: goto L_08885CD0;
    case 358u: goto L_08885CE0;
    case 359u: goto L_08885CE8;
    case 360u: goto L_08885CFC;
    case 361u: goto L_08885D18;
    case 362u: goto L_08885D20;
    case 363u: goto L_08885D28;
    case 364u: goto L_08885D34;
    case 365u: goto L_08885D48;
    case 366u: goto L_08885D5C;
    case 367u: goto L_08885D64;
    case 368u: goto L_08885D78;
    case 369u: goto L_08885D94;
    case 370u: goto L_08885D9C;
    case 371u: goto L_08885DB0;
    case 372u: goto L_08885DC4;
    case 373u: goto L_08885DCC;
    case 374u: goto L_08885DE0;
    case 375u: goto L_08885DE8;
    case 376u: goto L_08885E08;
    case 377u: goto L_08885E10;
    case 378u: goto L_08885E28;
    case 379u: goto L_08885E3C;
    case 380u: goto L_08885E44;
    case 381u: goto L_08885E58;
    case 382u: goto L_08885E5C;
    case 383u: goto L_08885E64;
    case 384u: goto L_08885E7C;
    case 385u: goto L_08885EAC;
    case 386u: goto L_08885EB4;
    case 387u: goto L_08885EBC;
    case 388u: goto L_08885ECC;
    case 389u: goto L_08885EDC;
    case 390u: goto L_08885EE4;
    case 391u: goto L_08885EEC;
    case 392u: goto L_08885EF4;
    case 393u: goto L_08885F00;
    case 394u: goto L_08885F08;
    case 395u: goto L_08885F10;
    case 396u: goto L_08885F18;
    case 397u: goto L_08885F24;
    case 398u: goto L_08885F2C;
    case 399u: goto L_08885F34;
    case 400u: goto L_08885F3C;
    case 401u: goto L_08885F48;
    case 402u: goto L_08885F50;
    case 403u: goto L_08885F58;
    case 404u: goto L_08885F60;
    case 405u: goto L_08885F74;
    case 406u: goto L_08885F80;
    case 407u: goto L_08885F88;
    case 408u: goto L_08885F90;
    case 409u: goto L_08885FB0;
    case 410u: goto L_08885FB8;
    case 411u: goto L_08885FD4;
    case 412u: goto L_08885FE4;
    case 413u: goto L_08885FEC;
    case 414u: goto L_08885FF4;
    case 415u: goto L_08885FFC;
    case 416u: goto L_08886004;
    case 417u: goto L_0888600C;
    case 418u: goto L_08886014;
    case 419u: goto L_08886020;
    case 420u: goto L_08886028;
    case 421u: goto L_08886030;
    case 422u: goto L_0888603C;
    case 423u: goto L_08886048;
    case 424u: goto L_08886058;
    case 425u: goto L_08886060;
    case 426u: goto L_08886068;
    case 427u: goto L_08886074;
    case 428u: goto L_0888607C;
    case 429u: goto L_08886080;
    case 430u: goto L_08886088;
    case 431u: goto L_08886090;
    case 432u: goto L_08886098;
    case 433u: goto L_088860A8;
    case 434u: goto L_088860B0;
    case 435u: goto L_088860B8;
    case 436u: goto L_088860C8;
    case 437u: goto L_088860D0;
    case 438u: goto L_088860D4;
    case 439u: goto L_088860DC;
    case 440u: goto L_088860F0;
    case 441u: goto L_08886108;
    case 442u: goto L_08886110;
    case 443u: goto L_08886118;
    case 444u: goto L_0888612C;
    case 445u: goto L_08886134;
    case 446u: goto L_0888613C;
    case 447u: goto L_08886144;
    case 448u: goto L_08886158;
    case 449u: goto L_08886160;
    case 450u: goto L_08886168;
    case 451u: goto L_0888616C;
    case 452u: goto L_08886178;
    case 453u: goto L_08886180;
    case 454u: goto L_08886188;
    case 455u: goto L_08886190;
    case 456u: goto L_088861AC;
    case 457u: goto L_088861C4;
    case 458u: goto L_088861D0;
    case 459u: goto L_088861DC;
    case 460u: goto L_088861E8;
    case 461u: goto L_088861F0;
    case 462u: goto L_088861F8;
    case 463u: goto L_08886200;
    case 464u: goto L_08886208;
    case 465u: goto L_08886210;
    case 466u: goto L_08886218;
    case 467u: goto L_08886220;
    case 468u: goto L_08886228;
    case 469u: goto L_08886230;
    case 470u: goto L_0888623C;
    case 471u: goto L_08886244;
    case 472u: goto L_08886258;
    case 473u: goto L_08886260;
    case 474u: goto L_08886270;
    case 475u: goto L_0888627C;
    case 476u: goto L_08886284;
    case 477u: goto L_0888628C;
    case 478u: goto L_08886290;
    case 479u: goto L_0888629C;
    case 480u: goto L_088862A8;
    case 481u: goto L_088862B0;
    case 482u: goto L_088862B8;
    case 483u: goto L_088862C0;
    case 484u: goto L_088862C8;
    case 485u: goto L_088862DC;
    case 486u: goto L_088862E4;
    case 487u: goto L_088862F8;
    case 488u: goto L_08886300;
    case 489u: goto L_08886314;
    case 490u: goto L_0888631C;
    case 491u: goto L_08886328;
    case 492u: goto L_08886330;
    case 493u: goto L_08886340;
    case 494u: goto L_08886354;
    case 495u: goto L_08886368;
    case 496u: goto L_08886380;
    case 497u: goto L_08886398;
    case 498u: goto L_088863B0;
    case 499u: goto L_088863B8;
    case 500u: goto L_088863CC;
    case 501u: goto L_088863E4;
    case 502u: goto L_08886424;
    case 503u: goto L_0888643C;
    case 504u: goto L_08886450;
    case 505u: goto L_08886458;
    case 506u: goto L_08886468;
    case 507u: goto L_08886478;
    case 508u: goto L_08886488;
    case 509u: goto L_08886490;
    case 510u: goto L_08886498;
    case 511u: goto L_088864AC;
    case 512u: goto L_088864C4;
    case 513u: goto L_088864CC;
    case 514u: goto L_088864E4;
    case 515u: goto L_088864EC;
    case 516u: goto L_088864F4;
    case 517u: goto L_088864FC;
    case 518u: goto L_08886510;
    case 519u: goto L_08886518;
    case 520u: goto L_08886524;
    case 521u: goto L_0888652C;
    case 522u: goto L_08886544;
    case 523u: goto L_0888655C;
    case 524u: goto L_08886574;
    case 525u: goto L_0888657C;
    case 526u: goto L_08886590;
    case 527u: goto L_088865B8;
    case 528u: goto L_088865C0;
    case 529u: goto L_088865C8;
    case 530u: goto L_088865D0;
    case 531u: goto L_088865D8;
    case 532u: goto L_088865E4;
    case 533u: goto L_088865F4;
    case 534u: goto L_08886600;
    case 535u: goto L_08886608;
    case 536u: goto L_0888661C;
    case 537u: goto L_08886624;
    case 538u: goto L_0888662C;
    case 539u: goto L_08886638;
    case 540u: goto L_08886640;
    case 541u: goto L_08886654;
    case 542u: goto L_0888665C;
    case 543u: goto L_08886664;
    case 544u: goto L_08886678;
    case 545u: goto L_08886680;
    case 546u: goto L_08886694;
    case 547u: goto L_088866B4;
    case 548u: goto L_088866C0;
    case 549u: goto L_088866D0;
    case 550u: goto L_088866D8;
    case 551u: goto L_088866E4;
    case 552u: goto L_0888670C;
    case 553u: goto L_08886718;
    case 554u: goto L_08886720;
    case 555u: goto L_08886734;
    case 556u: goto L_0888673C;
    case 557u: goto L_08886744;
    case 558u: goto L_08886754;
    case 559u: goto L_0888675C;
    case 560u: goto L_08886770;
    case 561u: goto L_08886794;
    case 562u: goto L_0888679C;
    case 563u: goto L_088867A4;
    case 564u: goto L_088867AC;
    case 565u: goto L_088867B4;
    case 566u: goto L_088867BC;
    case 567u: goto L_088867C4;
    case 568u: goto L_088867D0;
    case 569u: goto L_088867E0;
    case 570u: goto L_088867E8;
    case 571u: goto L_088867F0;
    case 572u: goto L_088867F8;
    case 573u: goto L_08886800;
    case 574u: goto L_08886808;
    case 575u: goto L_08886810;
    case 576u: goto L_0888681C;
    case 577u: goto L_08886824;
    case 578u: goto L_08886834;
    case 579u: goto L_0888683C;
    case 580u: goto L_08886844;
    case 581u: goto L_0888684C;
    case 582u: goto L_08886854;
    case 583u: goto L_0888686C;
    case 584u: goto L_08886874;
    case 585u: goto L_08886880;
    case 586u: goto L_088868A8;
    case 587u: goto L_088868B4;
    case 588u: goto L_088868BC;
    case 589u: goto L_088868C4;
    case 590u: goto L_088868CC;
    case 591u: goto L_088868D4;
    case 592u: goto L_088868DC;
    case 593u: goto L_088868E4;
    case 594u: goto L_088868EC;
    case 595u: goto L_088868F4;
    case 596u: goto L_088868FC;
    case 597u: goto L_08886908;
    case 598u: goto L_08886918;
    case 599u: goto L_08886920;
    case 600u: goto L_08886928;
    case 601u: goto L_08886930;
    case 602u: goto L_08886938;
    case 603u: goto L_08886940;
    case 604u: goto L_08886948;
    case 605u: goto L_08886950;
    case 606u: goto L_08886958;
    case 607u: goto L_08886964;
    case 608u: goto L_08886988;
    case 609u: goto L_08886990;
    case 610u: goto L_088869A0;
    case 611u: goto L_088869A8;
    case 612u: goto L_088869B0;
    case 613u: goto L_088869C0;
    case 614u: goto L_088869C8;
    case 615u: goto L_088869CC;
    case 616u: goto L_08886A24;
    case 617u: goto L_08886A34;
    case 618u: goto L_08886A44;
    case 619u: goto L_08886A58;
    case 620u: goto L_08886A60;
    case 621u: goto L_08886A68;
    case 622u: goto L_08886A7C;
    case 623u: goto L_08886A8C;
    case 624u: goto L_08886A94;
    case 625u: goto L_08886A9C;
    case 626u: goto L_08886AFC;
    case 627u: goto L_08886B04;
    case 628u: goto L_08886B0C;
    case 629u: goto L_08886B18;
    case 630u: goto L_08886B20;
    case 631u: goto L_08886B2C;
    case 632u: goto L_08886B3C;
    case 633u: goto L_08886B48;
    case 634u: goto L_08886B58;
    case 635u: goto L_08886B60;
    case 636u: goto L_08886B6C;
    case 637u: goto L_08886B74;
    case 638u: goto L_08886B7C;
    case 639u: goto L_08886B84;
    case 640u: goto L_08886B90;
    case 641u: goto L_08886B9C;
    case 642u: goto L_08886BA8;
    case 643u: goto L_08886BB0;
    case 644u: goto L_08886BB8;
    case 645u: goto L_08886BC0;
    case 646u: goto L_08886BC4;
    case 647u: goto L_08886BCC;
    case 648u: goto L_08886BD4;
    case 649u: goto L_08886BDC;
    case 650u: goto L_08886BE4;
    case 651u: goto L_08886BEC;
    case 652u: goto L_08886BFC;
    case 653u: goto L_08886C04;
    case 654u: goto L_08886C14;
    case 655u: goto L_08886C1C;
    case 656u: goto L_08886C24;
    case 657u: goto L_08886C2C;
    case 658u: goto L_08886C34;
    case 659u: goto L_08886C3C;
    case 660u: goto L_08886C44;
    case 661u: goto L_08886C4C;
    case 662u: goto L_08886C58;
    case 663u: goto L_08886C78;
    case 664u: goto L_08886C80;
    case 665u: goto L_08886C88;
    case 666u: goto L_08886C90;
    case 667u: goto L_08886C98;
    case 668u: goto L_08886CA0;
    case 669u: goto L_08886CA8;
    case 670u: goto L_08886CB4;
    case 671u: goto L_08886CC4;
    case 672u: goto L_08886CCC;
    case 673u: goto L_08886CD4;
    case 674u: goto L_08886CDC;
    case 675u: goto L_08886CE4;
    case 676u: goto L_08886CEC;
    case 677u: goto L_08886CF4;
    case 678u: goto L_08886D00;
    case 679u: goto L_08886D20;
    case 680u: goto L_08886D28;
    case 681u: goto L_08886D38;
    case 682u: goto L_08886D40;
    case 683u: goto L_08886D48;
    case 684u: goto L_08886DA8;
    case 685u: goto L_08886DB0;
    case 686u: goto L_08886DBC;
    case 687u: goto L_08886DCC;
    case 688u: goto L_08886DD8;
    case 689u: goto L_08886DE0;
    case 690u: goto L_08886DE8;
    case 691u: goto L_08886DF0;
    case 692u: goto L_08886DF8;
    case 693u: goto L_08886E04;
    case 694u: goto L_08886E10;
    case 695u: goto L_08886E18;
    case 696u: goto L_08886E20;
    case 697u: goto L_08886E28;
    case 698u: goto L_08886E30;
    case 699u: goto L_08886E90;
    case 700u: goto L_08886E98;
    case 701u: goto L_08886EA0;
    case 702u: goto L_08886EAC;
    case 703u: goto L_08886EB4;
    case 704u: goto L_08886EC0;
    case 705u: goto L_08886ED0;
    case 706u: goto L_08886EDC;
    case 707u: goto L_08886EE4;
    case 708u: goto L_08886EEC;
    case 709u: goto L_08886EF4;
    case 710u: goto L_08886EFC;
    case 711u: goto L_08886F08;
    case 712u: goto L_08886F14;
    case 713u: goto L_08886F1C;
    case 714u: goto L_08886F24;
    case 715u: goto L_08886F2C;
    case 716u: goto L_08886F34;
    case 717u: goto L_08886F40;
    case 718u: goto L_08886F48;
    case 719u: goto L_08886F58;
    case 720u: goto L_08886F60;
    case 721u: goto L_08886F68;
    case 722u: goto L_08886F70;
    case 723u: goto L_08886F78;
    case 724u: goto L_08886F80;
    case 725u: goto L_08886F8C;
    case 726u: goto L_08886FAC;
    case 727u: goto L_08886FB4;
    case 728u: goto L_08886FBC;
    case 729u: goto L_08886FC4;
    case 730u: goto L_08886FCC;
    case 731u: goto L_08886FD4;
    case 732u: goto L_08886FDC;
    case 733u: goto L_08886FE8;
    case 734u: goto L_08886FF8;
    case 735u: goto L_08887000;
    case 736u: goto L_08887008;
    case 737u: goto L_08887010;
    case 738u: goto L_08887018;
    case 739u: goto L_08887020;
    case 740u: goto L_08887028;
    case 741u: goto L_08887034;
    case 742u: goto L_08887054;
    case 743u: goto L_08887060;
    case 744u: goto L_0888706C;
    case 745u: goto L_08887078;
    case 746u: goto L_088870D8;
    case 747u: goto L_088870E4;
    case 748u: goto L_088870F4;
    case 749u: goto L_08887100;
    case 750u: goto L_08887104;
    case 751u: goto L_0888710C;
    case 752u: goto L_08887114;
    case 753u: goto L_08887120;
    case 754u: goto L_08887130;
    case 755u: goto L_0888713C;
    case 756u: goto L_08887150;
    case 757u: goto L_08887154;
    case 758u: goto L_0888715C;
    case 759u: goto L_08887164;
    case 760u: goto L_08887174;
    case 761u: goto L_08887180;
    case 762u: goto L_08887184;
    case 763u: goto L_0888718C;
    case 764u: goto L_08887194;
    case 765u: goto L_088871A0;
    case 766u: goto L_088871B0;
    case 767u: goto L_088871B8;
    case 768u: goto L_088871CC;
    case 769u: goto L_088871D0;
    case 770u: goto L_088871D4;
    case 771u: goto L_088871D8;
    case 772u: goto L_088871E0;
    case 773u: goto L_088871E8;
    case 774u: goto L_088871F0;
    case 775u: goto L_088871F8;
    case 776u: goto L_08887258;
    case 777u: goto L_08887260;
    case 778u: goto L_08887268;
    case 779u: goto L_08887274;
    case 780u: goto L_0888727C;
    case 781u: goto L_08887288;
    case 782u: goto L_08887298;
    case 783u: goto L_088872A4;
    case 784u: goto L_088872AC;
    case 785u: goto L_088872B4;
    case 786u: goto L_088872BC;
    case 787u: goto L_088872C4;
    case 788u: goto L_088872D0;
    case 789u: goto L_088872DC;
    case 790u: goto L_088872E4;
    case 791u: goto L_088872EC;
    case 792u: goto L_088872F4;
    case 793u: goto L_088872FC;
    case 794u: goto L_08887308;
    case 795u: goto L_08887310;
    case 796u: goto L_08887320;
    case 797u: goto L_08887328;
    case 798u: goto L_08887330;
    case 799u: goto L_08887338;
    case 800u: goto L_08887340;
    case 801u: goto L_08887348;
    case 802u: goto L_08887354;
    case 803u: goto L_0888736C;
    case 804u: goto L_08887374;
    case 805u: goto L_0888737C;
    case 806u: goto L_08887384;
    case 807u: goto L_08887390;
    case 808u: goto L_088873A0;
    case 809u: goto L_088873A8;
    case 810u: goto L_088873B0;
    case 811u: goto L_088873B8;
    case 812u: goto L_088873C4;
    case 813u: goto L_088873DC;
    case 814u: goto L_08887444;
    case 815u: goto L_08887450;
    case 816u: goto L_088874B8;
    case 817u: goto L_088874C4;
    case 818u: goto L_088874DC;
    case 819u: goto L_088874E8;
    case 820u: goto L_088874F0;
    case 821u: goto L_088874F8;
    case 822u: goto L_088874FC;
    case 823u: goto L_08887504;
    case 824u: goto L_0888750C;
    case 825u: goto L_08887524;
    case 826u: goto L_0888752C;
    case 827u: goto L_08887534;
    case 828u: goto L_08887544;
    case 829u: goto L_0888754C;
    case 830u: goto L_08887554;
    case 831u: goto L_0888755C;
    case 832u: goto L_08887574;
    case 833u: goto L_08887580;
    case 834u: goto L_08887588;
    case 835u: goto L_08887594;
    case 836u: goto L_08887598;
    case 837u: goto L_0888759C;
    case 838u: goto L_088875A4;
    case 839u: goto L_088875AC;
    case 840u: goto L_088875C4;
    case 841u: goto L_088875CC;
    case 842u: goto L_088875D4;
    case 843u: goto L_088875E4;
    case 844u: goto L_088875EC;
    case 845u: goto L_088875F0;
    case 846u: goto L_088875F4;
    case 847u: goto L_088875FC;
    case 848u: goto L_08887604;
    case 849u: goto L_0888760C;
    case 850u: goto L_08887618;
    case 851u: goto L_08887620;
    case 852u: goto L_08887630;
    case 853u: goto L_08887638;
    case 854u: goto L_08887640;
    case 855u: goto L_0888764C;
    case 856u: goto L_08887668;
    case 857u: goto L_08887670;
    case 858u: goto L_08887678;
    case 859u: goto L_08887680;
    case 860u: goto L_0888768C;
    case 861u: goto L_0888769C;
    case 862u: goto L_088876A4;
    case 863u: goto L_088876AC;
    case 864u: goto L_088876B4;
    case 865u: goto L_088876C0;
    case 866u: goto L_088876D8;
    case 867u: goto L_08887740;
    case 868u: goto L_0888774C;
    case 869u: goto L_088877B4;
    case 870u: goto L_088877C0;
    case 871u: goto L_088877D8;
    case 872u: goto L_088877E4;
    case 873u: goto L_088877E8;
    case 874u: goto L_088877F0;
    case 875u: goto L_088877F8;
    case 876u: goto L_0888780C;
    case 877u: goto L_0888781C;
    case 878u: goto L_08887828;
    case 879u: goto L_0888783C;
    case 880u: goto L_08887840;
    case 881u: goto L_08887848;
    case 882u: goto L_08887850;
    case 883u: goto L_08887868;
    case 884u: goto L_08887874;
    case 885u: goto L_08887878;
    case 886u: goto L_08887880;
    case 887u: goto L_08887888;
    case 888u: goto L_0888789C;
    case 889u: goto L_088878AC;
    case 890u: goto L_088878B4;
    case 891u: goto L_088878C8;
    case 892u: goto L_088878CC;
    case 893u: goto L_088878D0;
    case 894u: goto L_088878D4;
    case 895u: goto L_088878DC;
    case 896u: goto L_088878E4;
    case 897u: goto L_088878EC;
    case 898u: goto L_088878F8;
    case 899u: goto L_08887900;
    case 900u: goto L_08887910;
    case 901u: goto L_08887918;
    case 902u: goto L_08887920;
    case 903u: goto L_0888792C;
    case 904u: goto L_08887948;
    case 905u: goto L_08887950;
    case 906u: goto L_08887958;
    case 907u: goto L_08887960;
    case 908u: goto L_0888796C;
    case 909u: goto L_0888797C;
    case 910u: goto L_08887984;
    case 911u: goto L_0888798C;
    case 912u: goto L_08887994;
    case 913u: goto L_088879A0;
    case 914u: goto L_088879B8;
    case 915u: goto L_08887A1C;
    case 916u: goto L_08887A28;
    case 917u: goto L_08887A90;
    case 918u: goto L_08887A9C;
    case 919u: goto L_08887AB4;
    case 920u: goto L_08887AC0;
    case 921u: goto L_08887AC8;
    case 922u: goto L_08887AD0;
    case 923u: goto L_08887AD4;
    case 924u: goto L_08887ADC;
    case 925u: goto L_08887AE4;
    case 926u: goto L_08887AFC;
    case 927u: goto L_08887B04;
    case 928u: goto L_08887B0C;
    case 929u: goto L_08887B1C;
    case 930u: goto L_08887B24;
    case 931u: goto L_08887B2C;
    case 932u: goto L_08887B34;
    case 933u: goto L_08887B4C;
    case 934u: goto L_08887B58;
    case 935u: goto L_08887B60;
    case 936u: goto L_08887B6C;
    case 937u: goto L_08887B70;
    case 938u: goto L_08887B74;
    case 939u: goto L_08887B7C;
    case 940u: goto L_08887B84;
    case 941u: goto L_08887B9C;
    case 942u: goto L_08887BA4;
    case 943u: goto L_08887BAC;
    case 944u: goto L_08887BBC;
    case 945u: goto L_08887BC4;
    case 946u: goto L_08887BC8;
    case 947u: goto L_08887BCC;
    case 948u: goto L_08887BD4;
    case 949u: goto L_08887BDC;
    case 950u: goto L_08887BE4;
    case 951u: goto L_08887BF0;
    case 952u: goto L_08887BF8;
    case 953u: goto L_08887C08;
    case 954u: goto L_08887C10;
    case 955u: goto L_08887C18;
    case 956u: goto L_08887C24;
    case 957u: goto L_08887C40;
    case 958u: goto L_08887C48;
    case 959u: goto L_08887C50;
    case 960u: goto L_08887C58;
    case 961u: goto L_08887C64;
    case 962u: goto L_08887C74;
    case 963u: goto L_08887C7C;
    case 964u: goto L_08887C84;
    case 965u: goto L_08887C8C;
    case 966u: goto L_08887C98;
    case 967u: goto L_08887CB0;
    case 968u: goto L_08887D18;
    case 969u: goto L_08887D24;
    case 970u: goto L_08887D88;
    case 971u: goto L_08887D94;
    case 972u: goto L_08887DAC;
    case 973u: goto L_08887DB8;
    case 974u: goto L_08887DBC;
    case 975u: goto L_08887DC4;
    case 976u: goto L_08887DCC;
    case 977u: goto L_08887DE0;
    case 978u: goto L_08887DF0;
    case 979u: goto L_08887DFC;
    case 980u: goto L_08887E10;
    case 981u: goto L_08887E14;
    case 982u: goto L_08887E1C;
    case 983u: goto L_08887E24;
    case 984u: goto L_08887E3C;
    case 985u: goto L_08887E48;
    case 986u: goto L_08887E4C;
    case 987u: goto L_08887E54;
    case 988u: goto L_08887E5C;
    case 989u: goto L_08887E70;
    case 990u: goto L_08887E80;
    case 991u: goto L_08887E88;
    case 992u: goto L_08887E9C;
    case 993u: goto L_08887EA0;
    case 994u: goto L_08887EA4;
    case 995u: goto L_08887EA8;
    case 996u: goto L_08887EB0;
    case 997u: goto L_08887EB8;
    case 998u: goto L_08887EC0;
    case 999u: goto L_08887ECC;
    case 1000u: goto L_08887ED4;
    case 1001u: goto L_08887EE4;
    case 1002u: goto L_08887EEC;
    case 1003u: goto L_08887EF4;
    case 1004u: goto L_08887F00;
    case 1005u: goto L_08887F3C;
    case 1006u: goto L_08887F40;
    case 1007u: goto L_08887F50;
    case 1008u: goto L_08887F54;
    case 1009u: goto L_08887F5C;
    case 1010u: goto L_08887F64;
    case 1011u: goto L_08887F6C;
    case 1012u: goto L_08887F74;
    case 1013u: goto L_08887F7C;
    case 1014u: goto L_08887F84;
    case 1015u: goto L_08887F8C;
    case 1016u: goto L_08887F94;
    case 1017u: goto L_08887FA0;
    case 1018u: goto L_08887FB0;
    case 1019u: goto L_08887FB8;
    case 1020u: goto L_08887FC0;
    case 1021u: goto L_08887FC8;
    case 1022u: goto L_08887FD0;
    case 1023u: goto L_08887FD8;
    case 1024u: goto L_08887FE0;
    case 1025u: goto L_08887FE8;
    case 1026u: goto L_08887FF4;
    case 1027u: goto L_08887FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08884004:
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16636));
    ctx.gpr[31] = (0x08884018u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16788));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08884018u) goto L_08884018;
    return;
L_08884018:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888402C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088840D8;
      }
      goto L_08884060;
    }
L_08884060:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08884284;
      }
      goto L_08884068;
    }
L_08884068:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08884078u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08884078u) goto L_08884078;
    return;
L_08884078:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11460)));
    ctx.gpr[31] = (0x08884088u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08884088u) goto L_08884088;
    return;
L_08884088:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0888409Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x0888409Cu) goto L_0888409C;
    return;
L_0888409C:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088840ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22976));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 577u, 0x08A9E0F4u>(ctx, &aot_mem) && ctx.pc == 0x088840ACu) goto L_088840AC;
    return;
L_088840AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 130u);
    ctx.gpr[31] = (0x088840C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x088840C4u) goto L_088840C4;
    return;
L_088840C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08884284;
      }
      goto L_088840D8;
    }
L_088840D8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_088840F8;
      }
      goto L_088840E4;
    }
L_088840E4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08884284;
    }
    goto L_088840F0;
L_088840F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884284;
      }
      goto L_088840F8;
    }
L_088840F8:
    ctx.gpr[31] = (0x08884100u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x08884100u) goto L_08884100;
    return;
L_08884100:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08884284;
      }
      goto L_0888410C;
    }
L_0888410C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0888411Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 522u, 0x0880A0E8u>(ctx, &aot_mem) && ctx.pc == 0x0888411Cu) goto L_0888411C;
    return;
L_0888411C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08884130u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08884130u) goto L_08884130;
    return;
L_08884130:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08884144u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08884144u) goto L_08884144;
    return;
L_08884144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[20] = (2221u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11056)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08884168u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22392));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08884168u) goto L_08884168;
    return;
L_08884168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0888417Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x0888417Cu) goto L_0888417C;
    return;
L_0888417C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08884194u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08884194u) goto L_08884194;
    return;
L_08884194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088841A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 881u, 0x0882F7DCu>(ctx, &aot_mem) && ctx.pc == 0x088841A4u) goto L_088841A4;
    return;
L_088841A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[31] = (0x088841B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0010_entry, 10u, 761u, 0x0882EFC4u>(ctx, &aot_mem) && ctx.pc == 0x088841B0u) goto L_088841B0;
    return;
L_088841B0:
    ctx.gpr[31] = (0x088841B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 259u, 0x0888143Cu>(ctx, &aot_mem) && ctx.pc == 0x088841B8u) goto L_088841B8;
    return;
L_088841B8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088841C8u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088841C8u) goto L_088841C8;
    return;
L_088841C8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088841D8u);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088841D8u) goto L_088841D8;
    return;
L_088841D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088841FC;
      }
      goto L_088841F0;
    }
L_088841F0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11056)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08884214;
      }
      goto L_088841FC;
    }
L_088841FC:
    ctx.gpr[31] = (0x08884204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 142u, 0x08934AA0u>(ctx, &aot_mem) && ctx.pc == 0x08884204u) goto L_08884204;
    return;
L_08884204:
    ctx.gpr[31] = (0x0888420Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 139u, 0x08934A3Cu>(ctx, &aot_mem) && ctx.pc == 0x0888420Cu) goto L_0888420C;
    return;
L_0888420C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(11056)));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08884214;
L_08884214:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0888422Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x0888422Cu) goto L_0888422C;
    return;
L_0888422C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08884240u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 533u, 0x0880A3F8u>(ctx, &aot_mem) && ctx.pc == 0x08884240u) goto L_08884240;
    return;
L_08884240:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08884258u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 521u, 0x0880A0B0u>(ctx, &aot_mem) && ctx.pc == 0x08884258u) goto L_08884258;
    return;
L_08884258:
    ctx.gpr[31] = (0x08884260u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 565u, 0x08883610u>(ctx, &aot_mem) && ctx.pc == 0x08884260u) goto L_08884260;
    return;
L_08884260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x0888427Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x0888427Cu) goto L_0888427C;
    return;
L_0888427C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884284;
      }
      goto L_08884284;
    }
L_08884284:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088842A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 208u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088842ECu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088842ECu) goto L_088842EC;
    return;
L_088842EC:
    ctx.gpr[18] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(11448)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08884308u);
    ctx.gpr[6] = (0u | 208u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08884308u) goto L_08884308;
    return;
L_08884308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[31] = (0x08884314u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 142u, 0x08934AA0u>(ctx, &aot_mem) && ctx.pc == 0x08884314u) goto L_08884314;
    return;
L_08884314:
    ctx.gpr[31] = (0x0888431Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 114u, 0x08934838u>(ctx, &aot_mem) && ctx.pc == 0x0888431Cu) goto L_0888431C;
    return;
L_0888431C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[30] = (static_cast<std::int32_t>(ctx.gpr[2]) < 31 ? 1u : 0u);
    ctx.gpr[23] = (static_cast<std::int32_t>(ctx.gpr[2]) < 51 ? 1u : 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (0u | 7u);
    ctx.gpr[21] = (0u | 6u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    goto L_0888433C;
L_0888433C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088844B4;
      }
      goto L_08884358;
    }
L_08884358:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088843D4;
      }
      goto L_08884394;
    }
L_08884394:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088843D4;
      }
      goto L_0888439C;
    }
L_0888439C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x088843C0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 747u, 0x08847CDCu>(ctx, &aot_mem) && ctx.pc == 0x088843C0u) goto L_088843C0;
    return;
L_088843C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08884464;
      }
      goto L_088843D4;
    }
L_088843D4:
    ctx.gpr[31] = (0x088843DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 142u, 0x08934AA0u>(ctx, &aot_mem) && ctx.pc == 0x088843DCu) goto L_088843DC;
    return;
L_088843DC:
    ctx.gpr[31] = (0x088843E4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 137u, 0x089349FCu>(ctx, &aot_mem) && ctx.pc == 0x088843E4u) goto L_088843E4;
    return;
L_088843E4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08884428;
      }
      goto L_088843EC;
    }
L_088843EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x08884414u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 747u, 0x08847CDCu>(ctx, &aot_mem) && ctx.pc == 0x08884414u) goto L_08884414;
    return;
L_08884414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08884464;
      }
      goto L_08884428;
    }
L_08884428:
    ctx.gpr[31] = (0x08884430u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 137u, 0x089349FCu>(ctx, &aot_mem) && ctx.pc == 0x08884430u) goto L_08884430;
    return;
L_08884430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08884464u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 749u, 0x08847D14u>(ctx, &aot_mem) && ctx.pc == 0x08884464u) goto L_08884464;
    return;
L_08884464:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08884474;
      }
      goto L_0888446C;
    }
L_0888446C:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_0888448C;
      }
      goto L_08884474;
    }
L_08884474:
    ctx.gpr[31] = (0x0888447Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 142u, 0x08934AA0u>(ctx, &aot_mem) && ctx.pc == 0x0888447Cu) goto L_0888447C;
    return;
L_0888447C:
    ctx.gpr[31] = (0x08884484u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 137u, 0x089349FCu>(ctx, &aot_mem) && ctx.pc == 0x08884484u) goto L_08884484;
    return;
L_08884484:
    if (ctx.gpr[2] != ctx.gpr[19]) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08884528;
    }
    goto L_0888448C;
L_0888448C:
    ctx.gpr[31] = (0x08884494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 290u, 0x08835684u>(ctx, &aot_mem) && ctx.pc == 0x08884494u) goto L_08884494;
    return;
L_08884494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08884524;
      }
      goto L_088844B4;
    }
L_088844B4:
    if (ctx.gpr[5] == ctx.gpr[19]) {
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08884528;
    }
    goto L_088844BC;
L_088844BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[6] >> 31u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08884524u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 749u, 0x08847D14u>(ctx, &aot_mem) && ctx.pc == 0x08884524u) goto L_08884524;
    return;
L_08884524:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08884528;
L_08884528:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0888433C;
      }
      goto L_08884538;
    }
L_08884538:
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
L_08884568:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11064)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(11068), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888469C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088846B4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 432u, 0x0884DB28u>(ctx, &aot_mem) && ctx.pc == 0x088846B4u) goto L_088846B4;
    return;
L_088846B4:
    ctx.gpr[31] = (0x088846BCu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 439u, 0x0884DB84u>(ctx, &aot_mem) && ctx.pc == 0x088846BCu) goto L_088846BC;
    return;
L_088846BC:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[16] = (2222u << 16u);
      if (branch_taken) {
          goto L_08884714;
      }
      goto L_088846D4;
    }
L_088846D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
        goto L_0888472C;
    }
    goto L_088846E4;
L_088846E4:
    ctx.gpr[31] = (0x088846ECu);
    // nop
    goto L_0888509C;
L_088846EC:
    ctx.gpr[31] = (0x088846F4u);
    // nop
    goto L_08885410;
L_088846F4:
    ctx.gpr[31] = (0x088846FCu);
    // nop
    goto L_088856A0;
L_088846FC:
    ctx.gpr[31] = (0x08884704u);
    // nop
    goto L_08885238;
L_08884704:
    ctx.gpr[31] = (0x0888470Cu);
    // nop
    goto L_08885A98;
L_0888470C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
      if (branch_taken) {
          goto L_08884728;
      }
      goto L_08884714;
    }
L_08884714:
    ctx.gpr[31] = (0x0888471Cu);
    // nop
    goto L_08885238;
L_0888471C:
    ctx.gpr[31] = (0x08884724u);
    // nop
    goto L_08885898;
L_08884724:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    goto L_08884728;
L_08884728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    goto L_0888472C;
L_0888472C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
      if (branch_taken) {
          goto L_08884754;
      }
      goto L_08884738;
    }
L_08884738:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08884744u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08884744u) goto L_08884744;
    return;
L_08884744:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    goto L_08884754;
L_08884754:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
        goto L_08884780;
    }
    goto L_08884760;
L_08884760:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888476Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888476Cu) goto L_0888476C;
    return;
L_0888476C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(268)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    goto L_08884780;
L_08884780:
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08884788u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08884788u) goto L_08884788;
    return;
L_08884788:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888479C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088847A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08884830;
      }
      goto L_088847C8;
    }
L_088847C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08884820;
      }
      goto L_088847D8;
    }
L_088847D8:
    ctx.gpr[31] = (0x088847E0u);
    // nop
    goto L_08885130;
L_088847E0:
    ctx.gpr[31] = (0x088847E8u);
    // nop
    goto L_0888545C;
L_088847E8:
    ctx.gpr[31] = (0x088847F0u);
    // nop
    goto L_08885734;
L_088847F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08884810;
      }
      goto L_08884800;
    }
L_08884800:
    ctx.gpr[31] = (0x08884808u);
    // nop
    goto L_08885BEC;
L_08884808:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884830;
      }
      goto L_08884810;
    }
L_08884810:
    ctx.gpr[31] = (0x08884818u);
    // nop
    goto L_088852A8;
L_08884818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884830;
      }
      goto L_08884820;
    }
L_08884820:
    ctx.gpr[31] = (0x08884828u);
    // nop
    goto L_088858E4;
L_08884828:
    ctx.gpr[31] = (0x08884830u);
    // nop
    goto L_088852A8;
L_08884830:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884840:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0888487C;
      }
      goto L_0888486C;
    }
L_0888486C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088849E8;
      }
      goto L_08884874;
    }
L_08884874:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0888489C;
      }
      goto L_0888487C;
    }
L_0888487C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08884954;
      }
      goto L_08884888;
    }
L_08884888:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (0u | 1u);
        goto L_088849E8;
    }
    goto L_08884890;
L_08884890:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088849E8;
      }
      goto L_08884898;
    }
L_08884898:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_0888489C;
L_0888489C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088848ACu);
    ctx.gpr[6] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088848ACu) goto L_088848AC;
    return;
L_088848AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_088848E0;
      }
      goto L_088848BC;
    }
L_088848BC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088848D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22308));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x088848D0u) goto L_088848D0;
    return;
L_088848D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08884934;
      }
      goto L_088848E0;
    }
L_088848E0:
    ctx.gpr[6] = (2224u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08884918;
      }
      goto L_088848F4;
    }
L_088848F4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08884908u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22308));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08884908u) goto L_08884908;
    return;
L_08884908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_08884934;
      }
      goto L_08884918;
    }
L_08884918:
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08884928u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22268));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 569u, 0x08A9B9ECu>(ctx, &aot_mem) && ctx.pc == 0x08884928u) goto L_08884928;
    return;
L_08884928:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(36));
    goto L_08884934;
L_08884934:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08884940u);
    ctx.gpr[6] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 465u, 0x08809CF0u>(ctx, &aot_mem) && ctx.pc == 0x08884940u) goto L_08884940;
    return;
L_08884940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088849E8;
      }
      goto L_08884954;
    }
L_08884954:
    ctx.gpr[31] = (0x0888495Cu);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 469u, 0x08809D90u>(ctx, &aot_mem) && ctx.pc == 0x0888495Cu) goto L_0888495C;
    return;
L_0888495C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (2222u << 16u);
      if (branch_taken) {
          goto L_088849E8;
      }
      goto L_08884968;
    }
L_08884968:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[4] = (0u | 388u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0888497Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888497Cu) goto L_0888497C;
    return;
L_0888497C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08884994u);
    ctx.gpr[6] = (0u | 388u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08884994u) goto L_08884994;
    return;
L_08884994:
    ctx.gpr[31] = (0x0888499Cu);
    // nop
    goto L_08884D00;
L_0888499C:
    ctx.gpr[31] = (0x088849A4u);
    // nop
    goto L_08885000;
L_088849A4:
    ctx.gpr[31] = (0x088849ACu);
    // nop
    goto L_088852CC;
L_088849AC:
    ctx.gpr[31] = (0x088849B4u);
    // nop
    goto L_08885480;
L_088849B4:
    ctx.gpr[31] = (0x088849BCu);
    // nop
    goto L_08885178;
L_088849BC:
    ctx.gpr[31] = (0x088849C4u);
    // nop
    goto L_08885908;
L_088849C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x088849D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 433u, 0x08809A50u>(ctx, &aot_mem) && ctx.pc == 0x088849D4u) goto L_088849D4;
    return;
L_088849D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088849E8;
      }
      goto L_088849E8;
    }
L_088849E8:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884A04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08884A14u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08884A14u) goto L_08884A14;
    return;
L_08884A14:
    ctx.gpr[4] = (2222u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22716)));
      if (branch_taken) {
          goto L_08884A34;
      }
      goto L_08884A20;
    }
L_08884A20:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884A34:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884A44:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1880));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (0u | 1u);
        goto L_08884A60;
    }
    goto L_08884A60;
L_08884A60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884A68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[31]);
    ctx.gpr[31] = (0x08884A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 194u, 0x08934E84u>(ctx, &aot_mem) && ctx.pc == 0x08884A88u) goto L_08884A88;
    return;
L_08884A88:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
      if (branch_taken) {
          goto L_08884AB0;
      }
      goto L_08884A9C;
    }
L_08884A9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08884AD0;
      }
      goto L_08884AA8;
    }
L_08884AA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884B08;
      }
      goto L_08884AB0;
    }
L_08884AB0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884AD0:
    ctx.gpr[31] = (0x08884AD8u);
    ctx.gpr[4] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08884AD8u) goto L_08884AD8;
    return;
L_08884AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08884AF4;
      }
      goto L_08884AE4;
    }
L_08884AE4:
    ctx.gpr[31] = (0x08884AECu);
    // nop
    goto L_088861AC;
L_08884AEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08884AF4;
L_08884AF4:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08884B00u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08884B00u) goto L_08884B00;
    return;
L_08884B00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884CE4;
      }
      goto L_08884B08;
    }
L_08884B08:
    ctx.gpr[31] = (0x08884B10u);
    ctx.gpr[4] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08884B10u) goto L_08884B10;
    return;
L_08884B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08884B38;
      }
      goto L_08884B1C;
    }
L_08884B1C:
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-13800)));
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08884B60;
      }
      goto L_08884B30;
    }
L_08884B30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884C28;
      }
      goto L_08884B38;
    }
L_08884B38:
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[31] = (0x08884B44u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08884B44u) goto L_08884B44;
    return;
L_08884B44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884B60:
    ctx.gpr[18] = (0u | 0u);
    goto L_08884B64;
L_08884B64:
    ctx.gpr[31] = (0x08884B6Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 340u, 0x088359E8u>(ctx, &aot_mem) && ctx.pc == 0x08884B6Cu) goto L_08884B6C;
    return;
L_08884B6C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08884B7C;
      }
      goto L_08884B74;
    }
L_08884B74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08884B88;
      }
      goto L_08884B7C;
    }
L_08884B7C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 25 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08884B64;
      }
      goto L_08884B88;
    }
L_08884B88:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08884BF4;
      }
      goto L_08884B90;
    }
L_08884B90:
    ctx.gpr[31] = (0x08884B98u);
    ctx.gpr[5] = (0u | 26u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 288u, 0x0884D2A0u>(ctx, &aot_mem) && ctx.pc == 0x08884B98u) goto L_08884B98;
    return;
L_08884B98:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08884BC0;
      }
      goto L_08884BA0;
    }
L_08884BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (0u | 110u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08884BB8u);
    ctx.gpr[5] = (0u | 26u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 450u, 0x0884DC3Cu>(ctx, &aot_mem) && ctx.pc == 0x08884BB8u) goto L_08884BB8;
    return;
L_08884BB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884CE4;
      }
      goto L_08884BC0;
    }
L_08884BC0:
    ctx.gpr[31] = (0x08884BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x08884BC8u) goto L_08884BC8;
    return;
L_08884BC8:
    ctx.gpr[4] = (0u | 104u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11624));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08884CE4;
      }
      goto L_08884BF4;
    }
L_08884BF4:
    ctx.gpr[31] = (0x08884BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x08884BFCu) goto L_08884BFC;
    return;
L_08884BFC:
    ctx.gpr[4] = (0u | 104u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11624));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08884CE4;
      }
      goto L_08884C28;
    }
L_08884C28:
    ctx.gpr[31] = (0x08884C30u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 115u, 0x08934858u>(ctx, &aot_mem) && ctx.pc == 0x08884C30u) goto L_08884C30;
    return;
L_08884C30:
    ctx.gpr[31] = (0x08884C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 142u, 0x08934AA0u>(ctx, &aot_mem) && ctx.pc == 0x08884C38u) goto L_08884C38;
    return;
L_08884C38:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08884C74;
      }
      goto L_08884C4C;
    }
L_08884C4C:
    ctx.gpr[31] = (0x08884C54u);
    // nop
    goto L_08884A44;
L_08884C54:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
      if (branch_taken) {
          goto L_08884C68;
      }
      goto L_08884C5C;
    }
L_08884C5C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(240))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08884CE4;
      }
      goto L_08884C68;
    }
L_08884C68:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(242))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08884CE4;
      }
      goto L_08884C74;
    }
L_08884C74:
    ctx.gpr[31] = (0x08884C7Cu);
    // nop
    goto L_08884A44;
L_08884C7C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08884CB0;
      }
      goto L_08884C84;
    }
L_08884C84:
    ctx.gpr[31] = (0x08884C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 142u, 0x08934AA0u>(ctx, &aot_mem) && ctx.pc == 0x08884C8Cu) goto L_08884C8C;
    return;
L_08884C8C:
    ctx.gpr[31] = (0x08884C94u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 144u, 0x08934AD8u>(ctx, &aot_mem) && ctx.pc == 0x08884C94u) goto L_08884C94;
    return;
L_08884C94:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
      if (branch_taken) {
          goto L_08884CA8;
      }
      goto L_08884C9C;
    }
L_08884C9C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(240))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08884CE4;
      }
      goto L_08884CA8;
    }
L_08884CA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08884CE4;
      }
      goto L_08884CB0;
    }
L_08884CB0:
    ctx.gpr[31] = (0x08884CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 142u, 0x08934AA0u>(ctx, &aot_mem) && ctx.pc == 0x08884CB8u) goto L_08884CB8;
    return;
L_08884CB8:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[2] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
      if (branch_taken) {
          goto L_08884CE0;
      }
      goto L_08884CD4;
    }
L_08884CD4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(242))))));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08884CE4;
      }
      goto L_08884CE0;
    }
L_08884CE0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    goto L_08884CE4;
L_08884CE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884D00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08884D24u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 548u, 0x08A9DF34u>(ctx, &aot_mem) && ctx.pc == 0x08884D24u) goto L_08884D24;
    return;
L_08884D24:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884D30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08884D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 194u, 0x08934E84u>(ctx, &aot_mem) && ctx.pc == 0x08884D48u) goto L_08884D48;
    return;
L_08884D48:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    ctx.gpr[4] = (2195u << 16u);
      if (branch_taken) {
          goto L_08884D74;
      }
      goto L_08884D54;
    }
L_08884D54:
    ctx.gpr[31] = (0x08884D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 142u, 0x08934AA0u>(ctx, &aot_mem) && ctx.pc == 0x08884D5Cu) goto L_08884D5C;
    return;
L_08884D5C:
    ctx.gpr[31] = (0x08884D64u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 140u, 0x08934A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08884D64u) goto L_08884D64;
    return;
L_08884D64:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08884DA4;
      }
      goto L_08884D6C;
    }
L_08884D6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884DAC;
      }
      goto L_08884D74;
    }
L_08884D74:
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14636));
    ctx.gpr[31] = (0x08884D88u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(14904));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08884D88u) goto L_08884D88;
    return;
L_08884D88:
    ctx.gpr[31] = (0x08884D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 196u, 0x08934EA8u>(ctx, &aot_mem) && ctx.pc == 0x08884D90u) goto L_08884D90;
    return;
L_08884D90:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884DA4:
    ctx.gpr[31] = (0x08884DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 601u, 0x0895ED68u>(ctx, &aot_mem) && ctx.pc == 0x08884DACu) goto L_08884DAC;
    return;
L_08884DAC:
    ctx.gpr[31] = (0x08884DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 90u, 0x08934634u>(ctx, &aot_mem) && ctx.pc == 0x08884DB4u) goto L_08884DB4;
    return;
L_08884DB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08884DF4;
      }
      goto L_08884DC4;
    }
L_08884DC4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08884FEC;
      }
      goto L_08884DCC;
    }
L_08884DCC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[4] = (2195u << 16u);
      if (branch_taken) {
          goto L_08884FD8;
      }
      goto L_08884DD4;
    }
L_08884DD4:
    ctx.gpr[4] = (2184u << 16u);
    ctx.gpr[5] = (2184u << 16u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2716));
    ctx.gpr[31] = (0x08884DECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3188));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08884DECu) goto L_08884DEC;
    return;
L_08884DEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884FEC;
      }
      goto L_08884DF4;
    }
L_08884DF4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08884FB0;
      }
      goto L_08884DFC;
    }
L_08884DFC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08884FEC;
      }
      goto L_08884E04;
    }
L_08884E04:
    ctx.gpr[31] = (0x08884E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 541u, 0x088328C8u>(ctx, &aot_mem) && ctx.pc == 0x08884E0Cu) goto L_08884E0C;
    return;
L_08884E0C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08884EF0;
      }
      goto L_08884E14;
    }
L_08884E14:
    ctx.gpr[31] = (0x08884E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 239u, 0x08938AD4u>(ctx, &aot_mem) && ctx.pc == 0x08884E1Cu) goto L_08884E1C;
    return;
L_08884E1C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08884EAC;
      }
      goto L_08884E2C;
    }
L_08884E2C:
    ctx.gpr[31] = (0x08884E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 145u, 0x08934AFCu>(ctx, &aot_mem) && ctx.pc == 0x08884E34u) goto L_08884E34;
    return;
L_08884E34:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    ctx.gpr[4] = (2188u << 16u);
      if (branch_taken) {
          goto L_08884E58;
      }
      goto L_08884E3C;
    }
L_08884E3C:
    ctx.gpr[5] = (2188u << 16u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18596));
    ctx.gpr[31] = (0x08884E50u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18396));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08884E50u) goto L_08884E50;
    return;
L_08884E50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884FEC;
      }
      goto L_08884E58;
    }
L_08884E58:
    ctx.gpr[31] = (0x08884E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 197u, 0x08934EB8u>(ctx, &aot_mem) && ctx.pc == 0x08884E60u) goto L_08884E60;
    return;
L_08884E60:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    ctx.gpr[4] = (2188u << 16u);
      if (branch_taken) {
          goto L_08884E84;
      }
      goto L_08884E68;
    }
L_08884E68:
    ctx.gpr[5] = (2188u << 16u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18596));
    ctx.gpr[31] = (0x08884E7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18396));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08884E7Cu) goto L_08884E7C;
    return;
L_08884E7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884FEC;
      }
      goto L_08884E84;
    }
L_08884E84:
    ctx.gpr[31] = (0x08884E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 1009u, 0x08937FF4u>(ctx, &aot_mem) && ctx.pc == 0x08884E8Cu) goto L_08884E8C;
    return;
L_08884E8C:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26012));
    ctx.gpr[31] = (0x08884EA4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25780));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08884EA4u) goto L_08884EA4;
    return;
L_08884EA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884FEC;
      }
      goto L_08884EAC;
    }
L_08884EAC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2186u << 16u);
      if (branch_taken) {
          goto L_08884ED4;
      }
      goto L_08884EB4;
    }
L_08884EB4:
    ctx.gpr[4] = (2188u << 16u);
    ctx.gpr[5] = (2188u << 16u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18596));
    ctx.gpr[31] = (0x08884ECCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18396));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08884ECCu) goto L_08884ECC;
    return;
L_08884ECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884FEC;
      }
      goto L_08884ED4;
    }
L_08884ED4:
    ctx.gpr[5] = (2186u << 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10988));
    ctx.gpr[31] = (0x08884EE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-10768));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08884EE8u) goto L_08884EE8;
    return;
L_08884EE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884FEC;
      }
      goto L_08884EF0;
    }
L_08884EF0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1880));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08884F88;
      }
      goto L_08884F04;
    }
L_08884F04:
    ctx.gpr[31] = (0x08884F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 145u, 0x08934AFCu>(ctx, &aot_mem) && ctx.pc == 0x08884F0Cu) goto L_08884F0C;
    return;
L_08884F0C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (2188u << 16u);
      if (branch_taken) {
          goto L_08884F34;
      }
      goto L_08884F18;
    }
L_08884F18:
    ctx.gpr[5] = (2188u << 16u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18596));
    ctx.gpr[31] = (0x08884F2Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18396));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08884F2Cu) goto L_08884F2C;
    return;
L_08884F2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884FEC;
      }
      goto L_08884F34;
    }
L_08884F34:
    ctx.gpr[31] = (0x08884F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 146u, 0x08934B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08884F3Cu) goto L_08884F3C;
    return;
L_08884F3C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    ctx.gpr[4] = (2187u << 16u);
      if (branch_taken) {
          goto L_08884F60;
      }
      goto L_08884F44;
    }
L_08884F44:
    ctx.gpr[5] = (2187u << 16u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23488));
    ctx.gpr[31] = (0x08884F58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23716));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08884F58u) goto L_08884F58;
    return;
L_08884F58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884FEC;
      }
      goto L_08884F60;
    }
L_08884F60:
    ctx.gpr[31] = (0x08884F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 1009u, 0x08937FF4u>(ctx, &aot_mem) && ctx.pc == 0x08884F68u) goto L_08884F68;
    return;
L_08884F68:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26012));
    ctx.gpr[31] = (0x08884F80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25780));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08884F80u) goto L_08884F80;
    return;
L_08884F80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884FEC;
      }
      goto L_08884F88;
    }
L_08884F88:
    ctx.gpr[31] = (0x08884F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 1009u, 0x08937FF4u>(ctx, &aot_mem) && ctx.pc == 0x08884F90u) goto L_08884F90;
    return;
L_08884F90:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26012));
    ctx.gpr[31] = (0x08884FA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25780));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08884FA8u) goto L_08884FA8;
    return;
L_08884FA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884FEC;
      }
      goto L_08884FB0;
    }
L_08884FB0:
    ctx.gpr[31] = (0x08884FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 1009u, 0x08937FF4u>(ctx, &aot_mem) && ctx.pc == 0x08884FB8u) goto L_08884FB8;
    return;
L_08884FB8:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26012));
    ctx.gpr[31] = (0x08884FD0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25780));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08884FD0u) goto L_08884FD0;
    return;
L_08884FD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08884FEC;
      }
      goto L_08884FD8;
    }
L_08884FD8:
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16636));
    ctx.gpr[31] = (0x08884FECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16788));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08884FECu) goto L_08884FEC;
    return;
L_08884FEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885000:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 184u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08885028u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08885028u) goto L_08885028;
    return;
L_08885028:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08885044u);
    ctx.gpr[6] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08885044u) goto L_08885044;
    return;
L_08885044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08885054u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 866u, 0x08837A88u>(ctx, &aot_mem) && ctx.pc == 0x08885054u) goto L_08885054;
    return;
L_08885054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08885064u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 877u, 0x08837B90u>(ctx, &aot_mem) && ctx.pc == 0x08885064u) goto L_08885064;
    return;
L_08885064:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08885078u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08885078u) goto L_08885078;
    return;
L_08885078:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08885088u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 76u, 0x0883CA44u>(ctx, &aot_mem) && ctx.pc == 0x08885088u) goto L_08885088;
    return;
L_08885088:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888509C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088850BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 873u, 0x08837B58u>(ctx, &aot_mem) && ctx.pc == 0x088850BCu) goto L_088850BC;
    return;
L_088850BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x088850CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 881u, 0x08837C40u>(ctx, &aot_mem) && ctx.pc == 0x088850CCu) goto L_088850CC;
    return;
L_088850CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088850E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088850E4u) goto L_088850E4;
    return;
L_088850E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[31] = (0x088850F8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 79u, 0x0883CB08u>(ctx, &aot_mem) && ctx.pc == 0x088850F8u) goto L_088850F8;
    return;
L_088850F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888510Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888510Cu) goto L_0888510C;
    return;
L_0888510C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885128:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885130:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888514Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 875u, 0x08837B74u>(ctx, &aot_mem) && ctx.pc == 0x0888514Cu) goto L_0888514C;
    return;
L_0888514C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x0888515Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 883u, 0x08837C5Cu>(ctx, &aot_mem) && ctx.pc == 0x0888515Cu) goto L_0888515C;
    return;
L_0888515C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[31] = (0x08885168u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 81u, 0x0883CB24u>(ctx, &aot_mem) && ctx.pc == 0x08885168u) goto L_08885168;
    return;
L_08885168:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885178:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 184u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0888519Cu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888519Cu) goto L_0888519C;
    return;
L_0888519C:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088851B8u);
    ctx.gpr[6] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088851B8u) goto L_088851B8;
    return;
L_088851B8:
    ctx.gpr[8] = (17360u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (17232u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (17024u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    goto L_088851E0;
L_088851E0:
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088851E0;
      }
      goto L_08885220;
    }
L_08885220:
    ctx.gpr[31] = (0x08885228u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 55u, 0x0883C734u>(ctx, &aot_mem) && ctx.pc == 0x08885228u) goto L_08885228;
    return;
L_08885228:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885238:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08885254u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 61u, 0x0883C8A8u>(ctx, &aot_mem) && ctx.pc == 0x08885254u) goto L_08885254;
    return;
L_08885254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888526Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888526Cu) goto L_0888526C;
    return;
L_0888526C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885284:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888529Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 65u, 0x0883C8F0u>(ctx, &aot_mem) && ctx.pc == 0x0888529Cu) goto L_0888529C;
    return;
L_0888529C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088852A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088852C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 72u, 0x0883C9FCu>(ctx, &aot_mem) && ctx.pc == 0x088852C0u) goto L_088852C0;
    return;
L_088852C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088852CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 180u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088852F0u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088852F0u) goto L_088852F0;
    return;
L_088852F0:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[6] = (0u | 180u);
    ctx.gpr[31] = (0x08885310u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08885310u) goto L_08885310;
    return;
L_08885310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (17260u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (16928u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (16816u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08885368u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22228));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x08885368u) goto L_08885368;
    return;
L_08885368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22212));
    ctx.gpr[31] = (0x08885380u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08885380u) goto L_08885380;
    return;
L_08885380:
    ctx.gpr[4] = (0u | 233u);
    ctx.gpr[5] = (0u | 217u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 185u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(168));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11616));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x088853F4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088853F4u) goto L_088853F4;
    return;
L_088853F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[31] = (0x08885400u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x08885400u) goto L_08885400;
    return;
L_08885400:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885410:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888542Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0888542Cu) goto L_0888542C;
    return;
L_0888542C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08885444u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08885444u) goto L_08885444;
    return;
L_08885444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888545C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08885474u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x08885474u) goto L_08885474;
    return;
L_08885474:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885480:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.gpr[18] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088854FCu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088854FCu) goto L_088854FC;
    return;
L_088854FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08885514u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08885514u) goto L_08885514;
    return;
L_08885514:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08885660;
      }
      goto L_08885524;
    }
L_08885524:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22228));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[23] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[4] = (17108u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[5] << 24u);
    ctx.gpr[21] = (ctx.gpr[6] << 24u);
    ctx.gpr[20] = (ctx.gpr[7] << 24u);
    ctx.gpr[4] = (16752u << 16u);
    ctx.gpr[30] = (2220u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 24u));
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 24u));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 24u));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 24u));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-22212));
    goto L_088855A4;
L_088855A4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22716)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088855E4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 306u, 0x088456A0u>(ctx, &aot_mem) && ctx.pc == 0x088855E4u) goto L_088855E4;
    return;
L_088855E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[31] = (0x088855FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x088855FCu) goto L_088855FC;
    return;
L_088855FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(168));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08885638u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 593u, 0x08A9E1BCu>(ctx, &aot_mem) && ctx.pc == 0x08885638u) goto L_08885638;
    return;
L_08885638:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08885648u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 209u, 0x08844FFCu>(ctx, &aot_mem) && ctx.pc == 0x08885648u) goto L_08885648;
    return;
L_08885648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_088855A4;
      }
      goto L_08885660;
    }
L_08885660:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
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
L_088856A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_088856FC;
      }
      goto L_088856D8;
    }
L_088856D8:
    ctx.gpr[16] = (0u | 0u);
    goto L_088856DC;
L_088856DC:
    ctx.gpr[31] = (0x088856E4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 139u, 0x08844B3Cu>(ctx, &aot_mem) && ctx.pc == 0x088856E4u) goto L_088856E4;
    return;
L_088856E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_088856DC;
      }
      goto L_088856FC;
    }
L_088856FC:
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08885710u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08885710u) goto L_08885710;
    return;
L_08885710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
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
L_08885734:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_0888578C;
      }
      goto L_0888576C;
    }
L_0888576C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x0888577Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 168u, 0x08844DE0u>(ctx, &aot_mem) && ctx.pc == 0x0888577Cu) goto L_0888577C;
    return;
L_0888577C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          goto L_0888576C;
      }
      goto L_0888578C;
    }
L_0888578C:
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
L_088857A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 92u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088857CCu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088857CCu) goto L_088857CC;
    return;
L_088857CC:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[6] = (0u | 92u);
    ctx.gpr[31] = (0x088857ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088857ECu) goto L_088857EC;
    return;
L_088857EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (17392u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[31] = (0x08885888u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08885888u) goto L_08885888;
    return;
L_08885888:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885898:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088858B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x088858B4u) goto L_088858B4;
    return;
L_088858B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x088858CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088858CCu) goto L_088858CC;
    return;
L_088858CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088858E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x088858FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x088858FCu) goto L_088858FC;
    return;
L_088858FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885908:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 184u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08885930u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08885930u) goto L_08885930;
    return;
L_08885930:
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[6] = (0u | 184u);
    ctx.gpr[31] = (0x08885950u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08885950u) goto L_08885950;
    return;
L_08885950:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08885964u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08885964u) goto L_08885964;
    return;
L_08885964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[31] = (0x08885980u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x08885980u) goto L_08885980;
    return;
L_08885980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (17357u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (17274u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[31] = (0x088859B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 129u, 0x0883D148u>(ctx, &aot_mem) && ctx.pc == 0x088859B8u) goto L_088859B8;
    return;
L_088859B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (17353u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (17272u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (17044u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (16800u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08885A5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 108u, 0x088447A4u>(ctx, &aot_mem) && ctx.pc == 0x08885A5Cu) goto L_08885A5C;
    return;
L_08885A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[31] = (0x08885A84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 274u, 0x0883F120u>(ctx, &aot_mem) && ctx.pc == 0x08885A84u) goto L_08885A84;
    return;
L_08885A84:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885A98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08885AB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 474u, 0x0883B820u>(ctx, &aot_mem) && ctx.pc == 0x08885AB8u) goto L_08885AB8;
    return;
L_08885AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08885AC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 135u, 0x08844B08u>(ctx, &aot_mem) && ctx.pc == 0x08885AC8u) goto L_08885AC8;
    return;
L_08885AC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08885AE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08885AE0u) goto L_08885AE0;
    return;
L_08885AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08885AF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08885AF8u) goto L_08885AF8;
    return;
L_08885AF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885B14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08885B30u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 275u, 0x0883F12Cu>(ctx, &aot_mem) && ctx.pc == 0x08885B30u) goto L_08885B30;
    return;
L_08885B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17357u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (17274u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (17356u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (17272u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08885BCCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 476u, 0x0883B83Cu>(ctx, &aot_mem) && ctx.pc == 0x08885BCCu) goto L_08885BCC;
    return;
L_08885BCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08885BDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 142u, 0x08844B84u>(ctx, &aot_mem) && ctx.pc == 0x08885BDCu) goto L_08885BDC;
    return;
L_08885BDC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885BEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08885C0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 165u, 0x08844DBCu>(ctx, &aot_mem) && ctx.pc == 0x08885C0Cu) goto L_08885C0C;
    return;
L_08885C0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[31] = (0x08885C18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 478u, 0x0883B858u>(ctx, &aot_mem) && ctx.pc == 0x08885C18u) goto L_08885C18;
    return;
L_08885C18:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885C28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08885C44u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08885C44u) goto L_08885C44;
    return;
L_08885C44:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08885E64;
      }
      goto L_08885C50;
    }
L_08885C50:
    ctx.gpr[31] = (0x08885C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 194u, 0x08934E84u>(ctx, &aot_mem) && ctx.pc == 0x08885C58u) goto L_08885C58;
    return;
L_08885C58:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08885E64;
      }
      goto L_08885C64;
    }
L_08885C64:
    ctx.gpr[31] = (0x08885C6Cu);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08885C6Cu) goto L_08885C6C;
    return;
L_08885C6C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08885CC0;
      }
      goto L_08885C78;
    }
L_08885C78:
    ctx.gpr[31] = (0x08885C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 142u, 0x08934AA0u>(ctx, &aot_mem) && ctx.pc == 0x08885C80u) goto L_08885C80;
    return;
L_08885C80:
    ctx.gpr[31] = (0x08885C88u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0076_entry, 76u, 137u, 0x089349FCu>(ctx, &aot_mem) && ctx.pc == 0x08885C88u) goto L_08885C88;
    return;
L_08885C88:
    ctx.gpr[31] = (0x08885C90u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 188u, 0x08834D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08885C90u) goto L_08885C90;
    return;
L_08885C90:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08885E64;
      }
      goto L_08885CA0;
    }
L_08885CA0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08885CACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 632u, 0x08833150u>(ctx, &aot_mem) && ctx.pc == 0x08885CACu) goto L_08885CAC;
    return;
L_08885CAC:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1880));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
      if (branch_taken) {
          goto L_08885CE0;
      }
      goto L_08885CC0;
    }
L_08885CC0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08885CD0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 632u, 0x08833150u>(ctx, &aot_mem) && ctx.pc == 0x08885CD0u) goto L_08885CD0;
    return;
L_08885CD0:
    ctx.gpr[4] = (2224u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1880));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    goto L_08885CE0;
L_08885CE0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2224u << 16u);
      if (branch_taken) {
          goto L_08885D20;
      }
      goto L_08885CE8;
    }
L_08885CE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2088)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2088));
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_08885CFC;
L_08885CFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08885CFC;
      }
      goto L_08885D18;
    }
L_08885D18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08885E5C;
      }
      goto L_08885D20;
    }
L_08885D20:
    ctx.gpr[31] = (0x08885D28u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 509u, 0x088427C0u>(ctx, &aot_mem) && ctx.pc == 0x08885D28u) goto L_08885D28;
    return;
L_08885D28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08885D64;
      }
      goto L_08885D34;
    }
L_08885D34:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (16968u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_08885D48;
L_08885D48:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08885D48;
      }
      goto L_08885D5C;
    }
L_08885D5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08885E5C;
      }
      goto L_08885D64;
    }
L_08885D64:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2088)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2088));
      if (branch_taken) {
          goto L_08885DE8;
      }
      goto L_08885D78;
    }
L_08885D78:
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08885D9C;
    }
    goto L_08885D94;
L_08885D94:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08885D9C;
      }
      goto L_08885D9C;
    }
L_08885D9C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (16840u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_08885DB0;
L_08885DB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08885DCC;
    }
    goto L_08885DC4;
L_08885DC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08885DCC;
      }
      goto L_08885DCC;
    }
L_08885DCC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08885DB0;
      }
      goto L_08885DE0;
    }
L_08885DE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08885E5C;
      }
      goto L_08885DE8;
    }
L_08885DE8:
    ctx.gpr[5] = (16025u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08885E10;
    }
    goto L_08885E08;
L_08885E08:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08885E10;
      }
      goto L_08885E10;
    }
L_08885E10:
    ctx.gpr[7] = (16752u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] | 1u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    goto L_08885E28;
L_08885E28:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08885E44;
    }
    goto L_08885E3C;
L_08885E3C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08885E44;
      }
      goto L_08885E44;
    }
L_08885E44:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08885E28;
      }
      goto L_08885E58;
    }
L_08885E58:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08885E5C;
L_08885E5C:
    ctx.gpr[31] = (0x08885E64u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 634u, 0x08833188u>(ctx, &aot_mem) && ctx.pc == 0x08885E64u) goto L_08885E64;
    return;
L_08885E64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885E7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08885ECC;
      }
      goto L_08885EAC;
    }
L_08885EAC:
    ctx.gpr[31] = (0x08885EB4u);
    // nop
    goto L_08884840;
L_08885EB4:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08886190;
      }
      goto L_08885EBC;
    }
L_08885EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08886190;
      }
      goto L_08885ECC;
    }
L_08885ECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08885F00;
      }
      goto L_08885EDC;
    }
L_08885EDC:
    ctx.gpr[31] = (0x08885EE4u);
    // nop
    goto L_08885128;
L_08885EE4:
    ctx.gpr[31] = (0x08885EECu);
    // nop
    goto L_08885B14;
L_08885EEC:
    ctx.gpr[31] = (0x08885EF4u);
    // nop
    goto L_08885284;
L_08885EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08885F10;
      }
      goto L_08885F00;
    }
L_08885F00:
    ctx.gpr[31] = (0x08885F08u);
    // nop
    goto L_08885284;
L_08885F08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    goto L_08885F10;
L_08885F10:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_088860A8;
    }
    goto L_08885F18;
L_08885F18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08886060;
      }
      goto L_08885F24;
    }
L_08885F24:
    ctx.gpr[31] = (0x08885F2Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08885F2Cu) goto L_08885F2C;
    return;
L_08885F2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08885F48;
      }
      goto L_08885F34;
    }
L_08885F34:
    ctx.gpr[31] = (0x08885F3Cu);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08885F3Cu) goto L_08885F3C;
    return;
L_08885F3C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 68 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
        goto L_08886058;
    }
    goto L_08885F48;
L_08885F48:
    ctx.gpr[31] = (0x08885F50u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08885F50u) goto L_08885F50;
    return;
L_08885F50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08885FF4;
      }
      goto L_08885F58;
    }
L_08885F58:
    ctx.gpr[31] = (0x08885F60u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 119u, 0x0884C7BCu>(ctx, &aot_mem) && ctx.pc == 0x08885F60u) goto L_08885F60;
    return;
L_08885F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08885F74u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08885F74u) goto L_08885F74;
    return;
L_08885F74:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08885FE4;
      }
      goto L_08885F80;
    }
L_08885F80:
    ctx.gpr[31] = (0x08885F88u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 946u, 0x0881FAFCu>(ctx, &aot_mem) && ctx.pc == 0x08885F88u) goto L_08885F88;
    return;
L_08885F88:
    ctx.gpr[31] = (0x08885F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 858u, 0x0881F478u>(ctx, &aot_mem) && ctx.pc == 0x08885F90u) goto L_08885F90;
    return;
L_08885F90:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11608)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11612)));
    ctx.gpr[31] = (0x08885FB0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 527u, 0x088327C8u>(ctx, &aot_mem) && ctx.pc == 0x08885FB0u) goto L_08885FB0;
    return;
L_08885FB0:
    ctx.gpr[31] = (0x08885FB8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 660u, 0x088332D0u>(ctx, &aot_mem) && ctx.pc == 0x08885FB8u) goto L_08885FB8;
    return;
L_08885FB8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(160), 0u);
    ctx.gpr[31] = (0x08885FD4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 710u, 0x088335D4u>(ctx, &aot_mem) && ctx.pc == 0x08885FD4u) goto L_08885FD4;
    return;
L_08885FD4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08885FE4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 930u, 0x0881F9B4u>(ctx, &aot_mem) && ctx.pc == 0x08885FE4u) goto L_08885FE4;
    return;
L_08885FE4:
    ctx.gpr[31] = (0x08885FECu);
    // nop
    goto L_08885C28;
L_08885FEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08886190;
      }
      goto L_08885FF4;
    }
L_08885FF4:
    ctx.gpr[31] = (0x08885FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 606u, 0x08832F60u>(ctx, &aot_mem) && ctx.pc == 0x08885FFCu) goto L_08885FFC;
    return;
L_08885FFC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08886004;
L_08886004:
    ctx.gpr[31] = (0x0888600Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 530u, 0x08842960u>(ctx, &aot_mem) && ctx.pc == 0x0888600Cu) goto L_0888600C;
    return;
L_0888600C:
    ctx.gpr[31] = (0x08886014u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0011_entry, 11u, 527u, 0x088327C8u>(ctx, &aot_mem) && ctx.pc == 0x08886014u) goto L_08886014;
    return;
L_08886014:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08886020u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 588u, 0x08A9E188u>(ctx, &aot_mem) && ctx.pc == 0x08886020u) goto L_08886020;
    return;
L_08886020:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_08886030;
    }
    goto L_08886028;
L_08886028:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0888603C;
      }
      goto L_08886030;
    }
L_08886030:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08886004;
      }
      goto L_0888603C;
    }
L_0888603C:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08886048u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 723u, 0x088435D8u>(ctx, &aot_mem) && ctx.pc == 0x08886048u) goto L_08886048;
    return;
L_08886048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08886190;
      }
      goto L_08886058;
    }
L_08886058:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08886190;
      }
      goto L_08886060;
    }
L_08886060:
    ctx.gpr[31] = (0x08886068u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08886068u) goto L_08886068;
    return;
L_08886068:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08886080;
      }
      goto L_08886074;
    }
L_08886074:
    ctx.gpr[31] = (0x0888607Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FABCu>(ctx, &aot_mem) && ctx.pc == 0x0888607Cu) goto L_0888607C;
    return;
L_0888607C:
    ctx.gpr[16] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_08886080;
L_08886080:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08886190;
      }
      goto L_08886088;
    }
L_08886088:
    ctx.gpr[31] = (0x08886090u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 141u, 0x0884C934u>(ctx, &aot_mem) && ctx.pc == 0x08886090u) goto L_08886090;
    return;
L_08886090:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08886190;
      }
      goto L_08886098;
    }
L_08886098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08886190;
      }
      goto L_088860A8;
    }
L_088860A8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088860B8;
      }
      goto L_088860B0;
    }
L_088860B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088860D4;
      }
      goto L_088860B8;
    }
L_088860B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 128u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088860D4;
      }
      goto L_088860C8;
    }
L_088860C8:
    ctx.gpr[31] = (0x088860D0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088860D0u) goto L_088860D0;
    return;
L_088860D0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_088860D4;
L_088860D4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08886190;
      }
      goto L_088860DC;
    }
L_088860DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(22716)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (0u | 9u);
      if (branch_taken) {
          goto L_08886110;
      }
      goto L_088860F0;
    }
L_088860F0:
    ctx.gpr[4] = (2195u << 16u);
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26012));
    ctx.gpr[31] = (0x08886108u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25780));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08886108u) goto L_08886108;
    return;
L_08886108:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2184u << 16u);
      if (branch_taken) {
          goto L_0888616C;
      }
      goto L_08886110;
    }
L_08886110:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.gpr[4] = (2195u << 16u);
      if (branch_taken) {
          goto L_08886134;
      }
      goto L_08886118;
    }
L_08886118:
    ctx.gpr[5] = (2195u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27724));
    ctx.gpr[31] = (0x0888612Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27488));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x0888612Cu) goto L_0888612C;
    return;
L_0888612C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2184u << 16u);
      if (branch_taken) {
          goto L_0888616C;
      }
      goto L_08886134;
    }
L_08886134:
    ctx.gpr[31] = (0x0888613Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x0888613Cu) goto L_0888613C;
    return;
L_0888613C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.gpr[4] = (2192u << 16u);
      if (branch_taken) {
          goto L_08886160;
      }
      goto L_08886144;
    }
L_08886144:
    ctx.gpr[5] = (2192u << 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2920));
    ctx.gpr[31] = (0x08886158u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15492));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 695u, 0x0884BC14u>(ctx, &aot_mem) && ctx.pc == 0x08886158u) goto L_08886158;
    return;
L_08886158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2184u << 16u);
      if (branch_taken) {
          goto L_0888616C;
      }
      goto L_08886160;
    }
L_08886160:
    ctx.gpr[31] = (0x08886168u);
    // nop
    goto L_08884D30;
L_08886168:
    ctx.gpr[4] = (2184u << 16u);
    goto L_0888616C;
L_0888616C:
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x08886178u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(18076));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 698u, 0x0884BC60u>(ctx, &aot_mem) && ctx.pc == 0x08886178u) goto L_08886178;
    return;
L_08886178:
    ctx.gpr[31] = (0x08886180u);
    ctx.gpr[4] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 705u, 0x0884BCE4u>(ctx, &aot_mem) && ctx.pc == 0x08886180u) goto L_08886180;
    return;
L_08886180:
    ctx.gpr[31] = (0x08886188u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 712u, 0x0884BD54u>(ctx, &aot_mem) && ctx.pc == 0x08886188u) goto L_08886188;
    return;
L_08886188:
    ctx.gpr[31] = (0x08886190u);
    ctx.gpr[4] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 713u, 0x0884BD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08886190u) goto L_08886190;
    return;
L_08886190:
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
L_088861AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088861C4u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x088861C4u) goto L_088861C4;
    return;
L_088861C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08886228;
      }
      goto L_088861D0;
    }
L_088861D0:
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08886340;
      }
      goto L_088861DC;
    }
L_088861DC:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08886208;
      }
      goto L_088861E8;
    }
L_088861E8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08886210;
      }
      goto L_088861F0;
    }
L_088861F0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08886218;
      }
      goto L_088861F8;
    }
L_088861F8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08886220;
      }
      goto L_08886200;
    }
L_08886200:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 34u);
      if (branch_taken) {
          goto L_08886340;
      }
      goto L_08886208;
    }
L_08886208:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 35u);
      if (branch_taken) {
          goto L_08886340;
      }
      goto L_08886210;
    }
L_08886210:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 36u);
      if (branch_taken) {
          goto L_08886340;
      }
      goto L_08886218;
    }
L_08886218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 37u);
      if (branch_taken) {
          goto L_08886340;
      }
      goto L_08886220;
    }
L_08886220:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 38u);
      if (branch_taken) {
          goto L_08886340;
      }
      goto L_08886228;
    }
L_08886228:
    ctx.gpr[31] = (0x08886230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x08886230u) goto L_08886230;
    return;
L_08886230:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08886258;
      }
      goto L_0888623C;
    }
L_0888623C:
    ctx.gpr[31] = (0x08886244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x08886244u) goto L_08886244;
    return;
L_08886244:
    ctx.gpr[4] = (0u | 71u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[16] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(39));
      if (branch_taken) {
          goto L_08886340;
      }
      goto L_08886258;
    }
L_08886258:
    ctx.gpr[31] = (0x08886260u);
    ctx.gpr[4] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 464u, 0x088424FCu>(ctx, &aot_mem) && ctx.pc == 0x08886260u) goto L_08886260;
    return;
L_08886260:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 68 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08886284;
      }
      goto L_08886270;
    }
L_08886270:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0888627Cu);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x0888627Cu) goto L_0888627C;
    return;
L_0888627C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08886290;
      }
      goto L_08886284;
    }
L_08886284:
    ctx.gpr[31] = (0x0888628Cu);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 198u, 0x0884CD88u>(ctx, &aot_mem) && ctx.pc == 0x0888628Cu) goto L_0888628C;
    return;
L_0888628C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08886290;
L_08886290:
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08886340;
      }
      goto L_0888629C;
    }
L_0888629C:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088862DC;
      }
      goto L_088862A8;
    }
L_088862A8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088862F8;
      }
      goto L_088862B0;
    }
L_088862B0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08886314;
      }
      goto L_088862B8;
    }
L_088862B8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08886328;
      }
      goto L_088862C0;
    }
L_088862C0:
    ctx.gpr[31] = (0x088862C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x088862C8u) goto L_088862C8;
    return;
L_088862C8:
    ctx.gpr[4] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[16] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08886340;
      }
      goto L_088862DC;
    }
L_088862DC:
    ctx.gpr[31] = (0x088862E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x088862E4u) goto L_088862E4;
    return;
L_088862E4:
    ctx.gpr[4] = (0u | 6u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[16] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08886340;
      }
      goto L_088862F8;
    }
L_088862F8:
    ctx.gpr[31] = (0x08886300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x08886300u) goto L_08886300;
    return;
L_08886300:
    ctx.gpr[4] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[16] = (ctx.hi);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08886340;
      }
      goto L_08886314;
    }
L_08886314:
    ctx.gpr[31] = (0x0888631Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x0888631Cu) goto L_0888631C;
    return;
L_0888631C:
    ctx.gpr[16] = (ctx.gpr[2] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(17));
      if (branch_taken) {
          goto L_08886340;
      }
      goto L_08886328;
    }
L_08886328:
    ctx.gpr[31] = (0x08886330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 77u, 0x089AD318u>(ctx, &aot_mem) && ctx.pc == 0x08886330u) goto L_08886330;
    return;
L_08886330:
    ctx.gpr[4] = (0u | 13u);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[16] = (ctx.hi);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(21));
    goto L_08886340;
L_08886340:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886354:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11600)));
    ctx.gpr[5] = (2221u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(11604), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886368:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886380u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 432u, 0x0884DB28u>(ctx, &aot_mem) && ctx.pc == 0x08886380u) goto L_08886380;
    return;
L_08886380:
    ctx.gpr[16] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 24936u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08886398u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08886398u) goto L_08886398;
    return;
L_08886398:
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12192), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088863B0u);
    ctx.gpr[6] = (0u | 24936u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088863B0u) goto L_088863B0;
    return;
L_088863B0:
    ctx.gpr[31] = (0x088863B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 135u, 0x088889D8u>(ctx, &aot_mem) && ctx.pc == 0x088863B8u) goto L_088863B8;
    return;
L_088863B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 24u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088863CCu);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088863CCu) goto L_088863CC;
    return;
L_088863CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088863E4u);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x088863E4u) goto L_088863E4;
    return;
L_088863E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12900));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (0u | 24u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08886424u);
    ctx.gpr[5] = (0u | 160u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08886424u) goto L_08886424;
    return;
L_08886424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0888643Cu);
    ctx.gpr[6] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 560u, 0x08A9E008u>(ctx, &aot_mem) && ctx.pc == 0x0888643Cu) goto L_0888643C;
    return;
L_0888643C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (2220u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08886450u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20472));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 595u, 0x088473B4u>(ctx, &aot_mem) && ctx.pc == 0x08886450u) goto L_08886450;
    return;
L_08886450:
    ctx.gpr[31] = (0x08886458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 184u, 0x08888F84u>(ctx, &aot_mem) && ctx.pc == 0x08886458u) goto L_08886458;
    return;
L_08886458:
    ctx.gpr[4] = (2184u << 16u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x08886468u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26000));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 702u, 0x0884BCB8u>(ctx, &aot_mem) && ctx.pc == 0x08886468u) goto L_08886468;
    return;
L_08886468:
    ctx.gpr[4] = (2184u << 16u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08886478u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26260));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 706u, 0x0884BCFCu>(ctx, &aot_mem) && ctx.pc == 0x08886478u) goto L_08886478;
    return;
L_08886478:
    ctx.gpr[4] = (2184u << 16u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[31] = (0x08886488u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26340));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 709u, 0x0884BD28u>(ctx, &aot_mem) && ctx.pc == 0x08886488u) goto L_08886488;
    return;
L_08886488:
    ctx.gpr[31] = (0x08886490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 633u, 0x088430A8u>(ctx, &aot_mem) && ctx.pc == 0x08886490u) goto L_08886490;
    return;
L_08886490:
    ctx.gpr[31] = (0x08886498u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 716u, 0x08806E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08886498u) goto L_08886498;
    return;
L_08886498:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088864AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x088864C4u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 722u, 0x08806E84u>(ctx, &aot_mem) && ctx.pc == 0x088864C4u) goto L_088864C4;
    return;
L_088864C4:
    ctx.gpr[31] = (0x088864CCu);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 724u, 0x08806EA0u>(ctx, &aot_mem) && ctx.pc == 0x088864CCu) goto L_088864CC;
    return;
L_088864CC:
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088864F4;
      }
      goto L_088864E4;
    }
L_088864E4:
    ctx.gpr[31] = (0x088864ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 416u, 0x0888AAE8u>(ctx, &aot_mem) && ctx.pc == 0x088864ECu) goto L_088864EC;
    return;
L_088864EC:
    ctx.gpr[31] = (0x088864F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 403u, 0x0888A9B8u>(ctx, &aot_mem) && ctx.pc == 0x088864F4u) goto L_088864F4;
    return;
L_088864F4:
    ctx.gpr[31] = (0x088864FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 189u, 0x0888900Cu>(ctx, &aot_mem) && ctx.pc == 0x088864FCu) goto L_088864FC;
    return;
L_088864FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08886524;
      }
      goto L_08886510;
    }
L_08886510:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x08886518u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08886518u) goto L_08886518;
    return;
L_08886518:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_08886524;
L_08886524:
    ctx.gpr[31] = (0x0888652Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 563u, 0x08847174u>(ctx, &aot_mem) && ctx.pc == 0x0888652Cu) goto L_0888652C;
    return;
L_0888652C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[17] = (2222u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08886544u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08886544u) goto L_08886544;
    return;
L_08886544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888655Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888655Cu) goto L_0888655C;
    return;
L_0888655C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-23940)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(268)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08886574u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08886574u) goto L_08886574;
    return;
L_08886574:
    ctx.gpr[31] = (0x0888657Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12192), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 634u, 0x088430BCu>(ctx, &aot_mem) && ctx.pc == 0x0888657Cu) goto L_0888657C;
    return;
L_0888657C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886590:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23)));
        goto L_088865C8;
    }
    goto L_088865B8;
L_088865B8:
    ctx.gpr[31] = (0x088865C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 196u, 0x08889094u>(ctx, &aot_mem) && ctx.pc == 0x088865C0u) goto L_088865C0;
    return;
L_088865C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08886680;
      }
      goto L_088865C8;
    }
L_088865C8:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
        goto L_088865F4;
    }
    goto L_088865D0;
L_088865D0:
    ctx.gpr[31] = (0x088865D8u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 718u, 0x08806E50u>(ctx, &aot_mem) && ctx.pc == 0x088865D8u) goto L_088865D8;
    return;
L_088865D8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08886680;
      }
      goto L_088865E4;
    }
L_088865E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08886680;
      }
      goto L_088865F4;
    }
L_088865F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_0888661C;
    }
    goto L_08886600;
L_08886600:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08886608u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08886608u) goto L_08886608;
    return;
L_08886608:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_0888661C;
L_0888661C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08886638;
      }
      goto L_08886624;
    }
L_08886624:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x0888662Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888662Cu) goto L_0888662C;
    return;
L_0888662C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_08886638;
L_08886638:
    ctx.gpr[31] = (0x08886640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 444u, 0x0888ACA4u>(ctx, &aot_mem) && ctx.pc == 0x08886640u) goto L_08886640;
    return;
L_08886640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0888665C;
      }
      goto L_08886654;
    }
L_08886654:
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0888665Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888665Cu) goto L_0888665C;
    return;
L_0888665C:
    ctx.gpr[31] = (0x08886664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 407u, 0x0888AA14u>(ctx, &aot_mem) && ctx.pc == 0x08886664u) goto L_08886664;
    return;
L_08886664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08886680;
      }
      goto L_08886678;
    }
L_08886678:
    ctx.gpr[31] = (0x08886680u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 363u, 0x0883ACDCu>(ctx, &aot_mem) && ctx.pc == 0x08886680u) goto L_08886680;
    return;
L_08886680:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886694:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088866D8;
      }
      goto L_088866B4;
    }
L_088866B4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088866D8;
      }
      goto L_088866C0;
    }
L_088866C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088866D8;
      }
      goto L_088866D0;
    }
L_088866D0:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x088866D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088866D8u) goto L_088866D8;
    return;
L_088866D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088866E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0888675C;
      }
      goto L_0888670C;
    }
L_0888670C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0888675C;
      }
      goto L_08886718;
    }
L_08886718:
    ctx.gpr[31] = (0x08886720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 152u, 0x088914ECu>(ctx, &aot_mem) && ctx.pc == 0x08886720u) goto L_08886720;
    return;
L_08886720:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0888673C;
      }
      goto L_08886734;
    }
L_08886734:
    jump_target = ctx.gpr[4];
    ctx.gpr[31] = (0x0888673Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888673Cu) goto L_0888673C;
    return;
L_0888673C:
    ctx.gpr[31] = (0x08886744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 412u, 0x0888AA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08886744u) goto L_08886744;
    return;
L_08886744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0888675C;
      }
      goto L_08886754;
    }
L_08886754:
    ctx.gpr[31] = (0x0888675Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24740)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 72u, 0x0883C9FCu>(ctx, &aot_mem) && ctx.pc == 0x0888675Cu) goto L_0888675C;
    return;
L_0888675C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886770:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886794u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 502u, 0x0888B30Cu>(ctx, &aot_mem) && ctx.pc == 0x08886794u) goto L_08886794;
    return;
L_08886794:
    ctx.gpr[31] = (0x0888679Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 359u, 0x0889306Cu>(ctx, &aot_mem) && ctx.pc == 0x0888679Cu) goto L_0888679C;
    return;
L_0888679C:
    ctx.gpr[31] = (0x088867A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 123u, 0x0888CD58u>(ctx, &aot_mem) && ctx.pc == 0x088867A4u) goto L_088867A4;
    return;
L_088867A4:
    ctx.gpr[31] = (0x088867ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 368u, 0x088933B0u>(ctx, &aot_mem) && ctx.pc == 0x088867ACu) goto L_088867AC;
    return;
L_088867AC:
    ctx.gpr[31] = (0x088867B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 26u, 0x0888C32Cu>(ctx, &aot_mem) && ctx.pc == 0x088867B4u) goto L_088867B4;
    return;
L_088867B4:
    ctx.gpr[31] = (0x088867BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 477u, 0x0888B034u>(ctx, &aot_mem) && ctx.pc == 0x088867BCu) goto L_088867BC;
    return;
L_088867BC:
    ctx.gpr[31] = (0x088867C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 182u, 0x08888EECu>(ctx, &aot_mem) && ctx.pc == 0x088867C4u) goto L_088867C4;
    return;
L_088867C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088867D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088867E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 510u, 0x0888B484u>(ctx, &aot_mem) && ctx.pc == 0x088867E0u) goto L_088867E0;
    return;
L_088867E0:
    ctx.gpr[31] = (0x088867E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 76u, 0x0888C894u>(ctx, &aot_mem) && ctx.pc == 0x088867E8u) goto L_088867E8;
    return;
L_088867E8:
    ctx.gpr[31] = (0x088867F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 130u, 0x0888CEC0u>(ctx, &aot_mem) && ctx.pc == 0x088867F0u) goto L_088867F0;
    return;
L_088867F0:
    ctx.gpr[31] = (0x088867F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 95u, 0x0888CB04u>(ctx, &aot_mem) && ctx.pc == 0x088867F8u) goto L_088867F8;
    return;
L_088867F8:
    ctx.gpr[31] = (0x08886800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 34u, 0x0888C410u>(ctx, &aot_mem) && ctx.pc == 0x08886800u) goto L_08886800;
    return;
L_08886800:
    ctx.gpr[31] = (0x08886808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 487u, 0x0888B1FCu>(ctx, &aot_mem) && ctx.pc == 0x08886808u) goto L_08886808;
    return;
L_08886808:
    ctx.gpr[31] = (0x08886810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 183u, 0x08888F60u>(ctx, &aot_mem) && ctx.pc == 0x08886810u) goto L_08886810;
    return;
L_08886810:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888681C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886824:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 138u, 0x0888CFE8u>(ctx, &aot_mem) && ctx.pc == 0x08886834u) goto L_08886834;
    return;
L_08886834:
    ctx.gpr[31] = (0x0888683Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 88u, 0x0888CA9Cu>(ctx, &aot_mem) && ctx.pc == 0x0888683Cu) goto L_0888683C;
    return;
L_0888683C:
    ctx.gpr[31] = (0x08886844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 519u, 0x0888B58Cu>(ctx, &aot_mem) && ctx.pc == 0x08886844u) goto L_08886844;
    return;
L_08886844:
    ctx.gpr[31] = (0x0888684Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 114u, 0x0888CCC4u>(ctx, &aot_mem) && ctx.pc == 0x0888684Cu) goto L_0888684C;
    return;
L_0888684C:
    ctx.gpr[31] = (0x08886854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 38u, 0x0888C46Cu>(ctx, &aot_mem) && ctx.pc == 0x08886854u) goto L_08886854;
    return;
L_08886854:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08886874;
      }
      goto L_0888686C;
    }
L_0888686C:
    ctx.gpr[31] = (0x08886874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 497u, 0x0888B2C0u>(ctx, &aot_mem) && ctx.pc == 0x08886874u) goto L_08886874;
    return;
L_08886874:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886880:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 10u);
      if (branch_taken) {
          goto L_088868B4;
      }
      goto L_088868A8;
    }
L_088868A8:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 10u);
    goto L_088868B4;
L_088868B4:
    ctx.gpr[31] = (0x088868BCu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 339u, 0x08892D64u>(ctx, &aot_mem) && ctx.pc == 0x088868BCu) goto L_088868BC;
    return;
L_088868BC:
    ctx.gpr[31] = (0x088868C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 168u, 0x0888D34Cu>(ctx, &aot_mem) && ctx.pc == 0x088868C4u) goto L_088868C4;
    return;
L_088868C4:
    ctx.gpr[31] = (0x088868CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 606u, 0x0888BF9Cu>(ctx, &aot_mem) && ctx.pc == 0x088868CCu) goto L_088868CC;
    return;
L_088868CC:
    ctx.gpr[31] = (0x088868D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 401u, 0x088938C0u>(ctx, &aot_mem) && ctx.pc == 0x088868D4u) goto L_088868D4;
    return;
L_088868D4:
    ctx.gpr[31] = (0x088868DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 502u, 0x0888B30Cu>(ctx, &aot_mem) && ctx.pc == 0x088868DCu) goto L_088868DC;
    return;
L_088868DC:
    ctx.gpr[31] = (0x088868E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 208u, 0x08891720u>(ctx, &aot_mem) && ctx.pc == 0x088868E4u) goto L_088868E4;
    return;
L_088868E4:
    ctx.gpr[31] = (0x088868ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 545u, 0x0888B708u>(ctx, &aot_mem) && ctx.pc == 0x088868ECu) goto L_088868EC;
    return;
L_088868EC:
    ctx.gpr[31] = (0x088868F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 26u, 0x0888C32Cu>(ctx, &aot_mem) && ctx.pc == 0x088868F4u) goto L_088868F4;
    return;
L_088868F4:
    ctx.gpr[31] = (0x088868FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 182u, 0x08888EECu>(ctx, &aot_mem) && ctx.pc == 0x088868FCu) goto L_088868FC;
    return;
L_088868FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886908:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 588u, 0x0888BD58u>(ctx, &aot_mem) && ctx.pc == 0x08886918u) goto L_08886918;
    return;
L_08886918:
    ctx.gpr[31] = (0x08886920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 186u, 0x0888D694u>(ctx, &aot_mem) && ctx.pc == 0x08886920u) goto L_08886920;
    return;
L_08886920:
    ctx.gpr[31] = (0x08886928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 14u, 0x0888C22Cu>(ctx, &aot_mem) && ctx.pc == 0x08886928u) goto L_08886928;
    return;
L_08886928:
    ctx.gpr[31] = (0x08886930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 140u, 0x0888D00Cu>(ctx, &aot_mem) && ctx.pc == 0x08886930u) goto L_08886930;
    return;
L_08886930:
    ctx.gpr[31] = (0x08886938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 510u, 0x0888B484u>(ctx, &aot_mem) && ctx.pc == 0x08886938u) goto L_08886938;
    return;
L_08886938:
    ctx.gpr[31] = (0x08886940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 521u, 0x0888B5B0u>(ctx, &aot_mem) && ctx.pc == 0x08886940u) goto L_08886940;
    return;
L_08886940:
    ctx.gpr[31] = (0x08886948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 562u, 0x0888BBA8u>(ctx, &aot_mem) && ctx.pc == 0x08886948u) goto L_08886948;
    return;
L_08886948:
    ctx.gpr[31] = (0x08886950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 34u, 0x0888C410u>(ctx, &aot_mem) && ctx.pc == 0x08886950u) goto L_08886950;
    return;
L_08886950:
    ctx.gpr[31] = (0x08886958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 183u, 0x08888F60u>(ctx, &aot_mem) && ctx.pc == 0x08886958u) goto L_08886958;
    return;
L_08886958:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886964:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (0u | 128u);
      if (branch_taken) {
          goto L_08886A94;
      }
      goto L_08886988;
    }
L_08886988:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 64u);
      if (branch_taken) {
          goto L_088869A8;
      }
      goto L_08886990;
    }
L_08886990:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x088869A0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088869A0u) goto L_088869A0;
    return;
L_088869A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08886BC4;
      }
      goto L_088869A8;
    }
L_088869A8:
    if (ctx.gpr[7] == ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_088869CC;
    }
    goto L_088869B0;
L_088869B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 2u);
    if (ctx.gpr[4] == ctx.gpr[6]) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
        goto L_08886A34;
    }
    goto L_088869C0;
L_088869C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08886A60;
      }
      goto L_088869C8;
    }
L_088869C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088869CC;
L_088869CC:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12900));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08886A24u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886A24u) goto L_08886A24;
    return;
L_08886A24:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886A34:
    ctx.gpr[4] = (0u | 21u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08886A44u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886A44u) goto L_08886A44;
    return;
L_08886A44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08886BC4;
      }
      goto L_08886A58;
    }
L_08886A58:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
      if (branch_taken) {
          goto L_08886BC4;
      }
      goto L_08886A60;
    }
L_08886A60:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08886BC4;
      }
      goto L_08886A68;
    }
L_08886A68:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 21u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08886A7Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886A7Cu) goto L_08886A7C;
    return;
L_08886A7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08886BC4;
      }
      goto L_08886A8C;
    }
L_08886A8C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08886BC4;
      }
      goto L_08886A94;
    }
L_08886A94:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 64u);
      if (branch_taken) {
          goto L_08886B04;
      }
      goto L_08886A9C;
    }
L_08886A9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12900));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08886AFCu);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886AFCu) goto L_08886AFC;
    return;
L_08886AFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08886BC4;
      }
      goto L_08886B04;
    }
L_08886B04:
    if (ctx.gpr[7] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08886B20;
    }
    goto L_08886B0C;
L_08886B0C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08886B18u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886B18u) goto L_08886B18;
    return;
L_08886B18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08886BC4;
      }
      goto L_08886B20;
    }
L_08886B20:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08886B7C;
      }
      goto L_08886B2C;
    }
L_08886B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08886B58;
      }
      goto L_08886B3C;
    }
L_08886B3C:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[31] = (0x08886B48u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886B48u) goto L_08886B48;
    return;
L_08886B48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08886B6C;
      }
      goto L_08886B58;
    }
L_08886B58:
    ctx.gpr[31] = (0x08886B60u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886B60u) goto L_08886B60;
    return;
L_08886B60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    goto L_08886B6C;
L_08886B6C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08886BC4;
      }
      goto L_08886B74;
    }
L_08886B74:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08886BC4;
      }
      goto L_08886B7C;
    }
L_08886B7C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08886BC4;
      }
      goto L_08886B84;
    }
L_08886B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08886BA8;
      }
      goto L_08886B90;
    }
L_08886B90:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[31] = (0x08886B9Cu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886B9Cu) goto L_08886B9C;
    return;
L_08886B9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08886BB8;
      }
      goto L_08886BA8;
    }
L_08886BA8:
    ctx.gpr[31] = (0x08886BB0u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886BB0u) goto L_08886BB0;
    return;
L_08886BB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    goto L_08886BB8;
L_08886BB8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08886BC4;
      }
      goto L_08886BC0;
    }
L_08886BC0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08886BC4;
L_08886BC4:
    ctx.gpr[31] = (0x08886BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 591u, 0x0888BDA4u>(ctx, &aot_mem) && ctx.pc == 0x08886BCCu) goto L_08886BCC;
    return;
L_08886BCC:
    ctx.gpr[31] = (0x08886BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 193u, 0x0888D738u>(ctx, &aot_mem) && ctx.pc == 0x08886BD4u) goto L_08886BD4;
    return;
L_08886BD4:
    ctx.gpr[31] = (0x08886BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 151u, 0x0888D0F8u>(ctx, &aot_mem) && ctx.pc == 0x08886BDCu) goto L_08886BDC;
    return;
L_08886BDC:
    ctx.gpr[31] = (0x08886BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 513u, 0x0888B4D0u>(ctx, &aot_mem) && ctx.pc == 0x08886BE4u) goto L_08886BE4;
    return;
L_08886BE4:
    ctx.gpr[31] = (0x08886BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 271u, 0x088923F0u>(ctx, &aot_mem) && ctx.pc == 0x08886BECu) goto L_08886BEC;
    return;
L_08886BEC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886BFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886C04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 604u, 0x0888BF78u>(ctx, &aot_mem) && ctx.pc == 0x08886C14u) goto L_08886C14;
    return;
L_08886C14:
    ctx.gpr[31] = (0x08886C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 205u, 0x0888D8C0u>(ctx, &aot_mem) && ctx.pc == 0x08886C1Cu) goto L_08886C1C;
    return;
L_08886C1C:
    ctx.gpr[31] = (0x08886C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 19u, 0x0888C2A8u>(ctx, &aot_mem) && ctx.pc == 0x08886C24u) goto L_08886C24;
    return;
L_08886C24:
    ctx.gpr[31] = (0x08886C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 158u, 0x0888D2B4u>(ctx, &aot_mem) && ctx.pc == 0x08886C2Cu) goto L_08886C2C;
    return;
L_08886C2C:
    ctx.gpr[31] = (0x08886C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 519u, 0x0888B58Cu>(ctx, &aot_mem) && ctx.pc == 0x08886C34u) goto L_08886C34;
    return;
L_08886C34:
    ctx.gpr[31] = (0x08886C3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 526u, 0x0888B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08886C3Cu) goto L_08886C3C;
    return;
L_08886C3C:
    ctx.gpr[31] = (0x08886C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 567u, 0x0888BC24u>(ctx, &aot_mem) && ctx.pc == 0x08886C44u) goto L_08886C44;
    return;
L_08886C44:
    ctx.gpr[31] = (0x08886C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 38u, 0x0888C46Cu>(ctx, &aot_mem) && ctx.pc == 0x08886C4Cu) goto L_08886C4C;
    return;
L_08886C4C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886C58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886C78u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 339u, 0x08892D64u>(ctx, &aot_mem) && ctx.pc == 0x08886C78u) goto L_08886C78;
    return;
L_08886C78:
    ctx.gpr[31] = (0x08886C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 606u, 0x0888BF9Cu>(ctx, &aot_mem) && ctx.pc == 0x08886C80u) goto L_08886C80;
    return;
L_08886C80:
    ctx.gpr[31] = (0x08886C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 418u, 0x08893D58u>(ctx, &aot_mem) && ctx.pc == 0x08886C88u) goto L_08886C88;
    return;
L_08886C88:
    ctx.gpr[31] = (0x08886C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 42u, 0x0888C4B8u>(ctx, &aot_mem) && ctx.pc == 0x08886C90u) goto L_08886C90;
    return;
L_08886C90:
    ctx.gpr[31] = (0x08886C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 208u, 0x08891720u>(ctx, &aot_mem) && ctx.pc == 0x08886C98u) goto L_08886C98;
    return;
L_08886C98:
    ctx.gpr[31] = (0x08886CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 26u, 0x0888C32Cu>(ctx, &aot_mem) && ctx.pc == 0x08886CA0u) goto L_08886CA0;
    return;
L_08886CA0:
    ctx.gpr[31] = (0x08886CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 182u, 0x08888EECu>(ctx, &aot_mem) && ctx.pc == 0x08886CA8u) goto L_08886CA8;
    return;
L_08886CA8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886CB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886CC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 588u, 0x0888BD58u>(ctx, &aot_mem) && ctx.pc == 0x08886CC4u) goto L_08886CC4;
    return;
L_08886CC4:
    ctx.gpr[31] = (0x08886CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 14u, 0x0888C22Cu>(ctx, &aot_mem) && ctx.pc == 0x08886CCCu) goto L_08886CCC;
    return;
L_08886CCC:
    ctx.gpr[31] = (0x08886CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 210u, 0x0888D924u>(ctx, &aot_mem) && ctx.pc == 0x08886CD4u) goto L_08886CD4;
    return;
L_08886CD4:
    ctx.gpr[31] = (0x08886CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 66u, 0x0888C7B0u>(ctx, &aot_mem) && ctx.pc == 0x08886CDCu) goto L_08886CDC;
    return;
L_08886CDC:
    ctx.gpr[31] = (0x08886CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 521u, 0x0888B5B0u>(ctx, &aot_mem) && ctx.pc == 0x08886CE4u) goto L_08886CE4;
    return;
L_08886CE4:
    ctx.gpr[31] = (0x08886CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 34u, 0x0888C410u>(ctx, &aot_mem) && ctx.pc == 0x08886CECu) goto L_08886CEC;
    return;
L_08886CEC:
    ctx.gpr[31] = (0x08886CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 183u, 0x08888F60u>(ctx, &aot_mem) && ctx.pc == 0x08886CF4u) goto L_08886CF4;
    return;
L_08886CF4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886D00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (0u | 128u);
      if (branch_taken) {
          goto L_08886E28;
      }
      goto L_08886D20;
    }
L_08886D20:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 64u);
      if (branch_taken) {
          goto L_08886D40;
      }
      goto L_08886D28;
    }
L_08886D28:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[31] = (0x08886D38u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886D38u) goto L_08886D38;
    return;
L_08886D38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08886F24;
      }
      goto L_08886D40;
    }
L_08886D40:
    if (ctx.gpr[7] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08886DB0;
    }
    goto L_08886D48;
L_08886D48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12900));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08886DA8u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886DA8u) goto L_08886DA8;
    return;
L_08886DA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08886F24;
      }
      goto L_08886DB0;
    }
L_08886DB0:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08886DF0;
      }
      goto L_08886DBC;
    }
L_08886DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08886DE0;
      }
      goto L_08886DCC;
    }
L_08886DCC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x08886DD8u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886DD8u) goto L_08886DD8;
    return;
L_08886DD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08886F24;
      }
      goto L_08886DE0;
    }
L_08886DE0:
    ctx.gpr[31] = (0x08886DE8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886DE8u) goto L_08886DE8;
    return;
L_08886DE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08886F24;
      }
      goto L_08886DF0;
    }
L_08886DF0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08886F24;
      }
      goto L_08886DF8;
    }
L_08886DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08886E18;
      }
      goto L_08886E04;
    }
L_08886E04:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x08886E10u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886E10u) goto L_08886E10;
    return;
L_08886E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08886F24;
      }
      goto L_08886E18;
    }
L_08886E18:
    ctx.gpr[31] = (0x08886E20u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886E20u) goto L_08886E20;
    return;
L_08886E20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08886F24;
      }
      goto L_08886E28;
    }
L_08886E28:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 64u);
      if (branch_taken) {
          goto L_08886E98;
      }
      goto L_08886E30;
    }
L_08886E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12900));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08886E90u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886E90u) goto L_08886E90;
    return;
L_08886E90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08886F24;
      }
      goto L_08886E98;
    }
L_08886E98:
    if (ctx.gpr[7] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08886EB4;
    }
    goto L_08886EA0;
L_08886EA0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08886EACu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886EACu) goto L_08886EAC;
    return;
L_08886EAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08886F24;
      }
      goto L_08886EB4;
    }
L_08886EB4:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08886EF4;
      }
      goto L_08886EC0;
    }
L_08886EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08886EE4;
      }
      goto L_08886ED0;
    }
L_08886ED0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[31] = (0x08886EDCu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886EDCu) goto L_08886EDC;
    return;
L_08886EDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08886F24;
      }
      goto L_08886EE4;
    }
L_08886EE4:
    ctx.gpr[31] = (0x08886EECu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886EECu) goto L_08886EEC;
    return;
L_08886EEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08886F24;
      }
      goto L_08886EF4;
    }
L_08886EF4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08886F24;
      }
      goto L_08886EFC;
    }
L_08886EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08886F1C;
      }
      goto L_08886F08;
    }
L_08886F08:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[31] = (0x08886F14u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886F14u) goto L_08886F14;
    return;
L_08886F14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08886F24;
      }
      goto L_08886F1C;
    }
L_08886F1C:
    ctx.gpr[31] = (0x08886F24u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08886F24u) goto L_08886F24;
    return;
L_08886F24:
    ctx.gpr[31] = (0x08886F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 591u, 0x0888BDA4u>(ctx, &aot_mem) && ctx.pc == 0x08886F2Cu) goto L_08886F2C;
    return;
L_08886F2C:
    ctx.gpr[31] = (0x08886F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 271u, 0x088923F0u>(ctx, &aot_mem) && ctx.pc == 0x08886F34u) goto L_08886F34;
    return;
L_08886F34:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886F40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886F48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886F58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 604u, 0x0888BF78u>(ctx, &aot_mem) && ctx.pc == 0x08886F58u) goto L_08886F58;
    return;
L_08886F58:
    ctx.gpr[31] = (0x08886F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 19u, 0x0888C2A8u>(ctx, &aot_mem) && ctx.pc == 0x08886F60u) goto L_08886F60;
    return;
L_08886F60:
    ctx.gpr[31] = (0x08886F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 227u, 0x0888DA74u>(ctx, &aot_mem) && ctx.pc == 0x08886F68u) goto L_08886F68;
    return;
L_08886F68:
    ctx.gpr[31] = (0x08886F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 71u, 0x0888C82Cu>(ctx, &aot_mem) && ctx.pc == 0x08886F70u) goto L_08886F70;
    return;
L_08886F70:
    ctx.gpr[31] = (0x08886F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 526u, 0x0888B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08886F78u) goto L_08886F78;
    return;
L_08886F78:
    ctx.gpr[31] = (0x08886F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 38u, 0x0888C46Cu>(ctx, &aot_mem) && ctx.pc == 0x08886F80u) goto L_08886F80;
    return;
L_08886F80:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886F8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886FACu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 339u, 0x08892D64u>(ctx, &aot_mem) && ctx.pc == 0x08886FACu) goto L_08886FAC;
    return;
L_08886FAC:
    ctx.gpr[31] = (0x08886FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 606u, 0x0888BF9Cu>(ctx, &aot_mem) && ctx.pc == 0x08886FB4u) goto L_08886FB4;
    return;
L_08886FB4:
    ctx.gpr[31] = (0x08886FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 23u, 0x088943C8u>(ctx, &aot_mem) && ctx.pc == 0x08886FBCu) goto L_08886FBC;
    return;
L_08886FBC:
    ctx.gpr[31] = (0x08886FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 42u, 0x0888C4B8u>(ctx, &aot_mem) && ctx.pc == 0x08886FC4u) goto L_08886FC4;
    return;
L_08886FC4:
    ctx.gpr[31] = (0x08886FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 208u, 0x08891720u>(ctx, &aot_mem) && ctx.pc == 0x08886FCCu) goto L_08886FCC;
    return;
L_08886FCC:
    ctx.gpr[31] = (0x08886FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 26u, 0x0888C32Cu>(ctx, &aot_mem) && ctx.pc == 0x08886FD4u) goto L_08886FD4;
    return;
L_08886FD4:
    ctx.gpr[31] = (0x08886FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 182u, 0x08888EECu>(ctx, &aot_mem) && ctx.pc == 0x08886FDCu) goto L_08886FDC;
    return;
L_08886FDC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886FE8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08886FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 588u, 0x0888BD58u>(ctx, &aot_mem) && ctx.pc == 0x08886FF8u) goto L_08886FF8;
    return;
L_08886FF8:
    ctx.gpr[31] = (0x08887000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 14u, 0x0888C22Cu>(ctx, &aot_mem) && ctx.pc == 0x08887000u) goto L_08887000;
    return;
L_08887000:
    ctx.gpr[31] = (0x08887008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 242u, 0x0888DB50u>(ctx, &aot_mem) && ctx.pc == 0x08887008u) goto L_08887008;
    return;
L_08887008:
    ctx.gpr[31] = (0x08887010u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 66u, 0x0888C7B0u>(ctx, &aot_mem) && ctx.pc == 0x08887010u) goto L_08887010;
    return;
L_08887010:
    ctx.gpr[31] = (0x08887018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 521u, 0x0888B5B0u>(ctx, &aot_mem) && ctx.pc == 0x08887018u) goto L_08887018;
    return;
L_08887018:
    ctx.gpr[31] = (0x08887020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 34u, 0x0888C410u>(ctx, &aot_mem) && ctx.pc == 0x08887020u) goto L_08887020;
    return;
L_08887020:
    ctx.gpr[31] = (0x08887028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 183u, 0x08888F60u>(ctx, &aot_mem) && ctx.pc == 0x08887028u) goto L_08887028;
    return;
L_08887028:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887034:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[6] = (0u | 128u);
      if (branch_taken) {
          goto L_088871F0;
      }
      goto L_08887054;
    }
L_08887054:
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[9];
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0888706C;
      }
      goto L_08887060;
    }
L_08887060:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088871D4;
      }
      goto L_0888706C;
    }
L_0888706C:
    ctx.gpr[9] = (0u | 64u);
    if (ctx.gpr[7] != ctx.gpr[9]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_088870D8;
    }
    goto L_08887078;
L_08887078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12900));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088871D4;
      }
      goto L_088870D8;
    }
L_088870D8:
    ctx.gpr[7] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[7] = (0u | 2u);
      if (branch_taken) {
          goto L_0888710C;
      }
      goto L_088870E4;
    }
L_088870E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
        goto L_08887100;
    }
    goto L_088870F4;
L_088870F4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08887104;
      }
      goto L_08887100;
    }
L_08887100:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08887104;
L_08887104:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 8u);
      if (branch_taken) {
          goto L_088871D4;
      }
      goto L_0888710C;
    }
L_0888710C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[7] = (0u | 4u);
      if (branch_taken) {
          goto L_0888715C;
      }
      goto L_08887114;
    }
L_08887114:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[4] = (ctx.gpr[6] & 3u);
      if (branch_taken) {
          goto L_08887130;
      }
      goto L_08887120;
    }
L_08887120:
    ctx.gpr[4] = (0u - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08887130;
      }
      goto L_08887130;
    }
L_08887130:
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_08887150;
      }
      goto L_0888713C;
    }
L_0888713C:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08887154;
      }
      goto L_08887150;
    }
L_08887150:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08887154;
L_08887154:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 21u);
      if (branch_taken) {
          goto L_088871D4;
      }
      goto L_0888715C;
    }
L_0888715C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_0888718C;
      }
      goto L_08887164;
    }
L_08887164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
        goto L_08887180;
    }
    goto L_08887174;
L_08887174:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08887184;
      }
      goto L_08887180;
    }
L_08887180:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08887184;
L_08887184:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 8u);
      if (branch_taken) {
          goto L_088871D4;
      }
      goto L_0888718C;
    }
L_0888718C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088871D8;
      }
      goto L_08887194;
    }
L_08887194:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[4] = (ctx.gpr[6] & 3u);
      if (branch_taken) {
          goto L_088871B0;
      }
      goto L_088871A0;
    }
L_088871A0:
    ctx.gpr[4] = (0u - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_088871B0;
      }
      goto L_088871B0;
    }
L_088871B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088871CC;
      }
      goto L_088871B8;
    }
L_088871B8:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088871D0;
      }
      goto L_088871CC;
    }
L_088871CC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_088871D0;
L_088871D0:
    ctx.gpr[6] = (0u | 21u);
    goto L_088871D4;
L_088871D4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088871D8;
L_088871D8:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088872EC;
      }
      goto L_088871E0;
    }
L_088871E0:
    ctx.gpr[31] = (0x088871E8u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088871E8u) goto L_088871E8;
    return;
L_088871E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088872EC;
      }
      goto L_088871F0;
    }
L_088871F0:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 64u);
      if (branch_taken) {
          goto L_08887260;
      }
      goto L_088871F8;
    }
L_088871F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12900));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[7] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08887258u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08887258u) goto L_08887258;
    return;
L_08887258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088872EC;
      }
      goto L_08887260;
    }
L_08887260:
    if (ctx.gpr[7] != ctx.gpr[6]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_0888727C;
    }
    goto L_08887268;
L_08887268:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08887274u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08887274u) goto L_08887274;
    return;
L_08887274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088872EC;
      }
      goto L_0888727C;
    }
L_0888727C:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_088872BC;
      }
      goto L_08887288;
    }
L_08887288:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088872AC;
      }
      goto L_08887298;
    }
L_08887298:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[31] = (0x088872A4u);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088872A4u) goto L_088872A4;
    return;
L_088872A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088872EC;
      }
      goto L_088872AC;
    }
L_088872AC:
    ctx.gpr[31] = (0x088872B4u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088872B4u) goto L_088872B4;
    return;
L_088872B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088872EC;
      }
      goto L_088872BC;
    }
L_088872BC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088872EC;
      }
      goto L_088872C4;
    }
L_088872C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088872E4;
      }
      goto L_088872D0;
    }
L_088872D0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[31] = (0x088872DCu);
    ctx.gpr[4] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088872DCu) goto L_088872DC;
    return;
L_088872DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088872EC;
      }
      goto L_088872E4;
    }
L_088872E4:
    ctx.gpr[31] = (0x088872ECu);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088872ECu) goto L_088872EC;
    return;
L_088872EC:
    ctx.gpr[31] = (0x088872F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 591u, 0x0888BDA4u>(ctx, &aot_mem) && ctx.pc == 0x088872F4u) goto L_088872F4;
    return;
L_088872F4:
    ctx.gpr[31] = (0x088872FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 271u, 0x088923F0u>(ctx, &aot_mem) && ctx.pc == 0x088872FCu) goto L_088872FC;
    return;
L_088872FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887308:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887310:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08887320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 604u, 0x0888BF78u>(ctx, &aot_mem) && ctx.pc == 0x08887320u) goto L_08887320;
    return;
L_08887320:
    ctx.gpr[31] = (0x08887328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 19u, 0x0888C2A8u>(ctx, &aot_mem) && ctx.pc == 0x08887328u) goto L_08887328;
    return;
L_08887328:
    ctx.gpr[31] = (0x08887330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 255u, 0x0888DC5Cu>(ctx, &aot_mem) && ctx.pc == 0x08887330u) goto L_08887330;
    return;
L_08887330:
    ctx.gpr[31] = (0x08887338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 71u, 0x0888C82Cu>(ctx, &aot_mem) && ctx.pc == 0x08887338u) goto L_08887338;
    return;
L_08887338:
    ctx.gpr[31] = (0x08887340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 526u, 0x0888B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08887340u) goto L_08887340;
    return;
L_08887340:
    ctx.gpr[31] = (0x08887348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 38u, 0x0888C46Cu>(ctx, &aot_mem) && ctx.pc == 0x08887348u) goto L_08887348;
    return;
L_08887348:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887354:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888736Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 50u, 0x0889492Cu>(ctx, &aot_mem) && ctx.pc == 0x0888736Cu) goto L_0888736C;
    return;
L_0888736C:
    ctx.gpr[31] = (0x08887374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 208u, 0x08891720u>(ctx, &aot_mem) && ctx.pc == 0x08887374u) goto L_08887374;
    return;
L_08887374:
    ctx.gpr[31] = (0x0888737Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 26u, 0x0888C32Cu>(ctx, &aot_mem) && ctx.pc == 0x0888737Cu) goto L_0888737C;
    return;
L_0888737C:
    ctx.gpr[31] = (0x08887384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 182u, 0x08888EECu>(ctx, &aot_mem) && ctx.pc == 0x08887384u) goto L_08887384;
    return;
L_08887384:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887390:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x088873A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 267u, 0x0888DD10u>(ctx, &aot_mem) && ctx.pc == 0x088873A0u) goto L_088873A0;
    return;
L_088873A0:
    ctx.gpr[31] = (0x088873A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 521u, 0x0888B5B0u>(ctx, &aot_mem) && ctx.pc == 0x088873A8u) goto L_088873A8;
    return;
L_088873A8:
    ctx.gpr[31] = (0x088873B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 34u, 0x0888C410u>(ctx, &aot_mem) && ctx.pc == 0x088873B0u) goto L_088873B0;
    return;
L_088873B0:
    ctx.gpr[31] = (0x088873B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 183u, 0x08888F60u>(ctx, &aot_mem) && ctx.pc == 0x088873B8u) goto L_088873B8;
    return;
L_088873B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088873C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (0u | 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08887444;
      }
      goto L_088873DC;
    }
L_088873DC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12900));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[8] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088875F0;
      }
      goto L_08887444;
    }
L_08887444:
    ctx.gpr[7] = (0u | 64u);
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_088874B8;
    }
    goto L_08887450;
L_08887450:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12900));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[8] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088875F0;
      }
      goto L_088874B8;
    }
L_088874B8:
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_08887504;
      }
      goto L_088874C4;
    }
L_088874C4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088874E8;
      }
      goto L_088874DC;
    }
L_088874DC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088874FC;
      }
      goto L_088874E8;
    }
L_088874E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[5] = (ctx.gpr[6] & 1u);
      if (branch_taken) {
          goto L_088874F8;
      }
      goto L_088874F0;
    }
L_088874F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_088874F8;
      }
      goto L_088874F8;
    }
L_088874F8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    goto L_088874FC;
L_088874FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_088875F0;
      }
      goto L_08887504;
    }
L_08887504:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_08887554;
      }
      goto L_0888750C;
    }
L_0888750C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[5] = (ctx.gpr[6] & 1u);
      if (branch_taken) {
          goto L_0888752C;
      }
      goto L_08887524;
    }
L_08887524:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_0888752C;
      }
      goto L_0888752C;
    }
L_0888752C:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08887544;
    }
    goto L_08887534;
L_08887534:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0888754C;
      }
      goto L_08887544;
    }
L_08887544:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0888754C;
L_0888754C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 21u);
      if (branch_taken) {
          goto L_088875F0;
      }
      goto L_08887554;
    }
L_08887554:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_088875A4;
      }
      goto L_0888755C;
    }
L_0888755C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08887580;
      }
      goto L_08887574;
    }
L_08887574:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0888759C;
      }
      goto L_08887580;
    }
L_08887580:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[5] = (ctx.gpr[6] & 1u);
      if (branch_taken) {
          goto L_08887594;
      }
      goto L_08887588;
    }
L_08887588:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08887598;
      }
      goto L_08887594;
    }
L_08887594:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6));
    goto L_08887598;
L_08887598:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    goto L_0888759C;
L_0888759C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_088875F0;
      }
      goto L_088875A4;
    }
L_088875A4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088875F4;
      }
      goto L_088875AC;
    }
L_088875AC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[5] = (ctx.gpr[6] & 1u);
      if (branch_taken) {
          goto L_088875CC;
      }
      goto L_088875C4;
    }
L_088875C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_088875CC;
      }
      goto L_088875CC;
    }
L_088875CC:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_088875E4;
    }
    goto L_088875D4;
L_088875D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088875EC;
      }
      goto L_088875E4;
    }
L_088875E4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_088875EC;
L_088875EC:
    ctx.gpr[5] = (0u | 21u);
    goto L_088875F0;
L_088875F0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088875F4;
L_088875F4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08887604;
      }
      goto L_088875FC;
    }
L_088875FC:
    ctx.gpr[31] = (0x08887604u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08887604u) goto L_08887604;
    return;
L_08887604:
    ctx.gpr[31] = (0x0888760Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 271u, 0x088923F0u>(ctx, &aot_mem) && ctx.pc == 0x0888760Cu) goto L_0888760C;
    return;
L_0888760C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887618:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887620:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08887630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 280u, 0x0888DE1Cu>(ctx, &aot_mem) && ctx.pc == 0x08887630u) goto L_08887630;
    return;
L_08887630:
    ctx.gpr[31] = (0x08887638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 526u, 0x0888B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08887638u) goto L_08887638;
    return;
L_08887638:
    ctx.gpr[31] = (0x08887640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 38u, 0x0888C46Cu>(ctx, &aot_mem) && ctx.pc == 0x08887640u) goto L_08887640;
    return;
L_08887640:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888764C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08887668u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 80u, 0x08894E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08887668u) goto L_08887668;
    return;
L_08887668:
    ctx.gpr[31] = (0x08887670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 208u, 0x08891720u>(ctx, &aot_mem) && ctx.pc == 0x08887670u) goto L_08887670;
    return;
L_08887670:
    ctx.gpr[31] = (0x08887678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 26u, 0x0888C32Cu>(ctx, &aot_mem) && ctx.pc == 0x08887678u) goto L_08887678;
    return;
L_08887678:
    ctx.gpr[31] = (0x08887680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 182u, 0x08888EECu>(ctx, &aot_mem) && ctx.pc == 0x08887680u) goto L_08887680;
    return;
L_08887680:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888768C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888769Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 292u, 0x0888DED0u>(ctx, &aot_mem) && ctx.pc == 0x0888769Cu) goto L_0888769C;
    return;
L_0888769C:
    ctx.gpr[31] = (0x088876A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 521u, 0x0888B5B0u>(ctx, &aot_mem) && ctx.pc == 0x088876A4u) goto L_088876A4;
    return;
L_088876A4:
    ctx.gpr[31] = (0x088876ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 34u, 0x0888C410u>(ctx, &aot_mem) && ctx.pc == 0x088876ACu) goto L_088876AC;
    return;
L_088876AC:
    ctx.gpr[31] = (0x088876B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 183u, 0x08888F60u>(ctx, &aot_mem) && ctx.pc == 0x088876B4u) goto L_088876B4;
    return;
L_088876B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088876C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (0u | 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08887740;
      }
      goto L_088876D8;
    }
L_088876D8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12900));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[8] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088878D0;
      }
      goto L_08887740;
    }
L_08887740:
    ctx.gpr[7] = (0u | 64u);
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_088877B4;
    }
    goto L_0888774C;
L_0888774C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12900));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[8] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088878D0;
      }
      goto L_088877B4;
    }
L_088877B4:
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_088877F0;
      }
      goto L_088877C0;
    }
L_088877C0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
        goto L_088877E4;
    }
    goto L_088877D8;
L_088877D8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088877E8;
      }
      goto L_088877E4;
    }
L_088877E4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_088877E8;
L_088877E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_088878D0;
      }
      goto L_088877F0;
    }
L_088877F0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_08887848;
      }
      goto L_088877F8;
    }
L_088877F8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[5] = (ctx.gpr[6] & 3u);
      if (branch_taken) {
          goto L_0888781C;
      }
      goto L_0888780C;
    }
L_0888780C:
    ctx.gpr[5] = (0u - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_0888781C;
      }
      goto L_0888781C;
    }
L_0888781C:
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_0888783C;
      }
      goto L_08887828;
    }
L_08887828:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08887840;
      }
      goto L_0888783C;
    }
L_0888783C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_08887840;
L_08887840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 21u);
      if (branch_taken) {
          goto L_088878D0;
      }
      goto L_08887848;
    }
L_08887848:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08887880;
      }
      goto L_08887850;
    }
L_08887850:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
        goto L_08887874;
    }
    goto L_08887868;
L_08887868:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08887878;
      }
      goto L_08887874;
    }
L_08887874:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_08887878;
L_08887878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_088878D0;
      }
      goto L_08887880;
    }
L_08887880:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088878D4;
      }
      goto L_08887888;
    }
L_08887888:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[5] = (ctx.gpr[6] & 3u);
      if (branch_taken) {
          goto L_088878AC;
      }
      goto L_0888789C;
    }
L_0888789C:
    ctx.gpr[5] = (0u - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_088878AC;
      }
      goto L_088878AC;
    }
L_088878AC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088878C8;
      }
      goto L_088878B4;
    }
L_088878B4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088878CC;
      }
      goto L_088878C8;
    }
L_088878C8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_088878CC;
L_088878CC:
    ctx.gpr[5] = (0u | 21u);
    goto L_088878D0;
L_088878D0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088878D4;
L_088878D4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088878E4;
      }
      goto L_088878DC;
    }
L_088878DC:
    ctx.gpr[31] = (0x088878E4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x088878E4u) goto L_088878E4;
    return;
L_088878E4:
    ctx.gpr[31] = (0x088878ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 271u, 0x088923F0u>(ctx, &aot_mem) && ctx.pc == 0x088878ECu) goto L_088878EC;
    return;
L_088878EC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088878F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887900:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08887910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 309u, 0x0888E020u>(ctx, &aot_mem) && ctx.pc == 0x08887910u) goto L_08887910;
    return;
L_08887910:
    ctx.gpr[31] = (0x08887918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 526u, 0x0888B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08887918u) goto L_08887918;
    return;
L_08887918:
    ctx.gpr[31] = (0x08887920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 38u, 0x0888C46Cu>(ctx, &aot_mem) && ctx.pc == 0x08887920u) goto L_08887920;
    return;
L_08887920:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888792C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08887948u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 120u, 0x08895610u>(ctx, &aot_mem) && ctx.pc == 0x08887948u) goto L_08887948;
    return;
L_08887948:
    ctx.gpr[31] = (0x08887950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 208u, 0x08891720u>(ctx, &aot_mem) && ctx.pc == 0x08887950u) goto L_08887950;
    return;
L_08887950:
    ctx.gpr[31] = (0x08887958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 26u, 0x0888C32Cu>(ctx, &aot_mem) && ctx.pc == 0x08887958u) goto L_08887958;
    return;
L_08887958:
    ctx.gpr[31] = (0x08887960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 182u, 0x08888EECu>(ctx, &aot_mem) && ctx.pc == 0x08887960u) goto L_08887960;
    return;
L_08887960:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0888796C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x0888797Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 324u, 0x0888E0FCu>(ctx, &aot_mem) && ctx.pc == 0x0888797Cu) goto L_0888797C;
    return;
L_0888797C:
    ctx.gpr[31] = (0x08887984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 521u, 0x0888B5B0u>(ctx, &aot_mem) && ctx.pc == 0x08887984u) goto L_08887984;
    return;
L_08887984:
    ctx.gpr[31] = (0x0888798Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 34u, 0x0888C410u>(ctx, &aot_mem) && ctx.pc == 0x0888798Cu) goto L_0888798C;
    return;
L_0888798C:
    ctx.gpr[31] = (0x08887994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 183u, 0x08888F60u>(ctx, &aot_mem) && ctx.pc == 0x08887994u) goto L_08887994;
    return;
L_08887994:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088879A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (0u | 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08887A1C;
      }
      goto L_088879B8;
    }
L_088879B8:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12900));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08887BC8;
      }
      goto L_08887A1C;
    }
L_08887A1C:
    ctx.gpr[7] = (0u | 64u);
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08887A90;
    }
    goto L_08887A28;
L_08887A28:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12900));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[8] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08887BC8;
      }
      goto L_08887A90;
    }
L_08887A90:
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_08887ADC;
      }
      goto L_08887A9C;
    }
L_08887A9C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08887AC0;
      }
      goto L_08887AB4;
    }
L_08887AB4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08887AD4;
      }
      goto L_08887AC0;
    }
L_08887AC0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[5] = (ctx.gpr[6] & 1u);
      if (branch_taken) {
          goto L_08887AD0;
      }
      goto L_08887AC8;
    }
L_08887AC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08887AD0;
      }
      goto L_08887AD0;
    }
L_08887AD0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    goto L_08887AD4;
L_08887AD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_08887BC8;
      }
      goto L_08887ADC;
    }
L_08887ADC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_08887B2C;
      }
      goto L_08887AE4;
    }
L_08887AE4:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[5] = (ctx.gpr[6] & 1u);
      if (branch_taken) {
          goto L_08887B04;
      }
      goto L_08887AFC;
    }
L_08887AFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08887B04;
      }
      goto L_08887B04;
    }
L_08887B04:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08887B1C;
    }
    goto L_08887B0C;
L_08887B0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08887B24;
      }
      goto L_08887B1C;
    }
L_08887B1C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08887B24;
L_08887B24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 21u);
      if (branch_taken) {
          goto L_08887BC8;
      }
      goto L_08887B2C;
    }
L_08887B2C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08887B7C;
      }
      goto L_08887B34;
    }
L_08887B34:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08887B58;
      }
      goto L_08887B4C;
    }
L_08887B4C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08887B74;
      }
      goto L_08887B58;
    }
L_08887B58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[5] = (ctx.gpr[6] & 1u);
      if (branch_taken) {
          goto L_08887B6C;
      }
      goto L_08887B60;
    }
L_08887B60:
    ctx.gpr[5] = (0u - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08887B70;
      }
      goto L_08887B6C;
    }
L_08887B6C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(6));
    goto L_08887B70;
L_08887B70:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    goto L_08887B74;
L_08887B74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_08887BC8;
      }
      goto L_08887B7C;
    }
L_08887B7C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08887BCC;
      }
      goto L_08887B84;
    }
L_08887B84:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[5] = (ctx.gpr[6] & 1u);
      if (branch_taken) {
          goto L_08887BA4;
      }
      goto L_08887B9C;
    }
L_08887B9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08887BA4;
      }
      goto L_08887BA4;
    }
L_08887BA4:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08887BBC;
    }
    goto L_08887BAC;
L_08887BAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08887BC4;
      }
      goto L_08887BBC;
    }
L_08887BBC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08887BC4;
L_08887BC4:
    ctx.gpr[5] = (0u | 21u);
    goto L_08887BC8;
L_08887BC8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08887BCC;
L_08887BCC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08887BDC;
      }
      goto L_08887BD4;
    }
L_08887BD4:
    ctx.gpr[31] = (0x08887BDCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08887BDCu) goto L_08887BDC;
    return;
L_08887BDC:
    ctx.gpr[31] = (0x08887BE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 271u, 0x088923F0u>(ctx, &aot_mem) && ctx.pc == 0x08887BE4u) goto L_08887BE4;
    return;
L_08887BE4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887BF0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887BF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08887C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 337u, 0x0888E208u>(ctx, &aot_mem) && ctx.pc == 0x08887C08u) goto L_08887C08;
    return;
L_08887C08:
    ctx.gpr[31] = (0x08887C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 526u, 0x0888B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08887C10u) goto L_08887C10;
    return;
L_08887C10:
    ctx.gpr[31] = (0x08887C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 38u, 0x0888C46Cu>(ctx, &aot_mem) && ctx.pc == 0x08887C18u) goto L_08887C18;
    return;
L_08887C18:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887C24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08887C40u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 147u, 0x08895B64u>(ctx, &aot_mem) && ctx.pc == 0x08887C40u) goto L_08887C40;
    return;
L_08887C40:
    ctx.gpr[31] = (0x08887C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 208u, 0x08891720u>(ctx, &aot_mem) && ctx.pc == 0x08887C48u) goto L_08887C48;
    return;
L_08887C48:
    ctx.gpr[31] = (0x08887C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 26u, 0x0888C32Cu>(ctx, &aot_mem) && ctx.pc == 0x08887C50u) goto L_08887C50;
    return;
L_08887C50:
    ctx.gpr[31] = (0x08887C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 182u, 0x08888EECu>(ctx, &aot_mem) && ctx.pc == 0x08887C58u) goto L_08887C58;
    return;
L_08887C58:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887C64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08887C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 349u, 0x0888E2BCu>(ctx, &aot_mem) && ctx.pc == 0x08887C74u) goto L_08887C74;
    return;
L_08887C74:
    ctx.gpr[31] = (0x08887C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 521u, 0x0888B5B0u>(ctx, &aot_mem) && ctx.pc == 0x08887C7Cu) goto L_08887C7C;
    return;
L_08887C7C:
    ctx.gpr[31] = (0x08887C84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 34u, 0x0888C410u>(ctx, &aot_mem) && ctx.pc == 0x08887C84u) goto L_08887C84;
    return;
L_08887C84:
    ctx.gpr[31] = (0x08887C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 183u, 0x08888F60u>(ctx, &aot_mem) && ctx.pc == 0x08887C8Cu) goto L_08887C8C;
    return;
L_08887C8C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887C98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (0u | 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08887D18;
      }
      goto L_08887CB0;
    }
L_08887CB0:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12900));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[8] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08887EA4;
      }
      goto L_08887D18;
    }
L_08887D18:
    ctx.gpr[7] = (0u | 64u);
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
        goto L_08887D88;
    }
    goto L_08887D24;
L_08887D24:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12900));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08887EA4;
      }
      goto L_08887D88;
    }
L_08887D88:
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 2u);
      if (branch_taken) {
          goto L_08887DC4;
      }
      goto L_08887D94;
    }
L_08887D94:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
        goto L_08887DB8;
    }
    goto L_08887DAC;
L_08887DAC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08887DBC;
      }
      goto L_08887DB8;
    }
L_08887DB8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    goto L_08887DBC;
L_08887DBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_08887EA4;
      }
      goto L_08887DC4;
    }
L_08887DC4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 4u);
      if (branch_taken) {
          goto L_08887E1C;
      }
      goto L_08887DCC;
    }
L_08887DCC:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[5] = (ctx.gpr[6] & 3u);
      if (branch_taken) {
          goto L_08887DF0;
      }
      goto L_08887DE0;
    }
L_08887DE0:
    ctx.gpr[5] = (0u - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08887DF0;
      }
      goto L_08887DF0;
    }
L_08887DF0:
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_08887E10;
      }
      goto L_08887DFC;
    }
L_08887DFC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08887E14;
      }
      goto L_08887E10;
    }
L_08887E10:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    goto L_08887E14;
L_08887E14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 21u);
      if (branch_taken) {
          goto L_08887EA4;
      }
      goto L_08887E1C;
    }
L_08887E1C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08887E54;
      }
      goto L_08887E24;
    }
L_08887E24:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
        goto L_08887E48;
    }
    goto L_08887E3C;
L_08887E3C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08887E4C;
      }
      goto L_08887E48;
    }
L_08887E48:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    goto L_08887E4C;
L_08887E4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_08887EA4;
      }
      goto L_08887E54;
    }
L_08887E54:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08887EA8;
      }
      goto L_08887E5C;
    }
L_08887E5C:
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.gpr[5] = (ctx.gpr[6] & 3u);
      if (branch_taken) {
          goto L_08887E80;
      }
      goto L_08887E70;
    }
L_08887E70:
    ctx.gpr[5] = (0u - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08887E80;
      }
      goto L_08887E80;
    }
L_08887E80:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08887E9C;
      }
      goto L_08887E88;
    }
L_08887E88:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08887EA0;
      }
      goto L_08887E9C;
    }
L_08887E9C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    goto L_08887EA0;
L_08887EA0:
    ctx.gpr[5] = (0u | 21u);
    goto L_08887EA4;
L_08887EA4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08887EA8;
L_08887EA8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08887EB8;
      }
      goto L_08887EB0;
    }
L_08887EB0:
    ctx.gpr[31] = (0x08887EB8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 356u, 0x0883AC68u>(ctx, &aot_mem) && ctx.pc == 0x08887EB8u) goto L_08887EB8;
    return;
L_08887EB8:
    ctx.gpr[31] = (0x08887EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 271u, 0x088923F0u>(ctx, &aot_mem) && ctx.pc == 0x08887EC0u) goto L_08887EC0;
    return;
L_08887EC0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887ECC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887ED4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08887EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 366u, 0x0888E40Cu>(ctx, &aot_mem) && ctx.pc == 0x08887EE4u) goto L_08887EE4;
    return;
L_08887EE4:
    ctx.gpr[31] = (0x08887EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 526u, 0x0888B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08887EECu) goto L_08887EEC;
    return;
L_08887EEC:
    ctx.gpr[31] = (0x08887EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 38u, 0x0888C46Cu>(ctx, &aot_mem) && ctx.pc == 0x08887EF4u) goto L_08887EF4;
    return;
L_08887EF4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887F00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2221u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12192)));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08887F40;
      }
      goto L_08887F3C;
    }
L_08887F3C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_08887F40;
L_08887F40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08887F54;
      }
      goto L_08887F50;
    }
L_08887F50:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    goto L_08887F54;
L_08887F54:
    ctx.gpr[31] = (0x08887F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 339u, 0x08892D64u>(ctx, &aot_mem) && ctx.pc == 0x08887F5Cu) goto L_08887F5C;
    return;
L_08887F5C:
    ctx.gpr[31] = (0x08887F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 187u, 0x088962D8u>(ctx, &aot_mem) && ctx.pc == 0x08887F64u) goto L_08887F64;
    return;
L_08887F64:
    ctx.gpr[31] = (0x08887F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 42u, 0x0888C4B8u>(ctx, &aot_mem) && ctx.pc == 0x08887F6Cu) goto L_08887F6C;
    return;
L_08887F6C:
    ctx.gpr[31] = (0x08887F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 606u, 0x0888BF9Cu>(ctx, &aot_mem) && ctx.pc == 0x08887F74u) goto L_08887F74;
    return;
L_08887F74:
    ctx.gpr[31] = (0x08887F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 208u, 0x08891720u>(ctx, &aot_mem) && ctx.pc == 0x08887F7Cu) goto L_08887F7C;
    return;
L_08887F7C:
    ctx.gpr[31] = (0x08887F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 545u, 0x0888B708u>(ctx, &aot_mem) && ctx.pc == 0x08887F84u) goto L_08887F84;
    return;
L_08887F84:
    ctx.gpr[31] = (0x08887F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 26u, 0x0888C32Cu>(ctx, &aot_mem) && ctx.pc == 0x08887F8Cu) goto L_08887F8C;
    return;
L_08887F8C:
    ctx.gpr[31] = (0x08887F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 182u, 0x08888EECu>(ctx, &aot_mem) && ctx.pc == 0x08887F94u) goto L_08887F94;
    return;
L_08887F94:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887FA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08887FB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 588u, 0x0888BD58u>(ctx, &aot_mem) && ctx.pc == 0x08887FB0u) goto L_08887FB0;
    return;
L_08887FB0:
    ctx.gpr[31] = (0x08887FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 381u, 0x0888E4E8u>(ctx, &aot_mem) && ctx.pc == 0x08887FB8u) goto L_08887FB8;
    return;
L_08887FB8:
    ctx.gpr[31] = (0x08887FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 66u, 0x0888C7B0u>(ctx, &aot_mem) && ctx.pc == 0x08887FC0u) goto L_08887FC0;
    return;
L_08887FC0:
    ctx.gpr[31] = (0x08887FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 14u, 0x0888C22Cu>(ctx, &aot_mem) && ctx.pc == 0x08887FC8u) goto L_08887FC8;
    return;
L_08887FC8:
    ctx.gpr[31] = (0x08887FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 521u, 0x0888B5B0u>(ctx, &aot_mem) && ctx.pc == 0x08887FD0u) goto L_08887FD0;
    return;
L_08887FD0:
    ctx.gpr[31] = (0x08887FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 562u, 0x0888BBA8u>(ctx, &aot_mem) && ctx.pc == 0x08887FD8u) goto L_08887FD8;
    return;
L_08887FD8:
    ctx.gpr[31] = (0x08887FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 34u, 0x0888C410u>(ctx, &aot_mem) && ctx.pc == 0x08887FE0u) goto L_08887FE0;
    return;
L_08887FE0:
    ctx.gpr[31] = (0x08887FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 183u, 0x08888F60u>(ctx, &aot_mem) && ctx.pc == 0x08887FE8u) goto L_08887FE8;
    return;
L_08887FE8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887FF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887FFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.pc = 0x08888000u; return;
}

void recomp_unit_0032(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0032_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_32(Runtime &runtime) {
    runtime.register_generated_unit(32u, 0x08884000u, 16384u, &recomp_unit_0032, &recomp_unit_0032_entry);
    runtime.register_function(0x08884004u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884018u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888402Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884060u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884068u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884078u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884088u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888409Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088840ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088840C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088840D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088840E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088840F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088840F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884100u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888410Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888411Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884130u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884144u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884168u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888417Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884194u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841C8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884204u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888420Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884214u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888422Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884240u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884258u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884260u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888427Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884284u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088842A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088842ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884308u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884314u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888431Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888433Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884358u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884394u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888439Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088843C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088843D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088843DCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088843E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088843ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884414u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884428u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884430u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884464u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888446Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884474u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888447Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884484u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888448Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884494u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088844B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088844BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884524u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884528u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884538u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884568u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888469Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088846B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088846BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088846D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088846E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088846ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088846F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088846FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884704u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888470Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884714u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888471Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884724u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884728u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888472Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884738u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884744u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884754u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884760u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888476Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884780u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884788u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888479Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088847A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088847C8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088847D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088847E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088847E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088847F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884800u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884808u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884810u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884818u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884820u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884828u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884830u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884840u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888486Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884874u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888487Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884888u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884890u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884898u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888489Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884908u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884918u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884928u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884934u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884940u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884954u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888495Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884968u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888497Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884994u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888499Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884A04u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884A14u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884A20u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884A34u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884A44u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884A60u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884A68u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884A88u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884A9Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884AA8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884AB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884AD0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884AD8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884AE4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884AECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884AF4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B00u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B08u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B10u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B1Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B30u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B38u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B44u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B60u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B64u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B6Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B74u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B7Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B88u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B90u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B98u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884BA0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884BB8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884BC0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884BC8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884BF4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884BFCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C28u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C30u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C38u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C4Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C54u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C5Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C68u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C74u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C7Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C84u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C8Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C94u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C9Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884CA8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884CB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884CB8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884CD4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884CE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884CE4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D00u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D24u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D30u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D48u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D54u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D5Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D64u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D6Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D74u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D88u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D90u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DA4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DB4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DC4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DCCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DD4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DF4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DFCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E04u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E0Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E14u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E1Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E2Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E34u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E3Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E50u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E58u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E60u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E68u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E7Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E84u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E8Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884EA4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884EACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884EB4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884ECCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884ED4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884EE8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884EF0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F04u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F0Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F18u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F2Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F34u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F3Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F44u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F58u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F60u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F68u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F80u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F88u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F90u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884FA8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884FB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884FB8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884FD0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884FD8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884FECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885000u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885028u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885044u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885054u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885064u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885078u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885088u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888509Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088850BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088850CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088850E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088850F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888510Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885128u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885130u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888514Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888515Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885168u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885178u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888519Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088851B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088851E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885220u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885228u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885238u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885254u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888526Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885284u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888529Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088852A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088852C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088852CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088852F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885310u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885368u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885380u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088853F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885400u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885410u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888542Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885444u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888545Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885474u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885480u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088854FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885514u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885524u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088855A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088855E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088855FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885638u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885648u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885660u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088856A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088856D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088856DCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088856E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088856FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885710u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885734u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888576Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888577Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888578Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088857A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088857CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088857ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885888u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885898u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088858B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088858CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088858E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088858FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885908u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885930u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885950u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885964u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885980u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088859B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885A5Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885A84u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885A98u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885AB8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885AC8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885AE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885AF8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885B14u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885B30u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885BCCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885BDCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885BECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C0Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C18u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C28u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C44u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C50u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C58u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C64u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C6Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C78u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C80u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C88u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885C90u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885CA0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885CACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885CC0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885CD0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885CE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885CE8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885CFCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885D18u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885D20u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885D28u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885D34u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885D48u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885D5Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885D64u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885D78u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885D94u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885D9Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885DB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885DC4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885DCCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885DE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885DE8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885E08u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885E10u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885E28u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885E3Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885E44u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885E58u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885E5Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885E64u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885E7Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885EACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885EB4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885EBCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885ECCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885EDCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885EE4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885EECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885EF4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F00u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F08u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F10u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F18u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F24u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F2Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F34u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F3Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F48u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F50u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F58u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F60u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F74u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F80u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F88u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885F90u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885FB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885FB8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885FD4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885FE4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885FECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885FF4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885FFCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886004u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888600Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886014u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886020u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886028u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886030u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888603Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886048u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886058u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886060u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886068u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886074u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888607Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886080u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886088u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886090u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886098u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088860A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088860B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088860B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088860C8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088860D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088860D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088860DCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088860F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886108u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886110u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886118u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888612Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886134u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888613Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886144u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886158u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886160u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886168u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888616Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886178u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886180u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886188u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886190u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088861ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088861C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088861D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088861DCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088861E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088861F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088861F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886200u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886208u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886210u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886218u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886220u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886228u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886230u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888623Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886244u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886258u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886260u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886270u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888627Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886284u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888628Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886290u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888629Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088862A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088862B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088862B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088862C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088862C8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088862DCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088862E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088862F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886300u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886314u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888631Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886328u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886330u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886340u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886354u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886368u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886380u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886398u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088863B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088863B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088863CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088863E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886424u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888643Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886450u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886458u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886468u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886478u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886488u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886490u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886498u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088864ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088864C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088864CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088864E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088864ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088864F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088864FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886510u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886518u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886524u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888652Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886544u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888655Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886574u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888657Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886590u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088865B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088865C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088865C8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088865D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088865D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088865E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088865F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886600u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886608u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888661Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886624u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888662Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886638u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886640u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886654u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888665Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886664u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886678u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886680u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886694u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088866B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088866C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088866D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088866D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088866E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888670Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886718u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886720u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886734u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888673Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886744u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886754u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888675Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886770u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886794u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888679Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088867A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088867ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088867B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088867BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088867C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088867D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088867E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088867E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088867F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088867F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886800u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886808u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886810u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888681Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886824u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886834u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888683Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886844u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888684Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886854u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888686Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886874u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886880u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088868A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088868B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088868BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088868C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088868CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088868D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088868DCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088868E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088868ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088868F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088868FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886908u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886918u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886920u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886928u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886930u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886938u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886940u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886948u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886950u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886958u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886964u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886988u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886990u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088869A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088869A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088869B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088869C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088869C8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088869CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886A24u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886A34u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886A44u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886A58u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886A60u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886A68u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886A7Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886A8Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886A94u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886A9Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886AFCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B04u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B0Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B18u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B20u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B2Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B3Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B48u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B58u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B60u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B6Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B74u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B7Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B84u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B90u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886B9Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886BA8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886BB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886BB8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886BC0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886BC4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886BCCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886BD4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886BDCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886BE4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886BECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886BFCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C04u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C14u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C1Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C24u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C2Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C34u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C3Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C44u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C4Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C58u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C78u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C80u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C88u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C90u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C98u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886CA0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886CA8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886CB4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886CC4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886CCCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886CD4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886CDCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886CE4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886CECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886CF4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886D00u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886D20u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886D28u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886D38u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886D40u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886D48u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886DA8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886DB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886DBCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886DCCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886DD8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886DE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886DE8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886DF0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886DF8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E04u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E10u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E18u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E20u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E28u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E30u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E90u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E98u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886EA0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886EACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886EB4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886EC0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886ED0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886EDCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886EE4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886EECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886EF4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886EFCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F08u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F14u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F1Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F24u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F2Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F34u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F40u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F48u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F58u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F60u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F68u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F70u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F78u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F80u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F8Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886FACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886FB4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886FBCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886FC4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886FCCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886FD4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886FDCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886FE8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886FF8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887000u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887008u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887010u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887018u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887020u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887028u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887034u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887054u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887060u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888706Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887078u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088870D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088870E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088870F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887100u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887104u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888710Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887114u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887120u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887130u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888713Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887150u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887154u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888715Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887164u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887174u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887180u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887184u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888718Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887194u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088871A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088871B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088871B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088871CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088871D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088871D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088871D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088871E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088871E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088871F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088871F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887258u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887260u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887268u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887274u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888727Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887288u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887298u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872DCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887308u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887310u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887320u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887328u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887330u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887338u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887340u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887348u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887354u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888736Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887374u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888737Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887384u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887390u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088873A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088873A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088873B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088873B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088873C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088873DCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887444u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887450u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874DCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887504u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888750Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887524u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888752Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887534u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887544u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888754Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887554u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888755Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887574u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887580u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887588u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887594u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887598u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888759Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887604u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888760Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887618u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887620u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887630u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887638u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887640u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888764Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887668u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887670u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887678u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887680u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888768Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888769Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887740u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888774Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888780Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888781Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887828u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888783Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887840u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887848u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887850u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887868u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887874u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887878u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887880u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887888u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888789Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088878ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088878B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088878C8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088878CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088878D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088878D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088878DCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088878E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088878ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088878F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887900u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887910u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887918u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887920u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888792Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887948u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887950u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887958u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887960u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888796Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888797Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887984u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888798Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887994u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088879A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088879B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887A1Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887A28u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887A90u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887A9Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887AB4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887AC0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887AC8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887AD0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887AD4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887ADCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887AE4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887AFCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B04u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B0Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B1Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B24u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B2Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B34u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B4Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B58u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B60u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B6Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B70u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B74u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B7Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B84u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B9Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BA4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BBCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BC4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BC8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BCCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BD4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BDCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BE4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BF0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BF8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C08u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C10u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C18u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C24u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C40u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C48u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C50u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C58u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C64u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C74u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C7Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C84u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C8Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C98u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887CB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887D18u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887D24u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887D88u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887D94u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887DACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887DB8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887DBCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887DC4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887DCCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887DE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887DF0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887DFCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E10u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E14u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E1Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E24u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E3Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E48u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E4Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E54u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E5Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E70u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E80u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E88u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E9Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887EA0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887EA4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887EA8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887EB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887EB8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887EC0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887ECCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887ED4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887EE4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887EECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887EF4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F00u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F3Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F40u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F50u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F54u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F5Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F64u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F6Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F74u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F7Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F84u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F8Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F94u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FA0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FB8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FC0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FC8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FD0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FD8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FE8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FF4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FFCu, &recomp_unit_0032, "recomp_unit_0032");
}
} // namespace psprecomp
